/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F768_out;
static void C768(REAL * C)
{
REAL* V=va_out;
REAL S[21];                                                                 
     
S[0]=V[29]*V[29];
S[1]=V[28]*V[28];
S[2]=V[27]*V[27];
S[3]=V[26]*V[26];
S[4]=V[25]*V[25];
S[5]=V[29]*V[29]*V[29]*V[29];
S[6]=V[14]*V[14];
S[7]=V[12]*V[12];
S[8]=V[1]*V[1];
S[9]=V[9]*V[9]*V[9]*V[9];
C[49]=+S[9]*(S[8]*(S[6]*(S[7]*(V[24]*(V[24]*(2*(V[26]*(V[29]-V[28]+V[27])+
 V[27]*(V[28]-V[29])+V[29]*V[28])-S[0]-S[1]-S[2]-S[3])+V[25]*(4*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+2*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(2*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])-S[0]-S[1]-S[2]-S[3]))+S[6]*(V[26]*(V[26]*(V[26]*(V[26]-4*V[27])+
 V[28]*(4*V[29]-2*V[28])+6*S[2]-2*S[0])+V[27]*(4*(S[0]+S[1]-S[2])-8*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(V[28]-4*V[29])+6*S[0]-2*S[2])+V[29]*(4*(S[2]-
 S[0])))+S[2]*(S[2]-2*S[0])+S[5]))));
S[10]=V[28]*V[28]*V[28];
S[11]=V[29]*V[29]*V[29];
S[12]=V[17]*V[17];
C[48]=+S[9]*(S[6]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(6*(V[26]*(V[26]*(
 V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-S[1])+
 S[10]-S[11])+V[26]*(V[27]*(12*(V[28]-V[29])+18*(V[26]-V[27]))-12*V[29]*
 V[28])+V[28]*(V[29]*(18*(V[29]-V[28])+12*V[27])))+V[31]*(12*(V[24]*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+6*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3]))))))))));
S[13]=V[36]*V[36];
S[14]=V[31]*V[31];
S[15]=V[9]*V[9];
S[16]=V[2]*V[2];
S[17]=V[17]*V[17]*V[17]*V[17];
S[18]=V[30]*V[30];
C[47]=+S[15]*(S[6]*(S[8]*(S[7]*(V[24]*(V[24]*(4*(V[26]*(V[29]-V[28]+V[27])+
 V[27]*(V[28]-V[29])+V[29]*V[28])+2*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(8*(V[26]*
 (V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+4*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+2*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(2*V[26]-8*
 V[27])+V[28]*(8*V[29]-4*V[28])+12*S[2]-4*S[0])+V[27]*(8*(S[0]+S[1]-S[2])-
 16*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(2*V[28]-8*V[29])+12*S[0]-4*S[2])+
 V[29]*(8*(S[2]-S[0])))+S[2]*(2*S[2]-4*S[0])+2*S[5]))+S[17]*(S[16]*(S[15]*(
 S[14]*(S[13]*(18*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*
 V[28])+9*(S[0]+S[1]+S[2]+S[3])))))))+S[17]*(S[16]*(S[15]*(S[7]*(S[18]*(
 S[13]*(18*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+9*(-
 S[0]-S[1]-S[2]-S[3]))))))));
C[46]=+S[9]*(S[8]*(S[7]*(V[24]*(V[24]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+2*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(8*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+4*(S[0]+S[1]+S[2]+S[3])))+
 S[4]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+2*(-
 S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(
 16*V[29]-8*V[28])+24*S[2]-8*S[0])+V[27]*(16*(S[0]+S[1]-S[2])-32*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[0]-8*S[2])+V[29]*(16*(
 S[2]-S[0])))+S[2]*(4*S[2]-8*S[0])+4*S[5])));
C[45]=+S[9]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(12*(V[26]*(V[26]*(
 V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-S[1])+
 S[10]-S[11])+V[26]*(V[27]*(24*(V[28]-V[29])+36*(V[26]-V[27]))-24*V[29]*
 V[28])+V[28]*(V[29]*(36*(V[29]-V[28])+24*V[27])))+V[31]*(24*(V[24]*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+12*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[44]=+S[15]*(S[8]*(S[7]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+4*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(16*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+4*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*
 V[27])+V[28]*(32*V[29]-16*V[28])+48*S[2]-16*S[0])+V[27]*(32*(S[0]+S[1]-
 S[2])-64*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[0]-16*
 S[2])+V[29]*(32*(S[2]-S[0])))+S[2]*(8*S[2]-16*S[0])+8*S[5]))+S[17]*(S[16]*(
 S[15]*(S[14]*(S[13]*(36*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-
 V[29]*V[28])+18*(S[0]+S[1]+S[2]+S[3])))))));
