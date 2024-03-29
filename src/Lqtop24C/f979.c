/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F979_out;
static void C979(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[33]*V[33];
S[1]=V[12]*V[12];
S[2]=V[9]*V[9]*V[9]*V[9];
C[24]=+S[2]*(S[1]*(V[32]*(2*V[33]+7*V[32])+7*S[0]));
S[3]=V[32]*V[32];
C[23]=+S[2]*(S[1]*(9*(S[0]+S[3])));
C[22]=+S[2]*(V[32]*(8*V[32]-16*V[33])+8*S[0]);
S[4]=V[9]*V[9];
C[21]=+S[4]*(S[1]*(V[32]*(8*V[33]+28*V[32])+28*S[0]));
C[20]=+S[4]*(S[1]*(36*(S[0]+S[3])));
C[19]=+S[1]*(V[32]*(8*V[33]+28*V[32])+28*S[0]);
C[18]=+S[1]*(36*(S[0]+S[3]));
C[17]=+S[4]*(V[32]*(32*V[32]-64*V[33])+32*S[0]);
C[16]=+V[32]*(32*V[32]-64*V[33])+32*S[0];
C[15]=+24*V[33]*V[32]*S[1]*S[4];
C[14]=+S[4]*(S[1]*(V[32]*(28*V[32]-40*V[33])+28*S[0]));
C[13]=+24*V[33]*V[32]*S[1];
C[12]=+S[1]*(V[32]*(28*V[32]-40*V[33])+28*S[0]);
C[11]=+V[32]*(16*V[32]-32*V[33])+16*S[0];
C[10]=+S[4]*(S[1]*(V[32]*(4*V[33]+14*V[32])+14*S[0]));
C[9]=+S[4]*(S[1]*(18*(S[0]+S[3])));
C[8]=+S[4]*(V[32]*(16*V[32]-32*V[33])+16*S[0]);
C[7]=+6*V[33]*V[32]*S[1]*S[2];
C[6]=+12*V[33]*V[32]*S[1]*S[4];
C[5]=+S[2]*(S[1]*(V[32]*(7*V[32]-10*V[33])+7*S[0]));
C[4]=+S[4]*(S[1]*(V[32]*(14*V[32]-20*V[33])+14*S[0]));
C[3]=+S[2]*(V[32]*(4*V[32]-8*V[33])+4*S[0]);
C[2]=+S[4]*(V[32]*(8*V[32]-16*V[33])+8*S[0]);
S[5]=V[17]*V[17];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+4*S[5]*S[6];
S[7]=V[49]*V[49];
S[8]=V[18]*V[18];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[7]*S[8]*S[9];
}
REAL F979_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      G                 U      !                                     
    -1---@==============<==\   !                                     
      P1 |              P5 |   !                                     
         |                 |   !                                     
         |              n2 |   !  n2                      G          
        t|P7         /==>==+===!==>==\                 /---1-        
         |           |  P3 |   !  P3 |                 |  P1         
         |           |     |   !     |                 |             
      G  |  t     W+ |  E2 |   !  E2 |  W+    t    ~00 |  G          
    -2---@==>==@-3>--@==<==+===!==<==@-->5-@==>==@---4-@---2-        
      P2    P8 |  P9    P4 |   !  P4   -PC | -PB | -PA    P2         
               |           |   !           |     |                   
               |        b  |   !  b        |     |                   
               \========>==+===!==>========/     |                   
                        P6 |   !  P6             |                   
                           |   !                 |                   
                           |   !  U              |                   
                           \===!==<==============/                   
                               !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[25];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C979(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[6]*(DP[5]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(
 DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+DP[0]*
 (DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+DP[7]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5])))+DP[6]*(
 C[8]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+
 C[3]*(DP[14]-DP[10])-C[22]*DP[11])+DP[12]*(C[10]*(DP[1]+DP[3])+C[9]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[10]*(DP[1]+DP[3])+C[9]*(DP[2]+DP[4])+
 C[4]*(-DP[8]-DP[9]))+DP[11]*(C[9]*(S[2]-DP[5])+C[3]*(DP[0]-DP[7])-C[23])+
 DP[10]*(C[10]*(S[2]-DP[5])-C[24])+DP[14]*(C[4]*(DP[5]-S[2])+C[5]))+S[2]*(
 DP[12]*(DP[6]*(S[2]*(C[11]*(DP[3]-DP[9])+C[16]*DP[4])+C[8]*(DP[8]-DP[1]-
 DP[4])+C[2]*(DP[9]-DP[3])-C[17]*DP[2])+DP[4]*(S[2]*(C[11]*(DP[7]-DP[0])+
 C[18])+C[2]*(DP[0]-DP[7])-C[9])+DP[2]*(C[8]*(DP[0]-DP[7])-C[20])+S[2]*(
 C[19]*DP[3]-C[12]*DP[9])+C[14]*DP[8]-C[21]*DP[1]-C[10]*DP[3]+C[4]*DP[9])+
 DP[13]*(DP[2]*(C[2]*(DP[0]-DP[7])-C[9]-C[8]*DP[6])+DP[1]*(-C[10]-C[2]*
 DP[6])+DP[8]*(C[4]+C[2]*DP[6]))));
R=+DP[0]*(C[6]*(DP[5]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5])))+S[2]*(DP[0]*(DP[12]*DP[9]+DP[13]*DP[8])+DP[7]*(-
 DP[12]*DP[3]-DP[13]*DP[1])))+S[2]*(DP[12]*(S[2]*(C[13]*(DP[7]*DP[3]-DP[9]*
 DP[0]))+C[15]*(DP[8]*DP[0]-DP[7]*DP[1])))+DP[5]*(C[7]*(DP[14]*DP[0]-DP[10]*
 DP[7]))+tmp[0]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*-9)/(-8);
 }
 return R;
}
