/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F419_out;
static void C419(REAL * C)
{
REAL* V=va_out;
REAL S[14];                                                                 
     
S[0]=V[14]*V[14];
S[1]=V[6]*V[6];
S[2]=V[9]*V[9]*V[9]*V[9];
C[53]=+S[2]*(S[1]*(S[0]*(V[12]*(V[36]*(V[37]*(4*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
S[3]=V[29]*V[29];
S[4]=V[28]*V[28];
S[5]=V[27]*V[27];
S[6]=V[26]*V[26];
S[7]=V[14]*V[14]*V[14]*V[14];
C[52]=+S[2]*(S[7]*(2*(S[3]+S[4]-S[5]-S[6])+4*(V[29]*V[28]-V[27]*V[26])));
C[51]=+S[2]*(S[0]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26])));
S[8]=V[9]*V[9];
C[50]=+S[1]*(S[8]*(S[0]*(V[12]*(V[36]*(V[37]*(16*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[49]=+S[7]*(S[8]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26])));
C[48]=+S[8]*(S[0]*(16*(S[3]+S[4]-S[5]-S[6])+32*(V[29]*V[28]-V[27]*V[26])));
C[47]=+S[1]*(S[0]*(V[12]*(V[36]*(V[37]*(16*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[46]=+S[7]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26]));
C[45]=+S[0]*(16*(S[3]+S[4]-S[5]-S[6])+32*(V[29]*V[28]-V[27]*V[26]));
C[44]=+S[2]*(S[0]*(6*(S[3]+S[4]-S[5]-S[6])+12*(V[29]*V[28]-V[27]*V[26])));
C[43]=+S[8]*(S[0]*(24*(S[3]+S[4]-S[5]-S[6])+48*(V[29]*V[28]-V[27]*V[26])));
C[42]=+S[0]*(24*(S[3]+S[4]-S[5]-S[6])+48*(V[29]*V[28]-V[27]*V[26]));
C[41]=+S[8]*(S[0]*(12*(S[3]+S[4]-S[5]-S[6])+24*(V[29]*V[28]-V[27]*V[26])));
C[40]=+S[2]*(S[1]*(S[0]*(V[12]*(V[36]*(V[37]*(6*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[39]=+S[2]*(S[0]*(S[1]*(4*(S[5]-S[3]-S[4]+S[6])+8*(V[27]*V[26]-V[29]*
 V[28]))+S[0]*(V[26]*(-2*V[27]-V[26])+V[28]*(2*V[29]+V[28])+S[3]-S[5])));
C[38]=+S[2]*(S[1]*(8*(S[5]-S[3]-S[4]+S[6])+16*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26])));
C[37]=+S[1]*(S[8]*(S[0]*(V[12]*(V[36]*(V[37]*(24*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[36]=+S[8]*(S[0]*(S[1]*(16*(S[5]-S[3]-S[4]+S[6])+32*(V[27]*V[26]-V[29]*
 V[28]))+S[0]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26]))));
C[35]=+S[8]*(S[1]*(32*(S[5]-S[3]-S[4]+S[6])+64*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(16*(S[3]+S[4]-S[5]-S[6])+32*(V[29]*V[28]-V[27]*V[26])));
C[34]=+S[1]*(S[0]*(V[12]*(V[36]*(V[37]*(24*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[33]=+S[0]*(S[1]*(16*(S[5]-S[3]-S[4]+S[6])+32*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26])));
C[32]=+S[1]*(32*(S[5]-S[3]-S[4]+S[6])+64*(V[27]*V[26]-V[29]*V[28]))+S[0]*(
 16*(S[3]+S[4]-S[5]-S[6])+32*(V[29]*V[28]-V[27]*V[26]));
C[31]=+S[1]*(S[8]*(S[0]*(V[12]*(V[36]*(V[37]*(12*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[30]=+S[8]*(S[0]*(S[1]*(8*(S[5]-S[3]-S[4]+S[6])+16*(V[27]*V[26]-V[29]*
 V[28]))+S[0]*(2*(S[3]+S[4]-S[5]-S[6])+4*(V[29]*V[28]-V[27]*V[26]))));
C[29]=+S[8]*(S[1]*(16*(S[5]-S[3]-S[4]+S[6])+32*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26])));
C[28]=+S[1]*(S[8]*(S[0]*(V[12]*(V[36]*(V[37]*(8*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[27]=+S[7]*(S[8]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26])));
C[26]=+S[8]*(S[0]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26])));
C[25]=+S[8]*(S[1]*(32*(S[5]-S[3]-S[4]+S[6])+64*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26])));
C[24]=+S[1]*(S[8]*(V[12]*(V[36]*(V[37]*(64*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[23]=+S[1]*(S[8]*(32*(S[3]+S[4]-S[5]-S[6])+64*(V[29]*V[28]-V[27]*V[26])));
C[22]=+S[1]*(S[0]*(V[12]*(V[36]*(V[37]*(8*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[21]=+S[7]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26]));
C[20]=+S[0]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26]));
C[19]=+S[1]*(V[12]*(V[36]*(V[37]*(32*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))));
C[18]=+S[1]*(32*(S[5]-S[3]-S[4]+S[6])+64*(V[27]*V[26]-V[29]*V[28]))+S[0]*(8*
 (S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26]));
C[17]=+S[1]*(V[12]*(V[36]*(V[37]*(64*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))));
C[16]=+S[1]*(32*(S[3]+S[4]-S[5]-S[6])+64*(V[29]*V[28]-V[27]*V[26]));
C[15]=+S[2]*(S[1]*(S[0]*(V[12]*(V[36]*(V[37]*(2*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[14]=+S[2]*(S[7]*(V[26]*(-2*V[27]-V[26])+V[28]*(2*V[29]+V[28])+S[3]-S[5]));
C[13]=+S[1]*(S[8]*(S[0]*(V[12]*(V[36]*(V[37]*(4*(V[2]*(V[22]*(-V[29]-V[28]-
 V[27]-V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26])))))))));
C[12]=+S[7]*(S[8]*(2*(S[3]+S[4]-S[5]-S[6])+4*(V[29]*V[28]-V[27]*V[26])));
C[11]=+S[2]*(S[0]*(2*(S[3]+S[4]-S[5]-S[6])+4*(V[29]*V[28]-V[27]*V[26])));
C[10]=+S[8]*(S[0]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26])));
C[9]=+S[2]*(S[1]*(V[12]*(V[36]*(V[37]*(8*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[8]=+S[2]*(S[1]*(8*(S[5]-S[3]-S[4]+S[6])+16*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(2*(S[3]+S[4]-S[5]-S[6])+4*(V[29]*V[28]-V[27]*V[26])));
C[7]=+S[1]*(S[8]*(V[12]*(V[36]*(V[37]*(16*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[6]=+S[8]*(S[1]*(16*(S[5]-S[3]-S[4]+S[6])+32*(V[27]*V[26]-V[29]*V[28]))+
 S[0]*(4*(S[3]+S[4]-S[5]-S[6])+8*(V[29]*V[28]-V[27]*V[26])));
C[5]=+S[2]*(S[1]*(V[12]*(V[36]*(V[37]*(16*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[4]=+S[2]*(S[1]*(8*(S[3]+S[4]-S[5]-S[6])+16*(V[29]*V[28]-V[27]*V[26])));
C[3]=+S[1]*(S[8]*(V[12]*(V[36]*(V[37]*(32*(V[2]*(V[22]*(-V[29]-V[28]-V[27]-
 V[26]))+V[20]*(V[37]*(V[29]+V[28]+V[27]+V[26]))))))));
C[2]=+S[1]*(S[8]*(16*(S[3]+S[4]-S[5]-S[6])+32*(V[29]*V[28]-V[27]*V[26])));
S[9]=V[37]*V[37];
S[10]=V[17]*V[17]*V[17]*V[17];
S[11]=V[2]*V[2]*V[2]*V[2];
C[1]=+6*S[9]*S[10]*S[1]*S[11];
S[12]=V[49]*V[49]*V[49];
S[13]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[12]*V[41]*S[13];
}
REAL F419_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  B                 D          
                                    /!==<==============@==<==        
                                    |!  P6             |  P1         
                                    |!                 |             
      D                       n2    |!  n2             |             
    ==<==\                 /==>=====+!==>==\          Z|-PA          
      P1 |                 |  P3    |!  P3 |           3             
         |                 |        |!     |           |             
      u  |  W+    t     W+ |  E2    |!  E2 |  W+    t  |  u          
    ==>==@-1>--@==>==@-2>--@==<=====+!==<==@-->4-@==>==@==>==        
      P2    P7 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        b     |!  b        |                   
               |     \========>=====+!==>========/                   
               |              P5    |!  P5                           
               |                    |!                               
               |              B     |!                               
               \==============<=====/!                               
                              P6     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[54];REAL tmp[3];                                              
     
if(CalcConst) C419(C);
N=-C[0];
D=+C[1]*V[50];
tmp[0]=+DP[8]*(DP[0]*(V[50]*(V[50]*(DP[4]*(C[42]*DP[10]-C[46]-C[45]*DP[0]+
 C[32]*DP[11])+DP[13]*(C[20]*(DP[0]-DP[10])+C[21]-C[18]*DP[11])-C[20]*
 DP[11]*DP[3])+DP[13]*(-C[22]-C[19]*DP[11])+C[47]*DP[4])+DP[11]*(C[26]*
 DP[1]-C[35]*DP[2]+C[10]*DP[3]-C[29]*DP[4]+C[25]*DP[12]+C[6]*DP[13])+DP[0]*(
 C[26]*(DP[4]-DP[12])+C[48]*DP[2]-C[10]*DP[13])+DP[10]*(C[26]*DP[12]-C[43]*
 DP[2]-C[41]*DP[4]+C[10]*DP[13])+C[27]*(DP[4]-DP[12])+C[49]*DP[2]-C[12]*
 DP[13])+DP[11]*(DP[10]*(V[50]*(V[50]*(C[20]*DP[3]-C[18]*DP[4]-C[16]*
 DP[13])+C[17]*DP[13]-C[19]*DP[4])+C[25]*DP[2]-C[26]*DP[1]-C[10]*DP[3]+C[6]*
 DP[4]+C[23]*DP[12]+C[2]*DP[13])+DP[3]*(V[50]*(V[50]*(C[18]*DP[11]-C[33])+
 C[19]*DP[11]-C[34])+C[30]-C[6]*DP[11])+DP[1]*(C[36]-C[25]*DP[11]))+DP[10]*(
 DP[4]*(V[50]*(V[50]*(C[21]-C[20]*DP[10])-C[22])+C[10]*DP[10]-C[12])+DP[2]*(
 C[26]*DP[10]-C[27])));
tmp[1]=+DP[5]*(DP[0]*(DP[8]*(DP[11]*(C[10]*(-DP[1]-DP[3])+C[29]*(DP[2]+
 DP[4])+C[6]*(-DP[12]-DP[13]))+DP[0]*(C[26]*(-DP[2]-DP[4])+C[10]*(DP[12]+
 DP[13]))+DP[10]*(C[41]*(DP[2]+DP[4])+C[10]*(-DP[12]-DP[13]))+C[27]*(-DP[2]-
 DP[4])+C[12]*(DP[12]+DP[13]))+DP[9]*(DP[11]*(C[10]*(-DP[1]-DP[3])+C[29]*(
 DP[2]+DP[4])+C[6]*(-DP[12]-DP[13]))+DP[0]*(C[26]*(-DP[2]-DP[4])+C[10]*(
 DP[12]+DP[13]))+DP[10]*(C[41]*(DP[2]+DP[4])+C[10]*(-DP[12]-DP[13]))+C[27]*
 (-DP[2]-DP[4])+C[12]*(DP[12]+DP[13]))+DP[5]*(DP[7]*(C[27]+C[26]*DP[0]-
 C[41]*DP[10]-C[29]*DP[11])+DP[14]*(C[10]*(DP[10]-DP[0])+C[6]*DP[11]-C[12])+
 C[10]*DP[11]*DP[6])+DP[7]*(C[52]+C[51]*DP[0]-C[44]*DP[10]-C[38]*DP[11])+
 DP[14]*(C[11]*(DP[10]-DP[0])+C[8]*DP[11]-C[14])+C[11]*DP[11]*DP[6])+DP[10]*
 (DP[11]*(DP[8]*(C[10]*(DP[1]+DP[3])+C[6]*(-DP[2]-DP[4])+C[2]*(-DP[12]-
 DP[13]))+DP[9]*(C[10]*(DP[1]+DP[3])+C[6]*(-DP[2]-DP[4])+C[2]*(-DP[12]-
 DP[13]))+DP[5]*(C[6]*DP[7]-C[10]*DP[6]+C[2]*DP[14])+C[8]*DP[7]-C[11]*DP[6]+
 C[4]*DP[14])+DP[10]*(C[10]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+
 DP[7]*DP[5])+C[11]*DP[7])+C[12]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])-
 DP[7]*DP[5])-C[14]*DP[7])+DP[11]*(DP[11]*(C[6]*(DP[1]*(DP[8]+DP[9])+DP[3]*(
 DP[8]+DP[9])-DP[6]*DP[5])-C[8]*DP[6])+C[30]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-
 DP[8]-DP[9])+DP[6]*DP[5])+C[39]*DP[6]));
tmp[2]=+V[50]*(V[50]*(V[50]*(DP[0]*(DP[5]*(DP[7]*(C[41]*DP[10]-C[27]-C[26]*
 DP[0]+C[29]*DP[11])+DP[14]*(C[10]*(DP[0]-DP[10])+C[12]-C[6]*DP[11])-C[10]*
 DP[11]*DP[6])+DP[9]*(DP[2]*(C[27]+C[26]*DP[0]-C[41]*DP[10]-C[29]*DP[11])+
 DP[12]*(C[10]*(DP[10]-DP[0])+C[6]*DP[11]-C[12])+C[10]*DP[11]*DP[1]))+
 DP[10]*(DP[11]*(DP[5]*(C[10]*DP[6]-C[6]*DP[7]-C[2]*DP[14])+DP[9]*(C[6]*
 DP[2]-C[10]*DP[1]+C[2]*DP[12]))+DP[2]*(DP[9]*(C[10]*DP[10]-C[12]))+DP[5]*(
 DP[7]*(C[12]-C[10]*DP[10])))+DP[11]*(DP[1]*(DP[9]*(C[30]-C[6]*DP[11]))+
 DP[5]*(DP[6]*(C[6]*DP[11]-C[30])))+tmp[0])+DP[11]*(DP[8]*(DP[10]*(C[3]*(
 DP[2]-DP[13])+C[7]*DP[4]-C[24]*DP[12])+DP[0]*(C[3]*DP[12]+C[7]*DP[13])+
 DP[1]*(C[37]-C[3]*DP[11])+DP[3]*(C[31]-C[7]*DP[11]))+C[7]*(DP[5]*(DP[11]*
 DP[6]-DP[10]*DP[7]-DP[14]*DP[0])+DP[9]*(DP[10]*DP[2]-DP[11]*DP[1]+DP[12]*
 DP[0]))+DP[5]*(C[3]*DP[14]*DP[10]-C[31]*DP[6])+DP[9]*(C[31]*DP[1]-C[3]*
 DP[12]*DP[10]))+DP[0]*(DP[8]*(C[28]*(DP[12]-DP[4])+C[13]*DP[13]-C[50]*
 DP[2])+DP[5]*(C[28]*DP[7]-C[13]*DP[14])+DP[9]*(C[13]*DP[12]-C[28]*DP[2]))+
 DP[10]*(C[13]*(DP[8]*DP[4]-DP[7]*DP[5]+DP[9]*DP[2])+C[28]*DP[8]*DP[2]))+
 tmp[1]);
R=+DP[5]*(DP[11]*(C[7]*(DP[8]*(DP[0]*(-DP[12]-DP[13])+DP[10]*(-DP[2]-DP[4])+
 DP[11]*(DP[1]+DP[3]))+DP[9]*(DP[0]*(-DP[12]-DP[13])+DP[10]*(-DP[2]-DP[4])+
 DP[11]*(DP[1]+DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*DP[0]))+
 DP[10]*(C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+
 C[9]*DP[7]-C[5]*DP[14])+C[31]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+
 DP[6]*DP[5])+DP[6]*(C[40]-C[9]*DP[11])+C[9]*DP[14]*DP[0])+DP[0]*(C[28]*(
 DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])-DP[7]*DP[5])+C[13]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[15]*DP[14]-C[53]*DP[7])+
 DP[10]*(C[13]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*DP[5])+
 C[15]*DP[7]))+tmp[2];
R*=(N/D)*Q1[1]*Q2[2]*Q2[3]*Q1[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
