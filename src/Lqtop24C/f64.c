/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F64_out;
static void C64(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[2]*V[2];
S[1]=V[9]*V[9]*V[9]*V[9];
C[33]=+S[1]*(S[0]*(V[12]*(V[20]*(S[0]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(
 V[27]-V[29]-V[28]+V[26])))));
S[2]=V[9]*V[9];
C[32]=+S[0]*(S[2]*(V[12]*(V[20]*(S[0]*(64*(V[29]+V[28]-V[27]-V[26]))+96*(
 V[27]-V[29]-V[28]+V[26])))));
C[31]=+S[0]*(V[12]*(V[20]*(S[0]*(64*(V[29]+V[28]-V[27]-V[26]))+96*(V[27]-
 V[29]-V[28]+V[26]))));
S[3]=V[17]*V[17];
S[4]=V[12]*V[12];
S[5]=V[1]*V[1];
C[30]=+S[2]*(V[36]*(S[5]*(S[3]*(V[47]*(S[0]*(8*(V[29]+V[28]-V[27]-V[26]))+
 12*(V[27]-V[29]-V[28]+V[26]))))+S[0]*(S[4]*(V[20]*(V[37]*(V[2]*(V[2]*(64*(
 V[22]*V[2]-V[37]*V[20]))-96*V[22])+96*V[37]*V[20]))))));
S[6]=V[37]*V[37];
S[7]=V[36]*V[36];
C[29]=+S[0]*(S[2]*(V[12]*(V[20]*(S[0]*(32*(V[26]*(S[6]*S[7]+1)+V[27]-V[29]-
 V[28]))+48*(V[26]*(-S[6]*S[7]-1)+V[29]+V[28]-V[27]))+S[7]*(V[2]*(V[22]*(
 V[26]*(V[37]*(48-32*S[0]))))))));
C[28]=+S[5]*(S[2]*(S[3]*(S[7]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(16*(V[37]*
 V[20]-V[22]*V[2]))+24*V[22])-24*V[37]*V[20])))))));
C[27]=+S[5]*(S[2]*(S[3]*(V[36]*(V[47]*(S[0]*(8*(V[29]+V[28]-V[27]-V[26]))+
 12*(V[27]-V[29]-V[28]+V[26]))))));
C[26]=+S[0]*(S[2]*(S[7]*(V[12]*(V[26]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-
 V[22]*V[2]))+96*V[22])-96*V[37]*V[20]))))));
C[25]=+S[0]*(S[2]*(V[26]*(V[36]*(S[0]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(
 V[27]-V[29]-V[28]+V[26])))));
C[24]=+V[12]*(V[2]*(V[2]*(S[2]*(V[20]*(S[0]*(16*(V[26]*(-S[6]*S[7]-1)+V[29]+
 V[28]-V[27]))+24*(V[26]*(S[6]*S[7]+1)+V[27]-V[29]-V[28]))+S[7]*(V[2]*(
 V[22]*(V[26]*(V[37]*(16*S[0]-24))))))+S[5]*(S[3]*(S[7]*(V[37]*(V[47]*(8*(
 V[37]*V[20]-V[22]*V[2])))))))+12*V[47]*V[37]*S[7]*V[22]*S[3]*S[5])-12*
 V[47]*S[6]*S[7]*V[20]*S[3]*S[5]);
C[23]=+V[36]*(S[0]*(V[26]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26]))+24*(
 V[29]+V[28]-V[27]-V[26]))-8*V[47]*S[3]*S[5])+S[4]*(V[20]*(V[37]*(V[2]*(
 V[2]*(64*(V[22]*V[2]-V[37]*V[20]))-96*V[22])+96*V[37]*V[20])))+S[5]*(S[3]*(
 V[47]*(8*(V[29]+V[28]-V[27])))))+S[5]*(S[3]*(V[47]*(12*(V[27]-V[29]-V[28]+
 V[26])))));
C[22]=+S[0]*(V[12]*(V[20]*(S[0]*(32*(V[26]*(S[6]*S[7]+1)+V[27]-V[29]-
 V[28]))+48*(V[26]*(-S[6]*S[7]-1)+V[29]+V[28]-V[27]))+S[7]*(V[2]*(V[22]*(
 V[26]*(V[37]*(48-32*S[0])))))));
C[21]=+S[7]*(V[12]*(V[37]*(V[2]*(V[2]*(S[2]*(V[26]*(V[2]*(V[2]*(32*(V[22]*
 V[2]-V[37]*V[20]))-48*V[22])+48*V[37]*V[20]))+S[5]*(S[3]*(V[47]*(16*(V[37]*
 V[20]-V[22]*V[2])))))+24*V[47]*V[22]*S[3]*S[5])-24*V[47]*V[37]*V[20]*S[3]*
 S[5])));
C[20]=+V[36]*(S[0]*(V[26]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26]))+24*(
 V[29]+V[28]-V[27]-V[26]))-8*V[47]*S[3]*S[5])+S[5]*(S[3]*(V[47]*(8*(V[29]+
 V[28]-V[27])))))+S[5]*(S[3]*(V[47]*(12*(V[27]-V[29]-V[28]+V[26])))));
