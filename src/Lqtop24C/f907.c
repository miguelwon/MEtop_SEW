/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F907_out;
static void C907(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[14]*V[14];
S[1]=V[12]*V[12];
S[2]=V[33]*V[33];
S[3]=V[14]*V[14]*V[14]*V[14];
S[4]=V[9]*V[9]*V[9]*V[9];
C[39]=+S[4]*(S[3]*(V[32]*(S[1]*(-2*V[33]-V[32])+S[0]*(2*V[32]-4*V[33]))+
 S[2]*(2*S[0]-S[1])));
C[38]=+S[4]*(S[0]*(V[32]*(S[1]*(-2*V[33]-V[32])+S[0]*(4*V[32]-8*V[33]))+
 S[2]*(4*S[0]-S[1])));
C[37]=+S[4]*(S[3]*(V[32]*(6*V[32]-12*V[33])+6*S[2]));
C[36]=+S[4]*(S[0]*(V[32]*(8*V[32]-16*V[33])+8*S[2]));
S[5]=V[9]*V[9];
C[35]=+S[3]*(S[5]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(8*V[32]-16*V[33]))+
 S[2]*(8*S[0]-4*S[1])));
C[34]=+S[3]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(8*V[32]-16*V[33]))+S[2]*(
 8*S[0]-4*S[1]));
C[33]=+S[5]*(S[0]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(16*V[32]-32*V[33]))+
 S[2]*(16*S[0]-4*S[1])));
C[32]=+S[0]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(16*V[32]-32*V[33]))+S[2]*(
 16*S[0]-4*S[1]));
C[31]=+S[3]*(S[5]*(V[32]*(24*V[32]-48*V[33])+24*S[2]));
C[30]=+S[3]*(V[32]*(24*V[32]-48*V[33])+24*S[2]);
C[29]=+S[5]*(S[0]*(V[32]*(32*V[32]-64*V[33])+32*S[2]));
C[28]=+S[0]*(V[32]*(32*V[32]-64*V[33])+32*S[2]);
C[27]=+S[5]*(S[0]*(V[32]*(S[1]*(8*V[33]+4*V[32])+S[0]*(8*V[32]-16*V[33]))+
 S[2]*(8*S[0]+4*S[1])));
C[26]=+S[5]*(S[1]*(S[0]*(V[32]*(16*V[33]+8*V[32])+8*S[2])));
C[25]=+S[5]*(S[1]*(V[32]*(8*V[33]+4*V[32])+4*S[2]));
C[24]=+S[5]*(V[32]*(8*V[32]-16*V[33])+8*S[2]);
C[23]=+S[0]*(V[32]*(S[1]*(8*V[33]+4*V[32])+S[0]*(8*V[32]-16*V[33]))+S[2]*(8*
 S[0]+4*S[1]));
C[22]=+S[0]*(V[32]*(16*V[32]-32*V[33])+16*S[2]);
C[21]=+S[1]*(S[0]*(V[32]*(16*V[33]+8*V[32])+8*S[2]));
C[20]=+S[0]*(V[32]*(8*V[32]-16*V[33])+8*S[2]);
C[19]=+S[1]*(V[32]*(8*V[33]+4*V[32])+4*S[2]);
C[18]=+V[32]*(8*V[32]-16*V[33])+8*S[2];
C[17]=+S[3]*(S[5]*(V[32]*(S[1]*(-4*V[33]-2*V[32])+S[0]*(4*V[32]-8*V[33]))+
 S[2]*(4*S[0]-2*S[1])));
C[16]=+S[5]*(S[0]*(V[32]*(S[1]*(-4*V[33]-2*V[32])+S[0]*(8*V[32]-16*V[33]))+
 S[2]*(8*S[0]-2*S[1])));
C[15]=+S[3]*(S[5]*(V[32]*(12*V[32]-24*V[33])+12*S[2]));
C[14]=+S[5]*(S[0]*(V[32]*(16*V[32]-32*V[33])+16*S[2]));
C[13]=+S[4]*(S[0]*(V[32]*(S[1]*(2*V[33]+V[32])+S[0]*(2*V[32]-4*V[33]))+S[2]*
 (2*S[0]+S[1])));
C[12]=+S[5]*(S[0]*(V[32]*(S[1]*(4*V[33]+2*V[32])+S[0]*(4*V[32]-8*V[33]))+
 S[2]*(4*S[0]+2*S[1])));
