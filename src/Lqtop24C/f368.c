/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F368_out;
static void C368(REAL * C)
{
REAL* V=va_out;
REAL S[20];                                                                 
     
S[0]=V[37]*V[37];
S[1]=V[20]*V[20];
S[2]=V[22]*V[22];
S[3]=V[36]*V[36];
S[4]=V[12]*V[12];
S[5]=V[9]*V[9]*V[9]*V[9];
C[71]=+S[5]*(S[4]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(32*
 V[22]*V[2]-64*V[37]*V[20])-96*V[22])+32*S[0]*S[1])+192*V[37]*V[22]*V[20])+
 72*S[2]-96*S[0]*S[1])-144*V[37]*V[22]*V[20])+72*S[0]*S[1]))));
C[70]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*(
 96*(V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(96*(V[27]-V[29]-V[28]+
 V[26]))))+V[22]*(72*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(72*(V[29]+
 V[28]-V[27]-V[26])))))));
S[6]=V[29]*V[29];
S[7]=V[28]*V[28];
S[8]=V[27]*V[27];
S[9]=V[26]*V[26];
S[10]=V[2]*V[2];
S[11]=V[9]*V[9];
C[69]=+S[11]*(S[11]*(S[10]*(S[10]*(16*(V[26]*(V[29]+V[28]-V[27])+V[27]*(
 V[29]+V[28])-V[29]*V[28])+8*(-S[6]-S[7]-S[8]-S[9]))+48*(V[26]*(V[27]-V[29]-
 V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+24*(S[6]+S[7]+S[8]+S[9]))+36*(
 V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+18*(-S[6]-S[7]-
 S[8]-S[9]))+S[4]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(64*
 V[22]*V[2]-128*V[37]*V[20])-192*V[22])+64*S[0]*S[1])+384*V[37]*V[22]*
 V[20])+144*S[2]-192*S[0]*S[1])-288*V[37]*V[22]*V[20])+144*S[0]*S[1]))));
S[12]=V[25]*V[25];
C[68]=+S[5]*(S[4]*(S[10]*(V[24]*(S[10]*(8*V[25]+4*V[24])-24*V[25]-12*V[24])+
 S[12]*(4*S[10]-12))+V[24]*(18*V[25]+9*V[24])+9*S[12]));
C[67]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(32*(V[2]*(V[23]*(-
 V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(96*(V[25]+V[24])))+
 V[21]*(V[37]*(96*(-V[25]-V[24]))))+V[23]*(72*(-V[25]-V[24])))+V[21]*(V[37]*
 (72*(V[25]+V[24])))))));
S[13]=V[2]*V[2]*V[2]*V[2];
C[66]=+S[13]*(S[5]*(S[4]*(V[24]*(8*V[25]+4*V[24])+4*S[12])));
C[65]=+S[13]*(S[5]*(V[12]*(V[36]*(V[37]*(32*(V[2]*(V[23]*(-V[25]-V[24]))+
 V[21]*(V[37]*(V[25]+V[24]))))))));
C[64]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(48*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(48*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(36*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(36*(V[29]+V[28]-V[27]-V[26])))))));
C[63]=+S[13]*(S[5]*(S[4]*(S[3]*(S[0]*(V[2]*(V[22]*(32*V[22]*V[2]-64*V[37]*
 V[20]))+32*S[0]*S[1])))));
C[62]=+S[13]*(S[5]*(V[12]*(V[36]*(V[37]*(32*(V[2]*(V[22]*(V[27]-V[29]-V[28]+
 V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))))));
C[61]=+S[13]*(S[11]*(S[11]*(16*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+
 V[28])-V[29]*V[28])+8*(-S[6]-S[7]-S[8]-S[9]))+S[4]*(S[3]*(S[0]*(V[2]*(
 V[22]*(64*V[22]*V[2]-128*V[37]*V[20]))+64*S[0]*S[1])))));
C[60]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(48*(-V[25]-V[24])))+V[21]*(
 V[37]*(48*(V[25]+V[24]))))+V[23]*(36*(V[25]+V[24])))+V[21]*(V[37]*(36*(-
 V[25]-V[24])))))));
C[59]=+S[11]*(S[4]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(128*
 V[22]*V[2]-256*V[37]*V[20])-384*V[22])+128*S[0]*S[1])+768*V[37]*V[22]*
 V[20])+288*S[2]-384*S[0]*S[1])-576*V[37]*V[22]*V[20])+288*S[0]*S[1]))));
