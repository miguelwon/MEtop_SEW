/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F448_out;
static void C448(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[22]*V[22];
S[1]=V[37]*V[37];
S[2]=V[12]*V[12];
S[3]=V[2]*V[2];
S[4]=V[9]*V[9]*V[9]*V[9];
C[49]=+S[4]*(S[3]*(S[2]*(V[36]*(V[37]*(8*(V[2]*(V[20]*(V[37]*V[20]-V[22]*
 V[2])-V[37]*S[0])+S[1]*V[22]*V[20]))))));
C[48]=+S[4]*(S[3]*(V[12]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(
 V[37]*(V[29]+V[28]-V[27]-V[26]))))));
C[47]=+S[4]*(S[3]*(V[12]*(4*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24]))))));
C[46]=+S[4]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))+V[21]*(6*(-V[25]-V[24])))+V[23]*(V[37]*(6*(-V[25]-
 V[24])))));
C[45]=+S[4]*(V[12]*(V[2]*(V[2]*(2*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[21]*(3*(V[25]+V[24])))+V[23]*(V[37]*(3*(V[25]+V[24])))));
S[5]=V[20]*V[20];
C[44]=+S[4]*(S[2]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(8*(S[1]-S[3])+
 12)+8*V[37]*V[20]*V[2])-8*V[37]*S[0]*V[2])+V[37]*(12*(S[0]-S[5])))-12*S[1]*
 V[22]*V[20]))));
C[43]=+S[4]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(6*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(6*(V[27]-V[29]-V[28]+V[26])))));
C[42]=+S[4]*(V[12]*(V[2]*(V[2]*(2*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(3*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(3*(V[27]-
 V[29]-V[28]+V[26])))));
S[6]=V[9]*V[9];
C[41]=+S[3]*(S[6]*(S[2]*(V[36]*(V[37]*(32*(V[2]*(V[20]*(V[37]*V[20]-V[22]*
 V[2])-V[37]*S[0])+S[1]*V[22]*V[20]))))));
C[40]=+S[3]*(S[6]*(V[12]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(
 V[37]*(V[29]+V[28]-V[27]-V[26]))))));
C[39]=+S[6]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*
 (V[25]+V[24]))))+V[21]*(24*(-V[25]-V[24])))+V[23]*(V[37]*(24*(-V[25]-
 V[24])))));
C[38]=+S[3]*(S[2]*(V[36]*(V[37]*(32*(V[2]*(V[20]*(V[37]*V[20]-V[22]*V[2])-
 V[37]*S[0])+S[1]*V[22]*V[20])))));
C[37]=+S[3]*(V[12]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(V[37]*
 (V[29]+V[28]-V[27]-V[26])))));
C[36]=+V[12]*(V[2]*(V[2]*(16*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))+V[21]*(24*(-V[25]-V[24])))+V[23]*(V[37]*(24*(-V[25]-
 V[24]))));
C[35]=+S[3]*(S[6]*(V[12]*(16*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))));
C[34]=+S[6]*(S[2]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(32*(S[1]-S[3])+
 48)+32*V[37]*V[20]*V[2])-32*V[37]*S[0]*V[2])+V[37]*(48*(S[0]-S[5])))-48*
 S[1]*V[22]*V[20]))));
C[33]=+S[6]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(24*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(24*(V[27]-V[29]-V[28]+V[26])))));
C[32]=+S[3]*(V[12]*(16*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24])))));
C[31]=+S[2]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(32*(S[1]-S[3])+48)+32*
 V[37]*V[20]*V[2])-32*V[37]*S[0]*V[2])+V[37]*(48*(S[0]-S[5])))-48*S[1]*
 V[22]*V[20])));
C[30]=+V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(
 V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(24*(V[27]-V[29]-V[28]+V[26])))+
 V[22]*(V[37]*(24*(V[27]-V[29]-V[28]+V[26]))));
C[29]=+S[6]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[21]*(12*(V[25]+V[24])))+V[23]*(V[37]*(12*(V[25]+V[24])))));
C[28]=+V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(-
 V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[21]*(12*(V[25]+V[24])))+V[23]*(V[37]*(12*(V[25]+V[24]))));
C[27]=+S[6]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26])))));
C[26]=+V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(-
 V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
C[25]=+S[6]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[21]*(12*(-V[25]-V[24])))+V[23]*(V[37]*(12*(-V[25]-V[24])))));
S[7]=V[23]*V[23];
S[8]=V[21]*V[21];
C[24]=+S[6]*(V[36]*(V[37]*(V[2]*(V[2]*(V[21]*(V[23]*(64*(S[1]-S[3])+96)+64*
 V[37]*V[21]*V[2])-64*V[37]*S[7]*V[2])+V[37]*(96*(S[7]-S[8])))-96*S[1]*
 V[23]*V[21])));
