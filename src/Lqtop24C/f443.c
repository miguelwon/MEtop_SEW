/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F443_out;
static void C443(REAL * C)
{
REAL* V=va_out;
REAL S[22];                                                                 
     
S[0]=V[27]*V[27];
S[1]=V[29]*V[29];
S[2]=V[28]*V[28];
S[3]=V[29]*V[29]*V[29]*V[29];
S[4]=V[9]*V[9];
S[5]=V[1]*V[1];
S[6]=V[14]*V[14]*V[14]*V[14];
C[56]=+S[6]*(S[5]*(S[4]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(16*
 V[29]-8*V[28])+24*S[0]-8*S[1])+V[27]*(16*(S[1]+S[2]-S[0])-32*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[1]-8*S[0])+V[29]*(16*(S[0]-
 S[1])))+S[0]*(4*S[0]-8*S[1])+4*S[3])));
S[7]=V[29]*V[29]*V[29];
S[8]=V[28]*V[28]*V[28];
S[9]=V[17]*V[17];
S[10]=V[14]*V[14];
C[55]=+S[4]*(S[10]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[26]*(V[26]*
 (V[28]-V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+
 S[7]-S[8])+V[26]*(V[27]*(48*(V[29]-V[28])+72*(V[27]-V[26]))+48*V[29]*
 V[28])+V[28]*(V[29]*(72*(V[28]-V[29])-48*V[27]))))))))));
S[11]=V[26]*V[26];
S[12]=V[36]*V[36];
S[13]=V[30]*V[30];
S[14]=V[12]*V[12];
S[15]=V[2]*V[2];
S[16]=V[17]*V[17]*V[17]*V[17];
C[54]=+S[16]*(S[15]*(S[4]*(S[14]*(S[13]*(S[12]*(72*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+36*(S[1]+S[2]+S[0]+S[11])))))));
C[53]=+S[5]*(S[4]*(S[10]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*
 V[29]-32*V[28])+96*S[0]-32*S[1])+V[27]*(64*(S[1]+S[2]-S[0])-128*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[1]-32*S[0])+V[29]*(64*
 (S[0]-S[1])))+S[0]*(16*S[0]-32*S[1])+16*S[3])));
C[52]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[26]*(V[26]*(V[28]-
 V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+S[7]-
 S[8])+V[26]*(V[27]*(96*(V[29]-V[28])+144*(V[27]-V[26]))+96*V[29]*V[28])+
 V[28]*(V[29]*(144*(V[28]-V[29])-96*V[27])))))))));
S[17]=V[25]*V[25];
S[18]=V[31]*V[31];
C[51]=+S[5]*(S[14]*(V[24]*(V[24]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+8*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(32*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+16*(S[1]+S[2]+S[0]+
 S[11])))+S[17]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+8*(-S[1]-S[2]-S[0]-S[11]))))+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(144*(
 V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+72*(S[1]+S[2]+
 S[0]+S[11]))))));
C[50]=+S[9]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(96*(V[24]*(V[26]*(V[29]-V[28]+
 V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28]))+48*(V[24]*(-S[1]-S[2]-S[0]-S[11])+V[25]*(
 S[1]+S[2]+S[0]+S[11]))))))));
C[49]=+S[16]*(S[15]*(S[18]*(S[12]*(144*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+72*(S[1]+S[2]+S[0]+S[11])))));
C[48]=+S[6]*(S[5]*(V[26]*(V[26]*(V[26]*(16*V[27]-4*V[26])+V[28]*(8*V[28]-16*
 V[29])+8*S[1]-24*S[0])+V[27]*(16*(S[0]-S[1]-S[2])+32*V[29]*V[28]))+V[28]*(
 V[28]*(V[28]*(16*V[29]-4*V[28])+8*S[0]-24*S[1])+V[29]*(16*(S[1]-S[0])))+
 S[0]*(8*S[1]-4*S[0])-4*S[3]))+S[16]*(S[15]*(S[4]*(S[14]*(S[13]*(S[12]*(36*(
 V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+18*(S[1]+S[2]+
 S[0]+S[11])))))));
C[47]=+S[10]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[26]*(V[26]*(
 V[28]-V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+
 S[7]-S[8])+V[26]*(V[27]*(48*(V[29]-V[28])+72*(V[27]-V[26]))+48*V[29]*
 V[28])+V[28]*(V[29]*(72*(V[28]-V[29])-48*V[27])))))))));
