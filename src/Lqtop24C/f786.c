/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F786_out;
static void C786(REAL * C)
{
REAL* V=va_out;
REAL S[18];                                                                 
     
S[0]=V[28]*V[28];
S[1]=V[29]*V[29];
S[2]=V[27]*V[27];
S[3]=V[26]*V[26];
S[4]=V[2]*V[2];
S[5]=V[36]*V[36];
S[6]=V[17]*V[17];
S[7]=V[14]*V[14];
S[8]=V[9]*V[9]*V[9]*V[9];
C[59]=+S[8]*(S[7]*(V[1]*(S[4]*(8*(S[0]-S[1]-S[2]+S[3])+16*(V[29]*V[27]-
 V[28]*V[26]))+6*(S[1]-S[0]+S[2]-S[3])+12*(V[28]*V[26]-V[29]*V[27]))+S[6]*(
 S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-V[23]*V[2]))+36*
 V[23])-36*V[37]*V[21])))))));
S[9]=V[9]*V[9];
S[10]=V[37]*V[37];
C[58]=+S[9]*(V[12]*(V[36]*(V[2]*(S[9]*(S[6]*(V[30]*(S[4]*(12*(V[29]+V[28]-
 V[27]-V[26]))+9*(V[27]-V[29]-V[28]+V[26]))))+S[7]*(V[1]*(V[37]*(V[2]*(32*(
 V[2]*(V[23]*(V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-
 V[24]))))))+S[7]*(S[10]*(V[1]*(V[21]*(24*(V[24]-V[25]))))))));
C[57]=+S[8]*(V[1]*(S[4]*(8*(S[0]-S[1]-S[2]+S[3])+16*(V[29]*V[27]-V[28]*
 V[26]))+6*(S[1]-S[0]+S[2]-S[3])+12*(V[28]*V[26]-V[29]*V[27]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-V[23]*V[2]))+36*V[23])-36*
 V[37]*V[21]))))));
C[56]=+S[9]*(S[7]*(V[1]*(S[4]*(32*(S[0]-S[1]-S[2]+S[3])+64*(V[29]*V[27]-
 V[28]*V[26]))+24*(S[1]-S[0]+S[2]-S[3])+48*(V[28]*V[26]-V[29]*V[27]))+S[6]*(
 S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*
 V[23])-144*V[37]*V[21])))))));
C[55]=+V[12]*(V[36]*(V[2]*(S[9]*(S[6]*(V[30]*(S[4]*(24*(V[29]+V[28]-V[27]-
 V[26]))+18*(V[27]-V[29]-V[28]+V[26]))))+S[7]*(V[1]*(V[37]*(V[2]*(64*(V[2]*(
 V[23]*(V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-
 V[24]))))))+S[7]*(S[10]*(V[1]*(V[21]*(48*(V[24]-V[25])))))));
C[54]=+S[7]*(V[1]*(S[4]*(32*(S[0]-S[1]-S[2]+S[3])+64*(V[29]*V[27]-V[28]*
 V[26]))+24*(S[1]-S[0]+S[2]-S[3])+48*(V[28]*V[26]-V[29]*V[27]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-
 144*V[37]*V[21]))))));
C[53]=+S[9]*(V[1]*(S[4]*(32*(S[0]-S[1]-S[2]+S[3])+64*(V[29]*V[27]-V[28]*
 V[26]))+24*(S[1]-S[0]+S[2]-S[3])+48*(V[28]*V[26]-V[29]*V[27]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-
 144*V[37]*V[21]))))));
C[52]=+V[1]*(S[4]*(32*(S[0]-S[1]-S[2]+S[3])+64*(V[29]*V[27]-V[28]*V[26]))+
 24*(S[1]-S[0]+S[2]-S[3])+48*(V[28]*V[26]-V[29]*V[27]))+S[6]*(S[5]*(V[2]*(
 V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-144*
 V[37]*V[21])))));
