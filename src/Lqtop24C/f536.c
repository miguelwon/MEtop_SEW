/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F536_out;
static void C536(REAL * C)
{
REAL* V=va_out;
REAL S[14];                                                                 
     
S[0]=V[35]*V[35];
S[1]=V[34]*V[34];
S[2]=V[12]*V[12];
S[3]=V[10]*V[10]*V[10]*V[10];
S[4]=V[9]*V[9]*V[9]*V[9];
C[55]=+S[4]*(S[3]*(V[10]*(V[10]*(V[34]*(2*V[35]-V[34])-S[0])+V[12]*(4*(S[1]-
 S[0])))+S[2]*(V[34]*(2*V[35]+V[34])+S[0])));
S[5]=V[10]*V[10];
C[54]=+S[4]*(S[5]*(V[10]*(V[10]*(V[34]*(6*V[35]-3*V[34])-3*S[0])+V[12]*(6*(
 S[1]-S[0])))+S[2]*(V[34]*(2*V[35]+V[34])+S[0])));
C[53]=+S[4]*(V[10]*(2*(S[1]*(V[10]-V[12])+S[0]*(V[12]+V[10]))-4*V[35]*V[34]*
 V[10]));
C[52]=+S[4]*(S[3]*(V[34]*(6*V[34]-12*V[35])+6*S[0]));
C[51]=+S[4]*(S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[0]));
S[6]=V[9]*V[9];
C[50]=+S[3]*(S[6]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(16*(
 S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[49]=+S[3]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(16*(S[1]-
 S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[48]=+S[6]*(S[5]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[0])+V[12]*(
 24*(S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[47]=+S[5]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[0])+V[12]*(24*(
 S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[46]=+S[6]*(V[10]*(8*(S[1]*(V[10]-V[12])+S[0]*(V[12]+V[10]))-16*V[35]*
 V[34]*V[10]));
C[45]=+V[10]*(8*(S[1]*(V[10]-V[12])+S[0]*(V[12]+V[10]))-16*V[35]*V[34]*
 V[10]);
C[44]=+S[3]*(S[6]*(V[34]*(24*V[34]-48*V[35])+24*S[0]));
C[43]=+S[3]*(V[34]*(24*V[34]-48*V[35])+24*S[0]);
C[42]=+S[6]*(S[5]*(V[34]*(32*V[34]-64*V[35])+32*S[0]));
C[41]=+S[5]*(V[34]*(32*V[34]-64*V[35])+32*S[0]);
S[7]=V[10]*V[10]*V[10]*V[10]*V[10];
C[40]=+S[7]*(S[6]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(16*(S[0]-
 S[1]))));
C[39]=+S[6]*(S[5]*(V[34]*(S[5]*(4*V[34]-8*V[35])+S[2]*(8*V[35]+4*V[34]))+
 S[0]*(4*(S[2]+S[5]))));
S[8]=V[10]*V[10]*V[10];
C[38]=+S[8]*(S[6]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(24*(S[0]-
 S[1]))));
C[37]=+S[6]*(V[10]*(V[12]*(8*(S[0]-S[1]))));
C[36]=+S[6]*(S[5]*(V[34]*(S[5]*(16*V[35]-8*V[34])+S[2]*(16*V[35]+8*V[34]))+
 S[0]*(8*(S[2]-S[5]))));
C[35]=+S[6]*(V[34]*(S[5]*(8*V[35]-4*V[34])+S[2]*(8*V[35]+4*V[34]))+S[0]*(4*(
 S[2]-S[5])));
C[34]=+S[6]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
C[33]=+S[7]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(16*(S[0]-
 S[1])));
C[32]=+S[5]*(V[34]*(S[5]*(4*V[34]-8*V[35])+S[2]*(8*V[35]+4*V[34]))+S[0]*(4*(
 S[2]+S[5])));
C[31]=+S[8]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(24*(S[0]-
 S[1])));
C[30]=+S[5]*(V[34]*(16*V[34]-32*V[35])+16*S[0]);
C[29]=+V[10]*(V[12]*(8*(S[0]-S[1])));
C[28]=+S[5]*(V[34]*(S[5]*(16*V[35]-8*V[34])+S[2]*(16*V[35]+8*V[34]))+S[0]*(
 8*(S[2]-S[5])));
C[27]=+S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
C[26]=+V[34]*(S[5]*(8*V[35]-4*V[34])+S[2]*(8*V[35]+4*V[34]))+S[0]*(4*(S[2]-
 S[5]));
C[25]=+V[34]*(8*V[34]-16*V[35])+8*S[0];
C[24]=+S[3]*(S[6]*(V[10]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[0])+V[12]*(8*(
 S[1]-S[0])))+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[23]=+S[6]*(S[5]*(V[10]*(V[10]*(V[34]*(12*V[35]-6*V[34])-6*S[0])+V[12]*(12*
 (S[1]-S[0])))+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[22]=+S[6]*(V[10]*(4*(S[1]*(V[10]-V[12])+S[0]*(V[12]+V[10]))-8*V[35]*V[34]*
 V[10]));
C[21]=+S[3]*(S[6]*(V[34]*(12*V[34]-24*V[35])+12*S[0]));
C[20]=+S[6]*(S[5]*(V[34]*(16*V[34]-32*V[35])+16*S[0]));
C[19]=+S[7]*(S[4]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[0])+V[12]*(4*(S[0]-
 S[1]))));
C[18]=+S[4]*(S[5]*(V[34]*(S[5]*(V[34]-2*V[35])+S[2]*(2*V[35]+V[34]))+S[0]*(
 S[2]+S[5])));
C[17]=+S[7]*(S[6]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(8*(S[0]-
 S[1]))));
C[16]=+S[6]*(S[5]*(V[34]*(S[5]*(2*V[34]-4*V[35])+S[2]*(4*V[35]+2*V[34]))+
 S[0]*(2*(S[2]+S[5]))));
C[15]=+S[4]*(S[8]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[0])+V[12]*(6*(S[0]-
 S[1]))));
C[14]=+S[4]*(S[5]*(V[34]*(4*V[34]-8*V[35])+4*S[0]));
C[13]=+S[8]*(S[6]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(12*(S[0]-
 S[1]))));
