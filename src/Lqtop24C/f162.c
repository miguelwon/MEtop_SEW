/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F162_out;
static void C162(REAL * C)
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
S[5]=V[9]*V[9];
C[38]=+S[3]*(S[5]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(8*V[32]-16*V[33]))+
 S[2]*(8*S[0]-4*S[1])));
C[37]=+S[3]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(8*V[32]-16*V[33]))+S[2]*(
 8*S[0]-4*S[1]));
C[36]=+S[3]*(S[5]*(V[32]*(S[1]*(-4*V[33]-2*V[32])+S[0]*(4*V[32]-8*V[33]))+
 S[2]*(4*S[0]-2*S[1])));
C[35]=+S[4]*(S[3]*(V[32]*(6*V[32]-12*V[33])+6*S[2]));
C[34]=+S[3]*(S[5]*(V[32]*(24*V[32]-48*V[33])+24*S[2]));
C[33]=+S[3]*(V[32]*(24*V[32]-48*V[33])+24*S[2]);
C[32]=+S[3]*(S[5]*(V[32]*(12*V[32]-24*V[33])+12*S[2]));
C[31]=+S[4]*(S[0]*(V[32]*(S[1]*(-2*V[33]-V[32])+S[0]*(4*V[32]-8*V[33]))+
 S[2]*(4*S[0]-S[1])));
C[30]=+S[5]*(S[0]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(16*V[32]-32*V[33]))+
 S[2]*(16*S[0]-4*S[1])));
C[29]=+S[0]*(V[32]*(S[1]*(-8*V[33]-4*V[32])+S[0]*(16*V[32]-32*V[33]))+S[2]*(
 16*S[0]-4*S[1]));
C[28]=+S[5]*(S[0]*(V[32]*(S[1]*(-4*V[33]-2*V[32])+S[0]*(8*V[32]-16*V[33]))+
 S[2]*(8*S[0]-2*S[1])));
C[27]=+S[4]*(S[0]*(V[32]*(8*V[32]-16*V[33])+8*S[2]));
C[26]=+S[5]*(S[0]*(V[32]*(32*V[32]-64*V[33])+32*S[2]));
C[25]=+S[0]*(V[32]*(32*V[32]-64*V[33])+32*S[2]);
C[24]=+S[5]*(S[0]*(V[32]*(S[1]*(8*V[33]+4*V[32])+S[0]*(8*V[32]-16*V[33]))+
 S[2]*(8*S[0]+4*S[1])));
C[23]=+S[5]*(S[1]*(S[0]*(V[32]*(16*V[33]+8*V[32])+8*S[2])));
C[22]=+S[5]*(S[0]*(V[32]*(16*V[32]-32*V[33])+16*S[2]));
C[21]=+S[5]*(S[1]*(V[32]*(8*V[33]+4*V[32])+4*S[2]));
C[20]=+S[5]*(V[32]*(8*V[32]-16*V[33])+8*S[2]);
C[19]=+S[0]*(V[32]*(S[1]*(8*V[33]+4*V[32])+S[0]*(8*V[32]-16*V[33]))+S[2]*(8*
 S[0]+4*S[1]));
C[18]=+S[1]*(S[0]*(V[32]*(16*V[33]+8*V[32])+8*S[2]));
C[17]=+S[0]*(V[32]*(8*V[32]-16*V[33])+8*S[2]);
C[16]=+S[0]*(V[32]*(16*V[32]-32*V[33])+16*S[2]);
C[15]=+S[1]*(V[32]*(8*V[33]+4*V[32])+4*S[2]);
C[14]=+V[32]*(8*V[32]-16*V[33])+8*S[2];
C[13]=+S[4]*(S[0]*(V[32]*(S[1]*(2*V[33]+V[32])+S[0]*(2*V[32]-4*V[33]))+S[2]*
 (2*S[0]+S[1])));
C[12]=+S[5]*(S[0]*(V[32]*(S[1]*(4*V[33]+2*V[32])+S[0]*(4*V[32]-8*V[33]))+
 S[2]*(4*S[0]+2*S[1])));