C[51]=+S[9]*(S[7]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 48*(V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(48*(V[28]-V[29]+V[27]-
 V[26])))))))));
S[11]=V[12]*V[12];
C[50]=+S[9]*(S[7]*(V[1]*(S[4]*(32*(S[0]-S[1]-S[2]+S[3])+64*(V[29]*V[27]-
 V[28]*V[26]))+24*(S[1]-S[0]+S[2]-S[3])+48*(V[28]*V[26]-V[29]*V[27])))+
 S[11]*(S[6]*(S[5]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[20]-V[22]*
 V[2]))+72*V[22])-72*V[37]*V[20])))))));
C[49]=+S[9]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(S[4]*(48*(V[29]+V[28]-V[27]-
 V[26]))+36*(V[27]-V[29]-V[28]+V[26])))))));
C[48]=+S[9]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(48*(
 V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(48*(V[28]-V[29]+V[27]-
 V[26]))))))));
C[47]=+S[9]*(V[1]*(S[4]*(32*(S[1]-S[0]+S[2]-S[3])+64*(V[28]*V[26]-V[29]*
 V[27]))+24*(S[0]-S[1]-S[2]+S[3])+48*(V[29]*V[27]-V[28]*V[26])));
C[46]=+S[9]*(S[7]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))+
 V[21]*(V[37]*(48*(V[24]-V[25])))))))));
S[12]=V[24]*V[24];
S[13]=V[25]*V[25];
C[45]=+S[9]*(V[2]*(V[2]*(S[7]*(S[6]*(S[5]*(V[31]*(V[37]*(V[2]*(192*(V[37]*
 V[21]-V[23]*V[2]))+144*V[23])))))+S[11]*(V[1]*(16*(S[12]-S[13]))))-144*
 S[10]*S[5]*V[31]*V[21]*S[6]*S[7])+S[11]*(V[1]*(12*(S[13]-S[12]))));
C[44]=+S[9]*(S[6]*(V[2]*(V[12]*(V[31]*(V[36]*(S[4]*(48*(V[25]+V[24]))+36*(-
 V[25]-V[24])))))));
C[43]=+S[9]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+
 V[26])+V[21]*(V[24]-V[25]))))+48*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(
 V[24]-V[25])))+V[37]*(48*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24]))))))));
C[42]=+S[9]*(V[1]*(S[4]*(32*(S[1]-S[0]+S[2]-S[3])+64*(V[28]*V[26]-V[29]*
 V[27]))+24*(S[0]-S[1]-S[2]+S[3])+48*(V[29]*V[27]-V[28]*V[26]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-
 144*V[37]*V[21]))))));
C[41]=+S[9]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))+V[21]*(
 V[37]*(48*(V[24]-V[25]))))))));
C[40]=+S[9]*(S[6]*(S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-
 V[23]*V[2]))+144*V[23])-144*V[37]*V[21]))))));
C[39]=+V[12]*(V[36]*(V[2]*(S[7]*(V[1]*(V[37]*(V[2]*(64*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(48*(
 V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[6]*(V[30]*(S[4]*(24*(V[29]+V[28]-
 V[27]-V[26]))+18*(V[27]-V[29]-V[28]+V[26])))))+S[7]*(S[10]*(V[1]*(V[20]*(
 48*(V[28]-V[29]+V[27]-V[26])))))));
C[38]=+S[7]*(V[1]*(S[4]*(32*(S[0]-S[1]-S[2]+S[3])+64*(V[29]*V[27]-V[28]*
 V[26]))+24*(S[1]-S[0]+S[2]-S[3])+48*(V[28]*V[26]-V[29]*V[27])))+S[11]*(
 S[6]*(S[5]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[20]-V[22]*V[2]))+
 72*V[22])-72*V[37]*V[20]))))));
C[37]=+S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(S[4]*(48*(V[29]+V[28]-V[27]-V[26]))+
 36*(V[27]-V[29]-V[28]+V[26]))))));