C[58]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*
 (384*(V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(384*(V[27]-V[29]-V[28]+
 V[26]))))+V[22]*(288*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(288*(V[29]+
 V[28]-V[27]-V[26])))))));
C[57]=+S[13]*(S[11]*(S[4]*(V[24]*(32*V[25]+16*V[24])+16*S[12])));
C[56]=+S[13]*(S[11]*(V[12]*(V[36]*(V[37]*(128*(V[2]*(V[23]*(-V[25]-V[24]))+
 V[21]*(V[37]*(V[25]+V[24]))))))));
C[55]=+S[11]*(S[10]*(S[10]*(32*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+
 V[28])-V[29]*V[28])+16*(-S[6]-S[7]-S[8]-S[9]))+96*(V[26]*(V[27]-V[29]-
 V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+48*(S[6]+S[7]+S[8]+S[9]))+72*(
 V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+36*(-S[6]-S[7]-
 S[8]-S[9]))+S[4]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(128*
 V[22]*V[2]-256*V[37]*V[20])-384*V[22])+128*S[0]*S[1])+768*V[37]*V[22]*
 V[20])+288*S[2]-384*S[0]*S[1])-576*V[37]*V[22]*V[20])+288*S[0]*S[1])));
C[54]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*(384*(
 V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(384*(V[27]-V[29]-V[28]+V[26]))))+
 V[22]*(288*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(288*(V[29]+V[28]-
 V[27]-V[26]))))));
C[53]=+S[13]*(S[4]*(V[24]*(32*V[25]+16*V[24])+16*S[12]));
C[52]=+S[13]*(V[12]*(V[36]*(V[37]*(128*(V[2]*(V[23]*(-V[25]-V[24]))+V[21]*(
 V[37]*(V[25]+V[24])))))));
C[51]=+S[11]*(S[4]*(S[10]*(V[24]*(S[10]*(32*V[25]+16*V[24])-96*V[25]-48*
 V[24])+S[12]*(16*S[10]-48))+V[24]*(72*V[25]+36*V[24])+36*S[12]));
C[50]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[23]*
 (-V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(384*(V[25]+V[24])))+
 V[21]*(V[37]*(384*(-V[25]-V[24]))))+V[23]*(288*(-V[25]-V[24])))+V[21]*(
 V[37]*(288*(V[25]+V[24])))))));
C[49]=+S[13]*(S[11]*(S[4]*(S[3]*(S[0]*(V[2]*(V[22]*(128*V[22]*V[2]-256*
 V[37]*V[20]))+128*S[0]*S[1])))));
C[48]=+S[13]*(S[11]*(V[12]*(V[36]*(V[37]*(128*(V[2]*(V[22]*(V[27]-V[29]-
 V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))))));
C[47]=+S[4]*(S[10]*(V[24]*(S[10]*(32*V[25]+16*V[24])-96*V[25]-48*V[24])+
 S[12]*(16*S[10]-48))+V[24]*(72*V[25]+36*V[24])+36*S[12]);
C[46]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[23]*(-
 V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(384*(V[25]+V[24])))+
 V[21]*(V[37]*(384*(-V[25]-V[24]))))+V[23]*(288*(-V[25]-V[24])))+V[21]*(
 V[37]*(288*(V[25]+V[24]))))));
C[45]=+S[13]*(S[11]*(32*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+V[28])-
 V[29]*V[28])+16*(-S[6]-S[7]-S[8]-S[9]))+S[4]*(S[3]*(S[0]*(V[2]*(V[22]*(128*
 V[22]*V[2]-256*V[37]*V[20]))+128*S[0]*S[1]))));
C[44]=+S[13]*(V[12]*(V[36]*(V[37]*(128*(V[2]*(V[22]*(V[27]-V[29]-V[28]+
 V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26])))))));
C[43]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(192*(V[29]+V[28]-V[27]-
 V[26])))+V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-
 V[29]-V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26])))))));
C[42]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(192*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-V[29]-
 V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26]))))));
C[41]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(192*(-V[25]-V[24])))+V[21]*(
 V[37]*(192*(V[25]+V[24]))))+V[23]*(144*(V[25]+V[24])))+V[21]*(V[37]*(144*(-
 V[25]-V[24])))))));
C[40]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(192*(-V[25]-V[24])))+V[21]*(V[37]*(
 192*(V[25]+V[24]))))+V[23]*(144*(V[25]+V[24])))+V[21]*(V[37]*(144*(-V[25]-
 V[24]))))));
C[39]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[22]*(192*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-V[29]-
 V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26])))))));