C[46]=+S[16]*(S[15]*(S[14]*(S[13]*(S[12]*(72*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28])+36*(S[1]+S[2]+S[0]+S[11]))))));
C[45]=+S[5]*(S[10]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*V[29]-
 32*V[28])+96*S[0]-32*S[1])+V[27]*(64*(S[1]+S[2]-S[0])-128*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[1]-32*S[0])+V[29]*(64*(S[0]-
 S[1])))+S[0]*(16*S[0]-32*S[1])+16*S[3]));
C[44]=+S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[26]*(V[26]*(V[28]-V[29]+
 V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+S[7]-S[8])+
 V[26]*(V[27]*(96*(V[29]-V[28])+144*(V[27]-V[26]))+96*V[29]*V[28])+V[28]*(
 V[29]*(144*(V[28]-V[29])-96*V[27]))))))));
S[19]=V[9]*V[9]*V[9]*V[9];
C[43]=+S[19]*(S[6]*(S[5]*(V[26]*(V[26]*(V[26]*(V[26]-4*V[27])+V[28]*(4*
 V[29]-2*V[28])+6*S[0]-2*S[1])+V[27]*(4*(S[1]+S[2]-S[0])-8*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(V[28]-4*V[29])+6*S[1]-2*S[0])+V[29]*(4*(S[0]-S[1])))+
 S[0]*(S[0]-2*S[1])+S[3])));
C[42]=+S[19]*(S[10]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(6*(V[26]*(V[26]*
 (V[28]-V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+
 S[7]-S[8])+V[26]*(V[27]*(12*(V[29]-V[28])+18*(V[27]-V[26]))+12*V[29]*
 V[28])+V[28]*(V[29]*(18*(V[28]-V[29])-12*V[27]))))))))));
C[41]=+S[4]*(S[6]*(S[5]*(V[26]*(V[26]*(V[26]*(8*V[27]-2*V[26])+V[28]*(4*
 V[28]-8*V[29])+4*S[1]-12*S[0])+V[27]*(8*(S[0]-S[1]-S[2])+16*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(8*V[29]-2*V[28])+4*S[0]-12*S[1])+V[29]*(8*(S[1]-
 S[0])))+S[0]*(4*S[1]-2*S[0])-2*S[3]))+S[16]*(S[15]*(S[4]*(S[14]*(S[13]*(
 S[12]*(18*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+9*(
 S[1]+S[2]+S[0]+S[11]))))))));
C[40]=+S[19]*(S[5]*(S[10]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(16*
 V[29]-8*V[28])+24*S[0]-8*S[1])+V[27]*(16*(S[1]+S[2]-S[0])-32*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[1]-8*S[0])+V[29]*(16*(S[0]-
 S[1])))+S[0]*(4*S[0]-8*S[1])+4*S[3])));
C[39]=+S[19]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[26]*(V[26]*(
 V[28]-V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+
 S[7]-S[8])+V[26]*(V[27]*(24*(V[29]-V[28])+36*(V[27]-V[26]))+24*V[29]*
 V[28])+V[28]*(V[29]*(36*(V[28]-V[29])-24*V[27])))))))));
C[38]=+S[5]*(S[4]*(S[14]*(V[24]*(V[24]*(16*(V[26]*(V[28]-V[29]-V[27])+V[27]*
 (V[29]-V[28])-V[29]*V[28])+8*(S[1]+S[2]+S[0]+S[11]))+V[25]*(32*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+16*(-S[1]-S[2]-S[0]-
 S[11])))+S[17]*(16*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*
 V[28])+8*(S[1]+S[2]+S[0]+S[11])))));
C[37]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(96*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+48*(V[24]*(-S[1]-S[2]-S[0]-S[11])+
 V[25]*(S[1]+S[2]+S[0]+S[11])))))))));
