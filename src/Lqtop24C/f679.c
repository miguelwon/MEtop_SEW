/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F679_out;
static void C679(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
C[52]=+S[1]*(V[1]*(4*(S[1]*(V[29]-V[28]-V[27]+V[26])+S[0]*(V[29]-V[28]-
 V[27]+V[26]))));
C[51]=+V[1]*(8*(S[1]*(V[29]-V[28]-V[27]+V[26])+S[0]*(V[29]-V[28]-V[27]+
 V[26])));
S[2]=V[11]*V[11]*V[11]*V[11]*V[11]*V[11];
C[50]=+S[2]*(S[1]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26]))));
S[3]=V[17]*V[17];
S[4]=V[11]*V[11]*V[11]*V[11];
C[49]=+12*V[36]*V[30]*S[3]*V[12]*S[4]*S[1]*V[2];
C[48]=+S[4]*(S[1]*(V[1]*(24*(V[29]-V[28]-V[27]+V[26]))));
C[47]=+24*V[36]*V[30]*S[3]*V[12]*S[0]*S[1]*V[2];
C[46]=+S[4]*(S[1]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26]))));
C[45]=+24*V[36]*V[30]*S[3]*V[12]*S[1]*V[2];
C[44]=+S[1]*(S[0]*(V[1]*(16*(V[29]-V[28]-V[27]+V[26]))));
C[43]=+S[1]*(V[1]*(16*(V[29]-V[28]-V[27]+V[26])));
C[42]=+S[2]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[41]=+12*V[36]*V[30]*S[3]*V[12]*S[4]*V[2];
C[40]=+S[4]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[39]=+S[0]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[38]=+S[0]*(V[1]*(S[1]*(8*(V[28]-V[29]+V[27]-V[26]))+S[0]*(24*(V[29]-V[28]-
 V[27]+V[26]))));
C[37]=+S[3]*(V[2]*(V[12]*(V[30]*(V[36]*(24*S[0]-12*S[1])))));
C[36]=+V[1]*(S[1]*(8*(V[28]-V[29]+V[27]-V[26]))+S[0]*(16*(V[29]-V[28]-V[27]+
 V[26])));
C[35]=+S[0]*(V[1]*(8*(S[1]*(V[29]-V[28]-V[27]+V[26])+S[0]*(V[29]-V[28]-
 V[27]+V[26]))));
C[34]=+24*V[36]*V[30]*S[3]*V[12]*V[2];
C[33]=+V[1]*(8*(S[1]*(V[28]-V[29]+V[27]-V[26])+S[0]*(V[29]-V[28]-V[27]+
 V[26])));
C[32]=+12*V[36]*V[30]*S[3]*V[12]*V[2];
C[31]=+S[0]*(V[1]*(16*(V[29]-V[28]-V[27]+V[26])));
C[30]=+V[1]*(16*(V[29]-V[28]-V[27]+V[26]));
C[29]=+V[1]*(8*(V[29]-V[28]-V[27]+V[26]));
S[5]=V[9]*V[9]*V[9]*V[9];
C[28]=+S[2]*(S[5]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26]))));
C[27]=+3*V[36]*V[30]*S[3]*V[12]*S[4]*S[5]*V[2];
C[26]=+S[2]*(S[1]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[25]=+6*V[36]*V[30]*S[3]*V[12]*S[4]*S[1]*V[2];
C[24]=+S[5]*(S[4]*(V[1]*(6*(V[29]-V[28]-V[27]+V[26]))));
C[23]=+6*V[36]*V[30]*S[3]*V[12]*S[0]*S[5]*V[2];
C[22]=+S[1]*(S[0]*(V[1]*(S[1]*(4*(V[28]-V[29]+V[27]-V[26]))+S[0]*(12*(V[29]-
 V[28]-V[27]+V[26])))));
C[21]=+S[1]*(S[3]*(V[2]*(V[12]*(V[30]*(V[36]*(12*S[0]-6*S[1]))))));
C[20]=+S[4]*(S[1]*(V[1]*(12*(V[29]-V[28]-V[27]+V[26]))));
C[19]=+12*V[36]*V[30]*S[3]*V[12]*S[0]*S[1]*V[2];
C[18]=+S[1]*(V[1]*(S[1]*(4*(V[28]-V[29]+V[27]-V[26]))+S[0]*(8*(V[29]-V[28]-
 V[27]+V[26]))));
C[17]=+S[5]*(S[4]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26]))));
C[16]=+S[1]*(S[0]*(V[1]*(4*(S[1]*(V[29]-V[28]-V[27]+V[26])+S[0]*(V[29]-
 V[28]-V[27]+V[26])))));