C[19]=+S[0]*(S[7]*(V[12]*(V[26]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-V[22]*
 V[2]))+96*V[22])-96*V[37]*V[20])))));
C[18]=+S[0]*(V[26]*(V[36]*(S[0]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-
 V[29]-V[28]+V[26]))));
C[17]=+S[0]*(S[2]*(V[12]*(V[20]*(S[0]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(
 V[27]-V[29]-V[28]+V[26])))));
C[16]=+S[1]*(S[5]*(S[3]*(S[7]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(2*(V[37]*
 V[20]-V[22]*V[2]))+3*V[22])-3*V[37]*V[20])))))));
C[15]=+S[1]*(V[36]*(S[5]*(S[3]*(V[47]*(S[0]*(2*(V[29]+V[28]-V[27]-V[26]))+3*
 (V[27]-V[29]-V[28]+V[26]))))+S[0]*(S[4]*(V[20]*(V[37]*(V[2]*(V[2]*(16*(
 V[22]*V[2]-V[37]*V[20]))-24*V[22])+24*V[37]*V[20]))))));
C[14]=+S[2]*(V[12]*(V[2]*(V[2]*(S[2]*(V[20]*(S[0]*(8*(V[26]*(-S[6]*S[7]-1)+
 V[29]+V[28]-V[27]))+12*(V[26]*(S[6]*S[7]+1)+V[27]-V[29]-V[28]))+S[7]*(V[2]*
 (V[22]*(V[26]*(V[37]*(8*S[0]-12))))))+S[5]*(S[3]*(S[7]*(V[37]*(V[47]*(4*(
 V[37]*V[20]-V[22]*V[2])))))))+6*V[47]*V[37]*S[7]*V[22]*S[3]*S[5])-6*V[47]*
 S[6]*S[7]*V[20]*S[3]*S[5]));
C[13]=+S[2]*(V[36]*(S[0]*(V[26]*(S[2]*(S[0]*(8*(V[27]-V[29]-V[28]+V[26]))+
 12*(V[29]+V[28]-V[27]-V[26]))-4*V[47]*S[3]*S[5])+S[4]*(V[20]*(V[37]*(V[2]*(
 V[2]*(32*(V[22]*V[2]-V[37]*V[20]))-48*V[22])+48*V[37]*V[20])))+S[5]*(S[3]*(
 V[47]*(4*(V[29]+V[28]-V[27])))))+S[5]*(S[3]*(V[47]*(6*(V[27]-V[29]-V[28]+
 V[26]))))));
C[12]=+S[5]*(S[2]*(S[3]*(S[7]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(4*(V[37]*
 V[20]-V[22]*V[2]))+6*V[22])-6*V[37]*V[20])))))));
C[11]=+S[2]*(V[36]*(S[5]*(S[3]*(V[47]*(S[0]*(4*(V[29]+V[28]-V[27]-V[26]))+6*
 (V[27]-V[29]-V[28]+V[26]))))+S[0]*(S[4]*(V[20]*(V[37]*(V[2]*(V[2]*(32*(
 V[22]*V[2]-V[37]*V[20]))-48*V[22])+48*V[37]*V[20]))))));
C[10]=+S[0]*(S[2]*(V[12]*(V[20]*(S[0]*(16*(V[26]*(S[6]*S[7]+1)+V[27]-V[29]-
 V[28]))+24*(V[26]*(-S[6]*S[7]-1)+V[29]+V[28]-V[27]))+S[7]*(V[2]*(V[22]*(
 V[26]*(V[37]*(24-16*S[0]))))))));
C[9]=+S[1]*(S[5]*(S[3]*(S[7]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(4*(V[37]*
 V[20]-V[22]*V[2]))+6*V[22])-6*V[37]*V[20])))))));
C[8]=+S[1]*(S[5]*(S[3]*(V[36]*(V[47]*(S[0]*(2*(V[29]+V[28]-V[27]-V[26]))+3*(
 V[27]-V[29]-V[28]+V[26]))))));
C[7]=+S[2]*(S[7]*(V[12]*(V[37]*(V[2]*(V[2]*(S[2]*(V[26]*(V[2]*(V[2]*(16*(
 V[22]*V[2]-V[37]*V[20]))-24*V[22])+24*V[37]*V[20]))+S[5]*(S[3]*(V[47]*(8*(
 V[37]*V[20]-V[22]*V[2])))))+12*V[47]*V[22]*S[3]*S[5])-12*V[47]*V[37]*V[20]*
 S[3]*S[5]))));
C[6]=+S[2]*(V[36]*(S[0]*(V[26]*(S[2]*(S[0]*(8*(V[27]-V[29]-V[28]+V[26]))+12*
 (V[29]+V[28]-V[27]-V[26]))-4*V[47]*S[3]*S[5])+S[5]*(S[3]*(V[47]*(4*(V[29]+
 V[28]-V[27])))))+S[5]*(S[3]*(V[47]*(6*(V[27]-V[29]-V[28]+V[26]))))));