C[36]=+V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-V[29]+
 V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(48*(V[29]-
 V[28]-V[27]+V[26])))+V[20]*(V[37]*(48*(V[28]-V[29]+V[27]-V[26])))))));
C[35]=+V[1]*(S[4]*(32*(S[1]-S[0]+S[2]-S[3])+64*(V[28]*V[26]-V[29]*V[27]))+
 24*(S[0]-S[1]-S[2]+S[3])+48*(V[29]*V[27]-V[28]*V[26]));
C[34]=+V[12]*(V[36]*(V[2]*(S[7]*(V[1]*(V[37]*(V[2]*(64*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))))+S[9]*(
 S[6]*(V[31]*(S[4]*(24*(V[25]+V[24]))+18*(-V[25]-V[24])))))+S[7]*(S[10]*(
 V[1]*(V[21]*(48*(V[24]-V[25])))))));
C[33]=+V[2]*(V[2]*(S[7]*(S[6]*(S[5]*(V[31]*(V[37]*(V[2]*(192*(V[37]*V[21]-
 V[23]*V[2]))+144*V[23])))))+S[11]*(V[1]*(16*(S[12]-S[13]))))-144*S[10]*
 S[5]*V[31]*V[21]*S[6]*S[7])+S[11]*(V[1]*(12*(S[13]-S[12])));
C[32]=+S[6]*(V[2]*(V[12]*(V[31]*(V[36]*(S[4]*(48*(V[25]+V[24]))+36*(-V[25]-
 V[24]))))));
C[31]=+V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-V[29]+
 V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+V[26])+
 V[21]*(V[24]-V[25]))))+48*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25])))+V[37]*(48*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24])))))));
C[30]=+V[1]*(S[4]*(32*(S[1]-S[0]+S[2]-S[3])+64*(V[28]*V[26]-V[29]*V[27]))+
 24*(S[0]-S[1]-S[2]+S[3])+48*(V[29]*V[27]-V[28]*V[26]))+S[6]*(S[5]*(V[2]*(
 V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-144*
 V[37]*V[21])))));
C[29]=+V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))+V[21]*(
 V[37]*(48*(V[24]-V[25])))))));
C[28]=+S[6]*(S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*
 V[2]))+144*V[23])-144*V[37]*V[21])))));
C[27]=+S[9]*(S[7]*(V[1]*(S[4]*(16*(S[0]-S[1]-S[2]+S[3])+32*(V[29]*V[27]-
 V[28]*V[26]))+12*(S[1]-S[0]+S[2]-S[3])+24*(V[28]*V[26]-V[29]*V[27]))+S[6]*(
 S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-V[23]*V[2]))+72*
 V[23])-72*V[37]*V[21])))))));
C[26]=+S[9]*(V[1]*(S[4]*(16*(S[0]-S[1]-S[2]+S[3])+32*(V[29]*V[27]-V[28]*
 V[26]))+12*(S[1]-S[0]+S[2]-S[3])+24*(V[28]*V[26]-V[29]*V[27]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-V[23]*V[2]))+72*V[23])-72*
 V[37]*V[21]))))));
C[25]=+S[8]*(S[7]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 12*(V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(12*(V[28]-V[29]+V[27]-
 V[26])))))))));
C[24]=+S[8]*(S[7]*(V[1]*(S[4]*(8*(S[0]-S[1]-S[2]+S[3])+16*(V[29]*V[27]-
 V[28]*V[26]))+6*(S[1]-S[0]+S[2]-S[3])+12*(V[28]*V[26]-V[29]*V[27])))+S[11]*
 (S[6]*(S[5]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(24*(V[37]*V[20]-V[22]*V[2]))+
 18*V[22])-18*V[37]*V[20])))))));
C[23]=+S[9]*(V[12]*(V[36]*(V[2]*(S[7]*(V[1]*(V[37]*(V[2]*(32*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 24*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[6]*(V[30]*(S[4]*(12*(V[29]+V[28]-
 V[27]-V[26]))+9*(V[27]-V[29]-V[28]+V[26])))))+S[7]*(S[10]*(V[1]*(V[20]*(24*
 (V[28]-V[29]+V[27]-V[26]))))))));
C[22]=+S[9]*(S[7]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 24*(V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(24*(V[28]-V[29]+V[27]-
 V[26])))))))));
