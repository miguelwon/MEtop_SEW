/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F741_out;
static void C741(REAL * C)
{
REAL* V=va_out;
REAL S[18];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9]*V[9]*V[9];
C[59]=+S[1]*(S[0]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 12*(V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(12*(V[28]-V[29]+V[27]-
 V[26])))))))));
S[2]=V[28]*V[28];
S[3]=V[29]*V[29];
S[4]=V[27]*V[27];
S[5]=V[26]*V[26];
S[6]=V[2]*V[2];
S[7]=V[36]*V[36];
S[8]=V[17]*V[17];
S[9]=V[12]*V[12];
C[58]=+S[1]*(S[0]*(V[1]*(S[6]*(8*(S[2]-S[3]-S[4]+S[5])+16*(V[29]*V[27]-
 V[28]*V[26]))+6*(S[3]-S[2]+S[4]-S[5])+12*(V[28]*V[26]-V[29]*V[27])))+S[9]*(
 S[8]*(S[7]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(24*(V[37]*V[20]-V[22]*V[2]))+
 18*V[22])-18*V[37]*V[20])))))));
S[10]=V[9]*V[9];
S[11]=V[37]*V[37];
C[57]=+S[10]*(V[12]*(V[36]*(V[2]*(S[0]*(V[1]*(V[37]*(V[2]*(32*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 24*(V[29]-V[28]-V[27]+V[26])))))+S[10]*(S[8]*(V[30]*(S[6]*(12*(V[29]+V[28]-
 V[27]-V[26]))+9*(V[27]-V[29]-V[28]+V[26])))))+S[0]*(S[11]*(V[1]*(V[20]*(24*
 (V[28]-V[29]+V[27]-V[26]))))))));
C[56]=+S[1]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(12*(
 V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(12*(V[28]-V[29]+V[27]-
 V[26]))))))));
S[12]=V[24]*V[24];
S[13]=V[25]*V[25];
C[55]=+S[1]*(V[2]*(V[2]*(S[0]*(S[8]*(S[7]*(V[31]*(V[37]*(V[2]*(48*(V[37]*
 V[21]-V[23]*V[2]))+36*V[23])))))+S[9]*(V[1]*(4*(S[12]-S[13]))))-36*S[11]*
 S[7]*V[31]*V[21]*S[8]*S[0])+S[9]*(V[1]*(3*(S[13]-S[12]))));
C[54]=+S[10]*(V[12]*(V[36]*(V[2]*(S[0]*(V[1]*(V[37]*(V[2]*(32*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-V[24])))))+
 S[10]*(S[8]*(V[31]*(S[6]*(12*(V[25]+V[24]))+9*(-V[25]-V[24])))))+S[0]*(
 S[11]*(V[1]*(V[21]*(24*(V[24]-V[25]))))))));
C[53]=+S[1]*(S[8]*(S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-
 V[23]*V[2]))+36*V[23])-36*V[37]*V[21]))))));
C[52]=+S[1]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+
 V[26])+V[21]*(V[24]-V[25]))))+12*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(
 V[24]-V[25])))+V[37]*(12*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24]))))))));
C[51]=+S[1]*(V[1]*(S[6]*(8*(S[3]-S[2]+S[4]-S[5])+16*(V[28]*V[26]-V[29]*
 V[27]))+6*(S[2]-S[3]-S[4]+S[5])+12*(V[29]*V[27]-V[28]*V[26]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-V[23]*V[2]))+36*V[23])-36*
 V[37]*V[21]))))));
C[50]=+S[10]*(S[0]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 48*(V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(48*(V[28]-V[29]+V[27]-
 V[26])))))))));
C[49]=+S[10]*(S[0]*(V[1]*(S[6]*(32*(S[2]-S[3]-S[4]+S[5])+64*(V[29]*V[27]-
 V[28]*V[26]))+24*(S[3]-S[2]+S[4]-S[5])+48*(V[28]*V[26]-V[29]*V[27])))+S[9]*
 (S[8]*(S[7]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[20]-V[22]*V[2]))+
 72*V[22])-72*V[37]*V[20])))))));