C[12]=+S[6]*(S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[0]));
C[11]=+S[4]*(V[10]*(V[12]*(2*(S[0]-S[1]))));
C[10]=+S[6]*(V[10]*(V[12]*(4*(S[0]-S[1]))));
C[9]=+S[4]*(S[5]*(V[34]*(S[5]*(4*V[35]-2*V[34])+S[2]*(4*V[35]+2*V[34]))+
 S[0]*(2*(S[2]-S[5]))));
C[8]=+S[4]*(S[5]*(V[34]*(2*V[34]-4*V[35])+2*S[0]));
C[7]=+S[6]*(S[5]*(V[34]*(S[5]*(8*V[35]-4*V[34])+S[2]*(8*V[35]+4*V[34]))+
 S[0]*(4*(S[2]-S[5]))));
C[6]=+S[6]*(S[5]*(V[34]*(4*V[34]-8*V[35])+4*S[0]));
C[5]=+S[4]*(V[34]*(S[5]*(2*V[35]-V[34])+S[2]*(2*V[35]+V[34]))+S[0]*(S[2]-
 S[5]));
C[4]=+S[4]*(V[34]*(2*V[34]-4*V[35])+2*S[0]);
C[3]=+S[6]*(V[34]*(S[5]*(4*V[35]-2*V[34])+S[2]*(4*V[35]+2*V[34]))+S[0]*(2*(
 S[2]-S[5])));
