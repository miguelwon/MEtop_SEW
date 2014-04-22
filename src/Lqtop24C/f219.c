/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F219_out;
static void C219(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[33]*V[33];
S[1]=V[12]*V[12];
S[2]=V[9]*V[9];
C[9]=+S[2]*(S[1]*(V[32]*(8*V[33]+4*V[32])+4*S[0]));
C[8]=+S[2]*(V[32]*(8*V[32]-16*V[33])+8*S[0]);
C[7]=+S[1]*(V[32]*(8*V[33]+4*V[32])+4*S[0]);
C[6]=+V[32]*(8*V[32]-16*V[33])+8*S[0];
S[3]=V[9]*V[9]*V[9]*V[9];
C[5]=+S[3]*(S[1]*(V[32]*(2*V[33]+V[32])+S[0]));
C[4]=+S[2]*(S[1]*(V[32]*(4*V[33]+2*V[32])+2*S[0]));
C[3]=+S[3]*(V[32]*(2*V[32]-4*V[33])+2*S[0]);
C[2]=+S[2]*(V[32]*(4*V[32]-8*V[33])+4*S[0]);
S[4]=V[17]*V[17];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[49]*V[49];
S[7]=V[18]*V[18];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[6]*S[7]*S[8];
}
REAL F219_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         U     t     W+ |  e2     !  e2 |  W+    t     U             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           G|P7   \========<======!==<========/    G|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         d  |              d      !  d              |  d             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[10];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C219(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[5]*(C[2]*(DP[0]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[6]*
 (DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(
 DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-
 DP[10])))+DP[6]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[7]*(
 DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-
 DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))))+DP[0]*(C[3]*(DP[14]*(DP[7]-DP[0]-
 DP[6])+DP[10]*(DP[0]-DP[7])+DP[11]*DP[6])+C[4]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[5]*DP[11])+DP[6]*(C[4]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*(
 DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[5]*DP[14]));
R=+DP[7]*(S[2]*(DP[12]*(DP[0]*(S[2]*(C[6]*(DP[9]*(DP[0]+DP[6]-DP[7])+DP[3]*(
 DP[7]-DP[0])-DP[6]*DP[4])-C[7]*DP[4])+C[8]*(DP[8]*(DP[7]-DP[0]-DP[6])+
 DP[1]*(DP[0]-DP[7])+DP[6]*DP[2])+C[2]*(DP[9]*(DP[7]-DP[0]-DP[6])+DP[3]*(
 DP[0]-DP[7])+DP[6]*DP[4])+C[9]*DP[2]+C[4]*DP[4])+DP[6]*(DP[6]*(S[2]*(C[6]*
 (-DP[3]-DP[4]))+C[8]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[7]*(S[2]*(C[6]*(-
 DP[3]-DP[4]))+C[8]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[9]*(C[4]-C[7]*
 S[2])+C[9]*DP[8]))+DP[13]*(C[2]*(DP[0]*(DP[8]*(DP[7]-DP[0]-DP[6])+DP[1]*(
 DP[0]-DP[7])+DP[6]*DP[2])+DP[6]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])))+
 C[4]*(DP[2]*DP[0]+DP[8]*DP[6])))+tmp[0]);
R*=(N/D)*Q2[4]*Q2[2]*Q2[3];
if(gswidth_out ) R=R*Q0[1];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
