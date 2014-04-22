/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F994_out;
static void C994(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[35]*V[35];
S[1]=V[34]*V[34];
S[2]=V[12]*V[12];
S[3]=V[10]*V[10];
S[4]=V[9]*V[9]*V[9]*V[9];
C[33]=+S[4]*(2*(S[3]*(S[0]+S[1])+S[2]*(S[0]+S[1]))-4*V[35]*V[34]*S[3]);
C[32]=+4*V[35]*V[34]*S[2]*S[3]*S[4];
C[31]=+S[4]*(S[3]*(V[34]*(S[3]*(2*V[35]-V[34])+S[2]*(6*V[35]+V[34]))+S[0]*(
 S[2]-S[3])));
C[30]=+S[4]*(S[3]*(V[34]*(2*V[34]-4*V[35])+2*S[0])-4*V[35]*V[34]*S[2]);
C[29]=+S[4]*(S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0]));
S[5]=V[9]*V[9];
C[28]=+16*V[35]*V[34]*S[2]*S[3]*S[5];
C[27]=+16*V[35]*V[34]*S[2]*S[3];
C[26]=+S[5]*(S[3]*(V[34]*(S[3]*(8*V[35]-4*V[34])+S[2]*(24*V[35]+4*V[34]))+
 S[0]*(4*(S[2]-S[3]))));
C[25]=+S[3]*(V[34]*(S[3]*(8*V[35]-4*V[34])+S[2]*(24*V[35]+4*V[34]))+S[0]*(4*
 (S[2]-S[3])));
C[24]=+S[5]*(S[3]*(V[34]*(8*V[34]-16*V[35])+8*S[0])-16*V[35]*V[34]*S[2]);
C[23]=+S[3]*(V[34]*(8*V[34]-16*V[35])+8*S[0])-16*V[35]*V[34]*S[2];
C[22]=+S[5]*(8*(S[3]*(S[0]+S[1])+S[2]*(S[0]+S[1]))-16*V[35]*V[34]*S[3]);
C[21]=+S[5]*(S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0]));
C[20]=+8*(S[3]*(S[0]+S[1])+S[2]*(S[0]+S[1]))-16*V[35]*V[34]*S[3];
C[19]=+S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0]);
C[18]=+16*V[35]*V[34]*S[2]*S[5];
C[17]=+S[5]*(V[34]*(S[3]*(8*V[34]-16*V[35])+S[2]*(8*V[34]-32*V[35]))+S[0]*(
 8*(S[2]+S[3])));
C[16]=+S[5]*(V[34]*(S[3]*(8*V[34]-16*V[35])+S[2]*(8*V[34]-16*V[35]))+S[0]*(
 8*(S[2]+S[3])));
C[15]=+16*V[35]*V[34]*S[2];
C[14]=+V[34]*(S[3]*(8*V[34]-16*V[35])+S[2]*(8*V[34]-32*V[35]))+S[0]*(8*(
 S[2]+S[3]));
C[13]=+V[34]*(S[3]*(8*V[34]-16*V[35])+S[2]*(8*V[34]-16*V[35]))+S[0]*(8*(
 S[2]+S[3]));
C[12]=+8*V[35]*V[34]*S[2]*S[3]*S[5];
C[11]=+S[5]*(S[3]*(V[34]*(S[3]*(4*V[35]-2*V[34])+S[2]*(12*V[35]+2*V[34]))+
 S[0]*(2*(S[2]-S[3]))));