C[36]=+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(144*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28])+72*(S[1]+S[2]+S[0]+S[11]))))));
C[35]=+S[6]*(S[5]*(S[4]*(V[26]*(V[26]*(V[26]*(2*V[26]-8*V[27])+V[28]*(8*
 V[29]-4*V[28])+12*S[0]-4*S[1])+V[27]*(8*(S[1]+S[2]-S[0])-16*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(2*V[28]-8*V[29])+12*S[1]-4*S[0])+V[29]*(8*(S[0]-
 S[1])))+S[0]*(2*S[0]-4*S[1])+2*S[3])));
C[34]=+S[4]*(S[10]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[26]*(V[26]*
 (V[28]-V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+
 S[7]-S[8])+V[26]*(V[27]*(24*(V[29]-V[28])+36*(V[27]-V[26]))+24*V[29]*
 V[28])+V[28]*(V[29]*(36*(V[28]-V[29])-24*V[27]))))))))));
C[33]=+S[16]*(S[15]*(S[4]*(S[14]*(S[13]*(S[12]*(36*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+18*(S[1]+S[2]+S[0]+S[11])))))));
C[32]=+S[5]*(S[4]*(S[14]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+4*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(16*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[1]+S[2]+S[0]+
 S[11])))+S[17]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+4*(-S[1]-S[2]-S[0]-S[11])))+S[10]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*
 V[27])+V[28]*(32*V[29]-16*V[28])+48*S[0]-16*S[1])+V[27]*(32*(S[1]+S[2]-
 S[0])-64*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[1]-16*
 S[0])+V[29]*(32*(S[0]-S[1])))+S[0]*(8*S[0]-16*S[1])+8*S[3])));
C[31]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(24*(V[26]*(V[26]*(V[29]-
 V[28]-V[26])+S[1]+S[2])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[1]-S[2])+S[8]-
 S[7])+V[26]*(V[27]*(48*(V[28]-V[29])+72*(V[26]-V[27]))-48*V[29]*V[28])+
 V[28]*(V[29]*(72*(V[29]-V[28])+48*V[27])))+V[31]*(48*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[1]-S[2]-S[0]-S[11])+
 V[25]*(S[1]+S[2]+S[0]+S[11])))))))));
C[30]=+S[5]*(S[14]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-
 V[29])+V[29]*V[28])+4*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(16*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[1]+S[2]+S[0]+S[11])))+
 S[17]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+4*(-
 S[1]-S[2]-S[0]-S[11])))+S[10]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+
 V[28]*(32*V[29]-16*V[28])+48*S[0]-16*S[1])+V[27]*(32*(S[1]+S[2]-S[0])-64*
 V[29]*V[28]))+V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[1]-16*S[0])+
 V[29]*(32*(S[0]-S[1])))+S[0]*(8*S[0]-16*S[1])+8*S[3]))+S[16]*(S[15]*(S[4]*(
 S[18]*(S[12]*(36*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*
 V[28])+18*(S[1]+S[2]+S[0]+S[11]))))));
C[29]=+S[9]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(24*(V[26]*(V[26]*(V[29]-V[28]-
 V[26])+S[1]+S[2])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[1]-S[2])+S[8]-S[7])+
 V[26]*(V[27]*(48*(V[28]-V[29])+72*(V[26]-V[27]))-48*V[29]*V[28])+V[28]*(
 V[29]*(72*(V[29]-V[28])+48*V[27])))+V[31]*(48*(V[24]*(V[26]*(V[29]-V[28]+
 V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[1]-S[2]-S[0]-S[11])+V[25]*(
 S[1]+S[2]+S[0]+S[11]))))))));
C[28]=+S[5]*(S[4]*(S[14]*(V[24]*(V[24]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+2*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(8*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+4*(S[1]+S[2]+S[0]+
 S[11])))+S[17]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+2*(-S[1]-S[2]-S[0]-S[11])))+S[10]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*
 V[27])+V[28]*(16*V[29]-8*V[28])+24*S[0]-8*S[1])+V[27]*(16*(S[1]+S[2]-S[0])-
 32*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[1]-8*S[0])+
 V[29]*(16*(S[0]-S[1])))+S[0]*(4*S[0]-8*S[1])+4*S[3])));
