/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F12_out;
static void C12(REAL * C)
{
REAL* V=va_out;
REAL S[20];                                                                 
     
S[0]=V[29]*V[29];
S[1]=V[28]*V[28];
S[2]=V[27]*V[27];
S[3]=V[26]*V[26];
S[4]=V[2]*V[2];
S[5]=V[9]*V[9]*V[9]*V[9];
C[71]=+S[5]*(S[4]*(S[4]*(128*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+64*(S[0]+S[1]+S[2]+S[3]))+96*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+48*(-S[0]-S[1]-S[2]-S[3]))+36*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+18*(S[0]+S[1]+
 S[2]+S[3]));
C[70]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[22]*(96*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(96*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(36*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(36*(V[29]+V[28]-V[27]-V[26])))))));
C[69]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[23]*(96*(V[25]+V[24])))+V[21]*(V[37]*
 (96*(-V[25]-V[24]))))+V[23]*(36*(-V[25]-V[24])))+V[21]*(V[37]*(36*(V[25]+
 V[24])))))));
S[6]=V[25]*V[25];
S[7]=V[12]*V[12];
C[68]=+S[5]*(S[7]*(S[4]*(V[24]*(S[4]*(32*V[25]+16*V[24])-48*V[25]-24*V[24])+
 S[6]*(16*S[4]-24))+V[24]*(18*V[25]+9*V[24])+9*S[6]));
S[8]=V[37]*V[37];
S[9]=V[20]*V[20];
S[10]=V[22]*V[22];
S[11]=V[36]*V[36];
C[67]=+S[5]*(S[7]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(128*
 V[22]*V[2]-256*V[37]*V[20])-192*V[22])+128*S[8]*S[9])+384*V[37]*V[22]*
 V[20])+72*S[10]-192*S[8]*S[9])-144*V[37]*V[22]*V[20])+72*S[8]*S[9]))));
C[66]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*(
 192*(V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+
 V[26]))))+V[22]*(72*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(72*(V[29]+
 V[28]-V[27]-V[26])))))));
S[12]=V[9]*V[9];
C[65]=+S[12]*(S[12]*(S[4]*(S[4]*(64*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+
 V[28])-V[29]*V[28])+32*(-S[0]-S[1]-S[2]-S[3]))+96*(V[26]*(V[27]-V[29]-
 V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+48*(S[0]+S[1]+S[2]+S[3]))+36*(
 V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+18*(-S[0]-S[1]-
 S[2]-S[3]))+S[7]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(256*
 V[22]*V[2]-512*V[37]*V[20])-384*V[22])+256*S[8]*S[9])+768*V[37]*V[22]*
 V[20])+144*S[10]-384*S[8]*S[9])-288*V[37]*V[22]*V[20])+144*S[8]*S[9]))));
C[64]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[23]*
 (-V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(192*(V[25]+V[24])))+
 V[21]*(V[37]*(192*(-V[25]-V[24]))))+V[23]*(72*(-V[25]-V[24])))+V[21]*(
 V[37]*(72*(V[25]+V[24])))))));
C[63]=+S[12]*(S[4]*(S[4]*(512*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+256*(S[0]+S[1]+S[2]+S[3]))+384*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+192*(-S[0]-S[1]-S[2]-S[3]))+144*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[0]+S[1]+
 S[2]+S[3]));
C[62]=+S[12]*(S[7]*(S[4]*(V[24]*(S[4]*(128*V[25]+64*V[24])-192*V[25]-96*
 V[24])+S[6]*(64*S[4]-96))+V[24]*(72*V[25]+36*V[24])+36*S[6]));
C[61]=+S[4]*(S[4]*(512*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+256*(S[0]+S[1]+S[2]+S[3]))+384*(V[26]*(V[29]+V[28]-V[27])+
 V[27]*(V[29]+V[28])-V[29]*V[28])+192*(-S[0]-S[1]-S[2]-S[3]))+144*(V[26]*(
 V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[0]+S[1]+S[2]+
 S[3]);
C[60]=+S[7]*(S[4]*(V[24]*(S[4]*(128*V[25]+64*V[24])-192*V[25]-96*V[24])+
 S[6]*(64*S[4]-96))+V[24]*(72*V[25]+36*V[24])+36*S[6]);
C[59]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[22]*(384*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(384*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-V[29]-
 V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26])))))));