C[38]=+S[11]*(S[10]*(S[10]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+32*(S[6]+S[7]+S[8]+S[9]))+192*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+96*(-S[6]-S[7]-S[8]-S[9]))+144*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[6]+S[7]+
 S[8]+S[9]));
S[14]=V[21]*V[21];
C[37]=+S[13]*(S[11]*(S[3]*(S[0]*(V[2]*(V[23]*(256*V[23]*V[2]-512*V[37]*
 V[21]))+256*S[0]*S[14]))));
C[36]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[23]*(192*(V[25]+V[24])))+V[21]*(
 V[37]*(192*(-V[25]-V[24]))))+V[23]*(144*(-V[25]-V[24])))+V[21]*(V[37]*(144*
 (V[25]+V[24])))))));
C[35]=+S[13]*(S[11]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+32*(S[6]+S[7]+S[8]+S[9])));
C[34]=+S[11]*(S[10]*(S[10]*(128*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+64*(S[6]+S[7]+S[8]+S[9]))+192*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+96*(-S[6]-S[7]-S[8]-S[9]))+144*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[6]+S[7]+
 S[8]+S[9]));
S[15]=V[23]*V[23];
C[33]=+S[11]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(256*V[23]*
 V[2]-512*V[37]*V[21])-768*V[23])+256*S[0]*S[14])+1536*V[37]*V[23]*V[21])+
 576*S[15]-768*S[0]*S[14])-1152*V[37]*V[23]*V[21])+576*S[0]*S[14])));
C[32]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(V[25]+V[24]))))+V[22]*(192*(V[29]+V[28]-V[27]-V[26])))+V[20]*
 (V[37]*(192*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26]))))));
C[31]=+S[10]*(S[10]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+32*(S[6]+S[7]+S[8]+S[9]))+192*(V[26]*(V[29]+V[28]-V[27])+
 V[27]*(V[29]+V[28])-V[29]*V[28])+96*(-S[6]-S[7]-S[8]-S[9]))+144*(V[26]*(
 V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[6]+S[7]+S[8]+
 S[9]);
C[30]=+S[13]*(S[3]*(S[0]*(V[2]*(V[23]*(256*V[23]*V[2]-512*V[37]*V[21]))+256*
 S[0]*S[14])));
C[29]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(V[25]+V[24]))))+V[23]*(192*(V[25]+V[24])))+V[21]*(V[37]*(192*
 (-V[25]-V[24]))))+V[23]*(144*(-V[25]-V[24])))+V[21]*(V[37]*(144*(V[25]+
 V[24]))))));
C[28]=+S[13]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*
 V[28])+32*(S[6]+S[7]+S[8]+S[9]));
C[27]=+S[10]*(S[10]*(128*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+64*(S[6]+S[7]+S[8]+S[9]))+192*(V[26]*(V[29]+V[28]-V[27])+
 V[27]*(V[29]+V[28])-V[29]*V[28])+96*(-S[6]-S[7]-S[8]-S[9]))+144*(V[26]*(
 V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[6]+S[7]+S[8]+
 S[9]);
C[26]=+S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(256*V[23]*V[2]-512*
 V[37]*V[21])-768*V[23])+256*S[0]*S[14])+1536*V[37]*V[23]*V[21])+576*S[15]-
 768*S[0]*S[14])-1152*V[37]*V[23]*V[21])+576*S[0]*S[14]));
C[25]=+S[11]*(S[4]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(64*
 V[22]*V[2]-128*V[37]*V[20])-192*V[22])+64*S[0]*S[1])+384*V[37]*V[22]*
 V[20])+144*S[2]-192*S[0]*S[1])-288*V[37]*V[22]*V[20])+144*S[0]*S[1]))));
C[24]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*(
 192*(V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+
 V[26]))))+V[22]*(144*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+
 V[28]-V[27]-V[26])))))));
C[23]=+S[13]*(S[11]*(S[4]*(V[24]*(16*V[25]+8*V[24])+8*S[12])));
C[22]=+S[13]*(S[11]*(V[12]*(V[36]*(V[37]*(64*(V[2]*(V[23]*(-V[25]-V[24]))+
 V[21]*(V[37]*(V[25]+V[24]))))))));
C[21]=+S[11]*(S[4]*(S[10]*(V[24]*(S[10]*(16*V[25]+8*V[24])-48*V[25]-24*
 V[24])+S[12]*(8*S[10]-24))+V[24]*(36*V[25]+18*V[24])+18*S[12]));
