/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F418_out;
static void C418(REAL * C)
{
REAL* V=va_out;
REAL S[7];                                                                  
     
S[0]=V[14]*V[14];
S[1]=V[9]*V[9]*V[9]*V[9];
C[8]=+S[0]*S[1];
S[2]=V[9]*V[9];
C[7]=+4*S[0]*S[2];
C[6]=+4*S[0];
C[5]=+2*S[0]*S[2];
C[4]=+8*S[2];
C[3]=+2*S[1];
C[2]=+4*S[2];
S[3]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[3];
S[4]=V[49]*V[49]*V[49]*V[49];
S[5]=V[41]*V[41];
S[6]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[4]*S[5]*S[6];
}
REAL F418_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   D                       n2     !  n2                      D       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   u  |  W+    t     W+ |  E2     !  E2 |  W+    t     W+ |  u       
 ==>==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@-->3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P5     !  P5             |                
            |                     !                 |                
            |              B      !  B              |                
            \==============<======!==<==============/                
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[9];REAL S[2];                                                 
     
if(CalcConst) C418(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
R=+DP[11]*(DP[5]*(C[2]*(DP[0]*(DP[8]*(DP[12]-DP[2]-DP[4]+DP[13])+DP[9]*(
 DP[12]-DP[2]-DP[4]+DP[13])+S[1]*(DP[14]-DP[7])+DP[5]*(DP[7]-DP[14]))+
 DP[10]*(DP[8]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[9]*(DP[2]+DP[4]-DP[12]-
 DP[13])+S[1]*(DP[7]-DP[14])+DP[5]*(DP[14]-DP[7]))+DP[11]*(DP[1]*(-DP[8]-
 DP[9])+DP[3]*(-DP[8]-DP[9])+DP[6]*(DP[5]-S[1])))+C[5]*(DP[1]*(DP[8]+DP[9])+
 DP[3]*(DP[8]+DP[9])+DP[6]*(S[1]-DP[5]))+C[3]*(DP[0]*(DP[7]-DP[14])+DP[10]*(
 DP[14]-DP[7])+DP[11]*DP[6])-C[8]*DP[6])+S[1]*(DP[8]*(S[1]*(8*(DP[0]*(
 DP[13]-DP[4])+DP[10]*(DP[4]-DP[13])-DP[11]*DP[3])+C[6]*DP[3])+C[4]*(DP[0]*(
 DP[2]-DP[12])+DP[10]*(DP[12]-DP[2])+DP[11]*DP[1])+C[2]*(DP[0]*(DP[4]-
 DP[13])+DP[10]*(DP[13]-DP[4])+DP[11]*DP[3])-C[7]*DP[1]-C[5]*DP[3])+DP[9]*(
 C[2]*(DP[0]*(DP[2]-DP[12])+DP[10]*(DP[12]-DP[2])+DP[11]*DP[1])-C[5]*
 DP[1])));
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