C[48]=+S[10]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(48*(
 V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(48*(V[28]-V[29]+V[27]-
 V[26]))))))));
C[47]=+S[10]*(V[2]*(V[2]*(S[0]*(S[8]*(S[7]*(V[31]*(V[37]*(V[2]*(192*(V[37]*
 V[21]-V[23]*V[2]))+144*V[23])))))+S[9]*(V[1]*(16*(S[12]-S[13]))))-144*
 S[11]*S[7]*V[31]*V[21]*S[8]*S[0])+S[9]*(V[1]*(12*(S[13]-S[12]))));
C[46]=+S[10]*(S[8]*(V[2]*(V[12]*(V[31]*(V[36]*(S[6]*(48*(V[25]+V[24]))+36*(-
 V[25]-V[24])))))));
C[45]=+S[10]*(S[8]*(S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-
 V[23]*V[2]))+144*V[23])-144*V[37]*V[21]))))));
C[44]=+V[12]*(V[36]*(V[2]*(S[0]*(V[1]*(V[37]*(V[2]*(64*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(48*(
 V[29]-V[28]-V[27]+V[26])))))+S[10]*(S[8]*(V[30]*(S[6]*(24*(V[29]+V[28]-
 V[27]-V[26]))+18*(V[27]-V[29]-V[28]+V[26])))))+S[0]*(S[11]*(V[1]*(V[20]*(
 48*(V[28]-V[29]+V[27]-V[26])))))));
C[43]=+S[0]*(V[1]*(S[6]*(32*(S[2]-S[3]-S[4]+S[5])+64*(V[29]*V[27]-V[28]*
 V[26]))+24*(S[3]-S[2]+S[4]-S[5])+48*(V[28]*V[26]-V[29]*V[27])))+S[9]*(S[8]*
 (S[7]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[20]-V[22]*V[2]))+72*
 V[22])-72*V[37]*V[20]))))));
C[42]=+V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-V[29]+
 V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(48*(V[29]-
 V[28]-V[27]+V[26])))+V[20]*(V[37]*(48*(V[28]-V[29]+V[27]-V[26])))))));
C[41]=+V[12]*(V[36]*(V[2]*(S[0]*(V[1]*(V[37]*(V[2]*(64*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))))+S[10]*(
 S[8]*(V[31]*(S[6]*(24*(V[25]+V[24]))+18*(-V[25]-V[24])))))+S[0]*(S[11]*(
 V[1]*(V[21]*(48*(V[24]-V[25])))))));
C[40]=+V[2]*(V[2]*(S[0]*(S[8]*(S[7]*(V[31]*(V[37]*(V[2]*(192*(V[37]*V[21]-
 V[23]*V[2]))+144*V[23])))))+S[9]*(V[1]*(16*(S[12]-S[13]))))-144*S[11]*S[7]*
 V[31]*V[21]*S[8]*S[0])+S[9]*(V[1]*(12*(S[13]-S[12])));
C[39]=+S[8]*(V[2]*(V[12]*(V[31]*(V[36]*(S[6]*(48*(V[25]+V[24]))+36*(-V[25]-
 V[24]))))));
C[38]=+S[8]*(S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*
 V[2]))+144*V[23])-144*V[37]*V[21])))));
C[37]=+S[10]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+
 V[26])+V[21]*(V[24]-V[25]))))+48*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(
 V[24]-V[25])))+V[37]*(48*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24]))))))));
C[36]=+S[10]*(V[1]*(S[6]*(32*(S[3]-S[2]+S[4]-S[5])+64*(V[28]*V[26]-V[29]*
 V[27]))+24*(S[2]-S[3]-S[4]+S[5])+48*(V[29]*V[27]-V[28]*V[26]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-
 144*V[37]*V[21]))))));
C[35]=+V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[28]-V[29]+
 V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+V[26])+
 V[21]*(V[24]-V[25]))))+48*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25])))+V[37]*(48*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24])))))));