C[20]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[23]*
 (-V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(192*(V[25]+V[24])))+
 V[21]*(V[37]*(192*(-V[25]-V[24]))))+V[23]*(144*(-V[25]-V[24])))+V[21]*(
 V[37]*(144*(V[25]+V[24])))))));
C[19]=+S[13]*(S[11]*(S[4]*(S[3]*(S[0]*(V[2]*(V[22]*(64*V[22]*V[2]-128*V[37]*
 V[20]))+64*S[0]*S[1])))));
C[18]=+S[13]*(S[11]*(V[12]*(V[36]*(V[37]*(64*(V[2]*(V[22]*(V[27]-V[29]-
 V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))))));
C[17]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(96*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(96*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(72*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(72*(V[29]+V[28]-V[27]-V[26])))))));
C[16]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(96*(-V[25]-V[24])))+V[21]*(
 V[37]*(96*(V[25]+V[24]))))+V[23]*(72*(V[25]+V[24])))+V[21]*(V[37]*(72*(-
 V[25]-V[24])))))));
C[15]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[22]*(48*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(48*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(36*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(36*(V[29]+V[28]-V[27]-V[26])))))));
C[14]=+S[5]*(S[10]*(S[10]*(16*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+8*(S[6]+S[7]+S[8]+S[9]))+48*(V[26]*(V[29]+V[28]-V[27])+
 V[27]*(V[29]+V[28])-V[29]*V[28])+24*(-S[6]-S[7]-S[8]-S[9]))+36*(V[26]*(
 V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+18*(S[6]+S[7]+S[8]+
 S[9]));
C[13]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[22]*(96*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(96*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(72*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(72*(V[29]+V[28]-V[27]-V[26])))))));
C[12]=+S[11]*(S[10]*(S[10]*(32*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+16*(S[6]+S[7]+S[8]+S[9]))+96*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+48*(-S[6]-S[7]-S[8]-S[9]))+72*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+36*(S[6]+S[7]+
 S[8]+S[9]));
C[11]=+S[13]*(S[5]*(S[3]*(S[0]*(V[2]*(V[23]*(64*V[23]*V[2]-128*V[37]*
 V[21]))+64*S[0]*S[14]))));
C[10]=+S[13]*(S[11]*(S[3]*(S[0]*(V[2]*(V[23]*(128*V[23]*V[2]-256*V[37]*
 V[21]))+128*S[0]*S[14]))));
C[9]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(16*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[23]*(48*(V[25]+V[24])))+V[21]*(V[37]*
 (48*(-V[25]-V[24]))))+V[23]*(36*(-V[25]-V[24])))+V[21]*(V[37]*(36*(V[25]+
 V[24])))))));
C[8]=+S[13]*(S[5]*(16*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*
 V[28])+8*(S[6]+S[7]+S[8]+S[9])));
C[7]=+S[11]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(32*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[23]*(96*(V[25]+V[24])))+V[21]*(V[37]*
 (96*(-V[25]-V[24]))))+V[23]*(72*(-V[25]-V[24])))+V[21]*(V[37]*(72*(V[25]+
 V[24])))))));
C[6]=+S[13]*(S[11]*(32*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+16*(S[6]+S[7]+S[8]+S[9])));
C[5]=+S[5]*(S[10]*(S[10]*(32*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+16*(S[6]+S[7]+S[8]+S[9]))+48*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+24*(-S[6]-S[7]-S[8]-S[9]))+36*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+18*(S[6]+S[7]+
 S[8]+S[9]));
C[4]=+S[11]*(S[10]*(S[10]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+32*(S[6]+S[7]+S[8]+S[9]))+96*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+48*(-S[6]-S[7]-S[8]-S[9]))+72*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+36*(S[6]+S[7]+
 S[8]+S[9]));
C[3]=+S[5]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(64*V[23]*V[2]-
 128*V[37]*V[21])-192*V[23])+64*S[0]*S[14])+384*V[37]*V[23]*V[21])+144*
 S[15]-192*S[0]*S[14])-288*V[37]*V[23]*V[21])+144*S[0]*S[14])));
C[2]=+S[11]*(S[3]*(S[0]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(128*V[23]*
 V[2]-256*V[37]*V[21])-384*V[23])+128*S[0]*S[14])+768*V[37]*V[23]*V[21])+
 288*S[15]-384*S[0]*S[14])-576*V[37]*V[23]*V[21])+288*S[0]*S[14])));