C[11]=+S[4]*(S[0]*(V[32]*(4*V[32]-8*V[33])+4*S[2]));
C[10]=+S[5]*(S[0]*(V[32]*(8*V[32]-16*V[33])+8*S[2]));
C[9]=+S[4]*(S[1]*(S[0]*(V[32]*(4*V[33]+2*V[32])+2*S[2])));
C[8]=+S[4]*(S[0]*(V[32]*(2*V[32]-4*V[33])+2*S[2]));
C[7]=+S[5]*(S[1]*(S[0]*(V[32]*(8*V[33]+4*V[32])+4*S[2])));
C[6]=+S[5]*(S[0]*(V[32]*(4*V[32]-8*V[33])+4*S[2]));
C[5]=+S[4]*(S[1]*(V[32]*(2*V[33]+V[32])+S[2]));
C[4]=+S[4]*(V[32]*(2*V[32]-4*V[33])+2*S[2]);
C[3]=+S[5]*(S[1]*(V[32]*(4*V[33]+2*V[32])+2*S[2]));
C[2]=+S[5]*(V[32]*(4*V[32]-8*V[33])+4*S[2]);
S[6]=V[17]*V[17];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[18]*V[18];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F907_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         B                 B      !  B                 B             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
           G|P7         /==<======!==<==\          G|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         U  |  t     W+ |  e2     !  e2 |  W+    t  |  U             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[40];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C907(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[7]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(
 DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(
 DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11])))+DP[12]*(C[10]*(-DP[1]-DP[3])+C[14]*
 (-DP[2]-DP[4])+C[3]*(DP[8]+DP[9]))+DP[13]*(C[10]*(-DP[1]-DP[3])+C[14]*(-
 DP[2]-DP[4])+C[3]*(DP[8]+DP[9]))+DP[10]*(C[10]*(DP[5]-S[2])+C[4]*(-DP[6]-
 DP[7])+C[11])+DP[11]*(C[14]*(DP[5]-S[2])+C[4]*(-DP[6]-DP[7])+C[36])+DP[14]*
 (C[3]*(S[2]-DP[5])-C[5]))+DP[6]*(C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[8]*DP[11])+C[16]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[38]*DP[11];
tmp[1]=+DP[0]*(DP[7]*(C[6]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-
 DP[1]-DP[3]+DP[9])+S[2]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+C[10]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))+C[8]*(
 DP[10]-DP[14])-C[11]*DP[11])+DP[0]*(C[10]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])+DP[14]*(S[2]-DP[5]))+C[11]*DP[11]-C[8]*DP[14])+DP[12]*(C[7]*
 (-DP[1]-DP[3])+C[15]*(-DP[2]-DP[4])+C[12]*(DP[8]+DP[9]))+DP[13]*(C[7]*(-
 DP[1]-DP[3])+C[15]*(-DP[2]-DP[4])+C[12]*(DP[8]+DP[9]))+S[2]*(C[12]*DP[14]-
 C[7]*DP[10]-C[15]*DP[11])+DP[5]*(C[7]*DP[10]+C[15]*DP[11]-C[12]*DP[14])+
 C[9]*DP[10]+C[37]*DP[11]-C[13]*DP[14])+DP[7]*(DP[7]*(C[6]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[10]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[8]*DP[10]+C[11]*
 DP[11])+DP[12]*(C[12]*(DP[1]+DP[3])+C[15]*(DP[2]+DP[4])+C[7]*(-DP[8]-
 DP[9]))+DP[13]*(C[12]*(DP[1]+DP[3])+C[15]*(DP[2]+DP[4])+C[7]*(-DP[8]-
 DP[9]))+S[2]*(C[12]*DP[10]+C[15]*DP[11]-C[7]*DP[14])+DP[5]*(C[7]*DP[14]-
 C[12]*DP[10]-C[15]*DP[11])+C[9]*DP[14]-C[13]*DP[10]-C[37]*DP[11])+C[17]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2]))+C[39]*
 DP[11];