C[34]=+V[1]*(S[6]*(32*(S[3]-S[2]+S[4]-S[5])+64*(V[28]*V[26]-V[29]*V[27]))+
 24*(S[2]-S[3]-S[4]+S[5])+48*(V[29]*V[27]-V[28]*V[26]))+S[8]*(S[7]*(V[2]*(
 V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-144*
 V[37]*V[21])))));
C[33]=+S[10]*(S[0]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))+
 V[21]*(V[37]*(48*(V[24]-V[25])))))))));
C[32]=+S[10]*(S[0]*(V[1]*(S[6]*(32*(S[2]-S[3]-S[4]+S[5])+64*(V[29]*V[27]-
 V[28]*V[26]))+24*(S[3]-S[2]+S[4]-S[5])+48*(V[28]*V[26]-V[29]*V[27]))+S[8]*(
 S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*
 V[23])-144*V[37]*V[21])))))));
C[31]=+S[10]*(S[8]*(V[2]*(V[12]*(V[30]*(V[36]*(S[6]*(48*(V[29]+V[28]-V[27]-
 V[26]))+36*(V[27]-V[29]-V[28]+V[26])))))));
C[30]=+S[10]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))+V[21]*(
 V[37]*(48*(V[24]-V[25]))))))));
C[29]=+S[10]*(V[1]*(S[6]*(32*(S[2]-S[3]-S[4]+S[5])+64*(V[29]*V[27]-V[28]*
 V[26]))+24*(S[3]-S[2]+S[4]-S[5])+48*(V[28]*V[26]-V[29]*V[27]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-
 144*V[37]*V[21]))))));
C[28]=+S[10]*(V[1]*(S[6]*(32*(S[3]-S[2]+S[4]-S[5])+64*(V[28]*V[26]-V[29]*
 V[27]))+24*(S[2]-S[3]-S[4]+S[5])+48*(V[29]*V[27]-V[28]*V[26])));
C[27]=+V[12]*(V[36]*(V[2]*(S[10]*(S[8]*(V[30]*(S[6]*(24*(V[29]+V[28]-V[27]-
 V[26]))+18*(V[27]-V[29]-V[28]+V[26]))))+S[0]*(V[1]*(V[37]*(V[2]*(64*(V[2]*(
 V[23]*(V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-
 V[24]))))))+S[0]*(S[11]*(V[1]*(V[21]*(48*(V[24]-V[25])))))));
C[26]=+S[0]*(V[1]*(S[6]*(32*(S[2]-S[3]-S[4]+S[5])+64*(V[29]*V[27]-V[28]*
 V[26]))+24*(S[3]-S[2]+S[4]-S[5])+48*(V[28]*V[26]-V[29]*V[27]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-
 144*V[37]*V[21]))))));
C[25]=+S[8]*(V[2]*(V[12]*(V[30]*(V[36]*(S[6]*(48*(V[29]+V[28]-V[27]-V[26]))+
 36*(V[27]-V[29]-V[28]+V[26]))))));
C[24]=+V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(48*(V[25]-V[24])))+V[21]*(
 V[37]*(48*(V[24]-V[25])))))));
C[23]=+V[1]*(S[6]*(32*(S[2]-S[3]-S[4]+S[5])+64*(V[29]*V[27]-V[28]*V[26]))+
 24*(S[3]-S[2]+S[4]-S[5])+48*(V[28]*V[26]-V[29]*V[27]))+S[8]*(S[7]*(V[2]*(
 V[31]*(V[37]*(V[2]*(V[2]*(192*(V[37]*V[21]-V[23]*V[2]))+144*V[23])-144*
 V[37]*V[21])))));
C[22]=+V[1]*(S[6]*(32*(S[3]-S[2]+S[4]-S[5])+64*(V[28]*V[26]-V[29]*V[27]))+
 24*(S[2]-S[3]-S[4]+S[5])+48*(V[29]*V[27]-V[28]*V[26]));
C[21]=+S[10]*(S[0]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[28]-V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(
 24*(V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(24*(V[28]-V[29]+V[27]-
 V[26])))))))));
