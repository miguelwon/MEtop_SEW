/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F31_out;
static void C31(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[2]*V[2];
S[1]=V[9]*V[9]*V[9]*V[9];
C[28]=+S[1]*(S[0]*(V[12]*(8*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24]))))));
S[2]=V[23]*V[23];
S[3]=V[37]*V[37];
C[27]=+S[1]*(S[0]*(V[36]*(V[37]*(32*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[2])+S[3]*V[23]*V[21])))));
C[26]=+S[1]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(6*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(6*(V[27]-V[29]-V[28]+V[26])))));
C[25]=+S[1]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(3*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(3*(V[27]-
 V[29]-V[28]+V[26])))));
S[4]=V[9]*V[9];
C[24]=+S[0]*(S[4]*(V[12]*(32*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))));
C[23]=+S[4]*(V[12]*(V[2]*(V[2]*(32*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(24*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(24*(V[27]-V[29]-V[28]+V[26])))));
C[22]=+S[0]*(V[12]*(32*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24])))));
C[21]=+V[12]*(V[2]*(V[2]*(32*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(
 V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(24*(V[27]-V[29]-V[28]+V[26])))+
 V[22]*(V[37]*(24*(V[27]-V[29]-V[28]+V[26]))));
C[20]=+S[0]*(S[4]*(V[36]*(V[37]*(128*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[2])+S[3]*V[23]*V[21])))));
C[19]=+S[0]*(V[36]*(V[37]*(128*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-V[37]*
 S[2])+S[3]*V[23]*V[21]))));
C[18]=+S[4]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26])))));
C[17]=+V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(-
 V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
S[5]=V[22]*V[22];
S[6]=V[20]*V[20];
S[7]=V[12]*V[12];
C[16]=+S[4]*(S[7]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(32*(S[3]-S[0])+
 24)+32*V[37]*V[20]*V[2])-32*V[37]*S[5]*V[2])+V[37]*(24*(S[5]-S[6])))-24*
 S[3]*V[22]*V[20]))));
C[15]=+S[4]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26])))));
C[14]=+S[7]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(32*(S[3]-S[0])+24)+32*
 V[37]*V[20]*V[2])-32*V[37]*S[5]*V[2])+V[37]*(24*(S[5]-S[6])))-24*S[3]*
 V[22]*V[20])));
C[13]=+V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(
 V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
C[12]=+S[0]*(V[36]*(V[37]*(64*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-V[37]*
 S[2])+S[3]*V[23]*V[21]))));
C[11]=+S[0]*(S[4]*(V[12]*(16*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))));
C[10]=+S[4]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(12*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(12*(V[27]-V[29]-V[28]+V[26])))));
C[9]=+S[0]*(S[4]*(V[36]*(V[37]*(64*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[2])+S[3]*V[23]*V[21])))));
C[8]=+S[4]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(6*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(6*(V[27]-
 V[29]-V[28]+V[26])))));
C[7]=+S[1]*(S[7]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(8*(S[3]-S[0])+6)+
 8*V[37]*V[20]*V[2])-8*V[37]*S[5]*V[2])+V[37]*(6*(S[5]-S[6])))-6*S[3]*V[22]*
 V[20]))));
C[6]=+S[1]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(3*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(3*(V[27]-
 V[29]-V[28]+V[26])))));
C[5]=+S[4]*(S[7]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(16*(S[3]-S[0])+
 12)+16*V[37]*V[20]*V[2])-16*V[37]*S[5]*V[2])+V[37]*(12*(S[5]-S[6])))-12*
 S[3]*V[22]*V[20]))));
C[4]=+S[4]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(6*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(6*(V[27]-
 V[29]-V[28]+V[26])))));
C[3]=+S[1]*(S[0]*(V[36]*(V[37]*(16*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[2])+S[3]*V[23]*V[21])))));
C[2]=+S[0]*(S[4]*(V[36]*(V[37]*(32*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[2])+S[3]*V[23]*V[21])))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2];
C[1]=+27*S[3]*S[8]*S[9];
S[10]=V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[10]*V[36]*S[11];
}
REAL F31_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  u                 u          
                                    /!==>==============@==>==        
                                    |!  P5             |  P1         
                                    |!                 |             
      u                       N2    |!  N2             |             
    ==>==\                 /==<=====+!==<==\          Z|-PA          
      P1 |                 |  P3    |!  P3 |           3             
         |                 |        |!     |           |             
      U  |  A     t     W+ |  e2    |!  e2 |  W+    t  |  U          
    ==<==@-1---@==<==@-2<--@==>=====+!==>==@--<4-@==<==@==<==        
      P2    P7 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        B     |!  B        |                   
               |     \========<=====+!==<========/                   
               |              P6    |!  P6                           
               |                    |!                               
               |              u     |!                               
               \==============>=====/!                               
                              P5     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[29];REAL S[1];REAL tmp[2];                                    
     