C[58]=+S[12]*(S[7]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(512*
 V[22]*V[2]-1024*V[37]*V[20])-768*V[22])+512*S[8]*S[9])+1536*V[37]*V[22]*
 V[20])+288*S[10]-768*S[8]*S[9])-576*V[37]*V[22]*V[20])+288*S[8]*S[9]))));
C[57]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(512*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*
 (768*(V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(768*(V[27]-V[29]-V[28]+
 V[26]))))+V[22]*(288*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(288*(V[29]+
 V[28]-V[27]-V[26])))))));
C[56]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(V[25]+V[24]))))+V[22]*(384*(V[29]+V[28]-V[27]-V[26])))+V[20]*
 (V[37]*(384*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26]))))));
C[55]=+S[12]*(S[4]*(S[4]*(128*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+
 V[28])-V[29]*V[28])+64*(-S[0]-S[1]-S[2]-S[3]))+192*(V[26]*(V[27]-V[29]-
 V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+96*(S[0]+S[1]+S[2]+S[3]))+72*(
 V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+36*(-S[0]-S[1]-
 S[2]-S[3]))+S[7]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(512*
 V[22]*V[2]-1024*V[37]*V[20])-768*V[22])+512*S[8]*S[9])+1536*V[37]*V[22]*
 V[20])+288*S[10]-768*S[8]*S[9])-576*V[37]*V[22]*V[20])+288*S[8]*S[9])));
C[54]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(512*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*(768*(
 V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(768*(V[27]-V[29]-V[28]+V[26]))))+
 V[22]*(288*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(288*(V[29]+V[28]-
 V[27]-V[26]))))));
C[53]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[23]*(384*(V[25]+V[24])))+V[21]*(
 V[37]*(384*(-V[25]-V[24]))))+V[23]*(144*(-V[25]-V[24])))+V[21]*(V[37]*(144*
 (V[25]+V[24])))))));
C[52]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(512*(V[2]*(V[23]*
 (-V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(768*(V[25]+V[24])))+
 V[21]*(V[37]*(768*(-V[25]-V[24]))))+V[23]*(288*(-V[25]-V[24])))+V[21]*(
 V[37]*(288*(V[25]+V[24])))))));
C[51]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(V[25]+V[24]))))+V[23]*(384*(V[25]+V[24])))+V[21]*(V[37]*(384*
 (-V[25]-V[24]))))+V[23]*(144*(-V[25]-V[24])))+V[21]*(V[37]*(144*(V[25]+
 V[24]))))));
C[50]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(512*(V[2]*(V[23]*(-
 V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(768*(V[25]+V[24])))+
 V[21]*(V[37]*(768*(-V[25]-V[24]))))+V[23]*(288*(-V[25]-V[24])))+V[21]*(
 V[37]*(288*(V[25]+V[24]))))));
S[13]=V[2]*V[2]*V[2]*V[2];
C[49]=+S[13]*(S[12]*(S[7]*(V[24]*(128*V[25]+64*V[24])+64*S[6])));
C[48]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(384*(V[29]+V[28]-V[27]-
 V[26])))+V[20]*(V[37]*(384*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-
 V[29]-V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26])))))));
C[47]=+S[12]*(S[4]*(S[4]*(256*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+128*(S[0]+S[1]+S[2]+S[3]))+384*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+192*(-S[0]-S[1]-S[2]-S[3]))+144*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[0]+S[1]+
 S[2]+S[3]));
C[46]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(384*(-V[25]-V[24])))+V[21]*(
 V[37]*(384*(V[25]+V[24]))))+V[23]*(144*(V[25]+V[24])))+V[21]*(V[37]*(144*(-
 V[25]-V[24])))))));
C[45]=+S[13]*(S[12]*(V[12]*(V[36]*(V[37]*(512*(V[2]*(V[23]*(-V[25]-V[24]))+
 V[21]*(V[37]*(V[25]+V[24]))))))));