C[11]=+S[4]*(S[1]*(S[0]*(V[32]*(4*V[33]+2*V[32])+2*S[2])));
C[10]=+S[4]*(S[0]*(V[32]*(2*V[32]-4*V[33])+2*S[2]));
C[9]=+S[5]*(S[1]*(S[0]*(V[32]*(8*V[33]+4*V[32])+4*S[2])));
C[8]=+S[5]*(S[0]*(V[32]*(4*V[32]-8*V[33])+4*S[2]));
C[7]=+S[4]*(S[0]*(V[32]*(4*V[32]-8*V[33])+4*S[2]));
C[6]=+S[5]*(S[0]*(V[32]*(8*V[32]-16*V[33])+8*S[2]));
C[5]=+S[4]*(S[1]*(V[32]*(2*V[33]+V[32])+S[2]));
C[4]=+S[5]*(S[1]*(V[32]*(4*V[33]+2*V[32])+2*S[2]));
C[3]=+S[4]*(V[32]*(2*V[32]-4*V[33])+2*S[2]);
C[2]=+S[5]*(V[32]*(4*V[32]-8*V[33])+4*S[2]);
S[6]=V[17]*V[17];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[18]*V[18];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+32*S[8]*S[9]*S[10];
}
REAL F162_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
           G|P7   \========>======!==>========/    G|-PA             
            1              P5     !  P5             3                
            |                     !                 |                
         B  |              B      !  B              |  B             
       ==<==@==============<======!==<==============@==<==           
         P2                P6     !  P6                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[40];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C162(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[10]*(C[2]*(DP[10]*(DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[6]-DP[7])+DP[5]*(DP[6]+DP[7]))+DP[11]*(
 DP[8]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[9]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-
 DP[6]-DP[7])+DP[5]*(DP[6]+DP[7])))+DP[8]*(C[22]*(DP[1]+DP[3])+C[6]*(DP[2]+
 DP[4])+C[4]*(-DP[12]-DP[13]))+DP[9]*(C[22]*(DP[1]+DP[3])+C[6]*(DP[2]+
 DP[4])+C[4]*(-DP[12]-DP[13]))+DP[6]*(C[22]*(S[2]-DP[5])+C[3]*(DP[10]+
 DP[11])-C[27])+DP[7]*(C[6]*(S[2]-DP[5])+C[3]*(DP[10]+DP[11])-C[7])+DP[14]*(
 C[4]*(DP[5]-S[2])+C[5]))+DP[11]*(C[8]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+
 DP[9])+DP[6]*(S[2]-DP[5]))-C[10]*DP[6])+C[28]*(DP[1]*(-DP[8]-DP[9])+DP[3]*
 (-DP[8]-DP[9])+DP[6]*(DP[5]-S[2]))+C[31]*DP[6];
tmp[1]=+DP[0]*(DP[10]*(C[8]*(DP[8]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[9]*(DP[2]+
 DP[4]-DP[12]-DP[13])+S[2]*(DP[7]-DP[14])+DP[5]*(DP[14]-DP[7]))+C[6]*(DP[1]*
 (-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+DP[6]*(DP[5]-S[2]))+C[10]*(DP[14]-
 DP[7])+C[7]*DP[6])+DP[0]*(C[6]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+DP[9])+
 DP[6]*(S[2]-DP[5]))+C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[2]))+C[10]*DP[14]-C[7]*DP[6])+DP[8]*(C[32]*(DP[1]+DP[3])+
 C[9]*(DP[2]+DP[4])+C[12]*(-DP[12]-DP[13]))+DP[9]*(C[32]*(DP[1]+DP[3])+C[9]*
 (DP[2]+DP[4])+C[12]*(-DP[12]-DP[13]))+S[2]*(C[32]*DP[6]+C[9]*DP[7]-C[12]*
 DP[14])+DP[5]*(C[12]*DP[14]-C[32]*DP[6]-C[9]*DP[7])+C[13]*DP[14]-C[35]*
 DP[6]-C[11]*DP[7])+DP[10]*(DP[10]*(C[6]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+
 DP[9])+DP[6]*(S[2]-DP[5]))+C[8]*(DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+
 DP[7]*(S[2]-DP[5]))-C[7]*DP[6]-C[10]*DP[7])+DP[8]*(C[32]*(-DP[1]-DP[3])+
 C[12]*(-DP[2]-DP[4])+C[9]*(DP[12]+DP[13]))+DP[9]*(C[32]*(-DP[1]-DP[3])+
 C[12]*(-DP[2]-DP[4])+C[9]*(DP[12]+DP[13]))+S[2]*(C[9]*DP[14]-C[32]*DP[6]-
 C[12]*DP[7])+DP[5]*(C[32]*DP[6]+C[12]*DP[7]-C[9]*DP[14])+C[35]*DP[6]+C[13]*
 DP[7]-C[11]*DP[14])+C[36]*(DP[1]*(DP[8]+DP[9])+DP[3]*(DP[8]+DP[9])+DP[6]*(
 S[2]-DP[5]))-C[39]*DP[6];
