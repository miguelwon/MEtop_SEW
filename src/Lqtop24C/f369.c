/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F369_out;
static void C369(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[36]*V[36];
S[1]=V[17]*V[17];
S[2]=V[1]*V[1];
S[3]=V[9]*V[9]*V[9]*V[9];
C[33]=+S[3]*(S[2]*(S[1]*(S[0]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(4*(V[37]*
 V[20]-V[22]*V[2]))+6*V[22])-6*V[37]*V[20])))))));
S[4]=V[9]*V[9];
C[32]=+S[4]*(S[0]*(V[12]*(V[37]*(V[2]*(V[2]*(S[4]*(V[26]*(V[2]*(V[2]*(16*(
 V[22]*V[2]-V[37]*V[20]))-24*V[22])+24*V[37]*V[20]))+S[2]*(S[1]*(V[47]*(8*(
 V[37]*V[20]-V[22]*V[2])))))+12*V[47]*V[22]*S[1]*S[2])-12*V[47]*V[37]*V[20]*
 S[1]*S[2]))));
C[31]=+S[2]*(S[4]*(S[1]*(S[0]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(16*(V[37]*
 V[20]-V[22]*V[2]))+24*V[22])-24*V[37]*V[20])))))));
S[5]=V[2]*V[2];
C[30]=+S[5]*(S[4]*(S[0]*(V[12]*(V[26]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-
 V[22]*V[2]))+96*V[22])-96*V[37]*V[20]))))));
C[29]=+S[0]*(V[12]*(V[37]*(V[2]*(V[2]*(S[4]*(V[26]*(V[2]*(V[2]*(32*(V[22]*
 V[2]-V[37]*V[20]))-48*V[22])+48*V[37]*V[20]))+S[2]*(S[1]*(V[47]*(16*(V[37]*
 V[20]-V[22]*V[2])))))+24*V[47]*V[22]*S[1]*S[2])-24*V[47]*V[37]*V[20]*S[1]*
 S[2])));
C[28]=+S[5]*(S[0]*(V[12]*(V[26]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-V[22]*
 V[2]))+96*V[22])-96*V[37]*V[20])))));
S[6]=V[12]*V[12];
C[27]=+S[4]*(V[36]*(S[2]*(S[1]*(V[47]*(S[5]*(8*(V[29]+V[28]-V[27]-V[26]))+
 12*(V[27]-V[29]-V[28]+V[26]))))+S[5]*(S[6]*(V[20]*(V[37]*(V[2]*(V[2]*(64*(
 V[22]*V[2]-V[37]*V[20]))-96*V[22])+96*V[37]*V[20]))))));
S[7]=V[37]*V[37];
C[26]=+S[5]*(S[4]*(V[12]*(V[20]*(S[5]*(32*(V[26]*(S[7]*S[0]+1)+V[27]-V[29]-
 V[28]))+48*(V[26]*(-S[7]*S[0]-1)+V[29]+V[28]-V[27]))+S[0]*(V[2]*(V[22]*(
 V[26]*(V[37]*(48-32*S[5]))))))));
C[25]=+S[2]*(S[4]*(S[1]*(V[36]*(V[47]*(S[5]*(8*(V[29]+V[28]-V[27]-V[26]))+
 12*(V[27]-V[29]-V[28]+V[26]))))));
C[24]=+S[5]*(S[4]*(V[12]*(V[20]*(S[5]*(64*(V[29]+V[28]-V[27]-V[26]))+96*(
 V[27]-V[29]-V[28]+V[26])))));
C[23]=+S[5]*(S[4]*(V[26]*(V[36]*(S[5]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(
 V[27]-V[29]-V[28]+V[26])))));