C[44]=+S[13]*(S[12]*(S[7]*(S[11]*(S[8]*(V[2]*(V[22]*(512*V[22]*V[2]-1024*
 V[37]*V[20]))+512*S[8]*S[9])))));
C[43]=+S[13]*(S[12]*(V[12]*(V[36]*(V[37]*(512*(V[2]*(V[22]*(V[27]-V[29]-
 V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))))));
C[42]=+S[13]*(S[12]*(256*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+128*(S[0]+S[1]+S[2]+S[3])));
S[14]=V[21]*V[21];
S[15]=V[23]*V[23];
C[41]=+S[12]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(1024*V[23]*
 V[2]-2048*V[37]*V[21])-1536*V[23])+1024*S[8]*S[14])+3072*V[37]*V[23]*
 V[21])+576*S[15]-1536*S[8]*S[14])-1152*V[37]*V[23]*V[21])+576*S[8]*
 S[14])));
C[40]=+S[13]*(S[12]*(S[11]*(S[8]*(V[2]*(V[23]*(1024*V[23]*V[2]-2048*V[37]*
 V[21]))+1024*S[8]*S[14]))));
C[39]=+S[13]*(S[7]*(V[24]*(128*V[25]+64*V[24])+64*S[6]));
C[38]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(384*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(384*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(144*(V[27]-V[29]-
 V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+V[28]-V[27]-V[26]))))));
C[37]=+S[4]*(S[4]*(256*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+128*(S[0]+S[1]+S[2]+S[3]))+384*(V[26]*(V[29]+V[28]-V[27])+
 V[27]*(V[29]+V[28])-V[29]*V[28])+192*(-S[0]-S[1]-S[2]-S[3]))+144*(V[26]*(
 V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+72*(S[0]+S[1]+S[2]+
 S[3]);
C[36]=+V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*(V[27]-
 V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-V[27]-
 V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(384*(-V[25]-V[24])))+V[21]*(V[37]*(
 384*(V[25]+V[24]))))+V[23]*(144*(V[25]+V[24])))+V[21]*(V[37]*(144*(-V[25]-
 V[24]))))));
C[35]=+S[13]*(V[12]*(V[36]*(V[37]*(512*(V[2]*(V[23]*(-V[25]-V[24]))+V[21]*(
 V[37]*(V[25]+V[24])))))));
C[34]=+S[13]*(S[12]*(128*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+V[28])-
 V[29]*V[28])+64*(-S[0]-S[1]-S[2]-S[3]))+S[7]*(S[11]*(S[8]*(V[2]*(V[22]*(
 512*V[22]*V[2]-1024*V[37]*V[20]))+512*S[8]*S[9]))));
C[33]=+S[13]*(V[12]*(V[36]*(V[37]*(512*(V[2]*(V[22]*(V[27]-V[29]-V[28]+
 V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26])))))));
C[32]=+S[13]*(256*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*
 V[28])+128*(S[0]+S[1]+S[2]+S[3]));
C[31]=+S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(1024*V[23]*V[2]-
 2048*V[37]*V[21])-1536*V[23])+1024*S[8]*S[14])+3072*V[37]*V[23]*V[21])+576*
 S[15]-1536*S[8]*S[14])-1152*V[37]*V[23]*V[21])+576*S[8]*S[14]));
C[30]=+S[13]*(S[11]*(S[8]*(V[2]*(V[23]*(1024*V[23]*V[2]-2048*V[37]*V[21]))+
 1024*S[8]*S[14])));
C[29]=+S[12]*(S[4]*(S[4]*(256*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+128*(S[0]+S[1]+S[2]+S[3]))+192*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+96*(-S[0]-S[1]-S[2]-S[3]))+72*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+36*(S[0]+S[1]+
 S[2]+S[3]));
C[28]=+S[12]*(S[7]*(S[4]*(V[24]*(S[4]*(64*V[25]+32*V[24])-96*V[25]-48*
 V[24])+S[6]*(32*S[4]-48))+V[24]*(36*V[25]+18*V[24])+18*S[6]));
C[27]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[22]*(192*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(72*(V[27]-V[29]-
 V[28]+V[26])))+V[20]*(V[37]*(72*(V[29]+V[28]-V[27]-V[26])))))));