C[15]=+6*V[36]*V[30]*S[3]*V[12]*S[5]*V[2];
C[14]=+S[5]*(S[0]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26]))));
C[13]=+3*V[36]*V[30]*S[3]*V[12]*S[5]*V[2];
C[12]=+S[1]*(V[1]*(4*(S[1]*(V[28]-V[29]+V[27]-V[26])+S[0]*(V[29]-V[28]-
 V[27]+V[26]))));
C[11]=+S[4]*(S[1]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[10]=+12*V[36]*V[30]*S[3]*V[12]*S[1]*V[2];
C[9]=+S[1]*(S[0]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[8]=+6*V[36]*V[30]*S[3]*V[12]*S[1]*V[2];
C[7]=+S[5]*(S[0]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[6]=+S[1]*(S[0]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26]))));
C[5]=+S[5]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26])));
C[4]=+S[5]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26])));
C[3]=+S[1]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[2]=+S[1]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26])));
S[6]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+12*S[3]*S[6];
S[7]=V[49]*V[49];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*V[48]*V[42]*S[0]*S[8];
}
REAL F679_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      s                 u      !                                     
    ==>==@==============>==\   !                                     
      P1 |              P5 |   !                                     
         |                 |   !                                     
         |              N2 |   !  N2                      s          
       W+|P7         /==<==+===!==<==\                 /==>==        
         1           |  P3 |   !  P3 |                 |  P1         
         |           |     |   !     |                 |             
      S  |  t     W+ |  e2 |   !  e2 |  W+    t     H  |  S          
    ==<==@==<==@-2<--@==>==+===!==>==@--<3-@==<==@-----@==<==        
      P2    P8 |  P9    P4 |   !  P4   -PC | -PB | -PA    P2         
               |           |   !           |     |                   
               |        B  |   !  B        |     |                   
               \========<==+===!==<========/     |                   
                        P6 |   !  P6             |                   
                           |   !                 |                   
                           |   !  u              |                   
                           \===!==>==============/                   
                               !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[53];REAL S[5];REAL tmp[8];                                    
     