C[21]=+S[9]*(S[7]*(V[1]*(S[4]*(16*(S[0]-S[1]-S[2]+S[3])+32*(V[29]*V[27]-
 V[28]*V[26]))+12*(S[1]-S[0]+S[2]-S[3])+24*(V[28]*V[26]-V[29]*V[27])))+
 S[11]*(S[6]*(S[5]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[20]-V[22]*
 V[2]))+36*V[22])-36*V[37]*V[20])))))));
C[20]=+S[9]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(S[4]*(24*(V[29]+V[28]-V[27]-
 V[26]))+18*(V[27]-V[29]-V[28]+V[26])))))));
C[19]=+S[8]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(12*(
 V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(12*(V[28]-V[29]+V[27]-
 V[26]))))))));
C[18]=+S[8]*(V[1]*(S[4]*(8*(S[1]-S[0]+S[2]-S[3])+16*(V[28]*V[26]-V[29]*
 V[27]))+6*(S[0]-S[1]-S[2]+S[3])+12*(V[29]*V[27]-V[28]*V[26])));
C[17]=+S[9]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(24*(
 V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(24*(V[28]-V[29]+V[27]-
 V[26]))))))));
C[16]=+S[9]*(V[1]*(S[4]*(16*(S[1]-S[0]+S[2]-S[3])+32*(V[28]*V[26]-V[29]*
 V[27]))+12*(S[0]-S[1]-S[2]+S[3])+24*(V[29]*V[27]-V[28]*V[26])));
C[15]=+S[8]*(S[7]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(12*(V[25]-V[24])))+
 V[21]*(V[37]*(12*(V[24]-V[25])))))))));
C[14]=+S[8]*(V[2]*(V[2]*(S[7]*(S[6]*(S[5]*(V[31]*(V[37]*(V[2]*(48*(V[37]*
 V[21]-V[23]*V[2]))+36*V[23])))))+S[11]*(V[1]*(4*(S[12]-S[13]))))-36*S[10]*
 S[5]*V[31]*V[21]*S[6]*S[7])+S[11]*(V[1]*(3*(S[13]-S[12]))));
C[13]=+S[9]*(V[12]*(V[36]*(V[2]*(S[7]*(V[1]*(V[37]*(V[2]*(32*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-V[24])))))+
 S[9]*(S[6]*(V[31]*(S[4]*(12*(V[25]+V[24]))+9*(-V[25]-V[24])))))+S[7]*(
 S[10]*(V[1]*(V[21]*(24*(V[24]-V[25]))))))));
C[12]=+S[8]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+
 V[26])+V[21]*(V[24]-V[25]))))+12*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(
 V[24]-V[25])))+V[37]*(12*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24]))))))));
C[11]=+S[8]*(V[1]*(S[4]*(8*(S[1]-S[0]+S[2]-S[3])+16*(V[28]*V[26]-V[29]*
 V[27]))+6*(S[0]-S[1]-S[2]+S[3])+12*(V[29]*V[27]-V[28]*V[26]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-V[23]*V[2]))+36*V[23])-36*
 V[37]*V[21]))))));
C[10]=+S[9]*(S[7]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-V[24])))+
 V[21]*(V[37]*(24*(V[24]-V[25])))))))));
C[9]=+S[9]*(V[2]*(V[2]*(S[7]*(S[6]*(S[5]*(V[31]*(V[37]*(V[2]*(96*(V[37]*
 V[21]-V[23]*V[2]))+72*V[23])))))+S[11]*(V[1]*(8*(S[12]-S[13]))))-72*S[10]*
 S[5]*V[31]*V[21]*S[6]*S[7])+S[11]*(V[1]*(6*(S[13]-S[12]))));
