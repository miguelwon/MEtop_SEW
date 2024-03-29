/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F88_out;
static void C88(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[18]=+S[2]*(S[1]*(V[15]*(2*V[16]+V[15])+S[0]));
C[17]=+S[2]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[16]=+S[2]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[15]=+S[2]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[14]=+S[2]*(V[15]*(2*V[15]-4*V[16])+2*S[0]);
S[3]=V[7]*V[7];
C[13]=+S[3]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[12]=+S[3]*(S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]));
C[11]=+S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]);
C[10]=+V[15]*(32*V[15]-64*V[16])+32*S[0];
C[9]=+V[15]*(16*V[15]-32*V[16])+16*S[0];
C[8]=+S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]);
C[7]=+V[15]*(8*V[15]-16*V[16])+8*S[0];
C[6]=+S[3]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[5]=+S[3]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[4]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[3]=+S[3]*(S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]));
C[2]=+S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
S[4]=V[12]*V[12];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[4]*S[5];
S[6]=V[22]*V[22];
S[7]=V[13]*V[13];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+12*S[6]*S[7]*S[8];
}
REAL F88_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 G      !  G                 G             
       -1---@-------------3-------!---3-------------@---1-           
         P1 |              P3     !  P3             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           G|P7         /==>======!==>==\        ~00|-PA             
            2           |  P4     !  P4 |           5                
            |           |         !     |           |                
         u  |  t     W+ |  E2     !  E2 |  W+    t  |  u             
       ==>==@==>==@-4>--@==<======!==<==@-->6-@==>==@==>==           
         P2    P8 |  P9    P5     !  P5   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[19];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C88(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[9]*(DP[1]*(C[2]*(DP[0]*(DP[13]*(DP[3]-DP[5]+DP[6]-DP[8])+DP[14]*(
 DP[3]-DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-DP[12])+DP[9]*(DP[12]-DP[10]))+DP[2]*
 (DP[13]*(DP[5]-DP[3]-DP[6]+DP[8])+DP[14]*(DP[5]-DP[3]-DP[6]+DP[8])+S[2]*(
 DP[12]-DP[10])+DP[9]*(DP[10]-DP[12]))+DP[1]*(DP[4]*(-DP[13]-DP[14])+DP[7]*
 (-DP[13]-DP[14])+DP[11]*(DP[9]-S[2])))+C[5]*(DP[0]*(DP[4]*(DP[13]+DP[14])+
 DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+DP[2]*(DP[4]*(-DP[13]-DP[14])+
 DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2])))+DP[11]*(C[6]*(DP[9]-S[2])+
 C[17]*(DP[2]-DP[0])+C[18]+C[14]*DP[1])+C[14]*(DP[0]*(DP[12]-DP[10])+DP[2]*(
 DP[10]-DP[12]))+C[6]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])))+
 DP[0]*(C[3]*(DP[13]*(DP[5]-DP[3]-DP[6]+DP[8])+DP[14]*(DP[5]-DP[3]-DP[6]+
 DP[8])+S[2]*(DP[12]-DP[10])+DP[9]*(DP[10]-DP[12]))+DP[0]*(C[4]*(DP[4]*(-
 DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[16]*DP[11])+
 DP[2]*(C[5]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-
 DP[9]))-C[17]*DP[11])+C[15]*(DP[10]-DP[12]))+DP[2]*(C[3]*(DP[13]*(DP[3]-
 DP[5]+DP[6]-DP[8])+DP[14]*(DP[3]-DP[5]+DP[6]-DP[8])+S[2]*(DP[10]-DP[12])+
 DP[9]*(DP[12]-DP[10]))+DP[2]*(C[4]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-
 DP[14])+DP[11]*(DP[9]-S[2]))+C[16]*DP[11])+C[15]*(DP[12]-DP[10])));
R=+DP[1]*(S[2]*(DP[13]*(DP[1]*(DP[0]*(S[2]*(C[7]*(DP[6]-DP[8])+C[10]*DP[7])+
 C[4]*(DP[5]-DP[3])+C[2]*(DP[8]-DP[6])-C[13]*DP[4]-C[5]*DP[7])+DP[2]*(S[2]*(
 C[7]*(DP[8]-DP[6])-C[10]*DP[7])+C[4]*(DP[3]-DP[5])+C[2]*(DP[6]-DP[8])+
 C[13]*DP[4]+C[5]*DP[7])+DP[7]*(S[2]*(-C[11]-C[7]*DP[1])+C[6]+C[2]*DP[1])+
 DP[4]*(C[3]+C[4]*DP[1]))+DP[0]*(S[2]*(DP[7]*(C[10]*DP[2]-C[9]*DP[0])+C[8]*(
 DP[8]-DP[6]))+DP[0]*(C[5]*DP[4]+C[4]*DP[7])+DP[2]*(-C[13]*DP[4]-C[5]*
 DP[7])+C[12]*(DP[3]-DP[5])+C[3]*(DP[6]-DP[8]))+DP[2]*(S[2]*(C[8]*(DP[6]-
 DP[8])-C[9]*DP[7]*DP[2])+DP[2]*(C[5]*DP[4]+C[4]*DP[7])+C[12]*(DP[5]-DP[3])+
 C[3]*(DP[8]-DP[6])))+DP[14]*(DP[1]*(C[2]*(DP[0]*(DP[5]-DP[3])+DP[2]*(DP[3]-
 DP[5])+DP[4]*DP[1])+DP[4]*(C[5]*(DP[2]-DP[0])+C[6]))+DP[0]*(DP[4]*(C[4]*
 DP[0]-C[5]*DP[2])+C[3]*(DP[3]-DP[5]))+DP[2]*(C[3]*(DP[5]-DP[3])+C[4]*DP[4]*
 DP[2])))+tmp[0]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*-9)/(-16);
  cb_coeff_out[2] += (R*-9)/(-16);
 }
 return R;
}