C[20]=+S[10]*(S[0]*(V[1]*(S[6]*(16*(S[2]-S[3]-S[4]+S[5])+32*(V[29]*V[27]-
 V[28]*V[26]))+12*(S[3]-S[2]+S[4]-S[5])+24*(V[28]*V[26]-V[29]*V[27])))+S[9]*
 (S[8]*(S[7]*(V[2]*(V[30]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[20]-V[22]*V[2]))+
 36*V[22])-36*V[37]*V[20])))))));
C[19]=+S[10]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26]))+V[20]*(V[37]*(V[29]-V[28]-V[27]+V[26]))))+V[22]*(24*(
 V[29]-V[28]-V[27]+V[26])))+V[20]*(V[37]*(24*(V[28]-V[29]+V[27]-
 V[26]))))))));
C[18]=+S[10]*(V[2]*(V[2]*(S[0]*(S[8]*(S[7]*(V[31]*(V[37]*(V[2]*(96*(V[37]*
 V[21]-V[23]*V[2]))+72*V[23])))))+S[9]*(V[1]*(8*(S[12]-S[13]))))-72*S[11]*
 S[7]*V[31]*V[21]*S[8]*S[0])+S[9]*(V[1]*(6*(S[13]-S[12]))));
C[17]=+S[10]*(S[8]*(V[2]*(V[12]*(V[31]*(V[36]*(S[6]*(24*(V[25]+V[24]))+18*(-
 V[25]-V[24])))))));
C[16]=+S[10]*(S[8]*(S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-
 V[23]*V[2]))+72*V[23])-72*V[37]*V[21]))))));
C[15]=+S[10]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(V[28]-
 V[29]+V[27]-V[26])+V[23]*(V[25]-V[24]))+V[37]*(V[20]*(V[29]-V[28]-V[27]+
 V[26])+V[21]*(V[24]-V[25]))))+24*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(
 V[24]-V[25])))+V[37]*(24*(V[20]*(V[28]-V[29]+V[27]-V[26])+V[21]*(V[25]-
 V[24]))))))));
C[14]=+S[10]*(V[1]*(S[6]*(16*(S[3]-S[2]+S[4]-S[5])+32*(V[28]*V[26]-V[29]*
 V[27]))+12*(S[2]-S[3]-S[4]+S[5])+24*(V[29]*V[27]-V[28]*V[26]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-V[23]*V[2]))+72*V[23])-72*
 V[37]*V[21]))))));
C[13]=+S[1]*(S[0]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(12*(V[25]-V[24])))+
 V[21]*(V[37]*(12*(V[24]-V[25])))))))));
C[12]=+S[1]*(S[0]*(V[1]*(S[6]*(8*(S[2]-S[3]-S[4]+S[5])+16*(V[29]*V[27]-
 V[28]*V[26]))+6*(S[3]-S[2]+S[4]-S[5])+12*(V[28]*V[26]-V[29]*V[27]))+S[8]*(
 S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-V[23]*V[2]))+36*
 V[23])-36*V[37]*V[21])))))));
C[11]=+S[10]*(V[12]*(V[36]*(V[2]*(S[10]*(S[8]*(V[30]*(S[6]*(12*(V[29]+V[28]-
 V[27]-V[26]))+9*(V[27]-V[29]-V[28]+V[26]))))+S[0]*(V[1]*(V[37]*(V[2]*(32*(
 V[2]*(V[23]*(V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-
 V[24]))))))+S[0]*(S[11]*(V[1]*(V[21]*(24*(V[24]-V[25]))))))));
C[10]=+S[1]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(12*(V[25]-V[24])))+V[21]*(
 V[37]*(12*(V[24]-V[25]))))))));
C[9]=+S[1]*(V[1]*(S[6]*(8*(S[2]-S[3]-S[4]+S[5])+16*(V[29]*V[27]-V[28]*
 V[26]))+6*(S[3]-S[2]+S[4]-S[5])+12*(V[28]*V[26]-V[29]*V[27]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[21]-V[23]*V[2]))+36*V[23])-36*
 V[37]*V[21]))))));
C[8]=+S[10]*(S[0]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[23]*(
 V[24]-V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-V[24])))+
 V[21]*(V[37]*(24*(V[24]-V[25])))))))));