C[43]=+S[9]*(S[8]*(S[6]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(16*
 V[29]-8*V[28])+24*S[2]-8*S[0])+V[27]*(16*(S[0]+S[1]-S[2])-32*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[0]-8*S[2])+V[29]*(16*(S[2]-
 S[0])))+S[2]*(4*S[2]-8*S[0])+4*S[5])));
C[42]=+S[9]*(S[12]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[26]*(V[26]*(
 V[28]-V[29]+V[26])-S[0]-S[1])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[0]+S[1])+
 S[11]-S[10])+V[26]*(V[27]*(24*(V[29]-V[28])+36*(V[27]-V[26]))+24*V[29]*
 V[28])+V[28]*(V[29]*(36*(V[28]-V[29])-24*V[27])))))))));
C[41]=+S[9]*(S[8]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+V[28]*(32*V[29]-
 16*V[28])+48*S[2]-16*S[0])+V[27]*(32*(S[0]+S[1]-S[2])-64*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[0]-16*S[2])+V[29]*(32*(S[2]-
 S[0])))+S[2]*(8*S[2]-16*S[0])+8*S[5]));
C[40]=+S[9]*(S[8]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*V[27])+V[28]*(16*V[29]-8*
 V[28])+24*S[2]-8*S[0])+V[27]*(16*(S[0]+S[1]-S[2])-32*V[29]*V[28]))+V[28]*(
 V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[0]-8*S[2])+V[29]*(16*(S[2]-S[0])))+
 S[2]*(4*S[2]-8*S[0])+4*S[5]));
C[39]=+S[8]*(S[15]*(S[6]*(S[7]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+
 V[27]*(V[28]-V[29])+V[29]*V[28])+4*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(16*(
 V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[0]+S[1]+
 S[2]+S[3])))+S[4]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+4*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*
 V[27])+V[28]*(16*V[29]-8*V[28])+24*S[2]-8*S[0])+V[27]*(16*(S[0]+S[1]-S[2])-
 32*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[0]-8*S[2])+
 V[29]*(16*(S[2]-S[0])))+S[2]*(4*S[2]-8*S[0])+4*S[5]))));
C[38]=+S[15]*(S[6]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(24*(V[26]*(
 V[26]*(V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-
 S[1])+S[10]-S[11])+V[26]*(V[27]*(48*(V[28]-V[29])+72*(V[26]-V[27]))-48*
 V[29]*V[28])+V[28]*(V[29]*(72*(V[29]-V[28])+48*V[27])))+V[31]*(48*(V[24]*(
 V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[0]-S[1]-
 S[2]-S[3])+V[25]*(S[0]+S[1]+S[2]+S[3]))))))))));
C[37]=+S[17]*(S[16]*(S[15]*(S[13]*(72*(S[7]*(S[18]*(V[26]*(V[29]-V[28]+
 V[27])+V[27]*(V[28]-V[29])+V[29]*V[28]))+S[6]*(S[14]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])))+36*(S[7]*(S[18]*(-S[0]-S[1]-S[2]-
 S[3]))+S[6]*(S[14]*(S[0]+S[1]+S[2]+S[3])))))));
C[36]=+S[6]*(S[8]*(S[7]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+4*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(16*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+4*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(4*V[26]-16*
 V[27])+V[28]*(16*V[29]-8*V[28])+24*S[2]-8*S[0])+V[27]*(16*(S[0]+S[1]-S[2])-
 32*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(4*V[28]-16*V[29])+24*S[0]-8*S[2])+
 V[29]*(16*(S[2]-S[0])))+S[2]*(4*S[2]-8*S[0])+4*S[5]))+S[17]*(S[16]*(S[15]*(
 S[14]*(S[13]*(36*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*
 V[28])+18*(S[0]+S[1]+S[2]+S[3])))))))+S[17]*(S[16]*(S[15]*(S[7]*(S[18]*(
 S[13]*(36*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+18*(-
 S[0]-S[1]-S[2]-S[3])))))));
