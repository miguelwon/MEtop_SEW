/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F1019_out;
static void C1019(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[33]*V[33];
S[1]=V[12]*V[12];
S[2]=V[9]*V[9]*V[9]*V[9];
C[43]=+S[2]*(S[1]*(V[32]*(8*V[33]+12*V[32])+12*S[0]));
C[42]=+S[2]*(S[1]*(V[32]*(4*V[33]+6*V[32])+6*S[0]));
C[41]=+S[2]*(S[1]*(V[32]*(6*V[33]+9*V[32])+9*S[0]));
C[40]=+S[2]*(S[1]*(V[32]*(12*V[32]-8*V[33])+12*S[0]));
C[39]=+S[2]*(S[1]*(V[32]*(7*V[32]-6*V[33])+7*S[0]));
C[38]=+S[2]*(V[32]*(20*V[32]-40*V[33])+20*S[0]);
S[3]=V[9]*V[9];
C[37]=+S[3]*(S[1]*(V[32]*(32*V[33]+48*V[32])+48*S[0]));
C[36]=+S[3]*(S[1]*(V[32]*(48*V[32]-32*V[33])+48*S[0]));
C[35]=+S[1]*(V[32]*(32*V[33]+48*V[32])+48*S[0]);
C[34]=+S[1]*(V[32]*(48*V[32]-32*V[33])+48*S[0]);
C[33]=+S[3]*(S[1]*(V[32]*(28*V[32]-24*V[33])+28*S[0]));
C[32]=+S[1]*(V[32]*(16*V[33]+24*V[32])+24*S[0]);
C[31]=+S[1]*(V[32]*(28*V[32]-24*V[33])+28*S[0]);
C[30]=+S[3]*(S[1]*(V[32]*(24*V[33]+36*V[32])+36*S[0]));
C[29]=+S[3]*(V[32]*(80*V[32]-160*V[33])+80*S[0]);
C[28]=+S[1]*(V[32]*(24*V[33]+36*V[32])+36*S[0]);
C[27]=+V[32]*(80*V[32]-160*V[33])+80*S[0];
C[26]=+S[3]*(S[1]*(V[32]*(44*V[32]-24*V[33])+44*S[0]));
C[25]=+S[3]*(V[32]*(8*V[32]-16*V[33])+8*S[0]);
C[24]=+S[3]*(V[32]*(72*V[32]-144*V[33])+72*S[0]);
C[23]=+S[3]*(V[32]*(64*V[32]-128*V[33])+64*S[0]);
C[22]=+S[1]*(V[32]*(44*V[32]-24*V[33])+44*S[0]);
C[21]=+S[1]*(V[32]*(24*V[32]-16*V[33])+24*S[0]);
C[20]=+V[32]*(8*V[32]-16*V[33])+8*S[0];
C[19]=+V[32]*(72*V[32]-144*V[33])+72*S[0];
C[18]=+V[32]*(64*V[32]-128*V[33])+64*S[0];
C[17]=+S[3]*(S[1]*(V[32]*(16*V[33]+24*V[32])+24*S[0]));
C[16]=+S[3]*(S[1]*(V[32]*(24*V[32]-16*V[33])+24*S[0]));
C[15]=+S[3]*(S[1]*(V[32]*(8*V[33]+12*V[32])+12*S[0]));
C[14]=+S[3]*(S[1]*(V[32]*(14*V[32]-12*V[33])+14*S[0]));
C[13]=+S[3]*(S[1]*(V[32]*(12*V[33]+18*V[32])+18*S[0]));
C[12]=+S[3]*(V[32]*(40*V[32]-80*V[33])+40*S[0]);
C[11]=+S[2]*(S[1]*(V[32]*(11*V[32]-6*V[33])+11*S[0]));
C[10]=+S[3]*(S[1]*(V[32]*(22*V[32]-12*V[33])+22*S[0]));
C[9]=+S[2]*(S[1]*(V[32]*(6*V[32]-4*V[33])+6*S[0]));
C[8]=+S[2]*(V[32]*(2*V[32]-4*V[33])+2*S[0]);
C[7]=+S[3]*(S[1]*(V[32]*(12*V[32]-8*V[33])+12*S[0]));
C[6]=+S[3]*(V[32]*(4*V[32]-8*V[33])+4*S[0]);
C[5]=+S[2]*(V[32]*(18*V[32]-36*V[33])+18*S[0]);
C[4]=+S[3]*(V[32]*(36*V[32]-72*V[33])+36*S[0]);
C[3]=+S[2]*(V[32]*(16*V[32]-32*V[33])+16*S[0]);
C[2]=+S[3]*(V[32]*(32*V[32]-64*V[33])+32*S[0]);
S[4]=V[17]*V[17];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+3*S[4]*S[5];
S[6]=V[49]*V[49];
S[7]=V[18]*V[18];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F1019_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         G     t     W+ |  e2     !  e2 |  W+    t     G             
       -1---@==<==@-3<--@==>======!==>==@--<4-@==<==@---1-           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           t|P7   \========<======!==<========/    u|-PA             
            |              P6     !  P6             |                
            |                     !                 |                
         G  |              u      !  u              |  G             
       -2---@==============>======!==>==============@---2-           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[44];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C1019(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[6]*(DP[7]*(DP[12]*(C[6]*(-DP[1]-DP[3])+C[4]*(DP[2]+DP[4])+C[2]*(-
 DP[8]-DP[9]))+DP[13]*(C[6]*(-DP[1]-DP[3])+C[4]*(DP[2]+DP[4])+C[2]*(-DP[8]-
 DP[9]))+S[2]*(C[4]*DP[11]-C[6]*DP[10]-C[2]*DP[14])+DP[5]*(C[6]*DP[10]-C[4]*
 DP[11]+C[2]*DP[14])+C[8]*DP[10]-C[5]*DP[11]+C[3]*DP[14])+DP[12]*(DP[2]*(
 C[14]+C[6]*DP[6])+DP[4]*(C[14]+C[6]*DP[6])+C[15]*(DP[1]+DP[3])+C[7]*(-
 DP[8]-DP[9]))+DP[13]*(DP[2]*(C[14]+C[6]*DP[6])+DP[4]*(C[14]+C[6]*DP[6])+
 C[15]*(DP[1]+DP[3])+C[7]*(-DP[8]-DP[9]))+DP[11]*(DP[6]*(C[6]*(S[2]-DP[5])-
 C[8])+C[14]*(S[2]-DP[5])-C[39])+DP[10]*(C[15]*(S[2]-DP[5])-C[42])+DP[14]*(
 C[7]*(DP[5]-S[2])+C[9]))+DP[7]*(DP[7]*(C[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[5]*DP[10])+C[13]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[41]*DP[10]);
tmp[1]=+S[2]*(DP[12]*(DP[0]*(S[2]*(DP[9]*(C[20]*(DP[0]-DP[6])+C[22]+C[19]*
 DP[7])+DP[4]*(-C[34]-C[20]*DP[6]-C[27]*DP[7])+DP[3]*(-C[35]-C[20]*DP[7]))+
 DP[7]*(C[25]*DP[1]+C[29]*DP[2]+C[6]*DP[3]+C[12]*DP[4]-C[24]*DP[8]-C[4]*
 DP[9])+DP[6]*(C[25]*(DP[2]+DP[8])+C[6]*(DP[4]+DP[9]))+DP[0]*(-C[25]*DP[8]-
 C[6]*DP[9])+C[37]*DP[1]+C[36]*DP[2]+C[17]*DP[3]+C[16]*DP[4]-C[26]*DP[8]-
 C[10]*DP[9])+DP[6]*(DP[7]*(S[2]*(C[19]*DP[4]-C[20]*DP[3]-C[18]*DP[9])+
 C[25]*DP[1]-C[24]*DP[2]+C[6]*DP[3]-C[4]*DP[4]+C[23]*DP[8]+C[2]*DP[9])+S[2]*
 (DP[4]*(C[31]+C[20]*DP[6])+C[32]*DP[3]-C[21]*DP[9])+DP[2]*(-C[33]-C[25]*
 DP[6])+DP[4]*(-C[14]-C[6]*DP[6])+C[16]*DP[8]-C[17]*DP[1]-C[15]*DP[3]+C[7]*
 DP[9])+DP[7]*(DP[3]*(S[2]*(-C[28]-C[19]*DP[7])+C[13]+C[4]*DP[7])+DP[1]*(
 C[30]+C[24]*DP[7])))+DP[13]*(DP[0]*(DP[8]*(C[6]*(DP[6]-DP[0])-C[10]-C[4]*
 DP[7])+DP[2]*(C[16]+C[6]*DP[6]+C[12]*DP[7])+DP[1]*(C[17]+C[6]*DP[7]))+
 DP[6]*(DP[2]*(-C[14]-C[6]*DP[6]-C[4]*DP[7])+DP[1]*(C[6]*DP[7]-C[15])+DP[8]*
 (C[7]+C[2]*DP[7]))+DP[1]*(DP[7]*(C[13]+C[4]*DP[7]))));
R=+DP[7]*(DP[5]*(DP[0]*(C[6]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+
 DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+S[2]*(-DP[11]-DP[14])+DP[5]*(DP[11]+
 DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-
 S[2])))+DP[7]*(C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 (DP[5]-S[2]))+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(
 S[2]-DP[5]))+C[8]*DP[10]+C[38]*DP[11]-C[5]*DP[14])+DP[12]*(C[17]*(-DP[1]-
 DP[3])+C[16]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[13]*(C[17]*(-DP[1]-
 DP[3])+C[16]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[14]*(C[10]*(S[2]-
 DP[5])+C[8]*(DP[6]-DP[0])-C[11])+DP[11]*(C[16]*(DP[5]-S[2])+C[40]+C[8]*
 DP[6])+DP[10]*(C[17]*(DP[5]-S[2])+C[43]))+tmp[0])+tmp[1]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[7];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*81)/(64);
 }
 return R;
}