C[8]=+S[9]*(S[6]*(V[2]*(V[12]*(V[31]*(V[36]*(S[4]*(24*(V[25]+V[24]))+18*(-
 V[25]-V[24])))))));
C[7]=+S[9]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+
 V[26])+V[21]*(V[24]-V[25]))))+24*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(
 V[24]-V[25])))+V[37]*(24*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24]))))))));
C[6]=+S[9]*(V[1]*(S[4]*(16*(S[1]-S[0]+S[2]-S[3])+32*(V[28]*V[26]-V[29]*
 V[27]))+12*(S[0]-S[1]-S[2]+S[3])+24*(V[29]*V[27]-V[28]*V[26]))+S[6]*(S[5]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-V[23]*V[2]))+72*V[23])-72*
 V[37]*V[21]))))));
C[5]=+S[8]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(12*(V[25]-V[24])))+V[21]*(
 V[37]*(12*(V[24]-V[25]))))))));
C[4]=+S[8]*(S[6]*(S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-
 V[23]*V[2]))+36*V[23])-36*V[37]*V[21]))))));
C[3]=+S[9]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-V[24])))+V[21]*(
 V[37]*(24*(V[24]-V[25]))))))));
C[2]=+S[9]*(S[6]*(S[5]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-
 V[23]*V[2]))+72*V[23])-72*V[37]*V[21]))))));
S[14]=V[17]*V[17]*V[17]*V[17];
S[15]=V[2]*V[2]*V[2]*V[2];
C[1]=+6*S[10]*S[14]*S[15];
S[16]=V[49]*V[49];
S[17]=V[1]*V[1]*V[1];
C[0]=+S[16]*S[7]*S[17];
}
REAL F786_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         b                 b      !  b                 b             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           Z|P7         /==>======!==>==\          H|-PA             
            1           |  P3     !  P3 |           |                
            |           |         !     |           |                
         u  |  t     W+ |  E2     !  E2 |  W+    t  |  u             
       ==>==@==>==@-2>--@==<======!==<==@-->3-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[60];REAL S[1];REAL tmp[5];                                    
     