S[16]=V[37]*V[37]*V[37]*V[37];
S[17]=V[17]*V[17]*V[17]*V[17];
C[1]=+18*S[16]*S[17]*S[13];
S[18]=V[49]*V[49];
S[19]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[18]*S[19];
}
REAL F368_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   d                       n2     !  n2                      d       
 ==>==\                 /==>======!==>==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   D  |  Z     t     W+ |  E2     !  E2 |  W+    t     Z  |  D       
 ==<==@-1---@==>==@-2>--@==<======!==<==@-->4-@==>==@---3-@==<==     
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
static REAL C[72];REAL S[2];REAL tmp[4];                                    
     
if(CalcConst) C368(C);
N=-C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[12]*(V[50]*(V[50]*(DP[0]*(V[50]*(V[50]*(C[31]*(DP[9]-DP[3]))+
 C[54]*DP[3]+C[52]*DP[4]-C[32]*DP[9])+C[30]*(DP[0]*(DP[9]-DP[4])+DP[6]*(
 DP[4]-DP[9])-DP[7]*DP[3])+C[38]*(DP[1]-DP[8])-C[55]*DP[3]-C[26]*DP[7]*
 DP[4]-C[12]*DP[9])+DP[7]*(V[50]*(V[50]*(C[31]*DP[3]+C[28]*DP[4]-C[27]*
 DP[9])-C[42]*DP[3]-C[40]*DP[4])+C[34]*DP[8]-C[38]*DP[1]-C[35]*DP[2]-C[12]*
 DP[3]-C[6]*DP[4]+C[4]*DP[9])+DP[4]*(V[50]*(V[50]*(-C[53]-C[31]*DP[6])+
 C[42]*DP[6])+C[23]+C[12]*DP[6])+DP[2]*(C[57]+C[38]*DP[6]))+DP[0]*(C[39]*
 DP[8]-C[58]*DP[1]-C[56]*DP[2]-C[24]*DP[3]-C[22]*DP[4]+C[13]*DP[9])+DP[7]*(
 C[43]*DP[1]+C[41]*DP[2]+C[17]*DP[3]+C[16]*DP[4])+DP[6]*(-C[43]*DP[2]-C[17]*
 DP[4]))+DP[0]*(C[37]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+
 C[10]*(DP[0]*(DP[4]-DP[9])+DP[6]*(DP[9]-DP[4])+DP[7]*DP[3])+DP[5]*(C[12]*(
 DP[8]-DP[1]-DP[3]+DP[9]))+DP[7]*(C[33]*DP[2]+C[2]*DP[4])+C[59]*DP[1]+C[25]*
 DP[3])+DP[5]*(DP[7]*(C[12]*(DP[1]+DP[3])+C[6]*(DP[2]+DP[4])+C[4]*(-DP[8]-
 DP[9]))+DP[2]*(-C[23]-C[12]*DP[6])+DP[4]*(-C[23]-C[12]*DP[6])));
tmp[1]=+DP[7]*(DP[0]*(DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[28]*(DP[9]-
 DP[4]))+C[46]*DP[3]+C[44]*DP[4]-C[29]*DP[9])+C[26]*(DP[0]*(DP[9]-DP[3])+
 DP[7]*(DP[3]-DP[9]))+C[35]*(DP[2]-DP[8])-C[45]*DP[4]-C[6]*DP[9])+C[36]*
 DP[8]-C[50]*DP[1]-C[48]*DP[2]-C[20]*DP[3]-C[18]*DP[4]+C[7]*DP[9])+DP[0]*(
 C[33]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[5]*(C[6]*(DP[8]-DP[2]-DP[4]+
 DP[9]))+DP[7]*(C[33]*(DP[8]-DP[1])+C[2]*(DP[9]-DP[3]))+C[49]*DP[2]+C[19]*
 DP[4])+DP[5]*(C[6]*(DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[0]*(DP[14]-DP[11])+
 DP[5]*(DP[11]-DP[14]))+DP[14]*(C[2]*(DP[0]-DP[7])-C[8]-C[7]*V[50])+DP[10]*(
 C[2]*(DP[7]-DP[0])+C[20]*V[50])+DP[11]*(C[18]*V[50]-C[61]))+DP[13]*(V[50]*(
 V[50]*(C[6]*(DP[2]-DP[8]))+C[7]*DP[8]-C[20]*DP[1]-C[18]*DP[2])+C[2]*(DP[0]*
 (DP[1]-DP[8])+DP[7]*(DP[8]-DP[1]))+C[19]*DP[2]))+DP[7]*(V[50]*(V[50]*(
 DP[12]*(DP[3]*(V[50]*(C[40]-C[28]*V[50])+C[6])+C[35]*DP[1])+C[6]*(DP[13]*
 DP[1]-DP[10]*DP[5]))+C[16]*(DP[10]*DP[5]-DP[12]*DP[3]-DP[13]*DP[1])-C[41]*
 DP[12]*DP[1])+DP[5]*(C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+C[8]*DP[10]))+C[21]*(DP[5]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*(DP[5]-S[0]))+S[0]*(DP[12]*DP[3]+DP[13]*DP[1]))+S[0]*
 (DP[12]*(C[51]*DP[1]-C[47]*DP[3]*S[0]))+C[68]*DP[10]*DP[5]);