C[10]=+S[5]*(S[3]*(V[34]*(4*V[34]-8*V[35])+4*S[0])-8*V[35]*V[34]*S[2]);
C[9]=+S[5]*(4*(S[3]*(S[0]+S[1])+S[2]*(S[0]+S[1]))-8*V[35]*V[34]*S[3]);
C[8]=+S[5]*(S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[7]=+4*V[35]*V[34]*S[2]*S[4];
C[6]=+8*V[35]*V[34]*S[2]*S[5];
C[5]=+S[4]*(V[34]*(S[3]*(2*V[34]-4*V[35])+S[2]*(2*V[34]-8*V[35]))+S[0]*(2*(
 S[2]+S[3])));
C[4]=+S[5]*(V[34]*(S[3]*(4*V[34]-8*V[35])+S[2]*(4*V[34]-16*V[35]))+S[0]*(4*(
 S[2]+S[3])));
C[3]=+S[4]*(V[34]*(S[3]*(2*V[34]-4*V[35])+S[2]*(2*V[34]-4*V[35]))+S[0]*(2*(
 S[2]+S[3])));
C[2]=+S[5]*(V[34]*(S[3]*(4*V[34]-8*V[35])+S[2]*(4*V[34]-8*V[35]))+S[0]*(4*(
 S[2]+S[3])));
S[6]=V[17]*V[17];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+6*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[19]*V[19];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F994_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 C      !                                  
       -1---@==============<==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              n2 |   !  n2                              
           c|P7         /==>==+===!==>==\                            
            |           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         G  |  t     W+ |  E2 |   !  E2 |  W+    t     G             
       -2---@==>==@-3>--@==<==+===!==<==@-->4-@==>==@---1-           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        b  |   !  b        |     |                
                  \========>==+===!==>========/    t|-PA             
                           P6 |   !  P6             |                
                              |   !                 |                
                              |   !  C              |  G             
                              \===!==<==============@---2-           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[34];REAL S[3];REAL tmp[1];                                    
     
if(CalcConst) C994(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[7]*(DP[5]*(DP[0]*(DP[12]*(C[9]*(-DP[1]-DP[3])+C[8]*(-DP[2]-
 DP[4])+C[4]*(DP[8]+DP[9]))+DP[13]*(C[9]*(-DP[1]-DP[3])+C[8]*(-DP[2]-DP[4])+
 C[4]*(DP[8]+DP[9]))+S[2]*(C[4]*DP[14]-C[9]*DP[10]-C[8]*DP[11])+DP[5]*(C[9]*
 DP[10]+C[8]*DP[11]-C[4]*DP[14])+C[33]*DP[10]+C[29]*DP[11]-C[5]*DP[14])+
 DP[7]*(DP[12]*(C[9]*(DP[1]+DP[3])+C[8]*(DP[2]+DP[4])+C[2]*(-DP[8]-DP[9]))+
 DP[13]*(C[9]*(DP[1]+DP[3])+C[8]*(DP[2]+DP[4])+C[2]*(-DP[8]-DP[9]))+S[2]*(
 C[9]*DP[10]+C[8]*DP[11]-C[2]*DP[14])+DP[5]*(C[2]*DP[14]-C[9]*DP[10]-C[8]*
 DP[11])+C[3]*DP[14]-C[33]*DP[10]-C[29]*DP[11])+DP[6]*(C[10]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[30]*DP[11])+
 C[11]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+
 C[31]*DP[11])+S[2]*(DP[12]*(DP[0]*(S[2]*(C[14]*DP[9]-C[20]*DP[3]-C[19]*
 DP[4])+C[22]*DP[1]+C[21]*DP[2]+C[9]*DP[3]+C[8]*DP[4]-C[17]*DP[8]-C[4]*
 DP[9])+DP[7]*(S[2]*(C[20]*DP[3]+C[19]*DP[4]-C[13]*DP[9])+C[16]*DP[8]-C[22]*
 DP[1]-C[21]*DP[2]-C[9]*DP[3]-C[8]*DP[4]+C[2]*DP[9])+DP[4]*(S[2]*(-C[25]-
 C[23]*DP[6])+C[11]+C[10]*DP[6])+DP[2]*(C[26]+C[24]*DP[6]))+DP[13]*(DP[2]*(
 C[8]*(DP[0]-DP[7])+C[11]+C[10]*DP[6])+DP[0]*(C[9]*DP[1]-C[4]*DP[8])+DP[7]*(
 C[2]*DP[8]-C[9]*DP[1]))));
R=+DP[0]*(DP[5]*(C[6]*(DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[2]-DP[5]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2])))+C[12]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[2]-DP[5]))+DP[11]*(C[7]*DP[6]-C[32])-C[7]*DP[14]*DP[0])+S[2]*(
 DP[12]*(DP[4]*(S[2]*(C[27]-C[15]*DP[6])+C[6]*DP[6]-C[12])+DP[0]*(DP[9]*(
 C[15]*S[2]-C[6])-C[18]*DP[8])+DP[2]*(C[18]*DP[6]-C[28]))+DP[13]*(DP[2]*(
 C[6]*DP[6]-C[12])-C[6]*DP[8]*DP[0])))+tmp[0];
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[7];
 if(cb_coeff_out)
 {
 }
 return R;
}