C[2]=+S[6]*(V[34]*(4*V[34]-8*V[35])+4*S[0]);
S[9]=V[17]*V[17];
S[10]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[9]*S[10];
S[11]=V[49]*V[49];
S[12]=V[19]*V[19];
S[13]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[11]*S[12]*S[13];
}
REAL F536_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         c                 c      !  c                 c             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           G|P7         /==<======!==<==\          G|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         C  |  t     W+ |  e2     !  e2 |  W+    t  |  C             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[56];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C536(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[7]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(
 DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(
 DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11])))+DP[12]*(C[12]*(-DP[1]-DP[3])+C[20]*
 (-DP[2]-DP[4])+C[3]*(DP[8]+DP[9]))+DP[13]*(C[12]*(-DP[1]-DP[3])+C[20]*(-
 DP[2]-DP[4])+C[3]*(DP[8]+DP[9]))+DP[10]*(C[12]*(DP[5]-S[2])+C[4]*(-DP[6]-
 DP[7])+C[14])+DP[11]*(C[20]*(DP[5]-S[2])+C[4]*(-DP[6]-DP[7])+C[51])+DP[14]*
 (C[3]*(S[2]-DP[5])-C[5]))+DP[6]*(C[10]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-
 DP[14]))+C[22]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(
 DP[5]-S[2]))+C[11]*(DP[10]-DP[14])+C[53]*DP[11])+C[13]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10]))+C[23]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[2]))+C[15]*(DP[14]-DP[10])+C[54]*DP[11];
tmp[1]=+DP[0]*(DP[7]*(C[6]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[12]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[8]*(
 DP[10]-DP[14])-C[14]*DP[11])+DP[0]*(C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))+C[14]*DP[11]-C[8]*DP[14])+DP[12]*(C[7]*
 (-DP[1]-DP[3])+C[21]*(-DP[2]-DP[4])+C[16]*(DP[8]+DP[9]))+DP[13]*(C[7]*(-
 DP[1]-DP[3])+C[21]*(-DP[2]-DP[4])+C[16]*(DP[8]+DP[9]))+S[2]*(C[16]*DP[14]-
 C[7]*DP[10]-C[21]*DP[11])+DP[5]*(C[7]*DP[10]+C[21]*DP[11]-C[16]*DP[14])+
 C[9]*DP[10]+C[52]*DP[11]-C[18]*DP[14]);
