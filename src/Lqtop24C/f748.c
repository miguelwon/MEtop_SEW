/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F748_out;
static void C748(REAL * C)
{
REAL* V=va_out;
REAL S[8];                                                                  
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
C[45]=+S[1]*(S[0]*(S[1]*(6*(V[37]*V[22]+V[20]*V[2]))+S[0]*(2*(V[37]*V[22]+
 V[20]*V[2]))));
C[44]=+S[1]*(4*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[43]=+S[1]*(S[0]*(S[1]*(2*(V[37]*V[22]+V[20]*V[2]))+S[0]*(4*(V[37]*V[22]+
 V[20]*V[2]))));
S[2]=V[9]*V[9]*V[9]*V[9];
C[42]=+S[2]*(S[0]*(3*(V[37]*V[22]+V[20]*V[2])));
C[41]=+S[2]*(S[0]*(5*(V[37]*V[22]+V[20]*V[2])));
C[40]=+S[1]*(S[1]*(2*(V[37]*V[22]+V[20]*V[2]))+S[0]*(10*(V[37]*V[22]+V[20]*
 V[2])));
C[39]=+S[2]*(S[0]*(4*(V[37]*V[22]+V[20]*V[2])));
C[38]=+S[1]*(S[0]*(24*(V[37]*V[22]+V[20]*V[2])));
C[37]=+S[1]*(16*(V[37]*V[22]+V[20]*V[2]));
C[36]=+S[0]*(S[1]*(12*(V[37]*V[22]+V[20]*V[2]))+S[0]*(4*(V[37]*V[22]+V[20]*
 V[2])));
C[35]=+S[0]*(24*(V[37]*V[22]+V[20]*V[2]));
C[34]=+8*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]));
C[33]=+16*(V[37]*V[22]+V[20]*V[2]);
C[32]=+S[0]*(S[1]*(4*(V[37]*V[22]+V[20]*V[2]))+S[0]*(8*(V[37]*V[22]+V[20]*
 V[2])));
C[31]=+S[0]*(12*(V[37]*V[22]+V[20]*V[2]));
C[30]=+S[1]*(S[0]*(20*(V[37]*V[22]+V[20]*V[2])));
C[29]=+S[1]*(4*(V[37]*V[22]+V[20]*V[2]))+S[0]*(20*(V[37]*V[22]+V[20]*V[2]));
C[28]=+S[1]*(S[0]*(16*(V[37]*V[22]+V[20]*V[2])));
C[27]=+S[0]*(16*(V[37]*V[22]+V[20]*V[2]));
S[3]=V[11]*V[11]*V[11]*V[11];
C[26]=+S[3]*(S[1]*(8*(V[37]*V[22]+V[20]*V[2])));
C[25]=+S[0]*(4*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[24]=+S[0]*(4*(V[37]*V[22]+V[20]*V[2]));
C[23]=+S[0]*(4*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[22]=+4*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]));
C[21]=+8*(V[37]*V[22]+V[20]*V[2]);
C[20]=+S[3]*(8*(V[37]*V[22]+V[20]*V[2]));
C[19]=+S[0]*(8*(V[37]*V[22]+V[20]*V[2]));
C[18]=+S[1]*(S[0]*(12*(V[37]*V[22]+V[20]*V[2])));
C[17]=+S[1]*(8*(V[37]*V[22]+V[20]*V[2]));
C[16]=+S[1]*(S[0]*(6*(V[37]*V[22]+V[20]*V[2])));
C[15]=+S[1]*(S[0]*(10*(V[37]*V[22]+V[20]*V[2])));
C[14]=+S[1]*(S[0]*(8*(V[37]*V[22]+V[20]*V[2])));
C[13]=+S[1]*(S[0]*(2*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2]))));
C[12]=+S[2]*(S[3]*(V[37]*V[22]+V[20]*V[2]));
C[11]=+S[1]*(S[0]*(2*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+
 V[20]*V[2]))));
C[10]=+S[2]*(S[0]*(V[37]*V[22]+V[20]*V[2]));
C[9]=+S[1]*(2*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[8]=+S[3]*(S[1]*(2*(V[37]*V[22]+V[20]*V[2])));
C[7]=+S[1]*(S[0]*(2*(V[37]*V[22]+V[20]*V[2])));
C[6]=+S[1]*(4*(V[37]*V[22]+V[20]*V[2]));
C[5]=+S[2]*(S[3]*(2*(V[37]*V[22]+V[20]*V[2])));
C[4]=+S[2]*(S[0]*(2*(V[37]*V[22]+V[20]*V[2])));
C[3]=+S[3]*(S[1]*(4*(V[37]*V[22]+V[20]*V[2])));
C[2]=+S[1]*(S[0]*(4*(V[37]*V[22]+V[20]*V[2])));
S[4]=V[17]*V[17];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[49]*V[49];
S[7]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[6]*V[48]*V[42]*V[36]*V[12]*S[7];
}
REAL F748_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      S                       N2     !  N2                           
    ==<==\                 /==<======!==<==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      s  |  A     t     W+ |  e2     !  e2 |  W+    t     S          
    ==>==@-1---@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        B      !  B        |     |             
               |     \========<======!==<========/   W+|-PA          
               |              P6     !  P6             3             
               |                     !                 |             
               |              u      !  u              |  s          
               \==============>======!==>==============@==>==        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[46];REAL S[2];REAL tmp[3];                                    
     