C[23]=+S[6]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26])))));
C[22]=+S[3]*(S[6]*(V[36]*(V[37]*(64*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[1]*V[23]*V[21])))));
C[21]=+V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(
 V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[21]*(12*(-V[25]-V[24])))+V[23]*(V[37]*(12*(-V[25]-V[24]))));
C[20]=+V[36]*(V[37]*(V[2]*(V[2]*(V[21]*(V[23]*(64*(S[1]-S[3])+96)+64*V[37]*
 V[21]*V[2])-64*V[37]*S[7]*V[2])+V[37]*(96*(S[7]-S[8])))-96*S[1]*V[23]*
 V[21]));
C[19]=+V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(
 V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
C[18]=+S[3]*(V[36]*(V[37]*(64*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-V[37]*
 S[7])+S[1]*V[23]*V[21]))));
C[17]=+S[3]*(S[6]*(S[2]*(V[36]*(V[37]*(16*(V[2]*(V[20]*(V[37]*V[20]-V[22]*
 V[2])-V[37]*S[0])+S[1]*V[22]*V[20]))))));
C[16]=+S[3]*(S[6]*(V[12]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(
 V[37]*(V[29]+V[28]-V[27]-V[26]))))));
C[15]=+S[6]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))+V[21]*(12*(-V[25]-V[24])))+V[23]*(V[37]*(12*(-V[25]-
 V[24])))));
C[14]=+S[3]*(S[6]*(V[12]*(8*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24]))))));
C[13]=+S[6]*(S[2]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(16*(S[1]-S[3])+
 24)+16*V[37]*V[20]*V[2])-16*V[37]*S[0]*V[2])+V[37]*(24*(S[0]-S[5])))-24*
 S[1]*V[22]*V[20]))));
C[12]=+S[6]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(12*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(12*(V[27]-V[29]-V[28]+V[26])))));
C[11]=+S[6]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[21]*(6*(V[25]+V[24])))+V[23]*(V[37]*(6*(V[25]+V[24])))));
C[10]=+S[6]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(6*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(6*(V[27]-
 V[29]-V[28]+V[26])))));
C[9]=+S[4]*(V[12]*(V[2]*(V[2]*(2*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[21]*(3*(-V[25]-V[24])))+V[23]*(V[37]*(3*(-V[25]-V[24])))));
C[8]=+S[6]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[21]*(6*(-V[25]-V[24])))+V[23]*(V[37]*(6*(-V[25]-V[24])))));
C[7]=+S[4]*(V[36]*(V[37]*(V[2]*(V[2]*(V[21]*(V[23]*(16*(S[1]-S[3])+24)+16*
 V[37]*V[21]*V[2])-16*V[37]*S[7]*V[2])+V[37]*(24*(S[7]-S[8])))-24*S[1]*
 V[23]*V[21])));
C[6]=+S[6]*(V[36]*(V[37]*(V[2]*(V[2]*(V[21]*(V[23]*(32*(S[1]-S[3])+48)+32*
 V[37]*V[21]*V[2])-32*V[37]*S[7]*V[2])+V[37]*(48*(S[7]-S[8])))-48*S[1]*
 V[23]*V[21])));
C[5]=+S[4]*(V[12]*(V[2]*(V[2]*(2*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(3*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(3*(V[27]-
 V[29]-V[28]+V[26])))));
C[4]=+S[6]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(6*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(6*(V[27]-
 V[29]-V[28]+V[26])))));
C[3]=+S[4]*(S[3]*(V[36]*(V[37]*(16*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[1]*V[23]*V[21])))));
C[2]=+S[3]*(S[6]*(V[36]*(V[37]*(32*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[1]*V[23]*V[21])))));
S[9]=V[17]*V[17]*V[17]*V[17];
S[10]=V[2]*V[2]*V[2];
C[1]=+9*S[1]*S[9]*S[10];
S[11]=V[49]*V[49];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[11]*V[36]*S[12];
}
REAL F448_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   D                       n2     !  n2                      D       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   d  |  A     t     W+ |  E2     !  E2 |  W+    t     Z  |  d       
 ==>==@-1---@==>==@-2>--@==<======!==<==@-->4-@==>==@---3-@==>==     
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
static REAL C[50];REAL S[2];REAL tmp[2];                                    
     
