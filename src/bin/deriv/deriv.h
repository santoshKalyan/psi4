/*
 * deriv.h
 *
 *  Created on: Feb 24, 2009
 *      Author: jturney
 */

#ifndef DERIV_H_
#define DERIV_H_

#include <vector>
#include <libmints/mints.h>

namespace psi { namespace deriv {

class Deriv
{
    const boost::shared_ptr<BasisSet>& basis_;
    int natom_;
    const boost::shared_ptr<MatrixFactory>& factory_;

    CdSalcList cdsalcs_;

    // Reference type
    reftype ref_;

#if SO
    std::vector<SharedMatrix> dH_;
    std::vector<SharedMatrix> dS_;
#else
    // AO version of the code.
    std::vector<SharedSimpleMatrix> dH_;
    std::vector<SharedSimpleMatrix> dS_;
#endif

    // Results go here.
    SharedMatrix QdH_;
    SharedMatrix WdS_;
    SharedMatrix tb_;

public:
    Deriv(reftype ref, const boost::shared_ptr<MatrixFactory>& factory, const boost::shared_ptr<BasisSet>& basis);

#if SO
    void compute(const SharedMatrix& Q, const SharedMatrix& G, const SharedMatrix& W);
#else
    // AO version of the code
    void compute(const SharedSimpleMatrix& Q, const SharedSimpleMatrix& G, const SharedSimpleMatrix& W);
#endif

    const SharedMatrix& one_electron() {
        return QdH_;
    }

    const SharedMatrix& overlap() {
        return WdS_;
    }

    const SharedMatrix& two_body() {
        return tb_;
    }
};

}}

#endif /* DERIV_H_ */