C[7]=+S[10]*(S[0]*(V[1]*(S[6]*(16*(S[2]-S[3]-S[4]+S[5])+32*(V[29]*V[27]-
 V[28]*V[26]))+12*(S[3]-S[2]+S[4]-S[5])+24*(V[28]*V[26]-V[29]*V[27]))+S[8]*(
 S[7]*(V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-V[23]*V[2]))+72*
 V[23])-72*V[37]*V[21])))))));
C[6]=+S[10]*(S[8]*(V[2]*(V[12]*(V[30]*(V[36]*(S[6]*(24*(V[29]+V[28]-V[27]-
 V[26]))+18*(V[27]-V[29]-V[28]+V[26])))))));
C[5]=+S[10]*(V[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[2]*(V[23]*(V[24]-
 V[25]))+V[21]*(V[37]*(V[25]-V[24]))))+V[23]*(24*(V[25]-V[24])))+V[21]*(
 V[37]*(24*(V[24]-V[25]))))))));
C[4]=+S[10]*(V[1]*(S[6]*(16*(S[2]-S[3]-S[4]+S[5])+32*(V[29]*V[27]-V[28]*
 V[26]))+12*(S[3]-S[2]+S[4]-S[5])+24*(V[28]*V[26]-V[29]*V[27]))+S[8]*(S[7]*(
 V[2]*(V[31]*(V[37]*(V[2]*(V[2]*(96*(V[37]*V[21]-V[23]*V[2]))+72*V[23])-72*
 V[37]*V[21]))))));
C[3]=+S[1]*(V[1]*(S[6]*(8*(S[3]-S[2]+S[4]-S[5])+16*(V[28]*V[26]-V[29]*
 V[27]))+6*(S[2]-S[3]-S[4]+S[5])+12*(V[29]*V[27]-V[28]*V[26])));
C[2]=+S[10]*(V[1]*(S[6]*(16*(S[3]-S[2]+S[4]-S[5])+32*(V[28]*V[26]-V[29]*
 V[27]))+12*(S[2]-S[3]-S[4]+S[5])+24*(V[29]*V[27]-V[28]*V[26])));
S[14]=V[17]*V[17]*V[17]*V[17];
S[15]=V[2]*V[2]*V[2]*V[2];
C[1]=+6*S[11]*S[14]*S[15];
S[16]=V[49]*V[49];
S[17]=V[1]*V[1]*V[1];
C[0]=+S[16]*S[0]*S[17];
}
REAL F741_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   S                       n2     !  n2                      S       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   s  |  Z     t     W+ |  E2     !  E2 |  W+    t     H  |  s       
 ==>==@-1---@==>==@-2>--@==<======!==<==@-->3-@==>==@-----@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              U      !  U              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[60];REAL S[1];REAL tmp[5];                                    
     
