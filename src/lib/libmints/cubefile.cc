/*
 *@BEGIN LICENSE
 *
 * PSI4: an ab initio quantum chemistry software package
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 *@END LICENSE
 */

#include "psi4-dec.h"
#include "libmints/wavefunction.h"
#include "libmints/molecule.h"
#include "libmints/vector3.h"
#include "libmints/matrix.h"
#include "libmints/petitelist.h"
#include "libmints/basisset.h"
#include <libqt/qt.h>
#include <cstdio>
#include "cubefile.h"

namespace psi{

CubeFile::CubeFile()
{
    wfn_ = Process::environment.wavefunction();
    nptsx_ = nptsy_ = nptsz_ = 50;
    buffer_region_ = 5.0;
    filename_ = "psi4.cube";
    init_dimensions();

    // Construct the AO->SO transformation, including cart->pure
    boost::shared_ptr<BasisSet> basisset = wfn_->basisset();
    PetiteList petite(basisset, wfn_->integral(), true);
    SharedMatrix aotoso = petite.aotoso();

    // Build the total SO basis density
    SharedMatrix Dtot(wfn_->Da()->clone());
    Dtot->add(wfn_->Db());

    // Transform the density to the AO basis
    nao_ = basisset->nao();
    Dao_ = SharedMatrix(new Matrix("D (AO basis)", nao_, nao_));
    Dao_->back_transform(Dtot, aotoso);
}


void
CubeFile::process_density()
{
    boost::shared_ptr<Molecule> mol = wfn_->molecule();
    boost::shared_ptr<BasisSet> basisset = wfn_->basisset();
    int natoms = mol->natom();
    boost::shared_ptr<OutFile> printer(new OutFile(filename_,TRUNCATE));

    // Two header lines
    printer->Printf( "Generated by Psi4. Bounding box: X %.4f to %.4f, Y%.4f to %.4f, Z %.4f to %.4f\n",
                        minx_, maxx_, miny_, maxy_, minz_, maxz_);
    printer->Printf( "Density from the %s wavefunction.\n", wfn_->name().c_str());
    // Natoms, origin
    printer->Printf( "%5d%12.6f%12.6f%12.6f\n", natoms, minx_, miny_, minz_);
    // Npts(x,y,z), (x,y,z) axis vector.  Npts sign is +ve, so units are bohr.
    printer->Printf( "%5d%12.6f%12.6f%12.6f\n", nptsx_, incx_, 0.0, 0.0);
    printer->Printf( "%5d%12.6f%12.6f%12.6f\n", nptsy_, 0.0, incy_, 0.0);
    printer->Printf( "%5d%12.6f%12.6f%12.6f\n", nptsz_, 0.0, 0.0, incz_);
    // Atomic number (charge?) x y z
    for(int atom = 0; atom < natoms; ++atom){
        Vector3 xyz = mol->xyz(atom);
        printer->Printf( "%5d%12.6f%12.6f%12.6f%12.6f\n",
                          mol->true_atomic_number(atom), mol->charge(atom), xyz[0], xyz[1], xyz[2]);
    }
    double *phi = new double[nao_];
    double *D_phi = new double[nao_];
    double **pD = Dao_->pointer();
    for(int xvox = 0; xvox < nptsx_; ++xvox){
        double x = minx_ + xvox*incx_;
        for(int yvox = 0; yvox < nptsy_; ++yvox){
            double y = miny_ + yvox*incy_;
            int count = 0;
    //        printer->Printf( "%f %f\n", x, y);
            for(int zvox = 0; zvox < nptsz_; ++zvox){
                double z = minz_ + zvox*incz_;
                basisset->compute_phi(phi, x, y, z);
                C_DGEMV('n', nao_, nao_, 1.0, pD[0], nao_, phi, 1, 0.0, D_phi, 1);
                double val = C_DDOT(nao_, phi, 1, D_phi, 1);
                printer->Printf( "%13.5E", val);
                if((count++ % 6) == 5 && zvox!=nptsz_-1)
                    printer->Printf( "\n");
            }
            printer->Printf( "\n");
        }
    }
    delete [] phi;
    delete [] D_phi;

}


void
CubeFile::init_dimensions()
{
    boost::shared_ptr<Molecule> mol = wfn_->molecule();
    minx_ = 0.0;
    miny_ = 0.0;
    minz_ = 0.0;
    maxx_ = 0.0;
    maxy_ = 0.0;
    maxz_ = 0.0;
    int natoms = mol->natom();
    for(int atom = 0; atom < natoms; ++atom){
        Vector3 xyz = mol->xyz(atom);
        double x = xyz[0];
        double y = xyz[1];
        double z = xyz[2];
        minx_ = x < minx_ ? x : minx_;
        miny_ = y < miny_ ? y : miny_;
        minz_ = z < minz_ ? z : minz_;
        maxx_ = x > maxx_ ? x : maxx_;
        maxy_ = y > maxy_ ? y : maxy_;
        maxz_ = z > maxz_ ? z : maxz_;
    }
    // Pad the molecule
    minx_ -= buffer_region_;
    miny_ -= buffer_region_;
    minz_ -= buffer_region_;
    maxx_ += buffer_region_;
    maxy_ += buffer_region_;
    maxz_ += buffer_region_;

    incx_ = (maxx_-minx_) / (double) (nptsx_-1);
    incy_ = (maxy_-miny_) / (double) (nptsy_-1);
    incz_ = (maxz_-minz_) / (double) (nptsz_-1);
}

} // Namespace
