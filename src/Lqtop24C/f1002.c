/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F1002_out;
static void C1002(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[12]*V[12];
S[1]=V[10]*V[10];
S[2]=V[35]*V[35];
S[3]=V[9]*V[9]*V[9]*V[9];
C[51]=+S[3]*(S[1]*(V[34]*(S[1]*(8*V[35]-4*V[34])+S[0]*(8*V[35]+4*V[34]))+
 S[2]*(4*(S[0]-S[1]))));
S[4]=V[34]*V[34];
C[50]=+S[3]*(V[10]*(V[10]*(V[34]*(2*V[34]-4*V[35])+2*S[2])+V[12]*(18*(S[2]-
 S[4]))));
C[49]=+S[3]*(V[10]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[2])+V[12]*(12*(S[2]-
 S[4]))));
C[48]=+S[3]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[47]=+S[3]*(V[34]*(S[1]*(3*V[34]-6*V[35])+S[0]*(10*V[35]+5*V[34]))+S[2]*(5*
 S[0]+3*S[1]));
C[46]=+S[3]*(V[10]*(V[10]*(V[34]*(10*V[34]-20*V[35])+10*S[2])+V[12]*(18*(
 S[2]-S[4]))));
C[45]=+S[3]*(V[10]*(V[10]*(V[34]*(11*V[34]-22*V[35])+11*S[2])+V[12]*(12*(
 S[2]-S[4])))+S[0]*(V[34]*(2*V[35]+V[34])+S[2]));
C[44]=+S[3]*(V[34]*(6*V[34]-12*V[35])+6*S[2]);
S[5]=V[9]*V[9];
C[43]=+S[5]*(S[1]*(V[34]*(S[1]*(32*V[35]-16*V[34])+S[0]*(32*V[35]+16*
 V[34]))+S[2]*(16*(S[0]-S[1]))));
C[42]=+S[5]*(V[10]*(V[10]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[12]*(72*(S[2]-
 S[4]))));
C[41]=+S[5]*(V[10]*(V[10]*(V[34]*(40*V[34]-80*V[35])+40*S[2])+V[12]*(72*(
 S[2]-S[4]))));
C[40]=+S[1]*(V[34]*(S[1]*(32*V[35]-16*V[34])+S[0]*(32*V[35]+16*V[34]))+S[2]*
 (16*(S[0]-S[1])));
C[39]=+V[10]*(V[10]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[12]*(72*(S[2]-
 S[4])));
C[38]=+V[10]*(V[10]*(V[34]*(40*V[34]-80*V[35])+40*S[2])+V[12]*(72*(S[2]-
 S[4])));
C[37]=+S[5]*(V[10]*(V[10]*(V[34]*(16*V[34]-32*V[35])+16*S[2])+V[12]*(48*(
 S[2]-S[4]))));
C[36]=+S[5]*(V[10]*(V[10]*(V[34]*(44*V[34]-88*V[35])+44*S[2])+V[12]*(48*(
 S[2]-S[4])))+S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]));
C[35]=+V[10]*(V[10]*(V[34]*(16*V[34]-32*V[35])+16*S[2])+V[12]*(48*(S[2]-
 S[4])));
C[34]=+V[10]*(V[10]*(V[34]*(44*V[34]-88*V[35])+44*S[2])+V[12]*(48*(S[2]-
 S[4])))+S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]);
C[33]=+V[34]*(16*V[34]-32*V[35])+16*S[2];
C[32]=+S[5]*(V[34]*(S[1]*(12*V[34]-24*V[35])+S[0]*(40*V[35]+20*V[34]))+S[2]*
 (20*S[0]+12*S[1]));
C[31]=+V[34]*(S[1]*(12*V[34]-24*V[35])+S[0]*(40*V[35]+20*V[34]))+S[2]*(20*
 S[0]+12*S[1]);
C[30]=+S[5]*(V[34]*(24*V[34]-48*V[35])+24*S[2]);
C[29]=+V[34]*(24*V[34]-48*V[35])+24*S[2];
C[28]=+S[5]*(V[10]*(V[10]*(V[34]*(36*V[34]-72*V[35])+36*S[2])+V[12]*(72*(
 S[2]-S[4])))+S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]));
C[27]=+S[5]*(V[10]*(V[10]*(V[34]*(40*V[34]-80*V[35])+40*S[2])+V[12]*(48*(
 S[2]-S[4])))+S[0]*(V[34]*(16*V[35]+8*V[34])+8*S[2]));
C[26]=+S[5]*(V[34]*(40*V[34]-80*V[35])+40*S[2]);
C[25]=+S[5]*(V[34]*(32*V[34]-64*V[35])+32*S[2]);
C[24]=+V[10]*(V[10]*(V[34]*(36*V[34]-72*V[35])+36*S[2])+V[12]*(72*(S[2]-
 S[4])))+S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]);
C[23]=+V[10]*(V[10]*(V[34]*(40*V[34]-80*V[35])+40*S[2])+V[12]*(48*(S[2]-
 S[4])))+S[0]*(V[34]*(16*V[35]+8*V[34])+8*S[2]);