if(CalcConst) C448(C);
N=+C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(DP[12]*(V[50]*(V[50]*(DP[6]*(C[20]*(DP[0]*(DP[9]-DP[4])+
 DP[6]*(DP[4]-DP[9])-DP[7]*DP[3])+V[50]*(C[37]*DP[3]+C[36]*DP[4]-C[21]*
 DP[9])-C[38]*DP[3]-C[18]*DP[7]*DP[4])+DP[7]*(C[18]*(DP[0]*(DP[9]-DP[3])+
 DP[7]*(DP[3]-DP[9]))+V[50]*(C[32]*DP[3]+C[30]*DP[4]-C[19]*DP[9])-C[31]*
 DP[4]))+DP[6]*(C[25]*DP[8]-C[40]*DP[1]-C[39]*DP[2]-C[16]*DP[3]-C[15]*DP[4]+
 C[8]*DP[9])+DP[7]*(C[23]*DP[8]-C[35]*DP[1]-C[33]*DP[2]-C[14]*DP[3]-C[12]*
 DP[4]+C[4]*DP[9]))+DP[6]*(C[24]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+
 DP[7]*DP[1])+C[6]*(DP[0]*(DP[4]-DP[9])+DP[6]*(DP[9]-DP[4])+DP[7]*DP[3])+
 DP[7]*(C[22]*DP[2]+C[2]*DP[4])+C[41]*DP[1]+C[17]*DP[3])+DP[7]*(DP[0]*(
 C[22]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[7]*(C[22]*(DP[8]-DP[1])+C[2]*(
 DP[9]-DP[3]))+C[34]*DP[2]+C[13]*DP[4]))+DP[6]*(DP[5]*(C[6]*(DP[0]*(DP[14]-
 DP[11])+DP[6]*(DP[11]-DP[14])-DP[10]*DP[7])+V[50]*(C[16]*DP[10]+C[15]*
 DP[11]-C[8]*DP[14])-C[17]*DP[10]-C[2]*DP[11]*DP[7])+DP[13]*(C[6]*(DP[0]*(
 DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+V[50]*(C[8]*DP[8]-C[16]*
 DP[1]-C[15]*DP[2])+C[17]*DP[1]+C[2]*DP[7]*DP[2]))+DP[7]*(DP[5]*(C[2]*(
 DP[0]*(DP[14]-DP[10])+DP[7]*(DP[10]-DP[14]))+V[50]*(C[14]*DP[10]+C[12]*
 DP[11]-C[4]*DP[14])-C[13]*DP[11])+DP[13]*(C[2]*(DP[0]*(DP[1]-DP[8])+DP[7]*(
 DP[8]-DP[1]))+V[50]*(C[4]*DP[8]-C[14]*DP[1]-C[12]*DP[2])+C[13]*DP[2])));
tmp[1]=+DP[5]*(DP[6]*(C[6]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[6]*(DP[12]*(DP[2]+DP[4]-
 DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*
 (DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5]))+DP[7]*(C[2]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[7]*DP[10]+
 C[3]*DP[11])+C[17]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[7]*(DP[0]*(DP[11]-DP[14])+DP[6]*(DP[14]-DP[11]))+C[49]*DP[10])+
 DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-
 DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[10])))+C[13]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[3]*(DP[0]*(
 DP[10]-DP[14])+DP[7]*(DP[14]-DP[10]))+C[44]*DP[11]));
S[1]=DP[7]*DP[7];
R=+DP[0]*(V[50]*(DP[5]*(DP[6]*(DP[12]*(C[16]*(DP[1]+DP[3])+C[15]*(DP[2]+
 DP[4])+C[8]*(-DP[8]-DP[9]))+DP[13]*(C[16]*(DP[1]+DP[3])+C[15]*(DP[2]+
 DP[4])+C[8]*(-DP[8]-DP[9]))+DP[5]*(C[8]*DP[14]-C[16]*DP[10]-C[15]*DP[11])+
 C[9]*DP[14]-C[48]*DP[10]-C[46]*DP[11])+DP[7]*(DP[12]*(C[14]*(DP[1]+DP[3])+
 C[12]*(DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[14]*(DP[1]+DP[3])+C[12]*
 (DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+DP[5]*(C[4]*DP[14]-C[14]*DP[10]-C[12]*
 DP[11])+C[5]*DP[14]-C[47]*DP[10]-C[43]*DP[11]))+tmp[0])+tmp[1])+V[50]*(
 DP[6]*(DP[7]*(DP[5]*(C[11]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[0]))+C[10]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[0]))+C[45]*DP[10]+C[42]*DP[11])+S[0]*(DP[12]*(S[0]*(-C[28]*
 DP[3]-C[26]*DP[4])+C[29]*DP[1]+C[27]*DP[2]+C[11]*DP[3]+C[10]*DP[4])+DP[13]*
 (C[11]*DP[1]+C[10]*DP[2])))+DP[6]*(C[11]*(DP[5]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])+DP[11]*(S[0]-DP[5]))+S[0]*(-DP[12]*DP[4]-DP[13]*
 DP[2]))+S[0]*(DP[12]*(C[28]*DP[4]*S[0]-C[29]*DP[2]))-C[45]*DP[11]*DP[5]))+
 S[1]*(C[10]*(DP[5]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(
 S[0]-DP[5]))+S[0]*(-DP[12]*DP[3]-DP[13]*DP[1]))+S[0]*(DP[12]*(C[26]*DP[3]*
 S[0]-C[27]*DP[1]))-C[42]*DP[10]*DP[5]));
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