if(CalcConst) C679(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(V[50]*(V[50]*(V[50]*(C[30]*(DP[4]*(DP[0]-DP[6]-DP[7])+DP[9]*(
 DP[6]-DP[0])+DP[7]*DP[3])+V[50]*(C[34]*(DP[4]-DP[9]))+C[31]*(DP[4]-DP[9]))+
 C[32]*(DP[4]*(DP[6]-DP[0]+DP[7])+DP[9]*DP[0]-DP[7]*DP[3])+C[45]*(DP[8]-
 DP[2])-C[10]*DP[4]-C[37]*DP[9])+DP[7]*(C[30]*(DP[0]*(DP[4]-DP[3]-DP[9])+
 DP[7]*DP[3]-DP[6]*DP[4])+DP[3]*(C[29]*DP[6]-C[51])+DP[4]*(C[51]-C[29]*
 DP[7])+C[43]*(DP[2]-DP[1])+C[31]*DP[9])+DP[0]*(DP[4]*(C[30]*DP[6]-C[51]-
 C[29]*DP[0])+DP[9]*(C[30]*DP[0]-C[33]-C[29]*DP[6])+C[43]*(DP[8]-DP[2]))+
 DP[6]*(DP[4]*(C[51]-C[29]*DP[6])+C[43]*(DP[2]-DP[8])+C[36]*DP[9])+C[44]*(
 DP[8]-DP[2])-C[6]*DP[4]-C[38]*DP[9])+C[10]*(DP[2]*(DP[0]+DP[5]-DP[6]-
 DP[7])+DP[5]*(DP[4]-DP[8]-DP[9])+DP[7]*DP[1]-DP[8]*DP[0])+C[8]*(DP[4]*(
 DP[0]-DP[6]-DP[7])+DP[7]*DP[3]-DP[9]*DP[0])+C[47]*DP[8]+C[19]*DP[9]);
S[1]=V[50]*V[50];
S[2]=DP[0]*DP[0];
S[3]=DP[6]*DP[6];
S[4]=DP[7]*DP[7];
tmp[1]=+DP[5]*(C[3]*(DP[0]*(DP[11]*(S[1]-DP[5]+DP[6]+DP[7])+DP[13]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[14]*(DP[0]-S[1]+DP[5]-DP[7])-DP[10]*DP[7])+DP[7]*(
 DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[10]*(S[1]-DP[5]+DP[7])+DP[11]*(DP[5]-
 S[1]-DP[6]))+DP[6]*(DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+
 DP[5]*(DP[11]-DP[14])))+V[50]*(C[10]*(DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+
 S[1]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[11]*(C[8]*(DP[6]-DP[0]+
 DP[7])+C[6]*V[50]-C[15])+DP[14]*(C[8]*DP[0]-C[21]-C[6]*V[50])-C[8]*DP[10]*
 DP[7])+DP[11]*(C[52]*(DP[6]-DP[0]+DP[7])+C[2]*(-S[2]-S[3]-S[4])-C[7]-C[6]*
 DP[5])+DP[14]*(DP[0]*(-C[12]-C[2]*DP[6])+C[6]*(DP[5]+DP[7])+C[18]*DP[6]-
 C[22])+DP[13]*(C[6]*(DP[2]+DP[4]-DP[8]-DP[9]))+DP[7]*(DP[10]*(C[2]*DP[6]-
 C[52])))+DP[13]*(DP[2]*(V[50]*(V[50]*(C[3]*(DP[6]-DP[0]+DP[7])-C[6]-C[10]*
 V[50])+C[8]*(DP[0]-DP[6]-DP[7]))+DP[0]*(C[3]*(-DP[6]-DP[7])+C[9]+C[2]*
 DP[0])+DP[6]*(C[2]*DP[6]-C[9]+C[3]*DP[7])+DP[7]*(C[2]*DP[7]-C[9]))+DP[8]*(
 V[50]*(V[50]*(C[3]*(DP[0]-DP[6])+C[6]+C[10]*V[50])+C[19]-C[8]*DP[0])+DP[0]*
 (C[3]*(DP[7]-DP[0])+C[9]+C[2]*DP[6])+C[6]*(-DP[6]-DP[7])+C[20])+DP[1]*(
 DP[7]*(C[3]*(DP[0]-S[1]-DP[7])+C[9]+C[8]*V[50]-C[2]*DP[6])));
tmp[2]=+V[50]*(V[50]*(DP[12]*(V[50]*(V[50]*(DP[3]*(C[30]*(DP[7]-DP[0])-
 C[31]-C[34]*V[50])+DP[9]*(C[30]*(DP[0]-DP[7])+C[31]+C[34]*V[50]))+DP[3]*(
 C[32]*(DP[0]-DP[7])+C[10])+DP[9]*(C[32]*DP[0]-C[10])+C[45]*(DP[1]-DP[8]))+
 DP[0]*(DP[3]*(C[51]+C[29]*DP[0]-C[30]*DP[7])+DP[9]*(C[33]+C[30]*DP[0]-
 C[29]*DP[7])+C[43]*(DP[1]-DP[8]))+DP[7]*(DP[3]*(C[29]*DP[7]-C[51])+C[43]*(
 DP[8]-DP[1])+C[3]*DP[9])+C[44]*(DP[1]-DP[8])+C[6]*DP[3]-C[35]*DP[9])+DP[5]*
 (DP[10]*(C[3]*(DP[7]-DP[0])-C[6]-C[10]*V[50])+DP[14]*(C[3]*(DP[0]-DP[7])+
 C[6]+C[10]*V[50]))+DP[13]*(DP[1]*(C[3]*(DP[0]-DP[7])+C[6]+C[10]*V[50])+
 DP[8]*(C[3]*(DP[7]-DP[0])-C[6]-C[10]*V[50])))+DP[5]*(C[10]*(DP[12]*(DP[8]-
 DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+
 DP[10]*(C[8]*(DP[0]-DP[7])+C[15])+DP[14]*(C[8]*DP[0]-C[15]))+DP[0]*(DP[12]*
 (C[10]*(-DP[1]-DP[8])+C[8]*(-DP[3]-DP[9]))+DP[13]*(C[8]*(-DP[1]-DP[8])))+
 DP[7]*(DP[1]*(C[10]*DP[12]+C[8]*DP[13])+C[8]*DP[12]*DP[3]));
tmp[3]=+DP[7]*(DP[5]*(C[3]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14])+DP[14]*DP[0]-DP[10]*DP[7])+
 DP[7]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+
 DP[5]*(DP[14]-DP[10])))+C[6]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[10]*(DP[0]*(C[52]+C[2]*
 DP[0])+DP[7]*(C[2]*DP[7]-C[52])+C[7])+DP[14]*(DP[0]*(C[12]-C[2]*DP[7])+
 C[5]*DP[7]-C[16]))+DP[0]*(DP[12]*(DP[0]*(C[3]*(-DP[1]-DP[9])-C[2]*DP[3]-
 C[43]*DP[8])+DP[7]*(C[3]*(DP[3]+DP[8])+C[43]*DP[1]+C[2]*DP[9])+C[6]*(-
 DP[1]-DP[8])+C[9]*(-DP[3]-DP[9]))+DP[13]*(DP[1]*(C[3]*DP[7]-C[9]-C[2]*
 DP[0])+DP[8]*(C[2]*DP[7]-C[9]-C[3]*DP[0])))+DP[7]*(DP[1]*(DP[7]*(-C[3]*
 DP[12]-C[2]*DP[13])+C[6]*DP[12]+C[9]*DP[13])+DP[3]*(DP[12]*(C[9]-C[2]*
 DP[7])))+DP[8]*(C[46]*DP[12]+C[11]*DP[13])+C[11]*DP[12]*DP[9]+tmp[2]);