C[27]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(12*(V[26]*(V[26]*(V[29]-
 V[28]-V[26])+S[1]+S[2])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[1]-S[2])+S[8]-
 S[7])+V[26]*(V[27]*(24*(V[28]-V[29])+36*(V[26]-V[27]))-24*V[29]*V[28])+
 V[28]*(V[29]*(36*(V[29]-V[28])+24*V[27])))+V[31]*(24*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+12*(V[24]*(-S[1]-S[2]-S[0]-S[11])+
 V[25]*(S[1]+S[2]+S[0]+S[11])))))))));
C[26]=+S[5]*(S[4]*(S[10]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+V[28]*(32*
 V[29]-16*V[28])+48*S[0]-16*S[1])+V[27]*(32*(S[1]+S[2]-S[0])-64*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[1]-16*S[0])+V[29]*(32*(
 S[0]-S[1])))+S[0]*(8*S[0]-16*S[1])+8*S[3])));
C[25]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[26]*(V[26]*(V[28]-
 V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+S[7]-
 S[8])+V[26]*(V[27]*(48*(V[29]-V[28])+72*(V[27]-V[26]))+48*V[29]*V[28])+
 V[28]*(V[29]*(72*(V[28]-V[29])-48*V[27])))))))));
C[24]=+S[5]*(S[14]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-
 V[29])+V[29]*V[28])+4*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(16*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[1]+S[2]+S[0]+S[11])))+
 S[17]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+4*(-
 S[1]-S[2]-S[0]-S[11]))))+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(72*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+36*(S[1]+S[2]+S[0]+
 S[11]))))));
C[23]=+S[5]*(S[10]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+V[28]*(32*V[29]-
 16*V[28])+48*S[0]-16*S[1])+V[27]*(32*(S[1]+S[2]-S[0])-64*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[1]-16*S[0])+V[29]*(32*(S[0]-
 S[1])))+S[0]*(8*S[0]-16*S[1])+8*S[3]));
C[22]=+S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[26]*(V[26]*(V[28]-V[29]+
 V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+S[7]-S[8])+
 V[26]*(V[27]*(48*(V[29]-V[28])+72*(V[27]-V[26]))+48*V[29]*V[28])+V[28]*(
 V[29]*(72*(V[28]-V[29])-48*V[27]))))))));
C[21]=+S[19]*(S[5]*(S[10]*(V[26]*(V[26]*(V[26]*(2*V[26]-8*V[27])+V[28]*(8*
 V[29]-4*V[28])+12*S[0]-4*S[1])+V[27]*(8*(S[1]+S[2]-S[0])-16*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(2*V[28]-8*V[29])+12*S[1]-4*S[0])+V[29]*(8*(S[0]-
 S[1])))+S[0]*(2*S[0]-4*S[1])+2*S[3])));
C[20]=+S[19]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(6*(V[26]*(V[26]*(V[28]-
 V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+S[7]-
 S[8])+V[26]*(V[27]*(12*(V[29]-V[28])+18*(V[27]-V[26]))+12*V[29]*V[28])+
 V[28]*(V[29]*(18*(V[28]-V[29])-12*V[27])))))))));
C[19]=+S[5]*(S[4]*(S[10]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(16*
 V[29]-8*V[28])+24*S[0]-8*S[1])+V[27]*(16*(S[1]+S[2]-S[0])-32*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[1]-8*S[0])+V[29]*(16*(S[0]-
 S[1])))+S[0]*(4*S[0]-8*S[1])+4*S[3])));
C[18]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[26]*(V[26]*(V[28]-
 V[29]+V[26])-S[1]-S[2])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[1]+S[2])+S[7]-
 S[8])+V[26]*(V[27]*(24*(V[29]-V[28])+36*(V[27]-V[26]))+24*V[29]*V[28])+
 V[28]*(V[29]*(36*(V[28]-V[29])-24*V[27])))))))));
