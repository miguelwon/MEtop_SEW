/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F63_out;
static void C63(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[9]*V[9];
S[1]=V[2]*V[2];
C[19]=+S[1]*(S[0]*(V[12]*(V[20]*(32*(V[37]*V[22]+V[20]*V[2])))));
S[2]=V[17]*V[17];
S[3]=V[1]*V[1];
C[18]=+S[3]*(S[0]*(S[2]*(V[36]*(V[47]*(8*(V[37]*V[22]+V[20]*V[2]))))));
C[17]=+S[1]*(S[0]*(V[26]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2])))));
C[16]=+V[36]*(V[2]*(S[0]*(V[2]*(V[26]*(8*(-V[37]*V[22]-V[20]*V[2]))))+4*
 V[47]*V[20]*S[2]*S[3])+4*V[47]*V[37]*V[22]*S[2]*S[3]);
C[15]=+S[1]*(V[12]*(V[20]*(32*(V[37]*V[22]+V[20]*V[2]))));
C[14]=+S[1]*(V[26]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))));
C[13]=+V[36]*(V[2]*(S[0]*(V[2]*(V[26]*(16*(-V[37]*V[22]-V[20]*V[2]))))+8*
 V[47]*V[20]*S[2]*S[3])+8*V[47]*V[37]*V[22]*S[2]*S[3]);
C[12]=+S[1]*(V[26]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))));
S[4]=V[9]*V[9]*V[9]*V[9];
C[11]=+S[4]*(S[3]*(S[2]*(V[36]*(V[47]*(V[37]*V[22]+V[20]*V[2])))));
C[10]=+S[4]*(S[1]*(V[12]*(V[20]*(8*(V[37]*V[22]+V[20]*V[2])))));
C[9]=+S[0]*(V[36]*(V[2]*(S[0]*(V[2]*(V[26]*(4*(-V[37]*V[22]-V[20]*V[2]))))+
 2*V[47]*V[20]*S[2]*S[3])+2*V[47]*V[37]*V[22]*S[2]*S[3]));
C[8]=+S[3]*(S[0]*(S[2]*(V[36]*(V[47]*(2*(V[37]*V[22]+V[20]*V[2]))))));
C[7]=+S[1]*(S[0]*(V[12]*(V[20]*(16*(V[37]*V[22]+V[20]*V[2])))));
C[6]=+S[1]*(S[0]*(V[26]*(V[36]*(8*(V[37]*V[22]+V[20]*V[2])))));
C[5]=+S[4]*(S[3]*(S[2]*(V[36]*(V[47]*(2*(V[37]*V[22]+V[20]*V[2]))))));
C[4]=+S[0]*(V[36]*(V[2]*(S[0]*(V[2]*(V[26]*(8*(-V[37]*V[22]-V[20]*V[2]))))+
 4*V[47]*V[20]*S[2]*S[3])+4*V[47]*V[37]*V[22]*S[2]*S[3]));
C[3]=+S[3]*(S[0]*(S[2]*(V[36]*(V[47]*(4*(V[37]*V[22]+V[20]*V[2]))))));
C[2]=+S[1]*(S[0]*(V[26]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2])))));
S[5]=V[17]*V[17]*V[17]*V[17];
S[6]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[5]*S[6];
S[7]=V[49]*V[49];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[7]*V[41]*V[12]*S[8];
}
REAL F63_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      u                       n2     !  n2                           
    ==>==\                 /==>======!==>==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      D  |  W+    t     W+ |  E2     !  E2 |  W+    t     u          
    ==<==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        b      !  b        |     |             
               |     \========>======!==>========/    A|-PA          
               |              P6     !  P6             3             
               |                     !                 |             
               |              D      !  D              |  D          
               \==============<======!==<==============@==<==        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[20];REAL S[2];REAL tmp[1];                                    
     
if(CalcConst) C63(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+V[50]*(DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[14]*(DP[7]*DP[3]-DP[6]*
 DP[4]+DP[9]*DP[0])-C[12]*DP[9]*DP[7])+C[15]*(DP[7]*DP[3]-DP[6]*DP[4]+DP[9]*
 DP[0]))+DP[7]*(C[16]*DP[3]-C[2]*DP[1]+C[17]*DP[8]-C[13]*DP[9])+DP[0]*(
 C[16]*DP[9]-C[2]*DP[8])+DP[6]*(C[2]*DP[2]-C[16]*DP[4]))+C[19]*(DP[6]*DP[2]-
 DP[7]*DP[1]-DP[8]*DP[0])+C[7]*(DP[6]*DP[4]-DP[7]*DP[3]-DP[9]*DP[0]))+DP[5]*
 (C[6]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-DP[4])+DP[7]*(DP[1]+DP[3]))+DP[7]*
 (C[2]*(-DP[8]-DP[9])))+DP[7]*(C[3]*(DP[9]-DP[1])+C[18]*DP[8]-C[8]*DP[3])+
 DP[0]*(-C[3]*DP[8]-C[8]*DP[9])+DP[6]*(C[3]*DP[2]+C[8]*DP[4]))+DP[5]*(C[6]*(
 DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-DP[4])+DP[7]*(DP[1]+DP[3]))+S[1]*
 (DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*DP[0])+DP[5]*(DP[11]*DP[6]-DP[10]*DP[7]-
 DP[14]*DP[0]))+DP[7]*(C[2]*(DP[13]*(-DP[8]-DP[9])+DP[14]*(DP[5]-S[1]))+
 DP[10]*(C[9]+C[7]*V[50])-C[4]*DP[14])+V[50]*(C[7]*(DP[14]*DP[0]-DP[11]*
 DP[6]))+C[9]*(DP[14]*DP[0]-DP[11]*DP[6]))+DP[13]*(V[50]*(V[50]*(C[6]*(
 DP[6]*DP[2]-DP[7]*DP[1]-DP[8]*DP[0])+C[2]*DP[8]*DP[7])+C[7]*(DP[6]*DP[2]-
 DP[7]*DP[1]-DP[8]*DP[0]))+C[8]*(DP[6]*DP[2]-DP[7]*DP[1]-DP[8]*DP[0])+C[3]*
 DP[8]*DP[7]));
R=+DP[6]*(V[50]*(DP[5]*(C[7]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[5]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*
 DP[0]))+C[10]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*DP[0]))+tmp[0])+DP[5]*(
 C[8]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-DP[4])+DP[7]*(DP[1]+
 DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-DP[4])+DP[7]*(DP[1]+
 DP[3]))+DP[5]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*DP[0]))+DP[7]*(C[3]*(DP[8]*
 (-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*DP[14]-C[11]*
 DP[10])+C[11]*(DP[11]*DP[6]-DP[14]*DP[0])));
R*=(N/D)*Q1[1]*Q2[2]*Q2[3]*Q1[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