C[22]=+V[12]*(V[2]*(V[2]*(S[4]*(V[20]*(S[5]*(16*(V[26]*(-S[7]*S[0]-1)+V[29]+
 V[28]-V[27]))+24*(V[26]*(S[7]*S[0]+1)+V[27]-V[29]-V[28]))+S[0]*(V[2]*(
 V[22]*(V[26]*(V[37]*(16*S[5]-24))))))+S[2]*(S[1]*(S[0]*(V[37]*(V[47]*(8*(
 V[37]*V[20]-V[22]*V[2])))))))+12*V[47]*V[37]*S[0]*V[22]*S[1]*S[2])-12*
 V[47]*S[7]*S[0]*V[20]*S[1]*S[2]);
C[21]=+V[36]*(S[5]*(V[26]*(S[4]*(S[5]*(16*(V[27]-V[29]-V[28]+V[26]))+24*(
 V[29]+V[28]-V[27]-V[26]))-8*V[47]*S[1]*S[2])+S[6]*(V[20]*(V[37]*(V[2]*(
 V[2]*(64*(V[22]*V[2]-V[37]*V[20]))-96*V[22])+96*V[37]*V[20])))+S[2]*(S[1]*(
 V[47]*(8*(V[29]+V[28]-V[27])))))+S[2]*(S[1]*(V[47]*(12*(V[27]-V[29]-V[28]+
 V[26])))));
C[20]=+S[5]*(V[12]*(V[20]*(S[5]*(32*(V[26]*(S[7]*S[0]+1)+V[27]-V[29]-
 V[28]))+48*(V[26]*(-S[7]*S[0]-1)+V[29]+V[28]-V[27]))+S[0]*(V[2]*(V[22]*(
 V[26]*(V[37]*(48-32*S[5])))))));
C[19]=+V[36]*(S[5]*(V[26]*(S[4]*(S[5]*(16*(V[27]-V[29]-V[28]+V[26]))+24*(
 V[29]+V[28]-V[27]-V[26]))-8*V[47]*S[1]*S[2])+S[2]*(S[1]*(V[47]*(8*(V[29]+
 V[28]-V[27])))))+S[2]*(S[1]*(V[47]*(12*(V[27]-V[29]-V[28]+V[26])))));
C[18]=+S[5]*(V[12]*(V[20]*(S[5]*(64*(V[29]+V[28]-V[27]-V[26]))+96*(V[27]-
 V[29]-V[28]+V[26]))));
C[17]=+S[5]*(V[26]*(V[36]*(S[5]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-
 V[29]-V[28]+V[26]))));
C[16]=+S[2]*(S[4]*(S[1]*(S[0]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(8*(V[37]*
 V[20]-V[22]*V[2]))+12*V[22])-12*V[37]*V[20])))))));
C[15]=+S[5]*(S[4]*(S[0]*(V[12]*(V[26]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+48*V[22])-48*V[37]*V[20]))))));
C[14]=+S[3]*(S[2]*(S[1]*(S[0]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(2*(V[37]*
 V[20]-V[22]*V[2]))+3*V[22])-3*V[37]*V[20])))))));
C[13]=+S[3]*(V[36]*(S[2]*(S[1]*(V[47]*(S[5]*(2*(V[29]+V[28]-V[27]-V[26]))+3*
 (V[27]-V[29]-V[28]+V[26]))))+S[5]*(S[6]*(V[20]*(V[37]*(V[2]*(V[2]*(16*(
 V[22]*V[2]-V[37]*V[20]))-24*V[22])+24*V[37]*V[20]))))));
C[12]=+S[4]*(V[12]*(V[2]*(V[2]*(S[4]*(V[20]*(S[5]*(8*(V[26]*(-S[7]*S[0]-1)+
 V[29]+V[28]-V[27]))+12*(V[26]*(S[7]*S[0]+1)+V[27]-V[29]-V[28]))+S[0]*(V[2]*
 (V[22]*(V[26]*(V[37]*(8*S[5]-12))))))+S[2]*(S[1]*(S[0]*(V[37]*(V[47]*(4*(
 V[37]*V[20]-V[22]*V[2])))))))+6*V[47]*V[37]*S[0]*V[22]*S[1]*S[2])-6*V[47]*
 S[7]*S[0]*V[20]*S[1]*S[2]));
