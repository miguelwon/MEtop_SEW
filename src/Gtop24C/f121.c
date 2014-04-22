/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F121_out;
static void C121(REAL * C)
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
REAL F121_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P4     !  P4 |                            
                        |         !     |                            
         G     t     W+ |  e2     !  e2 |  W+    t     G             
       -1---@==<==@-3<--@==>======!==>==@--<4-@==<==@---1-           
         P1 |  P8 |  P9    P5     !  P5   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           u|P7   \========<======!==<========/    u|-PA             
            |              P6     !  P6             |                
            |                     !                 |                
         U  |              G      !  G              |  U             
       ==<==@-------------2-------!---2-------------@==<==           
         P2                P3     !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[3];                                                
     
if(CalcConst) C121(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
R=+DP[1]*(DP[2]*(DP[9]*(C[2]*(DP[0]*(DP[13]*(DP[4]-DP[5]+DP[7]-DP[8])+
 DP[14]*(DP[4]-DP[5]+DP[7]-DP[8])+S[2]*(DP[11]-DP[12])+DP[9]*(DP[12]-
 DP[11]))+DP[1]*(DP[13]*(DP[5]-DP[4]-DP[7]+DP[8])+DP[14]*(DP[5]-DP[4]-DP[7]+
 DP[8])+S[2]*(DP[12]-DP[11])+DP[9]*(DP[11]-DP[12]))+DP[2]*(DP[3]*(DP[13]+
 DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9])))+C[3]*(DP[3]*(DP[13]+
 DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[8]*(DP[0]*(DP[12]-
 DP[11])+DP[1]*(DP[11]-DP[12])-DP[10]*DP[2])-C[9]*DP[10])+S[2]*(DP[13]*(
 S[2]*(C[4]*(DP[0]*(DP[7]-DP[8])+DP[1]*(DP[8]-DP[7])+DP[6]*DP[2])+C[5]*
 DP[6])+C[6]*(DP[0]*(DP[5]-DP[4])+DP[1]*(DP[4]-DP[5])-DP[3]*DP[2])+C[2]*(
 DP[0]*(DP[8]-DP[7])+DP[1]*(DP[7]-DP[8])-DP[6]*DP[2])-C[7]*DP[3]-C[3]*
 DP[6])+DP[14]*(C[2]*(DP[0]*(DP[5]-DP[4])+DP[1]*(DP[4]-DP[5])-DP[3]*DP[2])-
 C[3]*DP[3]))));
R*=(N/D)*Q2[7]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*81)/(64);
 }
 return R;
}