C[35]=+S[6]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(24*(V[26]*(V[26]*(
 V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-S[1])+
 S[10]-S[11])+V[26]*(V[27]*(48*(V[28]-V[29])+72*(V[26]-V[27]))-48*V[29]*
 V[28])+V[28]*(V[29]*(72*(V[29]-V[28])+48*V[27])))+V[31]*(48*(V[24]*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[34]=+S[17]*(S[16]*(S[13]*(72*(S[7]*(S[18]*(V[26]*(V[29]-V[28]+V[27])+
 V[27]*(V[28]-V[29])+V[29]*V[28]))+S[6]*(S[14]*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28])))+36*(S[7]*(S[18]*(-S[0]-S[1]-S[2]-S[3]))+
 S[6]*(S[14]*(S[0]+S[1]+S[2]+S[3]))))));
C[33]=+S[8]*(S[15]*(S[7]*(V[24]*(V[24]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*
 (V[28]-V[29])+V[29]*V[28])+8*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(32*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+16*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+8*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*
 V[27])+V[28]*(64*V[29]-32*V[28])+96*S[2]-32*S[0])+V[27]*(64*(S[0]+S[1]-
 S[2])-128*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[0]-32*
 S[2])+V[29]*(64*(S[2]-S[0])))+S[2]*(16*S[2]-32*S[0])+16*S[5])));
C[32]=+S[15]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(48*(V[26]*(V[26]*(
 V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-S[1])+
 S[10]-S[11])+V[26]*(V[27]*(96*(V[28]-V[29])+144*(V[26]-V[27]))-96*V[29]*
 V[28])+V[28]*(V[29]*(144*(V[29]-V[28])+96*V[27])))+V[31]*(96*(V[24]*(V[26]*
 (V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+48*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[31]=+S[8]*(S[7]*(V[24]*(V[24]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-
 V[29])+V[29]*V[28])+8*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(32*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3])))+
 S[4]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+8*(-
 S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*
 (64*V[29]-32*V[28])+96*S[2]-32*S[0])+V[27]*(64*(S[0]+S[1]-S[2])-128*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[0]-32*S[2])+V[29]*(64*
 (S[2]-S[0])))+S[2]*(16*S[2]-32*S[0])+16*S[5]))+S[17]*(S[16]*(S[15]*(S[14]*(
 S[13]*(72*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+36*(
 S[0]+S[1]+S[2]+S[3]))))));
C[30]=+S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(48*(V[26]*(V[26]*(V[29]-
 V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-S[1])+S[10]-
 S[11])+V[26]*(V[27]*(96*(V[28]-V[29])+144*(V[26]-V[27]))-96*V[29]*V[28])+
 V[28]*(V[29]*(144*(V[29]-V[28])+96*V[27])))+V[31]*(96*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+48*(V[24]*(-S[0]-S[1]-S[2]-S[3])+
 V[25]*(S[0]+S[1]+S[2]+S[3]))))))));
C[29]=+S[8]*(S[15]*(S[6]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*
 V[29]-32*V[28])+96*S[2]-32*S[0])+V[27]*(64*(S[0]+S[1]-S[2])-128*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[0]-32*S[2])+V[29]*(64*
 (S[2]-S[0])))+S[2]*(16*S[2]-32*S[0])+16*S[5])));
C[28]=+S[15]*(S[12]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[26]*(V[26]*(
 V[28]-V[29]+V[26])-S[0]-S[1])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[0]+S[1])+
 S[11]-S[10])+V[26]*(V[27]*(96*(V[29]-V[28])+144*(V[27]-V[26]))+96*V[29]*
 V[28])+V[28]*(V[29]*(144*(V[28]-V[29])-96*V[27])))))))));
C[27]=+S[8]*(S[6]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*V[29]-
 32*V[28])+96*S[2]-32*S[0])+V[27]*(64*(S[0]+S[1]-S[2])-128*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[0]-32*S[2])+V[29]*(64*(S[2]-
 S[0])))+S[2]*(16*S[2]-32*S[0])+16*S[5]));
C[26]=+S[12]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[26]*(V[26]*(V[28]-
 V[29]+V[26])-S[0]-S[1])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[0]+S[1])+S[11]-
 S[10])+V[26]*(V[27]*(96*(V[29]-V[28])+144*(V[27]-V[26]))+96*V[29]*V[28])+
 V[28]*(V[29]*(144*(V[28]-V[29])-96*V[27]))))))));