C[22]=+V[34]*(8*V[34]-16*V[35])+8*S[2];
C[21]=+V[34]*(40*V[34]-80*V[35])+40*S[2];
C[20]=+V[34]*(32*V[34]-64*V[35])+32*S[2];
C[19]=+S[5]*(S[1]*(V[34]*(S[1]*(16*V[35]-8*V[34])+S[0]*(16*V[35]+8*V[34]))+
 S[2]*(8*(S[0]-S[1]))));
C[18]=+S[5]*(V[10]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[2])+V[12]*(36*(S[2]-
 S[4]))));
C[17]=+S[5]*(V[10]*(V[10]*(V[34]*(20*V[34]-40*V[35])+20*S[2])+V[12]*(36*(
 S[2]-S[4]))));
C[16]=+S[5]*(V[10]*(V[10]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[12]*(24*(S[2]-
 S[4]))));
C[15]=+S[5]*(V[10]*(V[10]*(V[34]*(22*V[34]-44*V[35])+22*S[2])+V[12]*(24*(
 S[2]-S[4])))+S[0]*(V[34]*(4*V[35]+2*V[34])+2*S[2]));
C[14]=+S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[13]=+S[5]*(V[34]*(S[1]*(6*V[34]-12*V[35])+S[0]*(20*V[35]+10*V[34]))+S[2]*(
 10*S[0]+6*S[1]));
C[12]=+S[5]*(V[34]*(12*V[34]-24*V[35])+12*S[2]);
C[11]=+S[3]*(V[10]*(V[10]*(V[34]*(9*V[34]-18*V[35])+9*S[2])+V[12]*(18*(S[2]-
 S[4])))+S[0]*(V[34]*(2*V[35]+V[34])+S[2]));
C[10]=+S[5]*(V[10]*(V[10]*(V[34]*(18*V[34]-36*V[35])+18*S[2])+V[12]*(36*(
 S[2]-S[4])))+S[0]*(V[34]*(4*V[35]+2*V[34])+2*S[2]));
C[9]=+S[3]*(V[10]*(V[10]*(V[34]*(10*V[34]-20*V[35])+10*S[2])+V[12]*(12*(
 S[2]-S[4])))+S[0]*(V[34]*(4*V[35]+2*V[34])+2*S[2]));
C[8]=+S[3]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[7]=+S[5]*(V[10]*(V[10]*(V[34]*(20*V[34]-40*V[35])+20*S[2])+V[12]*(24*(
 S[2]-S[4])))+S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]));
C[6]=+S[5]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[5]=+S[3]*(V[34]*(10*V[34]-20*V[35])+10*S[2]);
C[4]=+S[5]*(V[34]*(20*V[34]-40*V[35])+20*S[2]);
C[3]=+S[3]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[2]=+S[5]*(V[34]*(16*V[34]-32*V[35])+16*S[2]);
S[6]=V[17]*V[17];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[19]*V[19];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+3*S[8]*S[9]*S[10];
}
REAL F1002_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                        n2     !  n2                      G          
                     /==>======!==>==\                 /---1-        
                     |  P3     !  P3 |                 |  P1         
                     |         !     |                 |             
      G     t     W+ |  E2     !  E2 |  W+    t    ~03 |  G          
    -1---@==>==@-3>--@==<======!==<==@-->5-@==>==@---4-@---2-        
      P1 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2         
         |     |               !           |     |                   
         |     |        b      !  b        |     |                   
        c|P7   \========>======!==>========/     |                   
         |              P6     !  P6             |                   
         |                     !                 |                   
      G  |              C      !  C              |                   
    -2---@==============<======!==<==============/                   
      P2                P5     !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[52];REAL S[3];REAL tmp[2];                                    
     
if(CalcConst) C1002(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[0]*(DP[7]*(DP[12]*(C[6]*(DP[1]+DP[3])+C[2]*(-DP[2]-DP[4])+C[4]*(
 DP[8]+DP[9]))+DP[13]*(C[6]*(DP[1]+DP[3])+C[2]*(-DP[2]-DP[4])+C[4]*(DP[8]+
 DP[9]))+S[2]*(C[6]*DP[10]-C[2]*DP[11]+C[4]*DP[14])+DP[5]*(C[2]*DP[11]-C[6]*
 DP[10]-C[4]*DP[14])+C[3]*DP[11]-C[8]*DP[10]-C[5]*DP[14])+DP[12]*(DP[0]*(
 C[6]*(-DP[8]-DP[9]))+C[18]*(-DP[1]-DP[3])+C[17]*(-DP[2]-DP[4])+C[10]*(
 DP[8]+DP[9]))+DP[13]*(DP[0]*(C[6]*(-DP[8]-DP[9]))+C[18]*(-DP[1]-DP[3])+
 C[17]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[14]*(DP[0]*(C[6]*(DP[5]-S[2])+
 C[8])+C[10]*(S[2]-DP[5])-C[11])+DP[10]*(C[18]*(DP[5]-S[2])+C[50])+DP[11]*(
 C[17]*(DP[5]-S[2])+C[46]))+DP[7]*(DP[7]*(C[4]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[5]*DP[10])+C[13]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+C[47]*DP[10])+
 C[19]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2]))+
 C[51]*DP[10];