tmp[4]=+V[50]*(DP[6]*(DP[12]*(DP[7]*(C[3]*(DP[5]*(DP[1]-DP[2]+DP[3]-DP[4])+
 DP[0]*(DP[3]-DP[4]+DP[9])+DP[6]*(DP[4]-DP[1])+DP[7]*(DP[2]-DP[3]))+C[43]*(
 DP[0]*(DP[1]-DP[2]+DP[8])+DP[6]*DP[2]-DP[7]*DP[1])+C[6]*(DP[1]-DP[2]-
 DP[9])+DP[3]*(C[9]-C[2]*DP[6])+DP[4]*(C[2]*DP[7]-C[9])-C[44]*DP[8])+DP[0]*(
 C[3]*(DP[5]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[0]*(DP[2]-DP[9])+DP[6]*(DP[8]-
 DP[4]))+DP[0]*(C[2]*DP[4]-C[43]*DP[8])+DP[2]*(C[6]-C[43]*DP[6])+DP[9]*(
 C[9]+C[2]*DP[6])+C[9]*DP[4]+C[6]*DP[8])+DP[6]*(C[3]*(DP[5]*(DP[8]-DP[2]-
 DP[4]+DP[9])+DP[6]*DP[2])+DP[4]*(C[2]*DP[6]-C[9])+C[6]*(-DP[2]-DP[9])-
 C[44]*DP[8])+DP[5]*(C[6]*(DP[2]+DP[4]-DP[8]-DP[9]))+C[48]*DP[8]+C[20]*
 DP[9]+tmp[0])+tmp[1])+DP[0]*(DP[0]*(DP[12]*(DP[9]*(V[50]*(V[50]*(-C[39]-
 C[32]*V[50]-C[29]*DP[0])+C[8])+C[9]+C[2]*DP[0])+DP[8]*(C[6]+C[10]*V[50]+
 C[3]*DP[0]))+DP[5]*(DP[14]*(-C[9]-C[8]*V[50]-C[2]*DP[0]))+DP[8]*(DP[13]*(
 C[9]+C[8]*V[50]+C[2]*DP[0])))+DP[12]*(DP[9]*(C[40]*S[1]-C[11])-C[46]*
 DP[8])+C[11]*(DP[14]*DP[5]-DP[13]*DP[8]))+V[50]*(DP[12]*(DP[9]*(V[50]*(
 C[42]+C[41]*V[50])-C[25])-C[49]*DP[8])+C[25]*(DP[14]*DP[5]-DP[13]*DP[8]))+
 C[26]*(DP[14]*DP[5]-DP[12]*DP[9]-DP[13]*DP[8])-C[50]*DP[12]*DP[8]+tmp[3]);