S[1]=DP[7]*DP[7];
tmp[2]=+V[50]*(DP[6]*(DP[5]*(DP[0]*(C[12]*(DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+
 S[0]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[10]*(DP[0]*(DP[14]-DP[11])+
 DP[6]*(DP[11]-DP[14])-DP[10]*DP[7])+V[50]*(C[24]*DP[10]+C[22]*DP[11]-C[13]*
 DP[14])-C[69]*DP[10]-C[2]*DP[11]*DP[7]-C[14]*DP[14])+DP[7]*(DP[13]*(C[12]*(
 DP[1]+DP[3])+C[6]*(DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+V[50]*(V[50]*(C[12]*
 DP[10]+C[6]*DP[11]-C[4]*DP[14])-C[17]*DP[10]-C[16]*DP[11])+DP[5]*(C[4]*
 DP[14]-C[12]*DP[10]-C[6]*DP[11])+C[5]*DP[14]-C[14]*DP[10]-C[8]*DP[11])+
 DP[11]*(DP[6]*(V[50]*(C[17]-C[12]*V[50])+C[14]+C[12]*DP[5])+C[23]*(DP[5]-
 S[0])+C[66])+DP[13]*(DP[2]*(-C[23]-C[12]*DP[6])+DP[4]*(-C[23]-C[12]*
 DP[6])))+DP[13]*(V[50]*(V[50]*(C[12]*(DP[0]*(DP[1]-DP[8])+DP[6]*DP[2]-
 DP[7]*DP[1])+DP[2]*(C[23]-C[6]*DP[7])+C[4]*DP[8]*DP[7])+DP[0]*(C[13]*DP[8]-
 C[24]*DP[1]-C[22]*DP[2])+DP[2]*(C[16]*DP[7]-C[17]*DP[6])+C[17]*DP[7]*
 DP[1])+DP[0]*(C[10]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+
 C[25]*DP[1]+C[2]*DP[7]*DP[2]))+tmp[0])+tmp[1]);
tmp[3]=+DP[0]*(DP[5]*(DP[6]*(C[10]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[6]*(DP[12]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-
 DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5]))+DP[7]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[11]*DP[10]+C[3]*DP[11])+C[25]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[11]*(DP[0]*(DP[11]-DP[14])+DP[6]*(DP[14]-
 DP[11]))+C[71]*DP[10])+DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+
 DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(
 DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(
 DP[14]-DP[10])))+C[19]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[3]*(DP[0]*(DP[10]-DP[14])+DP[7]*(DP[14]-DP[10]))+C[63]*
 DP[11])));
R=+V[50]*(DP[5]*(DP[0]*(DP[6]*(DP[12]*(C[24]*(DP[1]+DP[3])+C[22]*(DP[2]+
 DP[4])+C[13]*(-DP[8]-DP[9]))+DP[13]*(C[24]*(DP[1]+DP[3])+C[22]*(DP[2]+
 DP[4])+C[13]*(-DP[8]-DP[9]))+DP[5]*(C[13]*DP[14]-C[24]*DP[10]-C[22]*
 DP[11])+C[15]*DP[14]-C[70]*DP[10]-C[65]*DP[11])+DP[7]*(DP[12]*(C[20]*(
 DP[1]+DP[3])+C[18]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[13]*(C[20]*(DP[1]+
 DP[3])+C[18]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[5]*(C[7]*DP[14]-C[20]*
 DP[10]-C[18]*DP[11])+C[9]*DP[14]-C[67]*DP[10]-C[62]*DP[11]))+DP[6]*(DP[7]*(
 C[17]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[16]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[64]*DP[10]+
 C[60]*DP[11])+DP[6]*(C[17]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[64]*DP[11]))+S[1]*(C[16]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])-C[60]*DP[10]))+tmp[2])+tmp[3];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