C[11]=+S[4]*(V[36]*(S[5]*(V[26]*(S[4]*(S[5]*(8*(V[27]-V[29]-V[28]+V[26]))+
 12*(V[29]+V[28]-V[27]-V[26]))-4*V[47]*S[1]*S[2])+S[6]*(V[20]*(V[37]*(V[2]*(
 V[2]*(32*(V[22]*V[2]-V[37]*V[20]))-48*V[22])+48*V[37]*V[20])))+S[2]*(S[1]*(
 V[47]*(4*(V[29]+V[28]-V[27])))))+S[2]*(S[1]*(V[47]*(6*(V[27]-V[29]-V[28]+
 V[26]))))));
C[10]=+S[2]*(S[4]*(S[1]*(S[0]*(V[12]*(V[37]*(V[47]*(V[2]*(V[2]*(4*(V[37]*
 V[20]-V[22]*V[2]))+6*V[22])-6*V[37]*V[20])))))));
C[9]=+S[4]*(V[36]*(S[2]*(S[1]*(V[47]*(S[5]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(
 V[27]-V[29]-V[28]+V[26]))))+S[5]*(S[6]*(V[20]*(V[37]*(V[2]*(V[2]*(32*(
 V[22]*V[2]-V[37]*V[20]))-48*V[22])+48*V[37]*V[20]))))));
C[8]=+S[5]*(S[4]*(V[12]*(V[20]*(S[5]*(16*(V[26]*(S[7]*S[0]+1)+V[27]-V[29]-
 V[28]))+24*(V[26]*(-S[7]*S[0]-1)+V[29]+V[28]-V[27]))+S[0]*(V[2]*(V[22]*(
 V[26]*(V[37]*(24-16*S[5]))))))));
C[7]=+S[3]*(S[2]*(S[1]*(V[36]*(V[47]*(S[5]*(2*(V[29]+V[28]-V[27]-V[26]))+3*(
 V[27]-V[29]-V[28]+V[26]))))));
C[6]=+S[3]*(S[5]*(V[12]*(V[20]*(S[5]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(
 V[27]-V[29]-V[28]+V[26])))));
C[5]=+S[4]*(V[36]*(S[5]*(V[26]*(S[4]*(S[5]*(8*(V[27]-V[29]-V[28]+V[26]))+12*
 (V[29]+V[28]-V[27]-V[26]))-4*V[47]*S[1]*S[2])+S[2]*(S[1]*(V[47]*(4*(V[29]+
 V[28]-V[27])))))+S[2]*(S[1]*(V[47]*(6*(V[27]-V[29]-V[28]+V[26]))))));
C[4]=+S[2]*(S[4]*(S[1]*(V[36]*(V[47]*(S[5]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(
 V[27]-V[29]-V[28]+V[26]))))));
C[3]=+S[5]*(S[4]*(V[12]*(V[20]*(S[5]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(
 V[27]-V[29]-V[28]+V[26])))));