C[26]=+S[12]*(S[7]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[22]*(V[2]*(256*
 V[22]*V[2]-512*V[37]*V[20])-384*V[22])+256*S[8]*S[9])+768*V[37]*V[22]*
 V[20])+144*S[10]-384*S[8]*S[9])-288*V[37]*V[22]*V[20])+144*S[8]*S[9]))));
C[25]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[22]*
 (384*(V[29]+V[28]-V[27]-V[26])))+V[20]*(V[37]*(384*(V[27]-V[29]-V[28]+
 V[26]))))+V[22]*(144*(V[27]-V[29]-V[28]+V[26])))+V[20]*(V[37]*(144*(V[29]+
 V[28]-V[27]-V[26])))))));
C[24]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(-V[25]-V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(V[25]+V[24]))))+V[23]*(192*(V[25]+V[24])))+V[21]*(
 V[37]*(192*(-V[25]-V[24]))))+V[23]*(72*(-V[25]-V[24])))+V[21]*(V[37]*(72*(
 V[25]+V[24])))))));
C[23]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(256*(V[2]*(V[23]*
 (-V[25]-V[24]))+V[21]*(V[37]*(V[25]+V[24]))))+V[23]*(384*(V[25]+V[24])))+
 V[21]*(V[37]*(384*(-V[25]-V[24]))))+V[23]*(144*(-V[25]-V[24])))+V[21]*(
 V[37]*(144*(V[25]+V[24])))))));
C[22]=+S[13]*(S[5]*(S[7]*(V[24]*(32*V[25]+16*V[24])+16*S[6])));
C[21]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(96*(V[29]+V[28]-V[27]-V[26])))+
 V[20]*(V[37]*(96*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(36*(V[27]-V[29]-V[28]+
 V[26])))+V[20]*(V[37]*(36*(V[29]+V[28]-V[27]-V[26])))))));
C[20]=+S[5]*(S[4]*(S[4]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+32*(S[0]+S[1]+S[2]+S[3]))+96*(V[26]*(V[29]+V[28]-V[27])+V[27]*
 (V[29]+V[28])-V[29]*V[28])+48*(-S[0]-S[1]-S[2]-S[3]))+36*(V[26]*(V[27]-
 V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+18*(S[0]+S[1]+S[2]+S[3]));
C[19]=+S[13]*(S[12]*(S[7]*(V[24]*(64*V[25]+32*V[24])+32*S[6])));
C[18]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[22]*(192*(V[29]+V[28]-V[27]-
 V[26])))+V[20]*(V[37]*(192*(V[27]-V[29]-V[28]+V[26]))))+V[22]*(72*(V[27]-
 V[29]-V[28]+V[26])))+V[20]*(V[37]*(72*(V[29]+V[28]-V[27]-V[26])))))));
C[17]=+S[12]*(S[4]*(S[4]*(128*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-
 V[28])+V[29]*V[28])+64*(S[0]+S[1]+S[2]+S[3]))+192*(V[26]*(V[29]+V[28]-
 V[27])+V[27]*(V[29]+V[28])-V[29]*V[28])+96*(-S[0]-S[1]-S[2]-S[3]))+72*(
 V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+V[29]*V[28])+36*(S[0]+S[1]+
 S[2]+S[3]));
C[16]=+S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(64*(V[2]*(V[22]*(
 V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(96*(-V[25]-V[24])))+V[21]*(
 V[37]*(96*(V[25]+V[24]))))+V[23]*(36*(V[25]+V[24])))+V[21]*(V[37]*(36*(-
 V[25]-V[24])))))));
C[15]=+S[13]*(S[5]*(64*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+32*(S[0]+S[1]+S[2]+S[3])));
C[14]=+S[12]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(V[2]*(V[2]*(128*(V[2]*(V[22]*
 (V[27]-V[29]-V[28]+V[26])+V[23]*(V[25]+V[24]))+V[37]*(V[20]*(V[29]+V[28]-
 V[27]-V[26])+V[21]*(-V[25]-V[24]))))+V[23]*(192*(-V[25]-V[24])))+V[21]*(
 V[37]*(192*(V[25]+V[24]))))+V[23]*(72*(V[25]+V[24])))+V[21]*(V[37]*(72*(-
 V[25]-V[24])))))));