C[5]=+S[5]*(S[2]*(S[3]*(S[7]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(8*(V[37]*
 V[20]-V[22]*V[2]))+12*V[22])-12*V[37]*V[20])))))));
C[4]=+S[5]*(S[2]*(S[3]*(V[36]*(V[47]*(S[0]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(
 V[27]-V[29]-V[28]+V[26]))))));
C[3]=+S[0]*(S[2]*(S[7]*(V[12]*(V[26]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+48*V[22])-48*V[37]*V[20]))))));
C[2]=+S[0]*(S[2]*(V[26]*(V[36]*(S[0]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(
 V[27]-V[29]-V[28]+V[26])))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[8]*S[9];
S[10]=V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[10]*V[41]*V[36]*S[11];
}
REAL F64_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
               |     \========>======!==>========/    Z|-PA          
               |              P6     !  P6             3             
               |                     !                 |             
               |              D      !  D              |  D          
               \==============<======!==<==============@==<==        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[34];REAL S[1];REAL tmp[2];                                    
     
if(CalcConst) C64(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(V[50]*(DP[12]*(V[50]*(V[50]*(C[18]*(DP[0]*(DP[9]-DP[3])+
 DP[7]*(DP[3]-DP[9])-DP[6]*DP[4]))+C[22]*(DP[6]*DP[4]-DP[7]*DP[3]-DP[9]*
 DP[0])+C[19]*DP[9]*DP[7]-C[31]*DP[3]*DP[0])+C[25]*(DP[0]*(DP[1]-DP[8])+
 DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+C[23]*(DP[7]*DP[3]-DP[6]*DP[4]+DP[9]*
 DP[0])+C[20]*(-DP[3]*DP[0]-DP[9]*DP[7]))+C[2]*(DP[5]*(DP[0]*(DP[14]-
 DP[10])+DP[7]*(DP[10]-DP[14])-DP[11]*DP[6])+DP[13]*(DP[0]*(DP[1]-DP[8])+
 DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])))+DP[12]*(DP[0]*(C[32]*DP[1]+C[17]*DP[3]+
 C[29]*DP[8]-C[24]*DP[9])+DP[7]*(C[29]*DP[1]-C[24]*DP[3]-C[26]*DP[8]+C[21]*
 DP[9])+DP[6]*(C[24]*DP[4]-C[29]*DP[2]))+C[10]*(DP[5]*(DP[11]*DP[6]-DP[10]*
 DP[7]-DP[14]*DP[0])+DP[13]*(DP[7]*DP[1]-DP[6]*DP[2]+DP[8]*DP[0]))+DP[0]*(
 C[17]*(DP[13]*DP[1]-DP[10]*DP[5]))+DP[7]*(C[3]*(DP[14]*DP[5]-DP[13]*
 DP[8])));
tmp[1]=+V[50]*(V[50]*(DP[5]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(DP[12]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(DP[14]-
 DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5]))+C[13]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*DP[0])+C[6]*(-DP[10]*DP[0]-
 DP[14]*DP[7]))+DP[12]*(DP[0]*(C[27]*DP[1]+C[4]*DP[3]-C[30]*DP[8]-C[11]*
 DP[9])+DP[7]*(C[27]*DP[8]-C[30]*DP[1]-C[11]*DP[3]+C[4]*DP[9])+DP[6]*(C[30]*
 DP[2]+C[11]*DP[4]))+DP[13]*(C[11]*(DP[6]*DP[2]-DP[7]*DP[1]-DP[8]*DP[0])+
 C[4]*(DP[1]*DP[0]+DP[8]*DP[7]))+tmp[0])+DP[5]*(C[10]*(DP[12]*(DP[0]*(-
 DP[8]-DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(-
 DP[8]-DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-
 DP[11]*DP[6]+DP[14]*DP[0]))+DP[0]*(C[17]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[33]*DP[10]-C[14]*DP[14])+DP[7]*(C[3]*(DP[8]*
 (DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[7]*DP[14]-C[14]*
 DP[10])+C[14]*DP[11]*DP[6])+DP[12]*(DP[7]*(C[5]*(DP[1]-DP[9])+C[12]*DP[3]-
 C[28]*DP[8])+DP[0]*(C[5]*DP[8]+C[12]*DP[9])+DP[6]*(-C[5]*DP[2]-C[12]*
 DP[4]))+DP[13]*(C[12]*(DP[7]*DP[1]-DP[6]*DP[2]+DP[8]*DP[0])-C[5]*DP[8]*
 DP[7]));
R=+DP[6]*(V[50]*(DP[5]*(C[11]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[5]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*
 DP[0]))+C[4]*(DP[0]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+DP[7]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+
 C[15]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*DP[0])+C[8]*(DP[10]*DP[0]+DP[14]*
 DP[7]))+tmp[1])+DP[5]*(C[12]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*
 DP[0]))+DP[7]*(C[5]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[16]*DP[10]-C[9]*DP[14])+C[16]*(DP[14]*DP[0]-DP[11]*DP[6])));
R*=(N/D)*Q1[1]*Q2[2]*Q2[3]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}
