  /* These machine-generated functions compute a quartet of (gs|hs) integrals */

#include "libint.h"

REALTYPE *_build_g0h0_0(prim_data *Data, REALTYPE *vp, const REALTYPE *I0, const REALTYPE *I1, const REALTYPE *I2, const REALTYPE *I3, const REALTYPE *I4)
{
  REALTYPE U00, U01, U02, U10, U11, U12, U20, U21, U22;
  REALTYPE U30, U31, U32, U40, U41, U42, U50, U51, U52;
  REALTYPE lpoz = Data->poz;
  REALTYPE lpon = Data->pon;
  REALTYPE oneo2zn;
  REALTYPE twoo2zn;
  REALTYPE threeo2zn;
  REALTYPE fouro2zn;
  REALTYPE fiveo2zn;
  REALTYPE oneo2z;
  REALTYPE twoo2z;
  REALTYPE threeo2z;
  oneo2zn = 1.0*Data->oo2zn;
  twoo2zn = 2.0*Data->oo2zn;
  threeo2zn = 3.0*Data->oo2zn;
  fouro2zn = 4.0*Data->oo2zn;
  fiveo2zn = 5.0*Data->oo2zn;
  oneo2z = 1.0*Data->oo2z;
  twoo2z = 2.0*Data->oo2z;
  threeo2z = 3.0*Data->oo2z;
  U00 = Data->U[0][0];
  U01 = Data->U[0][1];
  U02 = Data->U[0][2];
  U40 = Data->U[4][0];
  U41 = Data->U[4][1];
  U42 = Data->U[4][2];


*(vp++) = U00*I0[0] + U40*I1[0]
           + (threeo2z)*(I2[0] - (lpoz)*I3[0])
           + (fiveo2zn)*I4[0];
*(vp++) = U00*I0[1] + U40*I1[1]
           + (threeo2z)*(I2[1] - (lpoz)*I3[1])
           + (fouro2zn)*I4[1];
*(vp++) = U00*I0[2] + U40*I1[2]
           + (threeo2z)*(I2[2] - (lpoz)*I3[2])
           + (fouro2zn)*I4[2];
*(vp++) = U00*I0[3] + U40*I1[3]
           + (threeo2z)*(I2[3] - (lpoz)*I3[3])
           + (threeo2zn)*I4[3];
*(vp++) = U00*I0[4] + U40*I1[4]
           + (threeo2z)*(I2[4] - (lpoz)*I3[4])
           + (threeo2zn)*I4[4];
*(vp++) = U00*I0[5] + U40*I1[5]
           + (threeo2z)*(I2[5] - (lpoz)*I3[5])
           + (threeo2zn)*I4[5];
*(vp++) = U00*I0[6] + U40*I1[6]
           + (threeo2z)*(I2[6] - (lpoz)*I3[6])
           + (twoo2zn)*I4[6];
*(vp++) = U00*I0[7] + U40*I1[7]
           + (threeo2z)*(I2[7] - (lpoz)*I3[7])
           + (twoo2zn)*I4[7];
*(vp++) = U00*I0[8] + U40*I1[8]
           + (threeo2z)*(I2[8] - (lpoz)*I3[8])
           + (twoo2zn)*I4[8];
*(vp++) = U00*I0[9] + U40*I1[9]
           + (threeo2z)*(I2[9] - (lpoz)*I3[9])
           + (twoo2zn)*I4[9];
*(vp++) = U00*I0[10] + U40*I1[10]
           + (threeo2z)*(I2[10] - (lpoz)*I3[10])
           + (oneo2zn)*I4[10];
*(vp++) = U00*I0[11] + U40*I1[11]
           + (threeo2z)*(I2[11] - (lpoz)*I3[11])
           + (oneo2zn)*I4[11];
*(vp++) = U00*I0[12] + U40*I1[12]
           + (threeo2z)*(I2[12] - (lpoz)*I3[12])
           + (oneo2zn)*I4[12];
*(vp++) = U00*I0[13] + U40*I1[13]
           + (threeo2z)*(I2[13] - (lpoz)*I3[13])
           + (oneo2zn)*I4[13];
*(vp++) = U00*I0[14] + U40*I1[14]
           + (threeo2z)*(I2[14] - (lpoz)*I3[14])
           + (oneo2zn)*I4[14];
*(vp++) = U00*I0[15] + U40*I1[15]
           + (threeo2z)*(I2[15] - (lpoz)*I3[15]);
*(vp++) = U00*I0[16] + U40*I1[16]
           + (threeo2z)*(I2[16] - (lpoz)*I3[16]);
*(vp++) = U00*I0[17] + U40*I1[17]
           + (threeo2z)*(I2[17] - (lpoz)*I3[17]);
*(vp++) = U00*I0[18] + U40*I1[18]
           + (threeo2z)*(I2[18] - (lpoz)*I3[18]);
*(vp++) = U00*I0[19] + U40*I1[19]
           + (threeo2z)*(I2[19] - (lpoz)*I3[19]);
*(vp++) = U00*I0[20] + U40*I1[20]
           + (threeo2z)*(I2[20] - (lpoz)*I3[20]);
*(vp++) = U00*I0[21] + U40*I1[21]
           + (twoo2z)*(I2[21] - (lpoz)*I3[21])
           + (fiveo2zn)*I4[15];
*(vp++) = U00*I0[22] + U40*I1[22]
           + (twoo2z)*(I2[22] - (lpoz)*I3[22])
           + (fouro2zn)*I4[16];
*(vp++) = U00*I0[23] + U40*I1[23]
           + (twoo2z)*(I2[23] - (lpoz)*I3[23])
           + (fouro2zn)*I4[17];
*(vp++) = U00*I0[24] + U40*I1[24]
           + (twoo2z)*(I2[24] - (lpoz)*I3[24])
           + (threeo2zn)*I4[18];
*(vp++) = U00*I0[25] + U40*I1[25]
           + (twoo2z)*(I2[25] - (lpoz)*I3[25])
           + (threeo2zn)*I4[19];
*(vp++) = U00*I0[26] + U40*I1[26]
           + (twoo2z)*(I2[26] - (lpoz)*I3[26])
           + (threeo2zn)*I4[20];
*(vp++) = U00*I0[27] + U40*I1[27]
           + (twoo2z)*(I2[27] - (lpoz)*I3[27])
           + (twoo2zn)*I4[21];
*(vp++) = U00*I0[28] + U40*I1[28]
           + (twoo2z)*(I2[28] - (lpoz)*I3[28])
           + (twoo2zn)*I4[22];
*(vp++) = U00*I0[29] + U40*I1[29]
           + (twoo2z)*(I2[29] - (lpoz)*I3[29])
           + (twoo2zn)*I4[23];
*(vp++) = U00*I0[30] + U40*I1[30]
           + (twoo2z)*(I2[30] - (lpoz)*I3[30])
           + (twoo2zn)*I4[24];
*(vp++) = U00*I0[31] + U40*I1[31]
           + (twoo2z)*(I2[31] - (lpoz)*I3[31])
           + (oneo2zn)*I4[25];
*(vp++) = U00*I0[32] + U40*I1[32]
           + (twoo2z)*(I2[32] - (lpoz)*I3[32])
           + (oneo2zn)*I4[26];
*(vp++) = U00*I0[33] + U40*I1[33]
           + (twoo2z)*(I2[33] - (lpoz)*I3[33])
           + (oneo2zn)*I4[27];
*(vp++) = U00*I0[34] + U40*I1[34]
           + (twoo2z)*(I2[34] - (lpoz)*I3[34])
           + (oneo2zn)*I4[28];
*(vp++) = U00*I0[35] + U40*I1[35]
           + (twoo2z)*(I2[35] - (lpoz)*I3[35])
           + (oneo2zn)*I4[29];
*(vp++) = U00*I0[36] + U40*I1[36]
           + (twoo2z)*(I2[36] - (lpoz)*I3[36]);
*(vp++) = U00*I0[37] + U40*I1[37]
           + (twoo2z)*(I2[37] - (lpoz)*I3[37]);
*(vp++) = U00*I0[38] + U40*I1[38]
           + (twoo2z)*(I2[38] - (lpoz)*I3[38]);
*(vp++) = U00*I0[39] + U40*I1[39]
           + (twoo2z)*(I2[39] - (lpoz)*I3[39]);
*(vp++) = U00*I0[40] + U40*I1[40]
           + (twoo2z)*(I2[40] - (lpoz)*I3[40]);
*(vp++) = U00*I0[41] + U40*I1[41]
           + (twoo2z)*(I2[41] - (lpoz)*I3[41]);
*(vp++) = U00*I0[42] + U40*I1[42]
           + (twoo2z)*(I2[42] - (lpoz)*I3[42])
           + (fiveo2zn)*I4[30];
*(vp++) = U00*I0[43] + U40*I1[43]
           + (twoo2z)*(I2[43] - (lpoz)*I3[43])
           + (fouro2zn)*I4[31];
*(vp++) = U00*I0[44] + U40*I1[44]
           + (twoo2z)*(I2[44] - (lpoz)*I3[44])
           + (fouro2zn)*I4[32];
*(vp++) = U00*I0[45] + U40*I1[45]
           + (twoo2z)*(I2[45] - (lpoz)*I3[45])
           + (threeo2zn)*I4[33];
*(vp++) = U00*I0[46] + U40*I1[46]
           + (twoo2z)*(I2[46] - (lpoz)*I3[46])
           + (threeo2zn)*I4[34];
*(vp++) = U00*I0[47] + U40*I1[47]
           + (twoo2z)*(I2[47] - (lpoz)*I3[47])
           + (threeo2zn)*I4[35];
*(vp++) = U00*I0[48] + U40*I1[48]
           + (twoo2z)*(I2[48] - (lpoz)*I3[48])
           + (twoo2zn)*I4[36];
*(vp++) = U00*I0[49] + U40*I1[49]
           + (twoo2z)*(I2[49] - (lpoz)*I3[49])
           + (twoo2zn)*I4[37];
*(vp++) = U00*I0[50] + U40*I1[50]
           + (twoo2z)*(I2[50] - (lpoz)*I3[50])
           + (twoo2zn)*I4[38];
*(vp++) = U00*I0[51] + U40*I1[51]
           + (twoo2z)*(I2[51] - (lpoz)*I3[51])
           + (twoo2zn)*I4[39];
*(vp++) = U00*I0[52] + U40*I1[52]
           + (twoo2z)*(I2[52] - (lpoz)*I3[52])
           + (oneo2zn)*I4[40];
*(vp++) = U00*I0[53] + U40*I1[53]
           + (twoo2z)*(I2[53] - (lpoz)*I3[53])
           + (oneo2zn)*I4[41];
*(vp++) = U00*I0[54] + U40*I1[54]
           + (twoo2z)*(I2[54] - (lpoz)*I3[54])
           + (oneo2zn)*I4[42];
*(vp++) = U00*I0[55] + U40*I1[55]
           + (twoo2z)*(I2[55] - (lpoz)*I3[55])
           + (oneo2zn)*I4[43];
*(vp++) = U00*I0[56] + U40*I1[56]
           + (twoo2z)*(I2[56] - (lpoz)*I3[56])
           + (oneo2zn)*I4[44];
*(vp++) = U00*I0[57] + U40*I1[57]
           + (twoo2z)*(I2[57] - (lpoz)*I3[57]);
*(vp++) = U00*I0[58] + U40*I1[58]
           + (twoo2z)*(I2[58] - (lpoz)*I3[58]);
*(vp++) = U00*I0[59] + U40*I1[59]
           + (twoo2z)*(I2[59] - (lpoz)*I3[59]);
*(vp++) = U00*I0[60] + U40*I1[60]
           + (twoo2z)*(I2[60] - (lpoz)*I3[60]);
*(vp++) = U00*I0[61] + U40*I1[61]
           + (twoo2z)*(I2[61] - (lpoz)*I3[61]);
*(vp++) = U00*I0[62] + U40*I1[62]
           + (twoo2z)*(I2[62] - (lpoz)*I3[62]);
*(vp++) = U00*I0[63] + U40*I1[63]
           + (oneo2z)*(I2[63] - (lpoz)*I3[63])
           + (fiveo2zn)*I4[45];
*(vp++) = U00*I0[64] + U40*I1[64]
           + (oneo2z)*(I2[64] - (lpoz)*I3[64])
           + (fouro2zn)*I4[46];
*(vp++) = U00*I0[65] + U40*I1[65]
           + (oneo2z)*(I2[65] - (lpoz)*I3[65])
           + (fouro2zn)*I4[47];
*(vp++) = U00*I0[66] + U40*I1[66]
           + (oneo2z)*(I2[66] - (lpoz)*I3[66])
           + (threeo2zn)*I4[48];
*(vp++) = U00*I0[67] + U40*I1[67]
           + (oneo2z)*(I2[67] - (lpoz)*I3[67])
           + (threeo2zn)*I4[49];
*(vp++) = U00*I0[68] + U40*I1[68]
           + (oneo2z)*(I2[68] - (lpoz)*I3[68])
           + (threeo2zn)*I4[50];
*(vp++) = U00*I0[69] + U40*I1[69]
           + (oneo2z)*(I2[69] - (lpoz)*I3[69])
           + (twoo2zn)*I4[51];
*(vp++) = U00*I0[70] + U40*I1[70]
           + (oneo2z)*(I2[70] - (lpoz)*I3[70])
           + (twoo2zn)*I4[52];
*(vp++) = U00*I0[71] + U40*I1[71]
           + (oneo2z)*(I2[71] - (lpoz)*I3[71])
           + (twoo2zn)*I4[53];
*(vp++) = U00*I0[72] + U40*I1[72]
           + (oneo2z)*(I2[72] - (lpoz)*I3[72])
           + (twoo2zn)*I4[54];
*(vp++) = U00*I0[73] + U40*I1[73]
           + (oneo2z)*(I2[73] - (lpoz)*I3[73])
           + (oneo2zn)*I4[55];
*(vp++) = U00*I0[74] + U40*I1[74]
           + (oneo2z)*(I2[74] - (lpoz)*I3[74])
           + (oneo2zn)*I4[56];
*(vp++) = U00*I0[75] + U40*I1[75]
           + (oneo2z)*(I2[75] - (lpoz)*I3[75])
           + (oneo2zn)*I4[57];
*(vp++) = U00*I0[76] + U40*I1[76]
           + (oneo2z)*(I2[76] - (lpoz)*I3[76])
           + (oneo2zn)*I4[58];
*(vp++) = U00*I0[77] + U40*I1[77]
           + (oneo2z)*(I2[77] - (lpoz)*I3[77])
           + (oneo2zn)*I4[59];
*(vp++) = U00*I0[78] + U40*I1[78]
           + (oneo2z)*(I2[78] - (lpoz)*I3[78]);
*(vp++) = U00*I0[79] + U40*I1[79]
           + (oneo2z)*(I2[79] - (lpoz)*I3[79]);
*(vp++) = U00*I0[80] + U40*I1[80]
           + (oneo2z)*(I2[80] - (lpoz)*I3[80]);
*(vp++) = U00*I0[81] + U40*I1[81]
           + (oneo2z)*(I2[81] - (lpoz)*I3[81]);
*(vp++) = U00*I0[82] + U40*I1[82]
           + (oneo2z)*(I2[82] - (lpoz)*I3[82]);
*(vp++) = U00*I0[83] + U40*I1[83]
           + (oneo2z)*(I2[83] - (lpoz)*I3[83]);
*(vp++) = U00*I0[84] + U40*I1[84]
           + (oneo2z)*(I2[84] - (lpoz)*I3[84])
           + (fiveo2zn)*I4[60];
*(vp++) = U00*I0[85] + U40*I1[85]
           + (oneo2z)*(I2[85] - (lpoz)*I3[85])
           + (fouro2zn)*I4[61];
*(vp++) = U00*I0[86] + U40*I1[86]
           + (oneo2z)*(I2[86] - (lpoz)*I3[86])
           + (fouro2zn)*I4[62];
*(vp++) = U00*I0[87] + U40*I1[87]
           + (oneo2z)*(I2[87] - (lpoz)*I3[87])
           + (threeo2zn)*I4[63];
*(vp++) = U00*I0[88] + U40*I1[88]
           + (oneo2z)*(I2[88] - (lpoz)*I3[88])
           + (threeo2zn)*I4[64];
*(vp++) = U00*I0[89] + U40*I1[89]
           + (oneo2z)*(I2[89] - (lpoz)*I3[89])
           + (threeo2zn)*I4[65];
*(vp++) = U00*I0[90] + U40*I1[90]
           + (oneo2z)*(I2[90] - (lpoz)*I3[90])
           + (twoo2zn)*I4[66];
*(vp++) = U00*I0[91] + U40*I1[91]
           + (oneo2z)*(I2[91] - (lpoz)*I3[91])
           + (twoo2zn)*I4[67];
*(vp++) = U00*I0[92] + U40*I1[92]
           + (oneo2z)*(I2[92] - (lpoz)*I3[92])
           + (twoo2zn)*I4[68];
*(vp++) = U00*I0[93] + U40*I1[93]
           + (oneo2z)*(I2[93] - (lpoz)*I3[93])
           + (twoo2zn)*I4[69];
*(vp++) = U00*I0[94] + U40*I1[94]
           + (oneo2z)*(I2[94] - (lpoz)*I3[94])
           + (oneo2zn)*I4[70];
*(vp++) = U00*I0[95] + U40*I1[95]
           + (oneo2z)*(I2[95] - (lpoz)*I3[95])
           + (oneo2zn)*I4[71];
*(vp++) = U00*I0[96] + U40*I1[96]
           + (oneo2z)*(I2[96] - (lpoz)*I3[96])
           + (oneo2zn)*I4[72];
*(vp++) = U00*I0[97] + U40*I1[97]
           + (oneo2z)*(I2[97] - (lpoz)*I3[97])
           + (oneo2zn)*I4[73];
*(vp++) = U00*I0[98] + U40*I1[98]
           + (oneo2z)*(I2[98] - (lpoz)*I3[98])
           + (oneo2zn)*I4[74];
*(vp++) = U00*I0[99] + U40*I1[99]
           + (oneo2z)*(I2[99] - (lpoz)*I3[99]);
*(vp++) = U00*I0[100] + U40*I1[100]
           + (oneo2z)*(I2[100] - (lpoz)*I3[100]);
*(vp++) = U00*I0[101] + U40*I1[101]
           + (oneo2z)*(I2[101] - (lpoz)*I3[101]);
*(vp++) = U00*I0[102] + U40*I1[102]
           + (oneo2z)*(I2[102] - (lpoz)*I3[102]);
*(vp++) = U00*I0[103] + U40*I1[103]
           + (oneo2z)*(I2[103] - (lpoz)*I3[103]);
*(vp++) = U00*I0[104] + U40*I1[104]
           + (oneo2z)*(I2[104] - (lpoz)*I3[104]);
*(vp++) = U00*I0[105] + U40*I1[105]
           + (oneo2z)*(I2[105] - (lpoz)*I3[105])
           + (fiveo2zn)*I4[75];
*(vp++) = U00*I0[106] + U40*I1[106]
           + (oneo2z)*(I2[106] - (lpoz)*I3[106])
           + (fouro2zn)*I4[76];
*(vp++) = U00*I0[107] + U40*I1[107]
           + (oneo2z)*(I2[107] - (lpoz)*I3[107])
           + (fouro2zn)*I4[77];
*(vp++) = U00*I0[108] + U40*I1[108]
           + (oneo2z)*(I2[108] - (lpoz)*I3[108])
           + (threeo2zn)*I4[78];
*(vp++) = U00*I0[109] + U40*I1[109]
           + (oneo2z)*(I2[109] - (lpoz)*I3[109])
           + (threeo2zn)*I4[79];
*(vp++) = U00*I0[110] + U40*I1[110]
           + (oneo2z)*(I2[110] - (lpoz)*I3[110])
           + (threeo2zn)*I4[80];
*(vp++) = U00*I0[111] + U40*I1[111]
           + (oneo2z)*(I2[111] - (lpoz)*I3[111])
           + (twoo2zn)*I4[81];
*(vp++) = U00*I0[112] + U40*I1[112]
           + (oneo2z)*(I2[112] - (lpoz)*I3[112])
           + (twoo2zn)*I4[82];
*(vp++) = U00*I0[113] + U40*I1[113]
           + (oneo2z)*(I2[113] - (lpoz)*I3[113])
           + (twoo2zn)*I4[83];
*(vp++) = U00*I0[114] + U40*I1[114]
           + (oneo2z)*(I2[114] - (lpoz)*I3[114])
           + (twoo2zn)*I4[84];
*(vp++) = U00*I0[115] + U40*I1[115]
           + (oneo2z)*(I2[115] - (lpoz)*I3[115])
           + (oneo2zn)*I4[85];
*(vp++) = U00*I0[116] + U40*I1[116]
           + (oneo2z)*(I2[116] - (lpoz)*I3[116])
           + (oneo2zn)*I4[86];
*(vp++) = U00*I0[117] + U40*I1[117]
           + (oneo2z)*(I2[117] - (lpoz)*I3[117])
           + (oneo2zn)*I4[87];
*(vp++) = U00*I0[118] + U40*I1[118]
           + (oneo2z)*(I2[118] - (lpoz)*I3[118])
           + (oneo2zn)*I4[88];
*(vp++) = U00*I0[119] + U40*I1[119]
           + (oneo2z)*(I2[119] - (lpoz)*I3[119])
           + (oneo2zn)*I4[89];
*(vp++) = U00*I0[120] + U40*I1[120]
           + (oneo2z)*(I2[120] - (lpoz)*I3[120]);
*(vp++) = U00*I0[121] + U40*I1[121]
           + (oneo2z)*(I2[121] - (lpoz)*I3[121]);
*(vp++) = U00*I0[122] + U40*I1[122]
           + (oneo2z)*(I2[122] - (lpoz)*I3[122]);
*(vp++) = U00*I0[123] + U40*I1[123]
           + (oneo2z)*(I2[123] - (lpoz)*I3[123]);
*(vp++) = U00*I0[124] + U40*I1[124]
           + (oneo2z)*(I2[124] - (lpoz)*I3[124]);
*(vp++) = U00*I0[125] + U40*I1[125]
           + (oneo2z)*(I2[125] - (lpoz)*I3[125]);
*(vp++) = U00*I0[126] + U40*I1[126]
           + (fiveo2zn)*I4[90];
*(vp++) = U00*I0[127] + U40*I1[127]
           + (fouro2zn)*I4[91];
*(vp++) = U00*I0[128] + U40*I1[128]
           + (fouro2zn)*I4[92];
*(vp++) = U00*I0[129] + U40*I1[129]
           + (threeo2zn)*I4[93];
*(vp++) = U00*I0[130] + U40*I1[130]
           + (threeo2zn)*I4[94];
*(vp++) = U00*I0[131] + U40*I1[131]
           + (threeo2zn)*I4[95];
*(vp++) = U00*I0[132] + U40*I1[132]
           + (twoo2zn)*I4[96];
*(vp++) = U00*I0[133] + U40*I1[133]
           + (twoo2zn)*I4[97];
*(vp++) = U00*I0[134] + U40*I1[134]
           + (twoo2zn)*I4[98];
*(vp++) = U00*I0[135] + U40*I1[135]
           + (twoo2zn)*I4[99];
*(vp++) = U00*I0[136] + U40*I1[136]
           + (oneo2zn)*I4[100];
*(vp++) = U00*I0[137] + U40*I1[137]
           + (oneo2zn)*I4[101];
*(vp++) = U00*I0[138] + U40*I1[138]
           + (oneo2zn)*I4[102];
*(vp++) = U00*I0[139] + U40*I1[139]
           + (oneo2zn)*I4[103];
*(vp++) = U00*I0[140] + U40*I1[140]
           + (oneo2zn)*I4[104];
*(vp++) = U00*I0[141] + U40*I1[141];
*(vp++) = U00*I0[142] + U40*I1[142];
*(vp++) = U00*I0[143] + U40*I1[143];
*(vp++) = U00*I0[144] + U40*I1[144];
*(vp++) = U00*I0[145] + U40*I1[145];
*(vp++) = U00*I0[146] + U40*I1[146];
*(vp++) = U00*I0[147] + U40*I1[147]
           + (fiveo2zn)*I4[105];
*(vp++) = U00*I0[148] + U40*I1[148]
           + (fouro2zn)*I4[106];
*(vp++) = U00*I0[149] + U40*I1[149]
           + (fouro2zn)*I4[107];
*(vp++) = U00*I0[150] + U40*I1[150]
           + (threeo2zn)*I4[108];
*(vp++) = U00*I0[151] + U40*I1[151]
           + (threeo2zn)*I4[109];
*(vp++) = U00*I0[152] + U40*I1[152]
           + (threeo2zn)*I4[110];
*(vp++) = U00*I0[153] + U40*I1[153]
           + (twoo2zn)*I4[111];
*(vp++) = U00*I0[154] + U40*I1[154]
           + (twoo2zn)*I4[112];
*(vp++) = U00*I0[155] + U40*I1[155]
           + (twoo2zn)*I4[113];
*(vp++) = U00*I0[156] + U40*I1[156]
           + (twoo2zn)*I4[114];
*(vp++) = U00*I0[157] + U40*I1[157]
           + (oneo2zn)*I4[115];
return vp;
}