C[2]=+S[5]*(S[4]*(V[26]*(V[36]*(S[5]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(
 V[27]-V[29]-V[28]+V[26])))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[7]*S[8]*S[9];
S[10]=V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[10]*V[41]*V[36]*S[11];
}
REAL F369_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      d                       n2     !  n2                           
    ==>==\                 /==>======!==>==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      D  |  Z     t     W+ |  E2     !  E2 |  W+    t     d          
    ==<==@-1---@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        b      !  b        |     |             
               |     \========>======!==>========/   W+|-PA          
               |              P6     !  P6             3             
               |                     !                 |             
               |              U      !  U              |  D          
               \==============<======!==<==============@==<==        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[34];REAL S[1];REAL tmp[2];                                    
     
if(CalcConst) C369(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(V[50]*(DP[12]*(V[50]*(V[50]*(C[17]*(DP[0]*(DP[9]-DP[3])+
 DP[7]*(DP[3]-DP[9])-DP[6]*DP[4]))+C[20]*(DP[6]*DP[4]-DP[7]*DP[3]-DP[9]*
 DP[0])+C[28]*DP[3]*DP[0]-C[18]*DP[9]*DP[7])+C[23]*(DP[0]*(DP[1]-DP[8])+
 DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])+C[21]*(DP[7]*DP[3]-DP[6]*DP[4]+DP[9]*
 DP[0])+C[19]*(-DP[3]*DP[0]-DP[9]*DP[7]))+C[2]*(DP[5]*(DP[0]*(DP[14]-
 DP[10])+DP[7]*(DP[10]-DP[14])-DP[11]*DP[6])+DP[13]*(DP[0]*(DP[1]-DP[8])+
 DP[7]*(DP[8]-DP[1])+DP[6]*DP[2])))+DP[12]*(DP[0]*(C[29]*DP[3]-C[30]*DP[1]+
 C[26]*DP[8]-C[22]*DP[9])+DP[7]*(C[26]*DP[1]-C[22]*DP[3]+C[24]*DP[8]+C[3]*
 DP[9])+DP[6]*(C[22]*DP[4]-C[26]*DP[2]))+C[8]*(DP[5]*(DP[11]*DP[6]-DP[10]*
 DP[7]-DP[14]*DP[0])+DP[13]*(DP[7]*DP[1]-DP[6]*DP[2]+DP[8]*DP[0]))+DP[0]*(
 C[15]*(DP[10]*DP[5]-DP[13]*DP[1]))+DP[7]*(C[3]*(DP[13]*DP[8]-DP[14]*
 DP[5])));
tmp[1]=+V[50]*(V[50]*(DP[5]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(DP[12]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(DP[14]-
 DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5]))+C[11]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*DP[0])+C[5]*(-DP[10]*DP[0]-
 DP[14]*DP[7]))+DP[12]*(DP[0]*(C[25]*DP[1]+C[4]*DP[3]-C[27]*DP[8]-C[9]*
 DP[9])+DP[7]*(C[25]*DP[8]-C[27]*DP[1]-C[9]*DP[3]+C[4]*DP[9])+DP[6]*(C[27]*
 DP[2]+C[9]*DP[4]))+DP[13]*(C[9]*(DP[6]*DP[2]-DP[7]*DP[1]-DP[8]*DP[0])+C[4]*
 (DP[1]*DP[0]+DP[8]*DP[7]))+tmp[0])+DP[5]*(C[8]*(DP[12]*(DP[0]*(-DP[8]-
 DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(-DP[8]-
 DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-
 DP[11]*DP[6]+DP[14]*DP[0]))+DP[0]*(C[15]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[32]*DP[10]-C[12]*DP[14])+DP[7]*(C[3]*(DP[8]*
 (-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[6]*DP[14]-C[12]*
 DP[10])+C[12]*DP[11]*DP[6])+DP[12]*(DP[0]*(C[16]*(DP[8]-DP[3])+C[10]*DP[9]-
 C[31]*DP[1])+DP[6]*(-C[16]*DP[2]-C[10]*DP[4])+DP[7]*(C[16]*DP[1]+C[10]*
 DP[3]))+DP[13]*(C[10]*(DP[7]*DP[1]-DP[6]*DP[2]+DP[8]*DP[0])-C[16]*DP[1]*
 DP[0]));
R=+DP[6]*(V[50]*(DP[5]*(C[9]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[5]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*
 DP[0]))+C[4]*(DP[0]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+DP[7]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+
 C[13]*(DP[11]*DP[6]-DP[10]*DP[7]-DP[14]*DP[0])+C[7]*(DP[10]*DP[0]+DP[14]*
 DP[7]))+tmp[1])+DP[5]*(C[10]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*
 DP[0]))+DP[0]*(C[16]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])+C[14]*DP[14]-C[33]*DP[10])+C[14]*(DP[10]*DP[7]-DP[11]*DP[6])));
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}