tmp[2]=+DP[12]*(DP[6]*(DP[0]*(S[2]*(C[18]*(DP[9]*(DP[6]-DP[0]-DP[7])+DP[4]*(
 DP[0]-DP[6])+DP[7]*DP[3])+C[19]*DP[3]+C[28]*DP[4]-C[22]*DP[9])+C[24]*(
 DP[8]*(DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*DP[1])+C[2]*(DP[9]*(
 DP[0]-DP[6]+DP[7])+DP[4]*(DP[6]-DP[0])-DP[7]*DP[3])+C[14]*(DP[8]-DP[4])+
 C[10]*DP[9]-C[25]*DP[1]-C[29]*DP[2]-C[3]*DP[3])+DP[7]*(S[2]*(C[18]*(DP[3]*(
 DP[6]+DP[7])+DP[4]*(DP[6]+DP[7]))+C[19]*DP[9]-C[22]*DP[3]-C[28]*DP[4])+
 DP[6]*(C[24]*(-DP[1]-DP[2])+C[2]*(-DP[3]-DP[4]))+DP[7]*(C[24]*(-DP[1]-
 DP[2])+C[2]*(-DP[3]-DP[4]))+C[14]*(DP[1]+DP[4])+C[29]*DP[2]+C[10]*DP[3]-
 C[25]*DP[8]-C[3]*DP[9])+DP[4]*(S[2]*(C[32]-C[20]*DP[6])+C[6]*DP[6]-C[16])+
 DP[2]*(C[10]*DP[6]-C[33]))+DP[0]*(DP[7]*(S[2]*(C[20]*(DP[9]-DP[3])+C[22]*
 DP[4])+C[10]*(DP[1]-DP[4]-DP[8])+C[6]*(DP[3]-DP[9])-C[14]*DP[2])+DP[0]*(
 S[2]*(C[20]*DP[9]-C[22]*DP[4])+C[10]*(DP[4]-DP[8])+C[14]*DP[2]-C[6]*DP[9])+
 S[2]*(C[23]*DP[9]-C[21]*DP[3]-C[30]*DP[4])+C[26]*DP[1]+C[31]*DP[2]+C[7]*
 DP[3]+C[15]*DP[4]-C[27]*DP[8]-C[12]*DP[9])+DP[7]*(DP[7]*(S[2]*(-C[20]*
 DP[3]-C[22]*DP[4])+C[10]*(DP[1]+DP[4])+C[14]*DP[2]+C[6]*DP[3])+S[2]*(C[23]*
 DP[3]+C[30]*DP[4]-C[21]*DP[9])+C[26]*DP[8]-C[27]*DP[1]-C[31]*DP[2]-C[12]*
 DP[3]-C[15]*DP[4]+C[7]*DP[9])+DP[4]*(C[17]-C[34]*S[2])+C[35]*DP[2]);
R=+DP[5]*(DP[6]*(DP[0]*(C[2]*(DP[0]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(DP[11]-DP[14])+DP[5]*(DP[14]-
 DP[11]))+DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+
 DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[2]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10])))+DP[12]*(C[3]*(DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+
 C[10]*(-DP[8]-DP[9]))+DP[13]*(C[3]*(DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+C[10]*
 (-DP[8]-DP[9]))+DP[14]*(C[4]*(DP[0]-DP[6]+DP[7])+C[10]*(DP[5]-S[2])+C[11])+
 DP[11]*(C[14]*(S[2]-DP[5])+C[4]*(DP[6]-DP[0])-C[36])+DP[10]*(C[3]*(S[2]-
 DP[5])-C[5]-C[4]*DP[7]))+tmp[0])+tmp[1])+S[2]*(DP[13]*(DP[6]*(C[2]*(DP[0]*(
 DP[8]*(DP[0]-DP[6]+DP[7])+DP[2]*(DP[6]-DP[0])-DP[7]*DP[1])+DP[7]*(DP[1]*(-
 DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])))+DP[2]*(C[14]*(DP[7]-DP[0])+C[6]*DP[6]-
 C[16])+DP[0]*(C[10]*DP[8]-C[3]*DP[1])+DP[7]*(C[10]*DP[1]-C[3]*DP[8]))+
 DP[0]*(DP[2]*(C[10]*(DP[0]-DP[7])+C[15])+DP[8]*(C[6]*(-DP[0]-DP[7])-C[12])+
 DP[1]*(C[7]+C[6]*DP[7]))+DP[7]*(DP[1]*(C[6]*DP[7]-C[12])+DP[2]*(C[10]*
 DP[7]-C[15])+C[7]*DP[8])+C[17]*DP[2])+tmp[2]);
R*=(N/D)*Q2[7]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
