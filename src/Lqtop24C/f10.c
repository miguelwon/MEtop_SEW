/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F10_out;
static void C10(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[37]*V[37];
S[1]=V[22]*V[22];
S[2]=V[12]*V[12];
S[3]=V[9]*V[9];
C[9]=+S[3]*(S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]));
S[4]=V[23]*V[23];
C[8]=+S[3]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[4]);
C[7]=+S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]);
C[6]=+V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[4];
S[5]=V[9]*V[9]*V[9]*V[9];
C[5]=+S[5]*(S[2]*(V[2]*(V[20]*(2*V[37]*V[22]+V[20]*V[2]))+S[0]*S[1]));
C[4]=+S[3]*(S[2]*(V[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+2*S[0]*S[1]));
C[3]=+S[5]*(V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[4]);
C[2]=+S[3]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[4]);
S[6]=V[17]*V[17]*V[17]*V[17];
S[7]=V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+128*S[8]*S[9];
}
REAL F10_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
           A|P7   \========>======!==>========/    A|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         u  |              u      !  u              |  u             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[1];REAL tmp[1];                                    
     
if(CalcConst) C10(C);
N=-C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[5]*(C[2]*(DP[0]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[0]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[6]*
 (DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[0]*(
 DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[0]*(DP[10]-DP[14])+DP[5]*(DP[14]-
 DP[10])))+DP[6]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+S[0]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[7]*(
 DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[0]*(-
 DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))))+DP[0]*(C[3]*(DP[14]*(DP[7]-DP[0]-
 DP[6])+DP[10]*(DP[0]-DP[7])+DP[11]*DP[6])+C[4]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[0]))+C[5]*DP[11])+DP[6]*(C[4]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[0]))+C[3]*(
 DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[5]*DP[14]));
R=+DP[7]*(S[0]*(DP[12]*(DP[0]*(S[0]*(C[6]*(DP[9]*(DP[0]+DP[6]-DP[7])+DP[3]*(
 DP[7]-DP[0])-DP[6]*DP[4])-C[7]*DP[4])+C[8]*(DP[8]*(DP[7]-DP[0]-DP[6])+
 DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+C[2]*(DP[9]*(DP[7]-DP[0]-DP[6])+DP[3]*(
 DP[0]-DP[7])+DP[6]*DP[4])+C[9]*DP[2]+C[4]*DP[4])+DP[6]*(DP[6]*(S[0]*(C[6]*
 (-DP[3]-DP[4]))+C[8]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[7]*(S[0]*(C[6]*(-
 DP[3]-DP[4]))+C[8]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[9]*(C[4]-C[7]*
 S[0])+C[9]*DP[8]))+DP[13]*(C[2]*(DP[0]*(DP[8]*(DP[7]-DP[0]-DP[6])+DP[1]*(
 DP[0]-DP[7])+DP[6]*DP[2])+DP[6]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])))+
 C[4]*(DP[2]*DP[0]+DP[8]*DP[6])))+tmp[0]);
R*=(N/D)*Q2[5]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