tmp[1]=+S[2]*(DP[12]*(DP[6]*(S[2]*(DP[3]*(C[33]*(DP[0]-DP[6])+C[35]-C[29]*
 DP[7])+DP[4]*(C[22]*(DP[0]-DP[6])+C[34]+C[29]*DP[7])+DP[9]*(C[22]*DP[0]-
 C[23]-C[20]*DP[7]))+DP[0]*(C[14]*(-DP[2]-DP[3]-DP[8])+C[6]*(-DP[4]-DP[9])-
 C[2]*DP[1])+DP[7]*(C[30]*(DP[1]-DP[2])+C[12]*(DP[3]-DP[4])+C[25]*DP[8]+
 C[2]*DP[9])+DP[6]*(C[14]*(DP[2]+DP[3])+C[2]*DP[1]+C[6]*DP[4])+C[27]*DP[8]-
 C[37]*DP[1]-C[36]*DP[2]-C[16]*DP[3]-C[15]*DP[4]+C[7]*DP[9])+DP[0]*(DP[7]*(
 S[2]*(C[22]*DP[3]-C[20]*DP[4]+C[21]*DP[9])+C[25]*DP[2]-C[14]*DP[1]-C[6]*
 DP[3]+C[2]*DP[4]-C[26]*DP[8]-C[4]*DP[9])+S[2]*(DP[9]*(C[24]-C[22]*DP[0])-
 C[39]*DP[3]-C[38]*DP[4])+DP[0]*(C[14]*DP[8]+C[6]*DP[9])+C[42]*DP[1]+C[41]*
 DP[2]+C[18]*DP[3]+C[17]*DP[4]-C[28]*DP[8]-C[10]*DP[9])+DP[3]*(DP[7]*(S[2]*
 (-C[31]-C[21]*DP[7])+C[13]+C[4]*DP[7])+C[19]-C[40]*S[2])+DP[1]*(DP[7]*(
 C[32]+C[26]*DP[7])+C[43]))+DP[13]*(DP[6]*(DP[1]*(C[14]*(DP[6]-DP[0])+C[12]*
 DP[7]-C[16])+DP[2]*(C[6]*(DP[6]-DP[0])-C[15]-C[12]*DP[7])+DP[8]*(C[7]-C[6]*
 DP[0]+C[2]*DP[7]))+DP[0]*(DP[7]*(C[2]*DP[2]-C[6]*DP[1]-C[4]*DP[8])+DP[8]*(
 C[6]*DP[0]-C[10])+C[18]*DP[1]+C[17]*DP[2])+DP[1]*(DP[7]*(C[13]+C[4]*DP[7])+
 C[19])));
R=+DP[0]*(DP[5]*(DP[6]*(DP[12]*(DP[0]*(C[6]*(DP[2]+DP[4]+DP[8]+DP[9])+C[14]*
 (DP[1]+DP[3]))+DP[7]*(C[12]*(DP[2]-DP[1]-DP[3]+DP[4])+C[2]*(-DP[8]-DP[9]))+
 DP[6]*(C[14]*(-DP[1]-DP[3])+C[6]*(-DP[2]-DP[4]))+C[16]*(DP[1]+DP[3])+C[15]*
 (DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[6]*(DP[2]+DP[4]+DP[8]+
 DP[9])+C[14]*(DP[1]+DP[3]))+DP[7]*(C[12]*(DP[2]-DP[1]-DP[3]+DP[4])+C[2]*(-
 DP[8]-DP[9]))+DP[6]*(C[14]*(-DP[1]-DP[3])+C[6]*(-DP[2]-DP[4]))+C[16]*(
 DP[1]+DP[3])+C[15]*(DP[2]+DP[4])+C[7]*(-DP[8]-DP[9]))+DP[10]*(S[2]*(C[14]*(
 DP[0]-DP[6])+C[16]-C[12]*DP[7])+DP[5]*(C[14]*(DP[6]-DP[0])+C[12]*DP[7]-
 C[16])+C[48]*(DP[6]-DP[0])+C[44]*DP[7]-C[49])+DP[11]*(S[2]*(C[6]*(DP[0]-
 DP[6])+C[15]+C[12]*DP[7])+DP[5]*(C[6]*(DP[6]-DP[0])-C[15]-C[12]*DP[7])+
 C[8]*(DP[6]-DP[0])-C[45]-C[44]*DP[7])+DP[14]*(S[2]*(C[6]*DP[0]-C[7]-C[2]*
 DP[7])+DP[5]*(C[7]-C[6]*DP[0]+C[2]*DP[7])+C[9]-C[8]*DP[0]+C[3]*DP[7]))+
 tmp[0])+tmp[1]);
R*=(N/D)*Q1[6]*Q2[1]*Q2[2]*Q1[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*9)/(8);
 }
 return R;
}