if(CalcConst) C786(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[12]*(V[50]*(DP[0]*(V[50]*(DP[9]*(C[30]*(DP[7]-DP[0])+C[38]-C[37]*
 V[50]+C[35]*DP[6])+DP[3]*(C[32]*V[50]-C[33]+C[28]*DP[6]+C[30]*DP[7])+DP[4]*
 (C[37]*V[50]-C[54]+C[35]*DP[0]+C[52]*DP[6]))+DP[9]*(C[31]*(DP[0]-DP[7])+
 C[39]-C[36]*DP[6])+DP[3]*(C[29]*DP[6]-C[34]-C[31]*DP[7])+DP[4]*(C[29]*
 DP[6]-C[55])+C[49]*(DP[8]-DP[2])-C[44]*DP[1])+DP[7]*(V[50]*(DP[3]*(C[37]*
 V[50]-C[38]-C[35]*DP[6]-C[30]*DP[7])+DP[4]*(C[37]*V[50]-C[54]+C[52]*DP[6]-
 C[35]*DP[7])+DP[9]*(C[33]-C[32]*V[50]-C[28]*DP[6]))+DP[3]*(C[36]*DP[6]-
 C[39]+C[31]*DP[7])+DP[4]*(C[29]*DP[6]-C[55])+DP[9]*(C[34]-C[29]*DP[6])+
 C[49]*(-DP[1]-DP[2])+C[44]*DP[8]))+DP[0]*(DP[6]*(-C[40]*DP[1]-C[53]*DP[2]-
 C[2]*DP[3]-C[26]*DP[4]-C[47]*DP[8]-C[16]*DP[9])+DP[0]*(C[42]*DP[8]-C[47]*
 DP[2]-C[16]*DP[4]+C[6]*DP[9])+DP[7]*(C[42]*(-DP[1]-DP[8])+C[6]*(-DP[3]-
 DP[9]))+C[45]*DP[1]+C[56]*DP[2]+C[9]*DP[3]+C[27]*DP[4]-C[50]*DP[8]-C[21]*
 DP[9])+DP[7]*(DP[6]*(C[47]*DP[1]-C[53]*DP[2]+C[16]*DP[3]-C[26]*DP[4]+C[40]*
 DP[8]+C[2]*DP[9])+DP[7]*(C[42]*DP[1]+C[47]*DP[2]+C[6]*DP[3]+C[16]*DP[4])+
 C[50]*DP[1]+C[56]*DP[2]+C[21]*DP[3]+C[27]*DP[4]-C[45]*DP[8]-C[9]*DP[9]));
tmp[1]=+DP[0]*(DP[5]*(C[20]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+C[8]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+DP[14]*(C[7]*(DP[0]-DP[7])+C[23]-C[17]*
 DP[6])+DP[10]*(C[3]*DP[6]-C[13]-C[7]*DP[7])+DP[11]*(C[3]*DP[6]-C[58]))+
 DP[12]*(DP[6]*(C[41]*(-DP[1]-DP[2])+C[3]*(-DP[3]-DP[4])+C[48]*DP[8]+C[17]*
 DP[9])+DP[7]*(C[43]*(DP[1]+DP[8])+C[7]*(DP[3]+DP[9]))+DP[0]*(-C[43]*DP[8]-
 C[7]*DP[9])+C[46]*(DP[1]+DP[2])+C[10]*(DP[3]+DP[4])-C[51]*DP[8]-C[22]*
 DP[9])+DP[13]*(DP[8]*(C[7]*(DP[7]-DP[0])+C[17]*DP[6]-C[22])+DP[1]*(C[10]-
 C[3]*DP[6]+C[7]*DP[7])+DP[2]*(C[10]-C[3]*DP[6])))+DP[7]*(DP[5]*(C[20]*(
 DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-
 DP[10]-DP[11]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+DP[6]*(C[3]*(DP[11]-DP[14])+C[17]*DP[10])+DP[10]*(C[7]*DP[7]-C[23])+
 C[13]*DP[14]-C[58]*DP[11])+DP[12]*(DP[6]*(C[41]*(DP[8]-DP[2])+C[3]*(DP[9]-
 DP[4])-C[48]*DP[1]-C[17]*DP[3])+DP[1]*(C[51]-C[43]*DP[7])+DP[3]*(C[22]-
 C[7]*DP[7])+C[46]*(DP[2]-DP[8])+C[10]*(DP[4]-DP[9]))+DP[13]*(DP[1]*(C[22]-
 C[17]*DP[6]-C[7]*DP[7])+DP[2]*(C[10]-C[3]*DP[6])+DP[8]*(C[3]*DP[6]-
 C[10])));
tmp[2]=+DP[0]*(DP[12]*(DP[6]*(C[2]*(DP[1]+DP[3])+C[26]*(DP[2]+DP[4])+C[16]*(
 DP[8]+DP[9]))+C[6]*(DP[7]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[0]*(-DP[8]-DP[9]))+
 DP[0]*(C[16]*(DP[2]+DP[4]))+C[9]*(-DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+C[21]*
 (DP[8]+DP[9]))+DP[13]*(DP[6]*(C[2]*(DP[1]+DP[3])+C[26]*(DP[2]+DP[4])+C[16]*
 (DP[8]+DP[9]))+C[6]*(DP[7]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[0]*(-DP[8]-DP[9]))+
 DP[0]*(C[16]*(DP[2]+DP[4]))+C[9]*(-DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+C[21]*
 (DP[8]+DP[9]))+DP[5]*(DP[14]*(C[6]*(DP[0]-DP[7])-C[21]-C[16]*DP[6])+DP[10]*
 (C[9]-C[2]*DP[6]-C[6]*DP[7])+DP[11]*(C[27]-C[16]*DP[0]-C[26]*DP[6]))+
 DP[14]*(C[11]*(DP[0]-DP[7])-C[24]-C[18]*DP[6])+DP[10]*(C[14]-C[4]*DP[6]-
 C[11]*DP[7])+DP[11]*(C[59]-C[18]*DP[0]-C[57]*DP[6]));
tmp[3]=+V[50]*(V[50]*(DP[0]*(DP[5]*(DP[14]*(C[6]*(DP[7]-DP[0])+C[21]-C[20]*
 V[50]+C[16]*DP[6])+DP[10]*(C[8]*V[50]-C[9]+C[2]*DP[6]+C[6]*DP[7])+DP[11]*(
 C[20]*V[50]-C[27]+C[16]*DP[0]+C[26]*DP[6]))+DP[13]*(DP[8]*(C[6]*(DP[0]-
 DP[7])+C[20]*V[50]-C[21]-C[16]*DP[6])+DP[1]*(C[9]-C[8]*V[50]-C[2]*DP[6]-
 C[6]*DP[7])+DP[2]*(C[27]-C[20]*V[50]-C[16]*DP[0]-C[26]*DP[6])))+DP[7]*(
 DP[5]*(DP[10]*(C[20]*V[50]-C[21]-C[16]*DP[6]-C[6]*DP[7])+DP[11]*(C[20]*
 V[50]-C[27]+C[26]*DP[6]-C[16]*DP[7])+DP[14]*(C[9]-C[8]*V[50]-C[2]*DP[6]))+
 DP[13]*(DP[1]*(C[21]-C[20]*V[50]+C[16]*DP[6]+C[6]*DP[7])+DP[2]*(C[27]-
 C[20]*V[50]-C[26]*DP[6]+C[16]*DP[7])+DP[8]*(C[8]*V[50]-C[9]+C[2]*DP[6])))+
 tmp[0])+tmp[1]);
tmp[4]=+DP[5]*(DP[0]*(DP[6]*(C[3]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11]))+C[17]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*(-DP[10]-DP[11])+C[19]*
 DP[14])+C[7]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-
 DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5]))+C[10]*(DP[12]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+C[22]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*(C[12]*(
 DP[7]-DP[0])-C[25])+DP[10]*(C[15]+C[12]*DP[7])+C[15]*DP[11])+DP[7]*(DP[6]*(
 C[3]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[5]*(DP[14]-DP[11]))+C[17]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[5]*(DP[14]-DP[11])-C[19]*DP[10])+C[10]*(DP[12]*(DP[8]-
 DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+
 DP[7]*(C[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-
 C[12]*DP[10])+C[22]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[15]*(DP[11]-DP[14])+C[25]*DP[10]));
R=+V[50]*(DP[5]*(DP[7]*(DP[6]*(DP[12]*(C[16]*(-DP[1]-DP[3])+C[26]*(DP[2]+
 DP[4])+C[2]*(-DP[8]-DP[9]))+DP[13]*(C[16]*(-DP[1]-DP[3])+C[26]*(DP[2]+
 DP[4])+C[2]*(-DP[8]-DP[9]))+DP[5]*(C[16]*DP[10]-C[26]*DP[11]+C[2]*DP[14])+
 C[18]*DP[10]-C[57]*DP[11]+C[4]*DP[14])+DP[7]*(C[6]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[16]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+C[11]*DP[10]+C[18]*DP[11])+DP[12]*(C[21]*(-
 DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+C[9]*(DP[8]+DP[9]))+DP[13]*(C[21]*(-
 DP[1]-DP[3])+C[27]*(-DP[2]-DP[4])+C[9]*(DP[8]+DP[9]))+DP[5]*(C[21]*DP[10]+
 C[27]*DP[11]-C[9]*DP[14])+C[24]*DP[10]+C[59]*DP[11]-C[14]*DP[14])+tmp[2])+
 tmp[3])+tmp[4];
R*=(N/D)*Q1[9]*Q2[1]*Q2[2]*Q1[11];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
