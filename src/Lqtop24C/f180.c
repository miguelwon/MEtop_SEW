/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F180_out;
static void C180(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[37]*V[37];
S[1]=V[22]*V[22];
S[2]=V[12]*V[12];
S[3]=V[9]*V[9]*V[9]*V[9];
C[9]=+S[3]*(S[2]*(V[2]*(V[20]*(2*V[37]*V[22]+V[20]*V[2]))+S[0]*S[1]));
S[4]=V[9]*V[9];
C[8]=+S[4]*(S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]));
C[7]=+S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]);
S[5]=V[23]*V[23];
C[6]=+S[4]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]);
C[5]=+V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5];
C[4]=+S[4]*(S[2]*(V[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+2*S[0]*S[1]));
C[3]=+S[3]*(V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[5]);
C[2]=+S[4]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5]);
S[6]=V[17]*V[17]*V[17]*V[17];
S[7]=V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+128*S[8]*S[9];
}
REAL F180_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   U                       N2     !  N2                      U       
 ==<==\                 /==<======!==<==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   u  |  A     t     W+ |  e2     !  e2 |  W+    t     A  |  u       
 ==>==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@---3-@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              u      !  u              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[1];REAL tmp[1];                                    
     
if(CalcConst) C180(C);
N=-C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[5]*(C[2]*(DP[6]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[0]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[0]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[0]*(-DP[10]-DP[11])+DP[5]*(
 DP[10]+DP[11])))+DP[7]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[0]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[7]*
 (DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[0]*(
 DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))))+DP[6]*(C[4]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[0]))+C[3]*(DP[11]*(DP[0]-
 DP[6]+DP[7])+DP[14]*(DP[6]-DP[0])+DP[10]*DP[7])+C[9]*DP[10])+DP[7]*(C[4]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[0]))+C[3]*(
 DP[0]*(DP[10]-DP[14])+DP[7]*(DP[14]-DP[10]))+C[9]*DP[11]));
R=+DP[0]*(S[0]*(DP[12]*(DP[6]*(S[0]*(C[5]*(DP[4]*(DP[6]-DP[0]-DP[7])+DP[9]*(
 DP[0]-DP[6])-DP[7]*DP[3])-C[7]*DP[3])+C[6]*(DP[2]*(DP[0]-DP[6]+DP[7])+
 DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+C[2]*(DP[4]*(DP[0]-DP[6]+DP[7])+DP[9]*(
 DP[6]-DP[0])+DP[7]*DP[3])+C[8]*DP[1]+C[4]*DP[3])+DP[7]*(DP[0]*(S[0]*(C[5]*(
 DP[9]-DP[3]))+C[6]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+DP[7]*(S[0]*(C[5]*(
 DP[3]-DP[9]))+C[6]*(DP[8]-DP[1])+C[2]*(DP[9]-DP[3]))+DP[4]*(C[4]-C[7]*
 S[0])+C[8]*DP[2]))+DP[13]*(C[2]*(DP[6]*(DP[2]*(DP[0]-DP[6]+DP[7])+DP[8]*(
 DP[6]-DP[0])+DP[7]*DP[1])+DP[7]*(DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+
 C[4]*(DP[6]*DP[1]+DP[7]*DP[2])))+tmp[0]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
