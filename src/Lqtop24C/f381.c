/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F381_out;
static void C381(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[12]*V[12];
S[1]=V[10]*V[10];
S[2]=V[35]*V[35];
S[3]=V[9]*V[9]*V[9]*V[9];
C[13]=+S[3]*(V[34]*(S[1]*(2*V[35]-V[34])+S[0]*(2*V[35]+V[34]))+S[2]*(S[0]-
 S[1]));
S[4]=V[9]*V[9];
C[12]=+S[4]*(V[34]*(S[1]*(8*V[35]-4*V[34])+S[0]*(8*V[35]+4*V[34]))+S[2]*(4*(
 S[0]-S[1])));
C[11]=+V[34]*(S[1]*(8*V[35]-4*V[34])+S[0]*(8*V[35]+4*V[34]))+S[2]*(4*(S[0]-
 S[1]));
S[5]=V[34]*V[34];
C[10]=+S[4]*(V[10]*(V[12]*(8*(S[2]-S[5]))));
C[9]=+S[4]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[8]=+V[10]*(V[12]*(8*(S[2]-S[5])));
C[7]=+V[34]*(8*V[34]-16*V[35])+8*S[2];
C[6]=+S[4]*(V[34]*(S[1]*(4*V[35]-2*V[34])+S[0]*(4*V[35]+2*V[34]))+S[2]*(2*(
 S[0]-S[1])));
C[5]=+S[3]*(V[10]*(V[12]*(2*(S[2]-S[5]))));
C[4]=+S[4]*(V[10]*(V[12]*(4*(S[2]-S[5]))));
C[3]=+S[3]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[2]=+S[4]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
S[6]=V[17]*V[17];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[19]*V[19];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F381_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   d                       N2     !  N2                      d       
 ==>==\                 /==<======!==<==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   D  |  G     t     W+ |  e2     !  e2 |  W+    t     G  |  D       
 ==<==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@---3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              c      !  c              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[14];REAL S[4];REAL tmp[1];                                    
     
if(CalcConst) C381(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
S[3]=DP[7]*DP[7];
tmp[0]=+DP[5]*(C[2]*(DP[6]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[6]*
 (DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(
 DP[10]+DP[11])))+DP[7]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[7]*
 (DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(
 DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))))+DP[0]*(C[4]*(DP[12]*(DP[1]+DP[2]+
 DP[3]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4]-DP[8]-DP[9])+S[2]*
 (DP[10]+DP[11]-DP[14])+DP[5]*(DP[14]-DP[10]-DP[11]))+C[3]*(DP[6]*(DP[11]-
 DP[14])+DP[7]*(DP[10]-DP[14]))+C[5]*(DP[14]-DP[10]-DP[11]))+C[6]*(DP[6]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+DP[7]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2])))+C[3]*(
 DP[6]*(DP[6]*(DP[14]-DP[11])+DP[7]*(DP[10]+DP[11]))+S[3]*(DP[14]-DP[10]))+
 C[13]*(DP[10]*DP[6]+DP[11]*DP[7]));
R=+DP[0]*(S[2]*(DP[12]*(DP[0]*(S[2]*(C[7]*(DP[6]*(DP[9]-DP[4])+DP[7]*(DP[9]-
 DP[3]))+C[8]*(DP[3]+DP[4]-DP[9]))+DP[6]*(C[9]*(DP[2]-DP[8])+C[2]*(DP[4]-
 DP[9]))+DP[7]*(C[9]*(DP[1]-DP[8])+C[2]*(DP[3]-DP[9]))+C[10]*(DP[8]-DP[1]-
 DP[2])+C[4]*(DP[9]-DP[3]-DP[4]))+DP[6]*(DP[6]*(S[2]*(C[7]*(DP[4]-DP[9]))+
 C[9]*(DP[8]-DP[2])+C[2]*(DP[9]-DP[4]))+DP[7]*(S[2]*(C[7]*(-DP[3]-DP[4]))+
 C[9]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+DP[3]*(C[6]-C[11]*S[2])+C[12]*
 DP[1])+DP[7]*(DP[7]*(S[2]*(C[7]*(DP[3]-DP[9]))+C[9]*(DP[8]-DP[1])+C[2]*(
 DP[9]-DP[3]))+DP[4]*(C[6]-C[11]*S[2])+C[12]*DP[2]))+DP[13]*(C[2]*(DP[6]*(
 DP[2]*(DP[0]-DP[6]+DP[7])+DP[8]*(DP[6]-DP[0])+DP[7]*DP[1])+DP[7]*(DP[0]*(
 DP[1]-DP[8])+DP[7]*(DP[8]-DP[1])))+DP[0]*(C[4]*(DP[8]-DP[1]-DP[2]))+C[6]*(
 DP[6]*DP[1]+DP[7]*DP[2])))+tmp[0]);
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