C[17]=+S[5]*(S[4]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*V[29]-
 32*V[28])+96*S[0]-32*S[1])+V[27]*(64*(S[1]+S[2]-S[0])-128*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[1]-32*S[0])+V[29]*(64*(S[0]-
 S[1])))+S[0]*(16*S[0]-32*S[1])+16*S[3]));
C[16]=+S[5]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*V[29]-32*
 V[28])+96*S[0]-32*S[1])+V[27]*(64*(S[1]+S[2]-S[0])-128*V[29]*V[28]))+V[28]*
 (V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[1]-32*S[0])+V[29]*(64*(S[0]-S[1])))+
 S[0]*(16*S[0]-32*S[1])+16*S[3]);
C[15]=+S[19]*(S[5]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(16*V[29]-
 8*V[28])+24*S[0]-8*S[1])+V[27]*(16*(S[1]+S[2]-S[0])-32*V[29]*V[28]))+V[28]*
 (V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[1]-8*S[0])+V[29]*(16*(S[0]-S[1])))+
 S[0]*(4*S[0]-8*S[1])+4*S[3]));
C[14]=+S[5]*(S[4]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+V[28]*(32*V[29]-
 16*V[28])+48*S[0]-16*S[1])+V[27]*(32*(S[1]+S[2]-S[0])-64*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[1]-16*S[0])+V[29]*(32*(S[0]-
 S[1])))+S[0]*(8*S[0]-16*S[1])+8*S[3]));
C[13]=+S[5]*(S[4]*(S[14]*(V[24]*(V[24]*(8*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+4*(S[1]+S[2]+S[0]+S[11]))+V[25]*(16*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+8*(-S[1]-S[2]-S[0]-
 S[11])))+S[17]*(8*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*
 V[28])+4*(S[1]+S[2]+S[0]+S[11])))));
C[12]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[1]-S[2]-S[0]-S[11])+
 V[25]*(S[1]+S[2]+S[0]+S[11])))))))));
C[11]=+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(72*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28])+36*(S[1]+S[2]+S[0]+S[11]))))));
C[10]=+S[5]*(S[14]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-
 V[29])+V[29]*V[28])+4*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(16*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[1]+S[2]+S[0]+S[11])))+
 S[17]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+4*(-
 S[1]-S[2]-S[0]-S[11]))))+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(36*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+18*(S[1]+S[2]+S[0]+
 S[11]))))));
C[9]=+S[9]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[24]*(V[26]*(V[29]-V[28]+
 V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[1]-S[2]-S[0]-S[11])+V[25]*(
 S[1]+S[2]+S[0]+S[11]))))))));
C[8]=+S[16]*(S[15]*(S[18]*(S[12]*(72*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+36*(S[1]+S[2]+S[0]+S[11])))));
C[7]=+S[19]*(S[5]*(S[14]*(V[24]*(V[24]*(2*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+S[1]+S[2]+S[0]+S[11])+V[25]*(4*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+2*(-S[1]-S[2]-S[0]-S[11])))+
 S[17]*(2*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+S[1]+
 S[2]+S[0]+S[11]))));
C[6]=+S[19]*(S[9]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(12*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+6*(V[24]*(-S[1]-S[2]-S[0]-S[11])+
 V[25]*(S[1]+S[2]+S[0]+S[11])))))))));
C[5]=+S[4]*(S[5]*(S[14]*(V[24]*(V[24]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+2*(-S[1]-S[2]-S[0]-S[11]))+V[25]*(8*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+4*(S[1]+S[2]+S[0]+
 S[11])))+S[17]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+2*(-S[1]-S[2]-S[0]-S[11]))))+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(18*(
 V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+9*(S[1]+S[2]+
 S[0]+S[11])))))));
C[4]=+S[5]*(S[4]*(S[14]*(V[24]*(V[24]*(4*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+2*(S[1]+S[2]+S[0]+S[11]))+V[25]*(8*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+4*(-S[1]-S[2]-S[0]-S[11])))+
 S[17]*(4*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+2*(
 S[1]+S[2]+S[0]+S[11])))));
C[3]=+S[4]*(S[9]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(24*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+12*(V[24]*(-S[1]-S[2]-S[0]-S[11])+
 V[25]*(S[1]+S[2]+S[0]+S[11])))))))));