tmp[5]=+DP[0]*(DP[0]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[4]*DP[11]-C[5]*DP[14])+DP[6]*(C[3]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+C[4]*DP[14]-C[5]*DP[11])+C[9]*(DP[12]*(-DP[2]-DP[4]-
 DP[8]-DP[9])+DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14]))+
 C[14]*(DP[11]+DP[14]))+DP[6]*(DP[6]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+C[4]*DP[11])+C[9]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5])-C[14]*DP[11]-C[7]*DP[14])+C[20]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[24]*DP[14];
tmp[6]=+DP[0]*(DP[7]*(DP[0]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])+C[3]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])-C[4]*DP[10]-C[5]*DP[14])+DP[7]*(C[3]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+C[5]*DP[10]+C[4]*DP[14])+C[9]*(DP[12]*(DP[1]+
 DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-
 DP[14]))+C[14]*(-DP[10]-DP[14]))+DP[0]*(DP[0]*(C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[4]*DP[14])+C[9]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[14]*DP[14])+C[11]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[17]*DP[14])+
 DP[7]*(DP[7]*(DP[7]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[4]*DP[10])+C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[14]*DP[10])+C[11]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+C[17]*DP[14])+C[26]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[28]*DP[14];
tmp[7]=+V[50]*(DP[5]*(C[8]*(DP[0]*(DP[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[7]*(DP[12]*(
 DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-
 DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5]))+DP[6]*(DP[7]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-
 DP[3]+DP[4])+DP[5]*(DP[10]-DP[11]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5]))+S[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5]))+DP[6]*(C[13]*(DP[11]*(DP[0]-DP[6]-DP[7])+DP[10]*
 DP[7]-DP[14]*DP[0])+C[19]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[23]*DP[14])+C[25]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+C[13]*(DP[0]*(DP[7]*(-DP[10]-DP[14])+DP[14]*DP[0])+
 DP[10]*S[4])-C[27]*DP[14])+tmp[4]);
R=+DP[5]*(DP[6]*(DP[7]*(C[3]*(DP[0]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]-DP[1]-DP[3]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[10]-DP[11]+
 DP[14]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5]))+
 DP[12]*(C[9]*(DP[2]-DP[1]-DP[3]+DP[4])+C[2]*(DP[6]*(DP[1]+DP[3])+DP[7]*(-
 DP[2]-DP[4]))+C[6]*(DP[8]+DP[9]))+DP[13]*(C[9]*(DP[2]-DP[1]-DP[3]+DP[4])+
 C[2]*(DP[6]*(DP[1]+DP[3])+DP[7]*(-DP[2]-DP[4]))+C[6]*(DP[8]+DP[9]))+DP[10]*
 (DP[5]*(C[9]-C[2]*DP[6])+C[5]*(DP[0]-DP[7])+C[14]-C[4]*DP[6])+DP[11]*(
 DP[5]*(C[2]*DP[7]-C[9])+C[5]*(DP[6]-DP[0])+C[4]*DP[7]-C[14])+DP[14]*(C[5]*
 DP[0]-C[7]-C[6]*DP[5]))+tmp[5])+tmp[6])+tmp[7];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[4];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
 }
 return R;
}