if(CalcConst) C741(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[12]*(V[50]*(DP[6]*(V[50]*(DP[4]*(C[34]*(-DP[6]-DP[7])+C[25]*
 V[50]-C[43]+C[22]*DP[0])+DP[3]*(C[39]*V[50]-C[40]-C[38]*DP[0]+C[34]*DP[7])+
 DP[9]*(C[26]-C[25]*V[50]+C[23]*DP[0]+C[22]*DP[6]))+DP[4]*(C[35]*(DP[6]+
 DP[7])-C[44]-C[42]*DP[0])+DP[3]*(-C[41]-C[24]*DP[0]-C[35]*DP[7])+DP[9]*(
 C[27]+C[24]*DP[0])+C[31]*(DP[8]-DP[2])-C[46]*DP[1])+DP[7]*(V[50]*(DP[3]*(
 C[43]-C[25]*V[50]-C[22]*DP[0]+C[34]*DP[7])+DP[9]*(C[25]*V[50]-C[26]-C[23]*
 DP[0]-C[22]*DP[7])+DP[4]*(C[40]-C[39]*V[50]+C[38]*DP[0]))+DP[0]*(C[24]*(
 DP[4]-DP[9])+C[42]*DP[3])+DP[3]*(C[44]-C[35]*DP[7])+C[31]*(DP[1]-DP[8])+
 C[46]*DP[2]+C[41]*DP[4]-C[27]*DP[9]))+DP[6]*(DP[0]*(C[45]*DP[1]-C[28]*
 DP[2]+C[16]*DP[3]-C[2]*DP[4]-C[29]*DP[8]-C[4]*DP[9])+DP[6]*(C[36]*DP[2]+
 C[14]*DP[4]-C[28]*DP[8]-C[2]*DP[9])+DP[7]*(C[36]*(DP[2]-DP[1])+C[14]*(
 DP[4]-DP[3]))+C[47]*DP[1]+C[49]*DP[2]+C[18]*DP[3]+C[20]*DP[4]-C[32]*DP[8]-
 C[7]*DP[9])+DP[7]*(DP[0]*(C[28]*DP[1]-C[45]*DP[2]+C[2]*DP[3]-C[16]*DP[4]+
 C[29]*DP[8]+C[4]*DP[9])+DP[7]*(C[28]*DP[8]-C[36]*DP[1]-C[14]*DP[3]+C[2]*
 DP[9])+C[32]*DP[8]-C[49]*DP[1]-C[47]*DP[2]-C[20]*DP[3]-C[18]*DP[4]+C[7]*
 DP[9]));
tmp[1]=+DP[6]*(DP[5]*(C[6]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+C[17]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+DP[11]*(C[15]*(DP[6]+DP[7])-C[57]-
 C[19]*DP[0])+DP[10]*(-C[54]-C[5]*DP[0]-C[15]*DP[7])+DP[14]*(C[11]+C[5]*
 DP[0]))+DP[12]*(DP[0]*(C[30]*(DP[1]-DP[8])+C[5]*(DP[3]-DP[9])+C[48]*DP[2]+
 C[19]*DP[4])+DP[7]*(C[37]*(DP[1]-DP[2])+C[15]*(DP[3]-DP[4]))+DP[2]*(C[50]-
 C[37]*DP[6])+DP[4]*(C[21]-C[15]*DP[6])+C[33]*(DP[1]-DP[8])+C[8]*(DP[3]-
 DP[9]))+DP[13]*(DP[2]*(C[15]*(-DP[6]-DP[7])+C[21]+C[19]*DP[0])+DP[1]*(C[8]+
 C[5]*DP[0]+C[15]*DP[7])+DP[8]*(-C[8]-C[5]*DP[0])))+DP[7]*(DP[5]*(C[6]*(
 DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(
 DP[10]-DP[14]))+C[17]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+DP[0]*(C[5]*(DP[11]-DP[14])+C[19]*DP[10])+DP[10]*(C[57]-
 C[15]*DP[7])+C[54]*DP[11]-C[11]*DP[14])+DP[12]*(DP[0]*(C[30]*(DP[8]-DP[2])+
 C[5]*(DP[9]-DP[4])-C[48]*DP[1]-C[19]*DP[3])+DP[1]*(C[37]*DP[7]-C[50])+
 DP[3]*(C[15]*DP[7]-C[21])+C[33]*(DP[8]-DP[2])+C[8]*(DP[9]-DP[4]))+DP[13]*(
 DP[0]*(C[5]*(DP[8]-DP[2])-C[19]*DP[1])+DP[1]*(C[15]*DP[7]-C[21])+C[8]*(
 DP[8]-DP[2])));
tmp[2]=+DP[6]*(DP[12]*(DP[0]*(C[16]*(-DP[1]-DP[3])+C[2]*(DP[2]+DP[4])+C[4]*(
 DP[8]+DP[9]))+C[14]*(DP[7]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[6]*(-DP[2]-DP[4]))+
 DP[6]*(C[2]*(DP[8]+DP[9]))+C[18]*(-DP[1]-DP[3])+C[20]*(-DP[2]-DP[4])+C[7]*(
 DP[8]+DP[9]))+DP[13]*(DP[0]*(C[16]*(-DP[1]-DP[3])+C[2]*(DP[2]+DP[4])+C[4]*(
 DP[8]+DP[9]))+C[14]*(DP[7]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[6]*(-DP[2]-DP[4]))+
 DP[6]*(C[2]*(DP[8]+DP[9]))+C[18]*(-DP[1]-DP[3])+C[20]*(-DP[2]-DP[4])+C[7]*(
 DP[8]+DP[9]))+DP[5]*(DP[11]*(C[14]*(DP[6]+DP[7])+C[20]-C[2]*DP[0])+DP[10]*(
 C[18]+C[16]*DP[0]-C[14]*DP[7])+DP[14]*(-C[7]-C[4]*DP[0]-C[2]*DP[6]))+
 DP[11]*(C[51]*(DP[6]+DP[7])+C[58]-C[3]*DP[0])+DP[10]*(C[55]+C[53]*DP[0]-
 C[51]*DP[7])+DP[14]*(-C[12]-C[9]*DP[0]-C[3]*DP[6]));
tmp[3]=+V[50]*(V[50]*(DP[6]*(DP[5]*(DP[11]*(C[14]*(-DP[6]-DP[7])+C[6]*V[50]-
 C[20]+C[2]*DP[0])+DP[10]*(C[17]*V[50]-C[18]-C[16]*DP[0]+C[14]*DP[7])+
 DP[14]*(C[7]-C[6]*V[50]+C[4]*DP[0]+C[2]*DP[6]))+DP[13]*(DP[2]*(C[14]*(
 DP[6]+DP[7])+C[20]-C[6]*V[50]-C[2]*DP[0])+DP[1]*(C[18]-C[17]*V[50]+C[16]*
 DP[0]-C[14]*DP[7])+DP[8]*(C[6]*V[50]-C[7]-C[4]*DP[0]-C[2]*DP[6])))+DP[7]*(
 DP[5]*(DP[10]*(C[20]-C[6]*V[50]-C[2]*DP[0]+C[14]*DP[7])+DP[14]*(C[6]*V[50]-
 C[7]-C[4]*DP[0]-C[2]*DP[7])+DP[11]*(C[18]-C[17]*V[50]+C[16]*DP[0]))+DP[13]*
 (DP[1]*(C[6]*V[50]-C[20]+C[2]*DP[0]-C[14]*DP[7])+DP[8]*(C[7]-C[6]*V[50]+
 C[4]*DP[0]+C[2]*DP[7])+DP[2]*(C[17]*V[50]-C[18]-C[16]*DP[0])))+tmp[0])+
 tmp[1]);
tmp[4]=+DP[5]*(DP[6]*(DP[0]*(C[5]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+C[19]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[10]*(DP[10]-DP[14])+C[56]*
 DP[11])+C[15]*(DP[7]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-
 DP[3]+DP[4])+DP[5]*(DP[10]-DP[11]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5]))+C[8]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+C[21]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(C[52]*(-DP[6]-
 DP[7])+C[59])+DP[10]*(C[13]+C[52]*DP[7])-C[13]*DP[14])+DP[7]*(DP[0]*(C[5]*(
 DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(
 DP[14]-DP[11]))+C[19]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])+C[10]*(DP[14]-DP[11])-C[56]*DP[10])+C[8]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(
 C[15]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[52]*
 DP[10])+C[21]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+
 C[13]*(DP[14]-DP[11])-C[59]*DP[10]));
R=+V[50]*(DP[5]*(DP[7]*(DP[0]*(DP[12]*(C[2]*(-DP[1]-DP[3])+C[16]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[2]*(-DP[1]-DP[3])+C[16]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[5]*(C[2]*DP[10]-C[16]*DP[11]+C[4]*DP[14])+
 C[3]*DP[10]-C[53]*DP[11]+C[9]*DP[14])+DP[7]*(C[14]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+C[3]*DP[14]-C[51]*DP[10])+DP[12]*(C[20]*(
 DP[1]+DP[3])+C[18]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[13]*(C[20]*(DP[1]+
 DP[3])+C[18]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[5]*(C[7]*DP[14]-C[20]*
 DP[10]-C[18]*DP[11])+C[12]*DP[14]-C[58]*DP[10]-C[55]*DP[11])+tmp[2])+
 tmp[3])+tmp[4];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[4];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