tmp[2]=+DP[7]*(DP[7]*(C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[2]))+C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[2]))+C[8]*DP[10]+C[14]*DP[11])+DP[12]*(C[16]*(DP[1]+DP[3])+
 C[21]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[13]*(C[16]*(DP[1]+DP[3])+C[21]*
 (DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+S[2]*(C[16]*DP[10]+C[21]*DP[11]-C[7]*
 DP[14])+DP[5]*(C[7]*DP[14]-C[16]*DP[10]-C[21]*DP[11])+C[9]*DP[14]-C[18]*
 DP[10]-C[52]*DP[11])+C[17]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[24]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[19]*(
 DP[10]-DP[14])-C[55]*DP[11]+tmp[1];
tmp[3]=+DP[6]*(DP[0]*(S[2]*(C[25]*(DP[9]*(DP[6]-DP[0]-DP[7])+DP[4]*(DP[0]-
 DP[6])+DP[7]*DP[3])+C[26]*DP[3]+C[41]*DP[4]-C[30]*DP[9])+C[34]*(DP[8]*(
 DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*DP[1])+C[2]*(DP[9]*(DP[0]-
 DP[6]+DP[7])+DP[4]*(DP[6]-DP[0])-DP[7]*DP[3])+C[20]*(DP[8]-DP[4])+C[12]*
 DP[9]-C[35]*DP[1]-C[42]*DP[2]-C[3]*DP[3])+DP[7]*(S[2]*(C[25]*(DP[3]*(DP[6]+
 DP[7])+DP[4]*(DP[6]+DP[7]))+C[26]*DP[9]-C[30]*DP[3]-C[41]*DP[4])+DP[6]*(
 C[34]*(-DP[1]-DP[2])+C[2]*(-DP[3]-DP[4]))+DP[7]*(C[34]*(-DP[1]-DP[2])+C[2]*
 (-DP[3]-DP[4]))+C[20]*(DP[1]+DP[4])+C[42]*DP[2]+C[12]*DP[3]-C[35]*DP[8]-
 C[3]*DP[9])+DP[6]*(S[2]*(C[29]*(DP[9]-DP[3])-C[45]*DP[4])+C[37]*(DP[1]-
 DP[8])+C[10]*(DP[3]-DP[9])+C[46]*DP[2]+C[22]*DP[4])+S[2]*(C[31]*(DP[3]-
 DP[9])-C[47]*DP[4])+C[38]*(DP[8]-DP[1])+C[13]*(DP[9]-DP[3])+C[48]*DP[2]+
 C[23]*DP[4]);
tmp[4]=+S[2]*(DP[12]*(DP[0]*(DP[7]*(S[2]*(C[27]*(DP[9]-DP[3])+C[30]*DP[4])+
 C[12]*(DP[1]-DP[4]-DP[8])+C[6]*(DP[3]-DP[9])-C[20]*DP[2])+DP[0]*(S[2]*(
 C[27]*DP[9]-C[30]*DP[4])+C[12]*(DP[4]-DP[8])+C[20]*DP[2]-C[6]*DP[9])+S[2]*(
 C[32]*DP[9]-C[28]*DP[3]-C[43]*DP[4])+C[36]*DP[1]+C[44]*DP[2]+C[7]*DP[3]+
 C[21]*DP[4]-C[39]*DP[8]-C[16]*DP[9])+DP[7]*(DP[7]*(S[2]*(-C[27]*DP[3]-
 C[30]*DP[4])+C[12]*(DP[1]+DP[4])+C[20]*DP[2]+C[6]*DP[3])+S[2]*(C[32]*DP[3]+
 C[43]*DP[4]-C[28]*DP[9])+C[36]*DP[8]-C[39]*DP[1]-C[44]*DP[2]-C[16]*DP[3]-
 C[21]*DP[4]+C[7]*DP[9])+S[2]*(C[33]*(DP[9]-DP[3])+C[49]*DP[4])+C[40]*(
 DP[1]-DP[8])+C[17]*(DP[3]-DP[9])-C[50]*DP[2]-C[24]*DP[4]+tmp[3])+DP[13]*(
 DP[6]*(C[2]*(DP[0]*(DP[8]*(DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*
 DP[1])+DP[7]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])))+DP[1]*(C[10]*
 DP[6]-C[13]-C[3]*DP[0]+C[12]*DP[7])+DP[2]*(C[20]*(DP[7]-DP[0])+C[23]+C[22]*
 DP[6])+DP[8]*(C[13]+C[12]*DP[0]-C[10]*DP[6]-C[3]*DP[7]))+DP[0]*(DP[2]*(
 C[12]*(DP[0]-DP[7])+C[21])+DP[8]*(C[6]*(-DP[0]-DP[7])-C[16])+DP[1]*(C[7]+
 C[6]*DP[7]))+DP[7]*(DP[1]*(C[6]*DP[7]-C[16])+DP[2]*(C[12]*DP[7]-C[21])+
 C[7]*DP[8])+C[17]*(DP[1]-DP[8])-C[24]*DP[2]));
R=+DP[5]*(DP[6]*(DP[0]*(C[2]*(DP[0]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-
 DP[11]))+DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10])))+DP[12]*(C[3]*(DP[1]+DP[3])+C[20]*(DP[2]+DP[4])+
 C[12]*(-DP[8]-DP[9]))+DP[13]*(C[3]*(DP[1]+DP[3])+C[20]*(DP[2]+DP[4])+C[12]*
 (-DP[8]-DP[9]))+DP[14]*(C[4]*(DP[0]-DP[6]+DP[7])+C[12]*(DP[5]-S[2])+C[14])+
 DP[11]*(C[20]*(S[2]-DP[5])+C[4]*(DP[6]-DP[0])-C[51])+DP[10]*(C[3]*(S[2]-
 DP[5])-C[5]-C[4]*DP[7]))+tmp[0])+tmp[2])+tmp[4];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
