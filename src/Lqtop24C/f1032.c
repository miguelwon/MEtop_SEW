/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F1032_out;
static void C1032(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[12]*V[12];
S[1]=V[10]*V[10];
S[2]=V[35]*V[35];
S[3]=V[9]*V[9]*V[9]*V[9];
C[20]=+S[3]*(V[34]*(S[1]*(V[34]-2*V[35])+S[0]*(2*V[35]+V[34]))+S[2]*(S[0]+
 S[1]));
C[19]=+S[3]*(S[1]*(V[34]*(S[1]*(2*V[35]-V[34])+S[0]*(2*V[35]+V[34]))+S[2]*(
 S[0]-S[1])));
S[4]=V[9]*V[9];
C[18]=+S[4]*(V[34]*(S[1]*(4*V[34]-8*V[35])+S[0]*(8*V[35]+4*V[34]))+S[2]*(4*(
 S[0]+S[1])));
C[17]=+V[34]*(S[1]*(4*V[34]-8*V[35])+S[0]*(8*V[35]+4*V[34]))+S[2]*(4*(S[0]+
 S[1]));
C[16]=+S[4]*(S[1]*(V[34]*(S[1]*(8*V[35]-4*V[34])+S[0]*(8*V[35]+4*V[34]))+
 S[2]*(4*(S[0]-S[1]))));
C[15]=+S[1]*(V[34]*(S[1]*(8*V[35]-4*V[34])+S[0]*(8*V[35]+4*V[34]))+S[2]*(4*(
 S[0]-S[1])));
C[14]=+S[4]*(S[1]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[13]=+S[4]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[12]=+S[1]*(V[34]*(16*V[34]-32*V[35])+16*S[2]);
C[11]=+V[34]*(8*V[34]-16*V[35])+8*S[2];
C[10]=+S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[9]=+S[4]*(V[34]*(S[1]*(2*V[34]-4*V[35])+S[0]*(4*V[35]+2*V[34]))+S[2]*(2*(
 S[0]+S[1])));
C[8]=+S[4]*(S[1]*(V[34]*(S[1]*(4*V[35]-2*V[34])+S[0]*(4*V[35]+2*V[34]))+
 S[2]*(2*(S[0]-S[1]))));
C[7]=+S[3]*(S[1]*(V[34]*(4*V[34]-8*V[35])+4*S[2]));
C[6]=+S[4]*(S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[5]=+S[3]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[4]=+S[4]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[3]=+S[3]*(S[1]*(V[34]*(2*V[34]-4*V[35])+2*S[2]));
C[2]=+S[4]*(S[1]*(V[34]*(4*V[34]-8*V[35])+4*S[2]));
S[5]=V[17]*V[17];
S[6]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[5]*S[6];
S[7]=V[49]*V[49];
S[8]=V[19]*V[19];
S[9]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[7]*S[8]*S[9];
}
REAL F1032_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 c      !  c                 G             
       -1---@==============>======!==>==============@---1-           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           c|P7         /==<======!==<==\          c|-PA             
            |           |  P3     !  P3 |           |                
            |           |         !     |           |                
         G  |  t     W+ |  e2     !  e2 |  W+    t  |  G             
       -2---@==<==@-3<--@==>======!==>==@--<4-@==<==@---2-           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[21];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C1032(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[5]*(DP[6]*(C[4]*(DP[0]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(
 DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+DP[7]*
 (DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(
 DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5])))+C[9]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[5]*(DP[0]*(DP[14]-DP[10])+DP[7]*(
 DP[10]-DP[14])-DP[11]*DP[6])-C[20]*DP[11])+DP[0]*(C[2]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10]))+C[3]*(DP[14]-DP[10]))+DP[7]*(C[6]*(DP[12]*(DP[8]-
 DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+
 DP[5]*(DP[10]-DP[14]))+C[7]*(DP[10]-DP[14]))+C[8]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[19]*DP[11]);
R=+DP[0]*(S[2]*(DP[12]*(DP[6]*(S[2]*(C[11]*(DP[0]*(DP[3]-DP[9])+DP[7]*(
 DP[9]-DP[3])+DP[6]*DP[4])+C[17]*DP[4])+C[13]*(DP[0]*(DP[8]-DP[1])+DP[7]*(
 DP[1]-DP[8])-DP[6]*DP[2])+C[4]*(DP[0]*(DP[9]-DP[3])+DP[7]*(DP[3]-DP[9])-
 DP[6]*DP[4])-C[18]*DP[2]-C[9]*DP[4])+DP[0]*(S[2]*(C[10]*(DP[3]-DP[9]))+
 C[6]*(DP[8]-DP[1])+C[2]*(DP[9]-DP[3]))+DP[7]*(S[2]*(C[12]*(DP[9]-DP[3]))+
 C[14]*(DP[1]-DP[8])+C[6]*(DP[3]-DP[9]))+DP[4]*(C[15]*S[2]-C[8])-C[16]*
 DP[2])+DP[13]*(DP[6]*(C[4]*(DP[0]*(DP[8]-DP[1])+DP[7]*(DP[1]-DP[8])-DP[6]*
 DP[2])-C[9]*DP[2])+DP[0]*(C[2]*(DP[8]-DP[1]))+DP[7]*(C[6]*(DP[1]-DP[8]))-
 C[8]*DP[2]))+tmp[0])+DP[7]*(DP[5]*(C[2]*(DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+DP[5]*(DP[14]-
 DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[2])))+C[8]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[2]))+C[3]*(DP[7]*(DP[14]-DP[10])+DP[11]*DP[6])+C[19]*DP[11])+S[2]*(
 DP[12]*(DP[7]*(S[2]*(C[10]*(DP[3]-DP[9]))+C[6]*(DP[8]-DP[1])+C[2]*(DP[9]-
 DP[3]))+DP[4]*(S[2]*(-C[15]-C[10]*DP[6])+C[8]+C[2]*DP[6])+DP[2]*(C[16]+
 C[6]*DP[6]))+DP[13]*(C[2]*(DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+C[8]*DP[2])));
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*81)/(64);
 }
 return R;
}