C[13]=+S[13]*(S[5]*(V[12]*(V[36]*(V[37]*(128*(V[2]*(V[23]*(-V[25]-V[24]))+
 V[21]*(V[37]*(V[25]+V[24]))))))));
C[12]=+S[13]*(S[12]*(V[12]*(V[36]*(V[37]*(256*(V[2]*(V[23]*(-V[25]-V[24]))+
 V[21]*(V[37]*(V[25]+V[24]))))))));
C[11]=+S[13]*(S[5]*(S[7]*(S[11]*(S[8]*(V[2]*(V[22]*(128*V[22]*V[2]-256*
 V[37]*V[20]))+128*S[8]*S[9])))));
C[10]=+S[13]*(S[5]*(V[12]*(V[36]*(V[37]*(128*(V[2]*(V[22]*(V[27]-V[29]-
 V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))))));
C[9]=+S[13]*(S[12]*(S[12]*(64*(V[26]*(V[29]+V[28]-V[27])+V[27]*(V[29]+
 V[28])-V[29]*V[28])+32*(-S[0]-S[1]-S[2]-S[3]))+S[7]*(S[11]*(S[8]*(V[2]*(
 V[22]*(256*V[22]*V[2]-512*V[37]*V[20]))+256*S[8]*S[9])))));
C[8]=+S[5]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(256*V[23]*
 V[2]-512*V[37]*V[21])-384*V[23])+256*S[8]*S[14])+768*V[37]*V[23]*V[21])+
 144*S[15]-384*S[8]*S[14])-288*V[37]*V[23]*V[21])+144*S[8]*S[14])));
C[7]=+S[13]*(S[12]*(S[7]*(S[11]*(S[8]*(V[2]*(V[22]*(256*V[22]*V[2]-512*
 V[37]*V[20]))+256*S[8]*S[9])))));
C[6]=+S[13]*(S[12]*(V[12]*(V[36]*(V[37]*(256*(V[2]*(V[22]*(V[27]-V[29]-
 V[28]+V[26]))+V[20]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))))));
C[5]=+S[13]*(S[12]*(128*(V[26]*(V[27]-V[29]-V[28])+V[27]*(-V[29]-V[28])+
 V[29]*V[28])+64*(S[0]+S[1]+S[2]+S[3])));
C[4]=+S[12]*(S[11]*(S[8]*(V[2]*(V[2]*(V[2]*(V[2]*(V[23]*(V[2]*(512*V[23]*
 V[2]-1024*V[37]*V[21])-768*V[23])+512*S[8]*S[14])+1536*V[37]*V[23]*V[21])+
 288*S[15]-768*S[8]*S[14])-576*V[37]*V[23]*V[21])+288*S[8]*S[14])));
C[3]=+S[13]*(S[5]*(S[11]*(S[8]*(V[2]*(V[23]*(256*V[23]*V[2]-512*V[37]*
 V[21]))+256*S[8]*S[14]))));
C[2]=+S[13]*(S[12]*(S[11]*(S[8]*(V[2]*(V[23]*(512*V[23]*V[2]-1024*V[37]*
 V[21]))+512*S[8]*S[14]))));
S[16]=V[37]*V[37]*V[37]*V[37];
S[17]=V[17]*V[17]*V[17]*V[17];
C[1]=+18*S[16]*S[17]*S[13];
S[18]=V[49]*V[49];
S[19]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[18]*S[19];
}
REAL F12_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         u     t     W+ |  E2     !  E2 |  W+    t     u             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
           Z|P7   \========>======!==>========/    Z|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         u  |              u      !  u              |  u             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[72];REAL S[1];REAL tmp[4];                                    
     