C[2]=+S[16]*(S[15]*(S[4]*(S[18]*(S[12]*(36*(V[26]*(V[28]-V[29]-V[27])+V[27]*
 (V[29]-V[28])-V[29]*V[28])+18*(S[1]+S[2]+S[0]+S[11]))))));
S[20]=V[17]*V[17]*V[17]*V[17]*V[17]*V[17]*V[17]*V[17];
C[1]=+12*S[20]*S[5];
S[21]=V[49]*V[49];
C[0]=+S[21]*S[6];
}
REAL F443_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  B                 D             
         D                 B     /!==<==============@==<==           
       ==<==@==============<==\  |!  P6             |  P1            
         P1 |              P5 |  |!                 |                
            |                 |  |!  N2             |                
            |              N2 |/=+!==<==\          H|-PA             
           H|P7         /==<==+/ |!  P3 |           |                
            |           |  P3 |  |!     |           |                
            |           |     |  |!  e2 |  W+    t  |  U             
         U  |  t     W+ |  e2 | /+!==>==@--<2-@==<==@==<==           
       ==<==@==<==@-1<--@==>==+=/|!  P4   -PC | -PB    P2            
         P2    P8 |  P9    P4 |  |!           |                      
                  |           |  |!  B        |                      
                  |        B  \==+!==<========/                      
                  \========<=====/!  P5                              
                           P6     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[57];REAL S[1];REAL tmp[5];                                    
     
if(CalcConst) C443(C);
N=-C[0];
D=+C[1];
tmp[0]=+V[50]*(V[50]*(DP[4]*(V[50]*(V[50]*(C[8]*(DP[6]+DP[10]-DP[14])+
 C[46])+C[29]*(DP[6]+DP[10])+C[22]*(-DP[7]-DP[11])+C[47]+C[44]*DP[0]-C[9]*
 DP[14])+C[16]*(DP[0]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11])+DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11]))+C[30]*(-DP[6]-DP[10])+C[23]*(-DP[7]-DP[11])+
 C[45]*DP[0]-C[48]+C[10]*DP[14])+V[50]*(V[50]*(C[8]*(DP[0]*(-DP[9]-DP[13])+
 DP[3]*(-DP[7]-DP[11])+DP[11]*DP[9]+DP[13]*DP[7])+C[49]*DP[3]*DP[0])+C[9]*(
 DP[0]*(-DP[9]-DP[13])+DP[3]*(-DP[7]-DP[11])+DP[11]*DP[9]+DP[13]*DP[7])+
 C[50]*DP[3]*DP[0])+C[11]*(DP[2]*(DP[14]-DP[6]-DP[10])+DP[0]*(DP[8]+DP[12])+
 DP[1]*(DP[7]+DP[11])-DP[11]*DP[8]-DP[12]*DP[7])+DP[0]*(C[10]*(DP[9]+
 DP[13])-C[36]*DP[1]-C[51]*DP[3])+DP[3]*(C[24]*(DP[7]+DP[11]))+C[10]*(-
 DP[11]*DP[9]-DP[13]*DP[7])-C[54]*DP[2])+C[12]*(DP[7]*(DP[1]+DP[3]-DP[12])+
 DP[11]*(DP[1]+DP[3]-DP[8])+DP[0]*(DP[8]+DP[12])+DP[14]*DP[2])+DP[4]*(C[27]*
 (-DP[6]-DP[10])+C[18]*(DP[7]+DP[11])+C[3]*DP[14]-C[34]-C[25]*DP[0])+DP[2]*(
 C[31]*(-DP[6]-DP[10])+C[25]*(DP[7]+DP[11])-C[55]-C[52]*DP[0])+DP[0]*(C[37]*
 (-DP[1]-DP[3])+C[3]*(DP[9]+DP[13]))+C[3]*(-DP[11]*DP[9]-DP[13]*DP[7]));
