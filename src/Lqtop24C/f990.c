/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F990_out;
static void C990(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[35]*V[35];
S[1]=V[34]*V[34];
S[2]=V[9]*V[9]*V[9]*V[9];
C[23]=+S[2]*(V[10]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[0])+V[12]*(6*(S[0]-
 S[1]))));
S[3]=V[12]*V[12];
S[4]=V[10]*V[10];
C[22]=+S[2]*(V[34]*(S[4]*(4*V[35]-2*V[34])+S[3]*(4*V[35]+2*V[34]))+S[0]*(2*(
 S[3]-S[4])));
S[5]=V[9]*V[9];
C[21]=+S[5]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(24*(S[0]-
 S[1]))));
C[20]=+V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(24*(S[0]-
 S[1])));
C[19]=+S[5]*(V[34]*(S[4]*(16*V[35]-8*V[34])+S[3]*(16*V[35]+8*V[34]))+S[0]*(
 8*(S[3]-S[4])));
C[18]=+V[34]*(S[4]*(16*V[35]-8*V[34])+S[3]*(16*V[35]+8*V[34]))+S[0]*(8*(
 S[3]-S[4]));
C[17]=+S[5]*(V[10]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[0])+V[12]*(24*(S[1]-
 S[0])))+S[3]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[16]=+S[5]*(V[34]*(32*V[34]-64*V[35])+32*S[0]);
C[15]=+V[10]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[0])+V[12]*(24*(S[1]-
 S[0])))+S[3]*(V[34]*(8*V[35]+4*V[34])+4*S[0]);
C[14]=+V[34]*(8*V[34]-16*V[35])+8*S[0];
C[13]=+V[34]*(32*V[34]-64*V[35])+32*S[0];
C[12]=+V[34]*(16*V[34]-32*V[35])+16*S[0];
C[11]=+S[5]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(12*(S[0]-
 S[1]))));
C[10]=+S[5]*(V[34]*(S[4]*(8*V[35]-4*V[34])+S[3]*(8*V[35]+4*V[34]))+S[0]*(4*(
 S[3]-S[4])));
C[9]=+S[2]*(V[10]*(V[10]*(V[34]*(V[34]-2*V[35])+S[0])+V[12]*(6*(S[1]-
 S[0])))+S[3]*(V[34]*(2*V[35]+V[34])+S[0]));
C[8]=+S[2]*(V[34]*(2*V[34]-4*V[35])+2*S[0]);
C[7]=+S[5]*(V[10]*(V[10]*(V[34]*(2*V[34]-4*V[35])+2*S[0])+V[12]*(12*(S[1]-
 S[0])))+S[3]*(V[34]*(4*V[35]+2*V[34])+2*S[0]));
C[6]=+S[5]*(V[34]*(4*V[34]-8*V[35])+4*S[0]);
C[5]=+S[2]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
C[4]=+S[5]*(V[34]*(16*V[34]-32*V[35])+16*S[0]);
C[3]=+S[2]*(V[34]*(4*V[34]-8*V[35])+4*S[0]);
C[2]=+S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
S[6]=V[17]*V[17];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[19]*V[19];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+9*S[8]*S[9]*S[10];
}
REAL F990_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   G                       n2     !  n2                      G       
 -1---\                 /==>======!==>==\                 /---1-     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   G  |  G     t     W+ |  E2     !  E2 |  W+    t    ~03 |  G       
 -2---@-3---@==>==@-4>--@==<======!==<==@-->6-@==>==@---5-@---2-     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              C      !  C              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[24];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C990(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[0]*(C[6]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+
 DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2])))+C[11]*(DP[12]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-
 DP[10]-DP[11]))+C[4]*(DP[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[2]-DP[5]))+DP[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[2]-DP[5])))+DP[14]*(C[7]*(S[2]-DP[5])+C[5]*(-DP[6]-DP[7])+C[8]*
 DP[0]-C[9])+C[8]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+C[7]*(DP[8]*
 (DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[23]*(-DP[10]-DP[11]));
tmp[1]=+S[2]*(DP[12]*(DP[0]*(S[2]*(C[14]*(DP[3]*(-DP[6]-DP[7])+DP[4]*(-
 DP[6]-DP[7])-DP[9]*DP[0])+DP[9]*(C[13]*(DP[6]+DP[7])+C[15])+C[20]*(DP[3]+
 DP[4]))+DP[6]*(C[2]*(DP[1]+DP[2])+C[6]*(DP[3]+DP[4])-C[16]*DP[8]-C[4]*
 DP[9])+DP[7]*(C[2]*(DP[1]+DP[2])+C[6]*(DP[3]+DP[4])-C[16]*DP[8]-C[4]*
 DP[9])+DP[0]*(C[2]*DP[8]+C[6]*DP[9])+C[21]*(-DP[1]-DP[2])+C[11]*(-DP[3]-
 DP[4])-C[17]*DP[8]-C[7]*DP[9])+DP[6]*(S[2]*(DP[9]*(-C[12]*DP[6]-C[13]*
 DP[7])+C[18]*(-DP[3]-DP[4]))+DP[6]*(C[4]*DP[8]+C[2]*DP[9])+DP[7]*(C[16]*
 DP[8]+C[4]*DP[9])+C[19]*(DP[1]+DP[2])+C[10]*(DP[3]+DP[4]))+DP[7]*(S[2]*(
 C[18]*(-DP[3]-DP[4])-C[12]*DP[9]*DP[7])+DP[7]*(C[4]*DP[8]+C[2]*DP[9])+
 C[19]*(DP[1]+DP[2])+C[10]*(DP[3]+DP[4])))+DP[13]*(DP[0]*(C[6]*(DP[1]*(
 DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])+DP[8]*DP[0])+DP[8]*(C[4]*(-DP[6]-DP[7])-
 C[7])+C[11]*(-DP[1]-DP[2]))+DP[6]*(DP[8]*(C[2]*DP[6]+C[4]*DP[7])+C[10]*(
 DP[1]+DP[2]))+DP[7]*(C[10]*(DP[1]+DP[2])+C[2]*DP[8]*DP[7])));
R=+DP[0]*(DP[5]*(DP[6]*(C[10]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+
 DP[6]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-
 S[2]))+C[3]*DP[14])+DP[7]*(C[4]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[2]))+C[5]*DP[14])+C[22]*(DP[10]+DP[11]))+DP[7]*(
 C[10]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[7]*(C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[3]*DP[14])+C[22]*(
 DP[10]+DP[11]))+tmp[0])+tmp[1]);
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*-9)/(-16);
  cb_coeff_out[2] += (R*-9)/(-16);
 }
 return R;
}