C[25]=+S[8]*(S[15]*(V[26]*(V[26]*(V[26]*(32*V[26]-128*V[27])+V[28]*(128*
 V[29]-64*V[28])+192*S[2]-64*S[0])+V[27]*(128*(S[0]+S[1]-S[2])-256*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(32*V[28]-128*V[29])+192*S[0]-64*S[2])+V[29]*(
 128*(S[2]-S[0])))+S[2]*(32*S[2]-64*S[0])+32*S[5]));
C[24]=+S[8]*(V[26]*(V[26]*(V[26]*(32*V[26]-128*V[27])+V[28]*(128*V[29]-64*
 V[28])+192*S[2]-64*S[0])+V[27]*(128*(S[0]+S[1]-S[2])-256*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(32*V[28]-128*V[29])+192*S[0]-64*S[2])+V[29]*(128*(
 S[2]-S[0])))+S[2]*(32*S[2]-64*S[0])+32*S[5]);
C[23]=+S[8]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*V[29]-32*
 V[28])+96*S[2]-32*S[0])+V[27]*(64*(S[0]+S[1]-S[2])-128*V[29]*V[28]))+V[28]*
 (V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[0]-32*S[2])+V[29]*(64*(S[2]-S[0])))+
 S[2]*(16*S[2]-32*S[0])+16*S[5]);
C[22]=+S[8]*(S[15]*(S[7]*(V[24]*(V[24]*(16*(V[26]*(V[28]-V[29]-V[27])+V[27]*
 (V[29]-V[28])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))+V[25]*(32*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+16*(-S[0]-S[1]-S[2]-
 S[3])))+S[4]*(16*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*
 V[28])+8*(S[0]+S[1]+S[2]+S[3])))));
C[21]=+S[15]*(S[12]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(96*(V[24]*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+48*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[20]=+S[17]*(S[16]*(S[15]*(S[14]*(S[13]*(144*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28])+72*(S[0]+S[1]+S[2]+S[3]))))));
C[19]=+S[8]*(S[7]*(V[24]*(V[24]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-
 V[29])+V[29]*V[28])+8*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(32*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3])))+
 S[4]*(16*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+8*(-
 S[0]-S[1]-S[2]-S[3]))))+S[17]*(S[16]*(S[15]*(S[14]*(S[13]*(72*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+36*(S[0]+S[1]+S[2]+
 S[3]))))));
C[18]=+S[12]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(96*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+48*(V[24]*(-S[0]-S[1]-S[2]-S[3])+
 V[25]*(S[0]+S[1]+S[2]+S[3]))))))));
C[17]=+S[17]*(S[16]*(S[14]*(S[13]*(144*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+72*(S[0]+S[1]+S[2]+S[3])))));
C[16]=+S[8]*(S[15]*(S[6]*(S[7]*(V[24]*(V[24]*(4*(V[26]*(V[29]-V[28]+V[27])+
 V[27]*(V[28]-V[29])+V[29]*V[28])+2*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(8*(V[26]*
 (V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+4*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(4*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+2*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(2*V[26]-8*
 V[27])+V[28]*(8*V[29]-4*V[28])+12*S[2]-4*S[0])+V[27]*(8*(S[0]+S[1]-S[2])-
 16*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(2*V[28]-8*V[29])+12*S[0]-4*S[2])+
 V[29]*(8*(S[2]-S[0])))+S[2]*(2*S[2]-4*S[0])+2*S[5]))));
C[15]=+S[15]*(S[6]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(12*(V[26]*(
 V[26]*(V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-
 S[1])+S[10]-S[11])+V[26]*(V[27]*(24*(V[28]-V[29])+36*(V[26]-V[27]))-24*
 V[29]*V[28])+V[28]*(V[29]*(36*(V[29]-V[28])+24*V[27])))+V[31]*(24*(V[24]*(
 V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+12*(V[24]*(-S[0]-S[1]-
 S[2]-S[3])+V[25]*(S[0]+S[1]+S[2]+S[3]))))))))));
C[14]=+S[17]*(S[16]*(S[15]*(S[13]*(36*(S[7]*(S[18]*(V[26]*(V[29]-V[28]+
 V[27])+V[27]*(V[28]-V[29])+V[29]*V[28]))+S[6]*(S[14]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])))+18*(S[7]*(S[18]*(-S[0]-S[1]-S[2]-
 S[3]))+S[6]*(S[14]*(S[0]+S[1]+S[2]+S[3])))))));