S[0]=V[50]*V[50];
tmp[1]=+DP[3]*(DP[2]*(V[50]*(V[50]*(C[2]*(DP[14]-DP[6]-DP[10])-C[33])+C[27]*
 (-DP[6]-DP[10])+C[18]*(DP[7]+DP[11])+C[3]*DP[14]-C[34]-C[25]*DP[0])+C[14]*(
 DP[0]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-DP[11])+DP[7]*(-
 DP[10]-DP[11]))+DP[5]*(C[2]*(DP[6]+DP[10]-DP[14])+C[33])+C[28]*(DP[6]+
 DP[10])+C[19]*(DP[7]+DP[11])+C[4]*DP[14]-C[35]-C[26]*DP[0])+C[2]*(DP[5]*(
 DP[0]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[4]*(DP[6]+DP[10]-DP[14])+DP[7]*(
 DP[12]-DP[3]+DP[13])+DP[11]*(DP[8]-DP[3]+DP[9]))+S[0]*(DP[0]*(DP[8]+
 DP[12])-DP[11]*DP[8]-DP[12]*DP[7]))+DP[0]*(V[50]*(C[3]*(DP[8]+DP[12]))+
 C[4]*(DP[8]+DP[12])+C[11]*DP[5]*DP[3])+V[50]*(C[3]*(-DP[11]*DP[8]-DP[12]*
 DP[7]))+C[4]*(-DP[11]*DP[8]-DP[12]*DP[7])+C[33]*DP[5]*DP[4])+DP[5]*(DP[0]*(
 V[50]*(C[18]*(-DP[6]-DP[7]-DP[10]-DP[11])+V[50]*(C[33]-C[2]*DP[14])+C[34]+
 C[25]*DP[0]-C[3]*DP[14])+C[14]*(DP[0]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11])+
 DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[19]*(-DP[6]-DP[7]-DP[10]-
 DP[11])+DP[5]*(C[2]*DP[14]-C[33])+C[26]*DP[0]-C[41]+C[5]*DP[14])+V[50]*(
 V[50]*(C[2]*(DP[10]*DP[7]+DP[11]*DP[6]))+C[3]*(DP[10]*DP[7]+DP[11]*DP[6]))+
 DP[5]*(C[2]*(-DP[10]*DP[7]-DP[11]*DP[6]))+C[5]*(-DP[10]*DP[7]-DP[11]*
 DP[6]));
tmp[2]=+DP[5]*(DP[0]*(C[3]*(DP[1]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[3]*(-
 DP[8]-DP[9]-DP[12]-DP[13])+DP[14]*DP[5])+DP[5]*(C[18]*(DP[6]+DP[7]+DP[10]+
 DP[11])-C[34]-C[25]*DP[0])+DP[1]*(C[25]*(DP[2]+DP[4])+C[12]*DP[1]+C[37]*
 DP[3])+C[20]*(DP[6]+DP[7]+DP[10]+DP[11])+DP[3]*(C[25]*(DP[2]+DP[4])+C[12]*
 DP[3])+C[6]*DP[14]-C[42]-C[39]*DP[0])+DP[1]*(C[3]*(DP[7]*(DP[12]-DP[1]+
 DP[13])+DP[11]*(DP[8]-DP[1]+DP[9])+DP[14]*(-DP[2]-DP[4]))+DP[2]*(C[27]*(
 DP[6]+DP[10])+C[18]*(-DP[7]-DP[11])+C[34])+DP[4]*(C[27]*(DP[6]+DP[10])+
 C[18]*(-DP[7]-DP[11])+C[34])+DP[3]*(C[12]*(-DP[7]-DP[11])))+DP[3]*(C[3]*(
 DP[7]*(DP[12]-DP[3]+DP[13])+DP[11]*(DP[8]-DP[3]+DP[9])+DP[14]*(-DP[2]-
 DP[4]))+DP[2]*(C[27]*(DP[6]+DP[10])+C[18]*(-DP[7]-DP[11])+C[34])+DP[4]*(
 C[27]*(DP[6]+DP[10])+C[18]*(-DP[7]-DP[11])+C[34]))+DP[5]*(C[3]*(-DP[10]*
 DP[7]-DP[11]*DP[6]))+C[6]*(-DP[10]*DP[7]-DP[11]*DP[6]));