if(CalcConst) C748(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[6]*(S[1]*(C[6]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[1]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])+DP[11]*(S[1]-DP[5]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[1])))+C[2]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[11]*(S[1]-DP[5]+DP[7])+DP[14]*(DP[5]-
 S[1])+DP[10]*DP[6])+DP[0]*(C[17]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[1]-DP[5]))-C[44]*DP[10]-C[7]*DP[11]-C[9]*DP[14])+C[18]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+DP[10]*(
 C[40]*DP[7]-C[45])+DP[11]*(C[9]*DP[6]-C[4])-C[11]*DP[14])+DP[0]*(C[7]*(
 DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(
 DP[11]+DP[14]))+C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[10]*(DP[11]+DP[14])+C[4]*DP[10])+DP[6]*(C[2]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[7]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[4]*DP[10]-C[10]*DP[11])+DP[7]*(C[15]*
 (DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[2]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[41]*DP[10]-C[4]*
 DP[11])+C[8]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-
 DP[9])+DP[5]*(DP[10]+DP[14]))+C[12]*(DP[10]+DP[14]));
tmp[1]=+DP[12]*(S[1]*(DP[6]*(S[1]*(DP[3]*(C[35]+C[33]*DP[0]-C[21]*DP[7])+
 DP[4]*(C[19]+C[21]*DP[6])+DP[9]*(-C[19]-C[21]*DP[0]))+DP[0]*(C[17]*DP[8]-
 C[37]*DP[1]-C[34]*DP[3]-C[24]*DP[4]-C[22]*DP[9])+DP[3]*(C[19]*DP[6]-C[36]+
 C[29]*DP[7])+DP[4]*(C[22]*DP[6]-C[2]+C[19]*DP[7])+DP[1]*(C[17]*DP[7]-
 C[38])+DP[2]*(-C[14]-C[17]*DP[6])+C[14]*DP[8]-C[23]*DP[9])+DP[7]*(DP[3]*(
 C[19]*S[1]-C[32]-C[31]*DP[0]+C[27]*DP[7])+DP[4]*(C[19]*(S[1]+DP[7])+C[23])+
 DP[9]*(-C[20]-C[19]*DP[0])+C[14]*(-DP[1]-DP[2]))+DP[9]*(DP[0]*(C[25]-C[19]*
 S[1]+C[24]*DP[0])+C[3]-C[20]*S[1])+DP[8]*(C[26]+C[14]*DP[0]))+DP[6]*(DP[0]*
 (C[2]*(DP[2]+DP[3]+DP[8])+C[7]*(DP[4]+DP[9])+C[14]*DP[1])+DP[6]*(C[2]*(-
 DP[2]-DP[3])-C[14]*DP[1]-C[7]*DP[4])+DP[7]*(-C[30]*DP[1]-C[14]*DP[2]-C[15]*
 DP[3]-C[2]*DP[4])+C[3]*(DP[1]+DP[8])+C[8]*(DP[3]+DP[9]))+DP[7]*(DP[0]*(
 C[18]*DP[1]+C[16]*DP[3]+C[14]*DP[8]+C[2]*DP[9])+DP[7]*(C[14]*(-DP[2]-
 DP[3])-C[28]*DP[1]-C[2]*DP[4])+C[3]*(DP[3]-DP[2]+DP[9])+C[26]*(DP[1]+
 DP[8])-C[8]*DP[4])+DP[0]*(DP[0]*(-C[2]*DP[8]-C[7]*DP[9])-C[3]*DP[8]-C[8]*
 DP[9]));
tmp[2]=+DP[5]*(DP[7]*(C[2]*(S[1]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[11]*(S[1]-DP[5]+DP[7])+DP[10]*(S[1]-DP[5])-
 DP[14]*DP[0])+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5]))+
 C[3]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+
 DP[5]*(DP[10]+DP[14])-DP[14]*S[1])+DP[0]*(C[16]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[42]*DP[10]+C[4]*DP[14])+
 DP[7]*(C[14]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-
 DP[5]))-C[39]*DP[10]-C[4]*DP[11])+C[8]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+S[1]*(C[11]*DP[11]-C[43]*DP[10])+C[5]*(DP[10]+
 DP[14])-C[12]*DP[11])+DP[0]*(S[1]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+DP[14]*(C[13]+C[7]*DP[0]))+DP[0]*(C[7]*
 (DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[10]*DP[14])+
 C[8]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[12]*
 DP[14])+S[1]*(C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[1]))+C[5]*DP[14])+tmp[0]);
R=+S[1]*(DP[13]*(DP[6]*(S[1]*(DP[1]*(C[6]*DP[7]-C[18]-C[17]*DP[0])+DP[2]*(-
 C[2]-C[6]*DP[6])+DP[8]*(C[2]+C[6]*DP[0]))+DP[1]*(C[2]*(DP[0]-DP[6])+C[8]-
 C[15]*DP[7])+DP[2]*(C[7]*(DP[0]-DP[6])-C[2]*DP[7])+DP[8]*(C[8]+C[7]*
 DP[0]))+DP[7]*(DP[1]*(C[3]-C[2]*S[1]+C[16]*DP[0]-C[14]*DP[7])+DP[2]*(C[2]*
 (-S[1]-DP[7])-C[8])+DP[8]*(C[3]+C[2]*DP[0]))+DP[8]*(DP[0]*(C[2]*S[1]-C[8]-
 C[7]*DP[0])+C[3]*S[1]))+tmp[1])+tmp[2];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3]*Q0[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