if(CalcConst) C31(C);
N=-C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[0]*(C[2]*(DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-
 DP[2]-DP[4]+DP[9])+S[0]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(
 DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+S[0]*(-
 DP[10]-DP[14])+DP[5]*(DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])+DP[14]*(S[0]-DP[5])))+V[50]*(DP[12]*(C[11]*(-DP[1]-DP[3])+
 C[10]*(-DP[2]-DP[4])+C[4]*(DP[8]+DP[9]))+DP[13]*(C[11]*(-DP[1]-DP[3])+
 C[10]*(-DP[2]-DP[4])+C[4]*(DP[8]+DP[9]))+V[50]*(V[50]*(C[4]*DP[14]-C[11]*
 DP[10]-C[10]*DP[11])-C[9]*DP[10]*DP[6]-C[5]*DP[14])+DP[5]*(C[11]*DP[10]+
 C[10]*DP[11]-C[4]*DP[14])+C[28]*DP[10]+C[26]*DP[11]-C[6]*DP[14])+DP[6]*(
 C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[3]*(
 DP[11]-DP[14])+C[27]*DP[10])+C[5]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+DP[14]*(C[3]*(DP[7]-DP[0])+C[7])+C[3]*DP[10]*DP[7]);
tmp[1]=+S[0]*(DP[12]*(DP[0]*(V[50]*(V[50]*(DP[9]*(C[12]*(DP[0]+DP[6]-DP[7])+
 C[13]*V[50]-C[14])+DP[3]*(-C[22]*V[50]-C[19]*DP[6]-C[12]*DP[7])+DP[4]*(-
 C[21]*V[50]-C[12]*DP[6]))+C[24]*DP[1]+C[23]*DP[2]+C[11]*DP[3]+C[10]*DP[4]-
 C[15]*DP[8]-C[4]*DP[9])+DP[6]*(C[9]*(DP[2]+DP[3]-DP[8])+C[2]*(DP[4]-DP[9])+
 C[20]*DP[1])+DP[7]*(C[9]*(DP[1]+DP[8])+C[2]*(DP[3]+DP[9]))+DP[0]*(-C[9]*
 DP[8]-C[2]*DP[9])+C[16]*DP[8]+C[5]*DP[9])+DP[6]*(DP[4]*(V[50]*(V[50]*(
 C[12]*(-DP[6]-DP[7])+C[17]*V[50]-C[14])-C[8])+C[2]*(DP[6]+DP[7])+C[5])+
 DP[2]*(C[9]*(DP[6]+DP[7])+C[16]-C[18]*V[50])+DP[7]*(DP[3]*(C[12]*S[0]-
 C[2])-C[9]*DP[1]))+DP[7]*(DP[3]*(V[50]*(V[50]*(C[14]-C[17]*V[50]+C[12]*
 DP[7])+C[8])-C[5]-C[2]*DP[7])+DP[1]*(C[18]*V[50]-C[16]-C[9]*DP[7])))+
 DP[13]*(DP[0]*(DP[8]*(C[2]*(DP[7]-DP[0]-DP[6])+C[5]-C[4]*V[50])+DP[1]*(
 C[11]*V[50]+C[9]*DP[6]+C[2]*DP[7])+DP[2]*(C[10]*V[50]+C[2]*DP[6]))+DP[6]*(
 DP[2]*(C[2]*(DP[6]+DP[7])+C[5]-C[8]*V[50])-C[2]*DP[7]*DP[1])+DP[1]*(DP[7]*(
 C[8]*V[50]-C[5]-C[2]*DP[7]))));
R=+DP[7]*(DP[5]*(DP[6]*(C[2]*(DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+
 DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+S[0]*(DP[10]-DP[11])+DP[5]*(DP[11]-
 DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[0])))+V[50]*(C[8]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[0]-DP[5]))+DP[11]*(-C[25]-C[5]*V[50]))+C[5]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(C[3]*(DP[6]+DP[7])+
 C[7])-C[3]*DP[10]*DP[7])+DP[7]*(V[50]*(C[8]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[0]))+DP[10]*(V[50]*(C[5]+C[2]*DP[7])+
 C[25]))+DP[7]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])-C[3]*DP[10])+C[5]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[7]*DP[10])+tmp[0])+tmp[1]);
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