tmp[3]=+DP[1]*(DP[2]*(C[14]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+
 C[28]*(-DP[6]-DP[10])+C[19]*(-DP[7]-DP[11])+C[35]-C[4]*DP[14])+DP[4]*(
 C[14]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[28]*(-DP[6]-DP[10])+
 C[19]*(-DP[7]-DP[11])+C[35]-C[4]*DP[14])+C[4]*(DP[7]*(DP[12]-DP[1]+DP[13])+
 DP[11]*(DP[8]-DP[1]+DP[9]))+DP[3]*(C[13]*(-DP[7]-DP[11])))+DP[3]*(DP[2]*(
 C[14]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[28]*(-DP[6]-DP[10])+
 C[19]*(-DP[7]-DP[11])+C[35]-C[4]*DP[14])+DP[4]*(C[14]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11]))+C[28]*(-DP[6]-DP[10])+C[19]*(-DP[7]-DP[11])+
 C[35]-C[4]*DP[14])+C[4]*(DP[7]*(DP[12]-DP[3]+DP[13])+DP[11]*(DP[8]-DP[3]+
 DP[9])))+DP[5]*(C[4]*(-DP[10]*DP[7]-DP[11]*DP[6]))+C[7]*(-DP[10]*DP[7]-
 DP[11]*DP[6]);
tmp[4]=+V[50]*(V[50]*(DP[1]*(DP[0]*(DP[2]*(C[17]*(DP[6]-DP[0]+DP[7]+DP[10]+
 DP[11])-C[53])+DP[4]*(C[14]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])-C[26])+DP[5]*
 (C[2]*(-DP[8]-DP[9]-DP[12]-DP[13])+C[11]*DP[1]+C[36]*DP[3])+C[38]*(-DP[1]-
 DP[3])+C[13]*(DP[8]+DP[12])+C[4]*(DP[9]+DP[13]))+DP[5]*(C[2]*(DP[2]*(DP[6]+
 DP[10]-DP[14])+DP[4]*(DP[6]+DP[10]-DP[14])+DP[7]*(DP[12]-DP[1]+DP[13])+
 DP[11]*(DP[8]-DP[1]+DP[9]))+DP[3]*(C[11]*(-DP[7]-DP[11]))+C[33]*(DP[2]+
 DP[4]))+DP[2]*(C[17]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))+C[32]*
 (DP[6]+DP[10])+C[26]*(DP[7]+DP[11])+C[13]*DP[14]-C[56])+DP[4]*(C[14]*(
 DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))+C[28]*(DP[6]+DP[10])+C[19]*(
 DP[7]+DP[11])+C[4]*DP[14]-C[35])+C[13]*(DP[7]*(DP[1]+DP[3]-DP[12])+DP[11]*(
 DP[1]+DP[3]-DP[8]))+C[4]*(-DP[11]*DP[9]-DP[13]*DP[7])+tmp[0])+tmp[1])+
 tmp[2]);
R=+DP[5]*(DP[0]*(C[14]*(DP[1]*(DP[2]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11])+
 DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[3]*(DP[2]*(DP[0]-DP[6]-DP[7]-
 DP[10]-DP[11])+DP[4]*(DP[0]-DP[6]-DP[7]-DP[10]-DP[11]))+DP[5]*(DP[0]*(
 DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-
 DP[11])))+C[15]*(DP[0]*(DP[6]-DP[0]+DP[7]+DP[10]+DP[11])+DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11]))+C[4]*(DP[1]*(-DP[8]-DP[9]-DP[12]-DP[13])+
 DP[3]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[14]*DP[5])+DP[5]*(C[19]*(DP[6]+DP[7]+
 DP[10]+DP[11])-C[35]-C[26]*DP[0])+DP[1]*(C[26]*(DP[2]+DP[4])+C[13]*DP[1]+
 C[38]*DP[3])+C[21]*(DP[6]+DP[7]+DP[10]+DP[11])+DP[3]*(C[26]*(DP[2]+DP[4])+
 C[13]*DP[3])+C[7]*DP[14]-C[43]-C[40]*DP[0])+tmp[3])+tmp[4];
R*=(N/D)*Q1[9]*Q1[1]*Q2[2]*Q1[8]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