REALTYPE *_build_g0h0_1(prim_data *Data, REALTYPE *vp, const REALTYPE *I0, const REALTYPE *I1, const REALTYPE *I2, const REALTYPE *I3, const REALTYPE *I4)
{
  REALTYPE U00, U01, U02, U10, U11, U12, U20, U21, U22;
  REALTYPE U30, U31, U32, U40, U41, U42, U50, U51, U52;
  REALTYPE lpoz = Data->poz;
  REALTYPE lpon = Data->pon;
  REALTYPE oneo2zn;
  REALTYPE twoo2zn;
  REALTYPE threeo2zn;
  REALTYPE fouro2zn;
  REALTYPE fiveo2zn;
  REALTYPE oneo2z;
  REALTYPE twoo2z;
  REALTYPE threeo2z;
  oneo2zn = 1.0*Data->oo2zn;
  twoo2zn = 2.0*Data->oo2zn;
  threeo2zn = 3.0*Data->oo2zn;
  fouro2zn = 4.0*Data->oo2zn;
  fiveo2zn = 5.0*Data->oo2zn;
  oneo2z = 1.0*Data->oo2z;
  twoo2z = 2.0*Data->oo2z;
  threeo2z = 3.0*Data->oo2z;
  U00 = Data->U[0][0];
  U01 = Data->U[0][1];
  U02 = Data->U[0][2];
  U40 = Data->U[4][0];
  U41 = Data->U[4][1];
  U42 = Data->U[4][2];


*(vp++) = U00*I0[158] + U40*I1[158]
           + (oneo2zn)*I4[116];
*(vp++) = U00*I0[159] + U40*I1[159]
           + (oneo2zn)*I4[117];
*(vp++) = U00*I0[160] + U40*I1[160]
           + (oneo2zn)*I4[118];
*(vp++) = U00*I0[161] + U40*I1[161]
           + (oneo2zn)*I4[119];
*(vp++) = U00*I0[162] + U40*I1[162];
*(vp++) = U00*I0[163] + U40*I1[163];
*(vp++) = U00*I0[164] + U40*I1[164];
*(vp++) = U00*I0[165] + U40*I1[165];
*(vp++) = U00*I0[166] + U40*I1[166];
*(vp++) = U00*I0[167] + U40*I1[167];
*(vp++) = U00*I0[168] + U40*I1[168]
           + (fiveo2zn)*I4[120];
*(vp++) = U00*I0[169] + U40*I1[169]
           + (fouro2zn)*I4[121];
*(vp++) = U00*I0[170] + U40*I1[170]
           + (fouro2zn)*I4[122];
*(vp++) = U00*I0[171] + U40*I1[171]
           + (threeo2zn)*I4[123];
*(vp++) = U00*I0[172] + U40*I1[172]
           + (threeo2zn)*I4[124];
*(vp++) = U00*I0[173] + U40*I1[173]
           + (threeo2zn)*I4[125];
*(vp++) = U00*I0[174] + U40*I1[174]
           + (twoo2zn)*I4[126];
*(vp++) = U00*I0[175] + U40*I1[175]
           + (twoo2zn)*I4[127];
*(vp++) = U00*I0[176] + U40*I1[176]
           + (twoo2zn)*I4[128];
*(vp++) = U00*I0[177] + U40*I1[177]
           + (twoo2zn)*I4[129];
*(vp++) = U00*I0[178] + U40*I1[178]
           + (oneo2zn)*I4[130];
*(vp++) = U00*I0[179] + U40*I1[179]
           + (oneo2zn)*I4[131];
*(vp++) = U00*I0[180] + U40*I1[180]
           + (oneo2zn)*I4[132];
*(vp++) = U00*I0[181] + U40*I1[181]
           + (oneo2zn)*I4[133];
*(vp++) = U00*I0[182] + U40*I1[182]
           + (oneo2zn)*I4[134];
*(vp++) = U00*I0[183] + U40*I1[183];
*(vp++) = U00*I0[184] + U40*I1[184];
*(vp++) = U00*I0[185] + U40*I1[185];
*(vp++) = U00*I0[186] + U40*I1[186];
*(vp++) = U00*I0[187] + U40*I1[187];
*(vp++) = U00*I0[188] + U40*I1[188];
*(vp++) = U00*I0[189] + U40*I1[189]
           + (fiveo2zn)*I4[135];
*(vp++) = U00*I0[190] + U40*I1[190]
           + (fouro2zn)*I4[136];
*(vp++) = U00*I0[191] + U40*I1[191]
           + (fouro2zn)*I4[137];
*(vp++) = U00*I0[192] + U40*I1[192]
           + (threeo2zn)*I4[138];
*(vp++) = U00*I0[193] + U40*I1[193]
           + (threeo2zn)*I4[139];
*(vp++) = U00*I0[194] + U40*I1[194]
           + (threeo2zn)*I4[140];
*(vp++) = U00*I0[195] + U40*I1[195]
           + (twoo2zn)*I4[141];
*(vp++) = U00*I0[196] + U40*I1[196]
           + (twoo2zn)*I4[142];
*(vp++) = U00*I0[197] + U40*I1[197]
           + (twoo2zn)*I4[143];
*(vp++) = U00*I0[198] + U40*I1[198]
           + (twoo2zn)*I4[144];
*(vp++) = U00*I0[199] + U40*I1[199]
           + (oneo2zn)*I4[145];
*(vp++) = U00*I0[200] + U40*I1[200]
           + (oneo2zn)*I4[146];
*(vp++) = U00*I0[201] + U40*I1[201]
           + (oneo2zn)*I4[147];
*(vp++) = U00*I0[202] + U40*I1[202]
           + (oneo2zn)*I4[148];
*(vp++) = U00*I0[203] + U40*I1[203]
           + (oneo2zn)*I4[149];
*(vp++) = U00*I0[204] + U40*I1[204];
*(vp++) = U00*I0[205] + U40*I1[205];
*(vp++) = U00*I0[206] + U40*I1[206];
*(vp++) = U00*I0[207] + U40*I1[207];
*(vp++) = U00*I0[208] + U40*I1[208];
*(vp++) = U00*I0[209] + U40*I1[209];
*(vp++) = U01*I0[126] + U41*I1[126]
           + (threeo2z)*(I2[63] - (lpoz)*I3[63]);
*(vp++) = U01*I0[127] + U41*I1[127]
           + (threeo2z)*(I2[64] - (lpoz)*I3[64])
           + (oneo2zn)*I4[90];
*(vp++) = U01*I0[128] + U41*I1[128]
           + (threeo2z)*(I2[65] - (lpoz)*I3[65]);
*(vp++) = U01*I0[129] + U41*I1[129]
           + (threeo2z)*(I2[66] - (lpoz)*I3[66])
           + (twoo2zn)*I4[91];
*(vp++) = U01*I0[130] + U41*I1[130]
           + (threeo2z)*(I2[67] - (lpoz)*I3[67])
           + (oneo2zn)*I4[92];
*(vp++) = U01*I0[131] + U41*I1[131]
           + (threeo2z)*(I2[68] - (lpoz)*I3[68]);
*(vp++) = U01*I0[132] + U41*I1[132]
           + (threeo2z)*(I2[69] - (lpoz)*I3[69])
           + (threeo2zn)*I4[93];
*(vp++) = U01*I0[133] + U41*I1[133]
           + (threeo2z)*(I2[70] - (lpoz)*I3[70])
           + (twoo2zn)*I4[94];
*(vp++) = U01*I0[134] + U41*I1[134]
           + (threeo2z)*(I2[71] - (lpoz)*I3[71])
           + (oneo2zn)*I4[95];
*(vp++) = U01*I0[135] + U41*I1[135]
           + (threeo2z)*(I2[72] - (lpoz)*I3[72]);
*(vp++) = U01*I0[136] + U41*I1[136]
           + (threeo2z)*(I2[73] - (lpoz)*I3[73])
           + (fouro2zn)*I4[96];
*(vp++) = U01*I0[137] + U41*I1[137]
           + (threeo2z)*(I2[74] - (lpoz)*I3[74])
           + (threeo2zn)*I4[97];
*(vp++) = U01*I0[138] + U41*I1[138]
           + (threeo2z)*(I2[75] - (lpoz)*I3[75])
           + (twoo2zn)*I4[98];
*(vp++) = U01*I0[139] + U41*I1[139]
           + (threeo2z)*(I2[76] - (lpoz)*I3[76])
           + (oneo2zn)*I4[99];
*(vp++) = U01*I0[140] + U41*I1[140]
           + (threeo2z)*(I2[77] - (lpoz)*I3[77]);
*(vp++) = U01*I0[141] + U41*I1[141]
           + (threeo2z)*(I2[78] - (lpoz)*I3[78])
           + (fiveo2zn)*I4[100];
*(vp++) = U01*I0[142] + U41*I1[142]
           + (threeo2z)*(I2[79] - (lpoz)*I3[79])
           + (fouro2zn)*I4[101];
*(vp++) = U01*I0[143] + U41*I1[143]
           + (threeo2z)*(I2[80] - (lpoz)*I3[80])
           + (threeo2zn)*I4[102];
*(vp++) = U01*I0[144] + U41*I1[144]
           + (threeo2z)*(I2[81] - (lpoz)*I3[81])
           + (twoo2zn)*I4[103];
*(vp++) = U01*I0[145] + U41*I1[145]
           + (threeo2z)*(I2[82] - (lpoz)*I3[82])
           + (oneo2zn)*I4[104];
*(vp++) = U01*I0[146] + U41*I1[146]
           + (threeo2z)*(I2[83] - (lpoz)*I3[83]);
*(vp++) = U01*I0[147] + U41*I1[147]
           + (twoo2z)*(I2[84] - (lpoz)*I3[84]);
*(vp++) = U01*I0[148] + U41*I1[148]
           + (twoo2z)*(I2[85] - (lpoz)*I3[85])
           + (oneo2zn)*I4[105];
*(vp++) = U01*I0[149] + U41*I1[149]
           + (twoo2z)*(I2[86] - (lpoz)*I3[86]);
*(vp++) = U01*I0[150] + U41*I1[150]
           + (twoo2z)*(I2[87] - (lpoz)*I3[87])
           + (twoo2zn)*I4[106];
*(vp++) = U01*I0[151] + U41*I1[151]
           + (twoo2z)*(I2[88] - (lpoz)*I3[88])
           + (oneo2zn)*I4[107];
*(vp++) = U01*I0[152] + U41*I1[152]
           + (twoo2z)*(I2[89] - (lpoz)*I3[89]);
*(vp++) = U01*I0[153] + U41*I1[153]
           + (twoo2z)*(I2[90] - (lpoz)*I3[90])
           + (threeo2zn)*I4[108];
*(vp++) = U01*I0[154] + U41*I1[154]
           + (twoo2z)*(I2[91] - (lpoz)*I3[91])
           + (twoo2zn)*I4[109];
*(vp++) = U01*I0[155] + U41*I1[155]
           + (twoo2z)*(I2[92] - (lpoz)*I3[92])
           + (oneo2zn)*I4[110];
*(vp++) = U01*I0[156] + U41*I1[156]
           + (twoo2z)*(I2[93] - (lpoz)*I3[93]);
*(vp++) = U01*I0[157] + U41*I1[157]
           + (twoo2z)*(I2[94] - (lpoz)*I3[94])
           + (fouro2zn)*I4[111];
*(vp++) = U01*I0[158] + U41*I1[158]
           + (twoo2z)*(I2[95] - (lpoz)*I3[95])
           + (threeo2zn)*I4[112];
*(vp++) = U01*I0[159] + U41*I1[159]
           + (twoo2z)*(I2[96] - (lpoz)*I3[96])
           + (twoo2zn)*I4[113];
*(vp++) = U01*I0[160] + U41*I1[160]
           + (twoo2z)*(I2[97] - (lpoz)*I3[97])
           + (oneo2zn)*I4[114];
*(vp++) = U01*I0[161] + U41*I1[161]
           + (twoo2z)*(I2[98] - (lpoz)*I3[98]);
*(vp++) = U01*I0[162] + U41*I1[162]
           + (twoo2z)*(I2[99] - (lpoz)*I3[99])
           + (fiveo2zn)*I4[115];
*(vp++) = U01*I0[163] + U41*I1[163]
           + (twoo2z)*(I2[100] - (lpoz)*I3[100])
           + (fouro2zn)*I4[116];
*(vp++) = U01*I0[164] + U41*I1[164]
           + (twoo2z)*(I2[101] - (lpoz)*I3[101])
           + (threeo2zn)*I4[117];
*(vp++) = U01*I0[165] + U41*I1[165]
           + (twoo2z)*(I2[102] - (lpoz)*I3[102])
           + (twoo2zn)*I4[118];
*(vp++) = U01*I0[166] + U41*I1[166]
           + (twoo2z)*(I2[103] - (lpoz)*I3[103])
           + (oneo2zn)*I4[119];
*(vp++) = U01*I0[167] + U41*I1[167]
           + (twoo2z)*(I2[104] - (lpoz)*I3[104]);
*(vp++) = U01*I0[168] + U41*I1[168]
           + (oneo2z)*(I2[105] - (lpoz)*I3[105]);
*(vp++) = U01*I0[169] + U41*I1[169]
           + (oneo2z)*(I2[106] - (lpoz)*I3[106])
           + (oneo2zn)*I4[120];
*(vp++) = U01*I0[170] + U41*I1[170]
           + (oneo2z)*(I2[107] - (lpoz)*I3[107]);
*(vp++) = U01*I0[171] + U41*I1[171]
           + (oneo2z)*(I2[108] - (lpoz)*I3[108])
           + (twoo2zn)*I4[121];
*(vp++) = U01*I0[172] + U41*I1[172]
           + (oneo2z)*(I2[109] - (lpoz)*I3[109])
           + (oneo2zn)*I4[122];
*(vp++) = U01*I0[173] + U41*I1[173]
           + (oneo2z)*(I2[110] - (lpoz)*I3[110]);
*(vp++) = U01*I0[174] + U41*I1[174]
           + (oneo2z)*(I2[111] - (lpoz)*I3[111])
           + (threeo2zn)*I4[123];
*(vp++) = U01*I0[175] + U41*I1[175]
           + (oneo2z)*(I2[112] - (lpoz)*I3[112])
           + (twoo2zn)*I4[124];
*(vp++) = U01*I0[176] + U41*I1[176]
           + (oneo2z)*(I2[113] - (lpoz)*I3[113])
           + (oneo2zn)*I4[125];
*(vp++) = U01*I0[177] + U41*I1[177]
           + (oneo2z)*(I2[114] - (lpoz)*I3[114]);
*(vp++) = U01*I0[178] + U41*I1[178]
           + (oneo2z)*(I2[115] - (lpoz)*I3[115])
           + (fouro2zn)*I4[126];
*(vp++) = U01*I0[179] + U41*I1[179]
           + (oneo2z)*(I2[116] - (lpoz)*I3[116])
           + (threeo2zn)*I4[127];
*(vp++) = U01*I0[180] + U41*I1[180]
           + (oneo2z)*(I2[117] - (lpoz)*I3[117])
           + (twoo2zn)*I4[128];
*(vp++) = U01*I0[181] + U41*I1[181]
           + (oneo2z)*(I2[118] - (lpoz)*I3[118])
           + (oneo2zn)*I4[129];
*(vp++) = U01*I0[182] + U41*I1[182]
           + (oneo2z)*(I2[119] - (lpoz)*I3[119]);
*(vp++) = U01*I0[183] + U41*I1[183]
           + (oneo2z)*(I2[120] - (lpoz)*I3[120])
           + (fiveo2zn)*I4[130];
*(vp++) = U01*I0[184] + U41*I1[184]
           + (oneo2z)*(I2[121] - (lpoz)*I3[121])
           + (fouro2zn)*I4[131];
*(vp++) = U01*I0[185] + U41*I1[185]
           + (oneo2z)*(I2[122] - (lpoz)*I3[122])
           + (threeo2zn)*I4[132];
*(vp++) = U01*I0[186] + U41*I1[186]
           + (oneo2z)*(I2[123] - (lpoz)*I3[123])
           + (twoo2zn)*I4[133];
*(vp++) = U01*I0[187] + U41*I1[187]
           + (oneo2z)*(I2[124] - (lpoz)*I3[124])
           + (oneo2zn)*I4[134];
*(vp++) = U01*I0[188] + U41*I1[188]
           + (oneo2z)*(I2[125] - (lpoz)*I3[125]);
*(vp++) = U01*I0[189] + U41*I1[189];
*(vp++) = U01*I0[190] + U41*I1[190]
           + (oneo2zn)*I4[135];
*(vp++) = U01*I0[191] + U41*I1[191];
*(vp++) = U01*I0[192] + U41*I1[192]
           + (twoo2zn)*I4[136];
*(vp++) = U01*I0[193] + U41*I1[193]
           + (oneo2zn)*I4[137];
*(vp++) = U01*I0[194] + U41*I1[194];
*(vp++) = U01*I0[195] + U41*I1[195]
           + (threeo2zn)*I4[138];
*(vp++) = U01*I0[196] + U41*I1[196]
           + (twoo2zn)*I4[139];
*(vp++) = U01*I0[197] + U41*I1[197]
           + (oneo2zn)*I4[140];
*(vp++) = U01*I0[198] + U41*I1[198];
*(vp++) = U01*I0[199] + U41*I1[199]
           + (fouro2zn)*I4[141];
*(vp++) = U01*I0[200] + U41*I1[200]
           + (threeo2zn)*I4[142];
*(vp++) = U01*I0[201] + U41*I1[201]
           + (twoo2zn)*I4[143];
*(vp++) = U01*I0[202] + U41*I1[202]
           + (oneo2zn)*I4[144];
*(vp++) = U01*I0[203] + U41*I1[203];
*(vp++) = U01*I0[204] + U41*I1[204]
           + (fiveo2zn)*I4[145];
*(vp++) = U01*I0[205] + U41*I1[205]
           + (fouro2zn)*I4[146];
*(vp++) = U01*I0[206] + U41*I1[206]
           + (threeo2zn)*I4[147];
*(vp++) = U01*I0[207] + U41*I1[207]
           + (twoo2zn)*I4[148];
*(vp++) = U01*I0[208] + U41*I1[208]
           + (oneo2zn)*I4[149];
*(vp++) = U01*I0[209] + U41*I1[209];
*(vp++) = U02*I0[189] + U42*I1[189]
           + (threeo2z)*(I2[105] - (lpoz)*I3[105]);
*(vp++) = U02*I0[190] + U42*I1[190]
           + (threeo2z)*(I2[106] - (lpoz)*I3[106]);
*(vp++) = U02*I0[191] + U42*I1[191]
           + (threeo2z)*(I2[107] - (lpoz)*I3[107])
           + (oneo2zn)*I4[135];
*(vp++) = U02*I0[192] + U42*I1[192]
           + (threeo2z)*(I2[108] - (lpoz)*I3[108]);
*(vp++) = U02*I0[193] + U42*I1[193]
           + (threeo2z)*(I2[109] - (lpoz)*I3[109])
           + (oneo2zn)*I4[136];
*(vp++) = U02*I0[194] + U42*I1[194]
           + (threeo2z)*(I2[110] - (lpoz)*I3[110])
           + (twoo2zn)*I4[137];
*(vp++) = U02*I0[195] + U42*I1[195]
           + (threeo2z)*(I2[111] - (lpoz)*I3[111]);
*(vp++) = U02*I0[196] + U42*I1[196]
           + (threeo2z)*(I2[112] - (lpoz)*I3[112])
           + (oneo2zn)*I4[138];
*(vp++) = U02*I0[197] + U42*I1[197]
           + (threeo2z)*(I2[113] - (lpoz)*I3[113])
           + (twoo2zn)*I4[139];
*(vp++) = U02*I0[198] + U42*I1[198]
           + (threeo2z)*(I2[114] - (lpoz)*I3[114])
           + (threeo2zn)*I4[140];
*(vp++) = U02*I0[199] + U42*I1[199]
           + (threeo2z)*(I2[115] - (lpoz)*I3[115]);
*(vp++) = U02*I0[200] + U42*I1[200]
           + (threeo2z)*(I2[116] - (lpoz)*I3[116])
           + (oneo2zn)*I4[141];
*(vp++) = U02*I0[201] + U42*I1[201]
           + (threeo2z)*(I2[117] - (lpoz)*I3[117])
           + (twoo2zn)*I4[142];
*(vp++) = U02*I0[202] + U42*I1[202]
           + (threeo2z)*(I2[118] - (lpoz)*I3[118])
           + (threeo2zn)*I4[143];
*(vp++) = U02*I0[203] + U42*I1[203]
           + (threeo2z)*(I2[119] - (lpoz)*I3[119])
           + (fouro2zn)*I4[144];
*(vp++) = U02*I0[204] + U42*I1[204]
           + (threeo2z)*(I2[120] - (lpoz)*I3[120]);
*(vp++) = U02*I0[205] + U42*I1[205]
           + (threeo2z)*(I2[121] - (lpoz)*I3[121])
           + (oneo2zn)*I4[145];
*(vp++) = U02*I0[206] + U42*I1[206]
           + (threeo2z)*(I2[122] - (lpoz)*I3[122])
           + (twoo2zn)*I4[146];
*(vp++) = U02*I0[207] + U42*I1[207]
           + (threeo2z)*(I2[123] - (lpoz)*I3[123])
           + (threeo2zn)*I4[147];
*(vp++) = U02*I0[208] + U42*I1[208]
           + (threeo2z)*(I2[124] - (lpoz)*I3[124])
           + (fouro2zn)*I4[148];
*(vp++) = U02*I0[209] + U42*I1[209]
           + (threeo2z)*(I2[125] - (lpoz)*I3[125])
           + (fiveo2zn)*I4[149];
return vp;
}
/* Total number of FLOPs = 2235 */