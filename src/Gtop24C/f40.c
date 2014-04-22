/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F40_out;
static void C40(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[16]*V[16];
S[1]=V[15]*V[15];
S[2]=V[7]*V[7]*V[7]*V[7];
C[18]=+S[2]*(4*(S[0]-S[1]));
S[3]=V[9]*V[9];
C[17]=+S[2]*(S[3]*(S[0]-S[1]));
C[16]=+S[2]*(8*(S[0]-S[1]));
C[15]=+S[2]*(S[3]*(2*(S[0]-S[1])));
C[14]=+S[2]*(2*(S[0]-S[1]));
S[4]=V[7]*V[7];
C[13]=+S[4]*(32*(S[0]-S[1]));
C[12]=+S[4]*(S[3]*(8*(S[0]-S[1])));
C[11]=+16*(S[0]-S[1]);
C[10]=+S[3]*(4*(S[0]-S[1]));
C[9]=+32*(S[0]-S[1]);
C[8]=+S[3]*(8*(S[0]-S[1]));
C[7]=+8*(S[0]-S[1]);
C[6]=+S[4]*(8*(S[0]-S[1]));
C[5]=+S[4]*(S[3]*(2*(S[0]-S[1])));
C[4]=+S[4]*(16*(S[0]-S[1]));
C[3]=+S[4]*(S[3]*(4*(S[0]-S[1])));
C[2]=+S[4]*(4*(S[0]-S[1]));
S[5]=V[12]*V[12];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[5]*S[6];
S[7]=V[22]*V[22];
S[8]=V[13]*V[13];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+12*S[7]*S[8]*S[9];
}
REAL F40_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P4     !  P4 |                            
                        |         !     |                            
         U     t     W+ |  e2     !  e2 |  W+    t     U             
       ==<==@==<==@-4<--@==>======!==>==@--<6-@==<==@==<==           
         P1 |  P8 |  P9    P5     !  P5   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           G|P7   \========<======!==<========/  ~00|-PA             
            1              P6     !  P6             5                
            |                     !                 |                
         G  |              G      !  G              |  G             
       -2---@-------------3-------!---3-------------@---2-           
         P2                P3     !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[19];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C40(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[9]*(DP[2]*(C[2]*(DP[0]*(DP[13]*(DP[4]-DP[5]+DP[7]-DP[8])+DP[14]*(
 DP[4]-DP[5]+DP[7]-DP[8])+S[2]*(DP[11]-DP[12])+DP[9]*(DP[12]-DP[11]))+DP[1]*
 (DP[13]*(DP[5]-DP[4]-DP[7]+DP[8])+DP[14]*(DP[5]-DP[4]-DP[7]+DP[8])+S[2]*(
 DP[12]-DP[11])+DP[9]*(DP[11]-DP[12]))+DP[2]*(DP[3]*(-DP[13]-DP[14])+DP[6]*
 (-DP[13]-DP[14])+DP[10]*(DP[9]-S[2])))+C[4]*(DP[0]*(DP[3]*(DP[13]+DP[14])+
 DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+DP[1]*(DP[3]*(-DP[13]-DP[14])+
 DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2])))+DP[10]*(C[5]*(DP[9]-S[2])+
 C[16]*(DP[1]-DP[0])+C[17]+C[14]*DP[2])+C[14]*(DP[0]*(DP[12]-DP[11])+DP[1]*(
 DP[11]-DP[12]))+C[5]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])))+
 DP[0]*(C[3]*(DP[13]*(DP[5]-DP[4]-DP[7]+DP[8])+DP[14]*(DP[5]-DP[4]-DP[7]+
 DP[8])+S[2]*(DP[12]-DP[11])+DP[9]*(DP[11]-DP[12]))+DP[0]*(C[6]*(DP[3]*(-
 DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[18]*DP[10])+
 DP[1]*(C[4]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-
 DP[9]))-C[16]*DP[10])+C[15]*(DP[11]-DP[12]))+DP[1]*(C[3]*(DP[13]*(DP[4]-
 DP[5]+DP[7]-DP[8])+DP[14]*(DP[4]-DP[5]+DP[7]-DP[8])+S[2]*(DP[11]-DP[12])+
 DP[9]*(DP[12]-DP[11]))+DP[1]*(C[6]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-
 DP[14])+DP[10]*(DP[9]-S[2]))+C[18]*DP[10])+C[15]*(DP[12]-DP[11])));
R=+DP[2]*(S[2]*(DP[13]*(DP[2]*(DP[0]*(S[2]*(C[7]*(DP[7]-DP[8])+C[9]*DP[6])+
 C[6]*(DP[5]-DP[4])+C[2]*(DP[8]-DP[7])-C[13]*DP[3]-C[4]*DP[6])+DP[1]*(S[2]*(
 C[7]*(DP[8]-DP[7])-C[9]*DP[6])+C[6]*(DP[4]-DP[5])+C[2]*(DP[7]-DP[8])+C[13]*
 DP[3]+C[4]*DP[6])+DP[6]*(S[2]*(-C[10]-C[7]*DP[2])+C[5]+C[2]*DP[2])+DP[3]*(
 C[3]+C[6]*DP[2]))+DP[0]*(S[2]*(DP[6]*(C[9]*DP[1]-C[11]*DP[0])+C[8]*(DP[8]-
 DP[7]))+DP[0]*(C[4]*DP[3]+C[6]*DP[6])+DP[1]*(-C[13]*DP[3]-C[4]*DP[6])+
 C[12]*(DP[4]-DP[5])+C[3]*(DP[7]-DP[8]))+DP[1]*(S[2]*(C[8]*(DP[7]-DP[8])-
 C[11]*DP[6]*DP[1])+DP[1]*(C[4]*DP[3]+C[6]*DP[6])+C[12]*(DP[5]-DP[4])+C[3]*(
 DP[8]-DP[7])))+DP[14]*(DP[2]*(C[2]*(DP[0]*(DP[5]-DP[4])+DP[1]*(DP[4]-
 DP[5])+DP[3]*DP[2])+DP[3]*(C[4]*(DP[1]-DP[0])+C[5]))+DP[0]*(DP[3]*(C[6]*
 DP[0]-C[4]*DP[1])+C[3]*(DP[4]-DP[5]))+DP[1]*(C[3]*(DP[5]-DP[4])+C[6]*DP[3]*
 DP[1])))+tmp[0]);
R*=(N/D)*Q2[7]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*-9)/(-16);
  cb_coeff_out[1] += (R*-9)/(-16);
 }
 return R;
}