C[13]=+S[8]*(S[15]*(S[7]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+4*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(16*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+4*(-S[0]-S[1]-S[2]-S[3])))+S[6]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*
 V[27])+V[28]*(32*V[29]-16*V[28])+48*S[2]-16*S[0])+V[27]*(32*(S[0]+S[1]-
 S[2])-64*V[29]*V[28]))+V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[0]-16*
 S[2])+V[29]*(32*(S[2]-S[0])))+S[2]*(8*S[2]-16*S[0])+8*S[5])));
C[12]=+S[15]*(S[12]*(V[1]*(V[2]*(V[12]*(V[36]*(V[30]*(24*(V[26]*(V[26]*(
 V[29]-V[28]-V[26])+S[0]+S[1])+V[27]*(V[27]*(V[29]-V[28]+V[27])-S[0]-S[1])+
 S[10]-S[11])+V[26]*(V[27]*(48*(V[28]-V[29])+72*(V[26]-V[27]))-48*V[29]*
 V[28])+V[28]*(V[29]*(72*(V[29]-V[28])+48*V[27])))+V[31]*(48*(V[24]*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[11]=+S[8]*(S[15]*(S[6]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+V[28]*(32*
 V[29]-16*V[28])+48*S[2]-16*S[0])+V[27]*(32*(S[0]+S[1]-S[2])-64*V[29]*
 V[28]))+V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[0]-16*S[2])+V[29]*(32*(
 S[2]-S[0])))+S[2]*(8*S[2]-16*S[0])+8*S[5])));
C[10]=+S[15]*(S[12]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[26]*(V[26]*(
 V[28]-V[29]+V[26])-S[0]-S[1])+V[27]*(V[27]*(V[28]-V[29]-V[27])+S[0]+S[1])+
 S[11]-S[10])+V[26]*(V[27]*(48*(V[29]-V[28])+72*(V[27]-V[26]))+48*V[29]*
 V[28])+V[28]*(V[29]*(72*(V[28]-V[29])-48*V[27])))))))));
C[9]=+S[8]*(S[15]*(V[26]*(V[26]*(V[26]*(16*V[26]-64*V[27])+V[28]*(64*V[29]-
 32*V[28])+96*S[2]-32*S[0])+V[27]*(64*(S[0]+S[1]-S[2])-128*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(16*V[28]-64*V[29])+96*S[0]-32*S[2])+V[29]*(64*(S[2]-
 S[0])))+S[2]*(16*S[2]-32*S[0])+16*S[5]));
C[8]=+S[8]*(S[15]*(V[26]*(V[26]*(V[26]*(8*V[26]-32*V[27])+V[28]*(32*V[29]-
 16*V[28])+48*S[2]-16*S[0])+V[27]*(32*(S[0]+S[1]-S[2])-64*V[29]*V[28]))+
 V[28]*(V[28]*(V[28]*(8*V[28]-32*V[29])+48*S[0]-16*S[2])+V[29]*(32*(S[2]-
 S[0])))+S[2]*(8*S[2]-16*S[0])+8*S[5]));
C[7]=+S[9]*(S[8]*(S[7]*(V[24]*(V[24]*(4*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+2*(S[0]+S[1]+S[2]+S[3]))+V[25]*(8*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+4*(-S[0]-S[1]-S[2]-S[3])))+
 S[4]*(4*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+2*(
 S[0]+S[1]+S[2]+S[3])))));
