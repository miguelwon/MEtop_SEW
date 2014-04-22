/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F21_out;
static void C21(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[9]=+S[2]*(S[1]*(V[15]*(2*V[16]+V[15])+S[0]));
C[8]=+S[2]*(V[15]*(2*V[15]-4*V[16])+2*S[0]);
S[3]=V[7]*V[7];
C[7]=+S[3]*(S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]));
C[6]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[5]=+S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]);
C[4]=+V[15]*(8*V[15]-16*V[16])+8*S[0];
C[3]=+S[3]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[2]=+S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
S[4]=V[12]*V[12];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[22]*V[22];
S[7]=V[13]*V[13];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[6]*S[7]*S[8];
}
REAL F21_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   U                       N2     !  N2                      U       
 ==<==\                 /==<======!==<==\                 /==<==     
   P1 |                 |  P4     !  P4 |                 |  P1      
      |                 |         !     |                 |          
   G  |  u     t     W+ |  e2     !  e2 |  W+    t     u  |  G       
 -1---@==<==@==<==@-3<--@==>======!==>==@--<4-@==<==@==<==@---1-     
   P2    P7 |  P8 |  P9    P5     !  P5   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              G      !  G              |                
            \-------------2-------!---2-------------/                
                           P3     !  P3                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[3];                                                
     
if(CalcConst) C21(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
R=+DP[0]*(DP[2]*(DP[9]*(C[2]*(DP[1]*(DP[13]*(-DP[3]-DP[4]-DP[6]-DP[7])+
 DP[14]*(-DP[3]-DP[4]-DP[6]-DP[7])+S[2]*(-DP[10]-DP[11])+DP[9]*(DP[10]+
 DP[11]))+DP[2]*(DP[13]*(-DP[3]-DP[4]-DP[6]-DP[7])+DP[14]*(-DP[3]-DP[4]-
 DP[6]-DP[7])+S[2]*(-DP[10]-DP[11])+DP[9]*(DP[10]+DP[11]))+DP[0]*(DP[5]*(
 DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9])))+C[3]*(DP[5]*(-
 DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[8]*(DP[1]*(
 DP[10]+DP[11])+DP[2]*(DP[10]+DP[11])-DP[12]*DP[0])+C[9]*DP[12])+S[2]*(
 DP[13]*(S[2]*(C[4]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*DP[0])-
 C[5]*DP[8])+C[6]*(DP[1]*(DP[3]+DP[4])+DP[2]*(DP[3]+DP[4])-DP[5]*DP[0])+
 C[2]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])-DP[8]*DP[0])+C[7]*DP[5]+C[3]*
 DP[8])+DP[14]*(C[2]*(DP[1]*(DP[3]+DP[4])+DP[2]*(DP[3]+DP[4])-DP[5]*DP[0])+
 C[3]*DP[5]))));
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*81)/(64);
 }
 return R;
}