if(CalcConst) C12(C);
N=-C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[12]*(V[50]*(V[50]*(DP[7]*(V[50]*(V[50]*(C[37]*(-DP[3]-DP[4]))+
 C[56]*DP[3]+C[54]*DP[4]-C[35]*DP[9])+C[30]*(DP[0]*(DP[9]-DP[3])+DP[7]*(
 DP[3]-DP[9])-DP[6]*DP[4])+C[47]*(DP[1]+DP[2])+C[17]*DP[3]-C[55]*DP[4]+
 C[31]*DP[9]*DP[6])+DP[6]*(V[50]*(V[50]*(C[32]*DP[9]-C[61]*DP[3]-C[37]*
 DP[4])+C[38]*DP[4]-C[36]*DP[9])+C[63]*DP[1]+C[47]*DP[2]+C[29]*DP[3]+C[17]*
 DP[4]-C[42]*DP[8]-C[5]*DP[9])+DP[9]*(V[50]*(V[50]*(C[37]*DP[0]-C[39])-
 C[38]*DP[0])+C[19]-C[17]*DP[0])+DP[8]*(C[49]-C[47]*DP[0]))+DP[7]*(C[45]*
 DP[8]-C[59]*DP[1]-C[57]*DP[2]-C[27]*DP[3]-C[25]*DP[4]+C[12]*DP[9])+DP[6]*(
 C[46]*DP[8]-C[48]*DP[2]-C[18]*DP[4]+C[14]*DP[9])+DP[0]*(C[48]*DP[8]+C[18]*
 DP[9]))+DP[7]*(C[40]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+
 C[2]*(DP[0]*(DP[3]-DP[9])+DP[7]*(DP[9]-DP[3])+DP[6]*DP[4])+DP[5]*(C[17]*(-
 DP[1]-DP[2]-DP[3]-DP[4]))+DP[6]*(-C[41]*DP[8]-C[4]*DP[9])+C[58]*DP[2]+
 C[26]*DP[4])+DP[5]*(DP[6]*(C[29]*(-DP[1]-DP[3])+C[17]*(-DP[2]-DP[4])+C[5]*(
 DP[8]+DP[9]))+DP[0]*(C[17]*(DP[8]+DP[9]))+C[19]*(-DP[8]-DP[9])));
tmp[1]=+DP[6]*(DP[7]*(DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[32]*(DP[3]-
 DP[9]))+C[33]*DP[9]-C[51]*DP[3]-C[50]*DP[4])+C[31]*(DP[3]*(-DP[6]-DP[7])+
 DP[4]*(-DP[6]-DP[7]))+C[42]*(DP[8]-DP[1])-C[5]*DP[3]-C[34]*DP[9])+C[53]*
 DP[1]+C[52]*DP[2]+C[24]*DP[3]+C[23]*DP[4]-C[43]*DP[8]-C[6]*DP[9])+DP[5]*(
 C[5]*(DP[1]+DP[3]-DP[8]-DP[9]))+DP[6]*(C[41]*(DP[1]+DP[2])+C[4]*(DP[3]+
 DP[4]))+DP[7]*(C[41]*(DP[1]+DP[2])+C[4]*(DP[3]+DP[4]))+C[44]*DP[8]+C[7]*
 DP[9])+DP[5]*(C[5]*(DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[0]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10]))+DP[10]*(C[4]*(-DP[6]-DP[7])-C[15]-C[24]*V[50])+
 DP[11]*(C[4]*(-DP[6]-DP[7])-C[23]*V[50])+DP[14]*(C[6]*V[50]-C[9]))+DP[13]*(
 V[50]*(V[50]*(C[5]*(DP[8]-DP[1]))+C[24]*DP[1]+C[23]*DP[2]-C[6]*DP[8])+C[4]*
 (DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7]))+C[7]*DP[8]))+DP[6]*(V[50]*(V[50]*
 (DP[12]*(DP[4]*(V[50]*(C[36]-C[32]*V[50])+C[5])+C[42]*DP[2])+C[5]*(DP[13]*
 DP[2]-DP[11]*DP[5]))+C[14]*(DP[11]*DP[5]-DP[12]*DP[4]-DP[13]*DP[2])-C[46]*
 DP[12]*DP[2])+DP[5]*(C[5]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[15]*DP[11]))+C[28]*(DP[5]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[0]))+S[0]*(DP[12]*DP[4]+DP[13]*DP[2]))+S[0]*
 (DP[12]*(C[62]*DP[2]-C[60]*DP[4]*S[0]))+C[68]*DP[11]*DP[5]);