C[6]=+S[9]*(S[12]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(24*(V[24]*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-V[29]-
 V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+12*(V[24]*(-S[0]-S[1]-S[2]-S[3])+
 V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[5]=+S[15]*(S[8]*(S[7]*(V[24]*(V[24]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(
 V[28]-V[29])+V[29]*V[28])+4*(-S[0]-S[1]-S[2]-S[3]))+V[25]*(16*(V[26]*(
 V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+
 S[3])))+S[4]*(8*(V[26]*(V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*
 V[28])+4*(-S[0]-S[1]-S[2]-S[3]))))+S[17]*(S[16]*(S[15]*(S[14]*(S[13]*(36*(
 V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+18*(S[0]+S[1]+
 S[2]+S[3])))))));
C[4]=+S[8]*(S[15]*(S[7]*(V[24]*(V[24]*(8*(V[26]*(V[28]-V[29]-V[27])+V[27]*(
 V[29]-V[28])-V[29]*V[28])+4*(S[0]+S[1]+S[2]+S[3]))+V[25]*(16*(V[26]*(V[29]-
 V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+8*(-S[0]-S[1]-S[2]-S[3])))+
 S[4]*(8*(V[26]*(V[28]-V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28])+4*(
 S[0]+S[1]+S[2]+S[3])))));
C[3]=+S[15]*(S[12]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[24]*(V[26]*(
 V[29]-V[28]+V[27])+V[27]*(V[28]-V[29])+V[29]*V[28])+V[25]*(V[26]*(V[28]-
 V[29]-V[27])+V[27]*(V[29]-V[28])-V[29]*V[28]))+24*(V[24]*(-S[0]-S[1]-S[2]-
 S[3])+V[25]*(S[0]+S[1]+S[2]+S[3])))))))));
C[2]=+S[17]*(S[16]*(S[15]*(S[14]*(S[13]*(72*(V[26]*(V[28]-V[29]-V[27])+
 V[27]*(V[29]-V[28])-V[29]*V[28])+36*(S[0]+S[1]+S[2]+S[3]))))));
S[19]=V[17]*V[17]*V[17]*V[17]*V[17]*V[17]*V[17]*V[17];
C[1]=+2*S[19]*S[8];
S[20]=V[49]*V[49];
C[0]=+S[20]*S[6];
}
REAL F768_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         b                 d      !  d                 b             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           H|P7         /==>======!==>==\          H|-PA             
            |           |  P3     !  P3 |           |                
            |           |         !     |           |                
         u  |  t     W+ |  E2     !  E2 |  W+    t  |  u             
       ==>==@==>==@-1>--@==<======!==<==@-->2-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[50];REAL S[1];REAL tmp[3];                                    
     
if(CalcConst) C768(C);
N=-C[0];
D=+C[1];
S[0]=V[50]*V[50];
tmp[0]=+DP[12]*(V[50]*(V[50]*(DP[4]*(V[50]*(V[50]*(C[34]-C[17]*DP[6])+C[26]*
 (DP[7]-DP[0])+C[35]-C[30]*DP[6])+DP[0]*(C[24]*(DP[6]+DP[7])-C[27]-C[23]*
 DP[0])+DP[6]*(C[31]-C[23]*DP[6]-C[24]*DP[7])+DP[7]*(C[27]-C[23]*DP[7])-
 C[36])+V[50]*(V[50]*(C[17]*(DP[0]*(DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])))+
 C[18]*(DP[0]*(DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])))+C[20]*(DP[0]*(DP[1]-
 DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+C[19]*(DP[0]*(DP[3]-DP[9])+DP[7]*(
 DP[9]-DP[3]))-C[37]*DP[2])+DP[0]*(C[21]*(DP[1]-DP[8])+C[3]*(DP[3]-DP[9])+
 C[28]*DP[2]+C[10]*DP[4])+DP[7]*(C[21]*(DP[8]-DP[1])+C[3]*(DP[9]-DP[3])-
 C[28]*DP[2]-C[10]*DP[4])+DP[2]*(C[32]*DP[6]-C[38])+DP[4]*(C[12]*DP[6]-
 C[15]))+DP[0]*(DP[2]*(C[25]*(-DP[6]-DP[7])+C[29]+C[9]*DP[0])+DP[4]*(C[9]*(-
 DP[6]-DP[7])+C[11]+C[8]*DP[0])+DP[5]*(C[2]*(DP[8]-DP[1]-DP[3]+DP[9]))+
 C[22]*(DP[1]-DP[8])+C[4]*(DP[3]-DP[9]))+DP[7]*(DP[5]*(C[2]*(DP[1]+DP[3]-
 DP[8]-DP[9]))+DP[2]*(C[25]*DP[6]-C[29]+C[9]*DP[7])+DP[4]*(C[9]*DP[6]-C[11]+
 C[8]*DP[7])+C[22]*(DP[8]-DP[1])+C[4]*(DP[9]-DP[3]))+DP[6]*(DP[2]*(C[9]*
 DP[6]-C[33]-C[2]*DP[5])+DP[4]*(C[8]*DP[6]-C[13]-C[2]*DP[5]))+DP[2]*(C[39]+
 C[14]*DP[5])+DP[4]*(C[16]+C[14]*DP[5]));