tmp[2]=+DP[8]*(DP[11]*(DP[0]*(S[2]*(C[14]*(DP[13]*(DP[0]+DP[10]-DP[11])+
 DP[3]*(DP[11]-DP[0])-DP[10]*DP[4])+C[16]*DP[13]-C[25]*DP[3]-C[15]*DP[4])+
 C[20]*(DP[12]*(DP[11]-DP[0]-DP[10])+DP[1]*(DP[0]-DP[11])+DP[10]*DP[2])+
 C[2]*(DP[13]*(DP[11]-DP[0]-DP[10])+DP[3]*(DP[0]-DP[11])+DP[10]*DP[4])+
 C[22]*(DP[3]-DP[12])+C[26]*DP[1]+C[21]*DP[2]+C[4]*DP[4]-C[6]*DP[13])+
 DP[10]*(S[2]*(C[14]*(DP[3]*(-DP[10]-DP[11])+DP[4]*(-DP[10]-DP[11]))+C[25]*
 DP[3]+C[16]*DP[4]-C[15]*DP[13])+DP[10]*(C[20]*(DP[1]+DP[2])+C[2]*(DP[3]+
 DP[4]))+DP[11]*(C[20]*(DP[1]+DP[2])+C[2]*(DP[3]+DP[4]))+C[22]*(-DP[2]-
 DP[3])+C[21]*DP[12]-C[26]*DP[1]-C[6]*DP[4]+C[4]*DP[13])+DP[3]*(S[2]*(C[17]*
 DP[11]-C[29])+C[28]-C[8]*DP[11])+DP[1]*(C[30]-C[6]*DP[11]))+DP[0]*(DP[10]*(
 S[2]*(C[17]*(DP[4]-DP[13])-C[16]*DP[3])+C[6]*(DP[3]-DP[2]+DP[12])+C[8]*(
 DP[13]-DP[4])+C[22]*DP[1])+DP[0]*(S[2]*(C[16]*DP[3]-C[17]*DP[13])+C[6]*(
 DP[12]-DP[3])+C[8]*DP[13]-C[22]*DP[1])+S[2]*(C[33]*DP[3]+C[18]*DP[4]-C[19]*
 DP[13])+C[24]*DP[12]-C[34]*DP[1]-C[23]*DP[2]-C[32]*DP[3]-C[9]*DP[4]+C[12]*
 DP[13])+DP[10]*(DP[10]*(S[2]*(C[16]*DP[3]+C[17]*DP[4])+C[6]*(-DP[2]-DP[3])-
 C[22]*DP[1]-C[8]*DP[4])+S[2]*(C[18]*DP[13]-C[33]*DP[3]-C[19]*DP[4])+C[34]*
 DP[1]+C[24]*DP[2]+C[32]*DP[3]+C[12]*DP[4]-C[23]*DP[12]-C[9]*DP[13])+DP[3]*(
 C[37]*S[2]-C[36])-C[38]*DP[1]);
R=+DP[5]*(DP[11]*(DP[0]*(C[2]*(DP[0]*(DP[8]*(DP[12]-DP[1]-DP[3]+DP[13])+
 DP[9]*(DP[12]-DP[1]-DP[3]+DP[13])+S[2]*(DP[14]-DP[6])+DP[5]*(DP[6]-
 DP[14]))+DP[10]*(DP[8]*(DP[12]-DP[2]-DP[4]+DP[13])+DP[9]*(DP[12]-DP[2]-
 DP[4]+DP[13])+S[2]*(DP[14]-DP[7])+DP[5]*(DP[7]-DP[14]))+DP[11]*(DP[8]*(
 DP[1]+DP[3]-DP[12]-DP[13])+DP[9]*(DP[1]+DP[3]-DP[12]-DP[13])+S[2]*(DP[6]-
 DP[14])+DP[5]*(DP[14]-DP[6])))+DP[8]*(C[22]*(-DP[1]-DP[3])+C[4]*(-DP[2]-
 DP[4])+C[6]*(DP[12]+DP[13]))+DP[9]*(C[22]*(-DP[1]-DP[3])+C[4]*(-DP[2]-
 DP[4])+C[6]*(DP[12]+DP[13]))+DP[14]*(C[3]*(DP[11]-DP[0]-DP[10])+C[6]*(S[2]-
 DP[5])-C[7])+DP[6]*(C[22]*(DP[5]-S[2])+C[3]*(DP[0]-DP[11])+C[27])+DP[7]*(
 C[4]*(DP[5]-S[2])+C[5]+C[3]*DP[10]))+tmp[0])+tmp[1])+S[2]*(DP[9]*(DP[11]*(
 C[2]*(DP[0]*(DP[12]*(DP[11]-DP[0]-DP[10])+DP[1]*(DP[0]-DP[11])+DP[10]*
 DP[2])+DP[10]*(DP[1]*(DP[10]+DP[11])+DP[2]*(DP[10]+DP[11])))+DP[1]*(C[22]*(
 DP[0]-DP[10])+C[28]-C[8]*DP[11])+DP[0]*(C[4]*DP[2]-C[6]*DP[12])+DP[10]*(
 C[4]*DP[12]-C[6]*DP[2]))+DP[0]*(DP[1]*(C[6]*(DP[10]-DP[0])-C[32])+DP[12]*(
 C[8]*(DP[0]+DP[10])+C[12])+DP[2]*(-C[9]-C[8]*DP[10]))+DP[10]*(DP[1]*(C[32]-
 C[6]*DP[10])+DP[2]*(C[12]-C[8]*DP[10])-C[9]*DP[12])-C[36]*DP[1])+tmp[2]);
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*9)/(8);
 }
 return R;
}