tmp[2]=+V[50]*(DP[0]*(DP[5]*(DP[6]*(DP[13]*(C[29]*(-DP[1]-DP[3])+C[17]*(-
 DP[2]-DP[4])+C[5]*(DP[8]+DP[9]))+V[50]*(V[50]*(C[5]*DP[14]-C[29]*DP[10]-
 C[17]*DP[11])+C[18]*DP[11]-C[14]*DP[14])+DP[5]*(C[29]*DP[10]+C[17]*DP[11]-
 C[5]*DP[14])+DP[7]*(C[4]*DP[14]-C[2]*DP[11])+C[71]*DP[10]+C[20]*DP[11]-
 C[15]*DP[14])+DP[7]*(C[17]*(DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[0]*(-
 DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[10]*(C[2]*(DP[7]-DP[0])+C[20]+
 C[27]*V[50])+DP[14]*(C[2]*(DP[0]-DP[7])-C[12]*V[50])+DP[11]*(C[25]*V[50]-
 C[65]))+DP[14]*(DP[0]*(V[50]*(C[17]*V[50]-C[18])-C[20]-C[17]*DP[5])+C[19]*(
 DP[5]-S[0])+C[22])+DP[13]*(DP[0]*(C[17]*(DP[8]+DP[9]))+C[19]*(-DP[8]-
 DP[9])))+DP[13]*(V[50]*(V[50]*(C[17]*(DP[2]*(DP[6]+DP[7])+DP[7]*DP[1]-
 DP[8]*DP[0])+DP[6]*(C[29]*DP[1]-C[5]*DP[8])+C[19]*DP[8])+DP[7]*(C[12]*
 DP[8]-C[27]*DP[1]-C[25]*DP[2])+DP[6]*(C[14]*DP[8]-C[18]*DP[2])+C[18]*DP[8]*
 DP[0])+DP[7]*(C[2]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+
 C[26]*DP[2]-C[4]*DP[8]*DP[6]))+tmp[0])+tmp[1]);
tmp[3]=+DP[5]*(DP[7]*(DP[0]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(DP[12]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(DP[14]-
 DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5]))+DP[6]*(C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[3]*DP[11]-C[8]*DP[14])+C[26]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+C[3]*(DP[0]*(DP[10]-DP[14])+DP[7]*(DP[14]-
 DP[10]))+C[67]*DP[11])+DP[6]*(C[4]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+DP[7]*(
 DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(
 DP[10]+DP[11])))+C[7]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[8]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[11]*
 DP[14])));
R=+V[50]*(DP[5]*(DP[0]*(DP[7]*(DP[12]*(C[27]*(DP[1]+DP[3])+C[25]*(DP[2]+
 DP[4])+C[12]*(-DP[8]-DP[9]))+DP[13]*(C[27]*(DP[1]+DP[3])+C[25]*(DP[2]+
 DP[4])+C[12]*(-DP[8]-DP[9]))+DP[5]*(C[12]*DP[14]-C[27]*DP[10]-C[25]*
 DP[11])+C[13]*DP[14]-C[70]*DP[10]-C[66]*DP[11])+DP[6]*(C[18]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[14]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[16]*DP[14]-C[21]*DP[11])+
 DP[0]*(C[18]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[21]*DP[14]))+DP[6]*(DP[7]*(DP[12]*(C[24]*(-DP[1]-DP[3])+C[23]*(-DP[2]-
 DP[4])+C[6]*(DP[8]+DP[9]))+DP[13]*(C[24]*(-DP[1]-DP[3])+C[23]*(-DP[2]-
 DP[4])+C[6]*(DP[8]+DP[9]))+DP[5]*(C[24]*DP[10]+C[23]*DP[11]-C[6]*DP[14])+
 C[69]*DP[10]+C[64]*DP[11]-C[10]*DP[14])+DP[6]*(C[14]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[16]*DP[11])))+tmp[2])+tmp[3];
R*=(N/D)*Q2[6]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}