tmp[1]=+V[50]*(DP[5]*(C[2]*(DP[13]*(DP[0]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[7]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-DP[2]-DP[4]))+S[0]*(DP[0]*(DP[14]-DP[10])+
 DP[7]*(DP[10]-DP[14])-DP[11]*DP[6])+DP[5]*(DP[0]*(DP[10]-DP[14])+DP[7]*(
 DP[14]-DP[10])+DP[11]*DP[6]))+DP[11]*(V[50]*(C[10]*(DP[7]-DP[0])+C[15]+
 C[14]*V[50]-C[12]*DP[6])+DP[0]*(C[9]*(DP[6]+DP[7])-C[11]-C[8]*DP[0])+DP[6]*
 (C[44]-C[8]*DP[6]-C[9]*DP[7])+DP[7]*(C[11]-C[8]*DP[7])-C[47]-C[14]*DP[5])+
 V[50]*(C[3]*(DP[0]*(DP[14]-DP[10])+DP[7]*(DP[10]-DP[14])))+C[5]*(DP[0]*(
 DP[10]-DP[14])+DP[7]*(DP[14]-DP[10]))+DP[13]*(C[14]*(DP[2]+DP[4])))+DP[13]*
 (DP[2]*(V[50]*(V[50]*(C[2]*DP[6]-C[14])+C[10]*(DP[0]-DP[7])+C[12]*DP[6]-
 C[15])+DP[0]*(C[9]*(-DP[6]-DP[7])+C[11]+C[8]*DP[0])+DP[6]*(C[8]*DP[6]-
 C[13]+C[9]*DP[7])+DP[7]*(C[8]*DP[7]-C[11])+C[16])+V[50]*(V[50]*(C[2]*(
 DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+C[3]*(DP[0]*(DP[1]-DP[8])+DP[7]*(
 DP[8]-DP[1])))+C[4]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+tmp[0]);
tmp[2]=+DP[5]*(DP[0]*(DP[12]*(DP[2]*(C[9]*(DP[6]+DP[7])-C[11]-C[8]*DP[0])+
 DP[4]*(C[9]*(DP[6]+DP[7])-C[11]-C[8]*DP[0])+C[4]*(DP[8]-DP[1]-DP[3]+
 DP[9]))+DP[13]*(DP[2]*(C[9]*(DP[6]+DP[7])-C[11]-C[8]*DP[0])+DP[4]*(C[9]*(
 DP[6]+DP[7])-C[11]-C[8]*DP[0])+C[4]*(DP[8]-DP[1]-DP[3]+DP[9]))+DP[11]*(
 DP[5]*(C[9]*(-DP[6]-DP[7])+C[11]+C[8]*DP[0])+C[41]*(-DP[6]-DP[7])+C[43]+
 C[40]*DP[0])+DP[5]*(C[4]*(DP[10]-DP[14]))+C[7]*(DP[10]-DP[14]))+DP[7]*(
 DP[12]*(C[4]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[2]*(C[11]-C[9]*DP[6]-C[8]*DP[7])+
 DP[4]*(C[11]-C[9]*DP[6]-C[8]*DP[7]))+DP[13]*(C[4]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[2]*(C[11]-C[9]*DP[6]-C[8]*DP[7])+DP[4]*(C[11]-C[9]*DP[6]-C[8]*
 DP[7]))+DP[11]*(DP[5]*(C[9]*DP[6]-C[11]+C[8]*DP[7])+C[41]*DP[6]-C[43]+
 C[40]*DP[7])+DP[5]*(C[4]*(DP[14]-DP[10]))+C[7]*(DP[14]-DP[10]))+DP[6]*(
 DP[6]*(C[8]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[40]*DP[11])+C[13]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])-C[46]*DP[11])+C[16]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[49]*DP[11]);
R=+DP[6]*(V[50]*(DP[5]*(C[3]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(DP[12]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(DP[14]-
 DP[10])))+C[10]*(DP[0]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5]))+DP[6]*(C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[45]*DP[11])+C[15]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])+C[6]*(DP[0]*(DP[10]-DP[14])+DP[7]*(DP[14]-DP[10]))+DP[11]*(
 C[42]*(DP[0]-DP[7])-C[48]))+tmp[1])+tmp[2]);
R*=(N/D)*Q2[5]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
