/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F199_out;
static void C199(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[9]*V[9]*V[9]*V[9];
C[28]=+S[0]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(3*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(3*(V[27]-
 V[29]-V[28]+V[26])))));
C[27]=+S[0]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(6*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(6*(V[27]-V[29]-V[28]+V[26])))));
S[1]=V[9]*V[9];
C[26]=+S[1]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26])))));
C[25]=+S[1]*(V[12]*(V[2]*(V[2]*(32*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(24*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(24*(V[27]-V[29]-V[28]+V[26])))));
C[24]=+V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(
 V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
C[23]=+V[12]*(V[2]*(V[2]*(32*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+V[22]*(
 V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(24*(V[27]-V[29]-V[28]+V[26])))+
 V[22]*(V[37]*(24*(V[27]-V[29]-V[28]+V[26]))));
S[2]=V[37]*V[37];
S[3]=V[2]*V[2];
S[4]=V[22]*V[22];
S[5]=V[20]*V[20];
S[6]=V[12]*V[12];
C[22]=+S[1]*(S[6]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(32*(S[2]-S[3])+
 24)+32*V[37]*V[20]*V[2])-32*V[37]*S[4]*V[2])+V[37]*(24*(S[4]-S[5])))-24*
 S[2]*V[22]*V[20]))));
C[21]=+S[1]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26])))));
C[20]=+S[3]*(S[1]*(V[12]*(32*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(
 V[25]+V[24]))))));
S[7]=V[23]*V[23];
C[19]=+S[3]*(S[1]*(V[36]*(V[37]*(128*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[2]*V[23]*V[21])))));
C[18]=+S[6]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(32*(S[2]-S[3])+24)+32*
 V[37]*V[20]*V[2])-32*V[37]*S[4]*V[2])+V[37]*(24*(S[4]-S[5])))-24*S[2]*
 V[22]*V[20])));
C[17]=+V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+V[21]*(-
 V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(12*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
C[16]=+S[3]*(V[12]*(32*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24])))));
C[15]=+S[3]*(V[36]*(V[37]*(64*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-V[37]*
 S[7])+S[2]*V[23]*V[21]))));
C[14]=+S[3]*(V[36]*(V[37]*(128*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-V[37]*
 S[7])+S[2]*V[23]*V[21]))));
C[13]=+S[1]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(V[25]+V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(V[25]+
 V[24]))))+V[20]*(6*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(6*(V[27]-
 V[29]-V[28]+V[26])))));
C[12]=+S[1]*(V[12]*(V[2]*(V[2]*(16*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26]))+
 V[22]*(V[37]*(V[29]+V[28]-V[27]-V[26]))))+V[20]*(12*(V[27]-V[29]-V[28]+
 V[26])))+V[22]*(V[37]*(12*(V[27]-V[29]-V[28]+V[26])))));
C[11]=+S[0]*(S[6]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(8*(S[2]-S[3])+6)+
 8*V[37]*V[20]*V[2])-8*V[37]*S[4]*V[2])+V[37]*(6*(S[4]-S[5])))-6*S[2]*V[22]*
 V[20]))));
C[10]=+S[0]*(V[12]*(V[2]*(V[2]*(4*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(3*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(3*(V[27]-
 V[29]-V[28]+V[26])))));
C[9]=+S[1]*(S[6]*(V[36]*(V[37]*(V[2]*(V[2]*(V[20]*(V[22]*(16*(S[2]-S[3])+
 12)+16*V[37]*V[20]*V[2])-16*V[37]*S[4]*V[2])+V[37]*(12*(S[4]-S[5])))-12*
 S[2]*V[22]*V[20]))));
C[8]=+S[1]*(V[12]*(V[2]*(V[2]*(8*(V[2]*(V[20]*(V[29]+V[28]-V[27]-V[26])+
 V[21]*(-V[25]-V[24]))+V[37]*(V[22]*(V[29]+V[28]-V[27]-V[26])+V[23]*(-V[25]-
 V[24]))))+V[20]*(6*(V[27]-V[29]-V[28]+V[26])))+V[22]*(V[37]*(6*(V[27]-
 V[29]-V[28]+V[26])))));
C[7]=+S[0]*(S[3]*(V[12]*(8*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24]))))));
C[6]=+S[0]*(S[3]*(V[36]*(V[37]*(16*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[2]*V[23]*V[21])))));
C[5]=+S[3]*(S[1]*(V[12]*(16*(V[2]*(V[21]*(V[25]+V[24]))+V[23]*(V[37]*(V[25]+
 V[24]))))));
C[4]=+S[3]*(S[1]*(V[36]*(V[37]*(32*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[2]*V[23]*V[21])))));
C[3]=+S[0]*(S[3]*(V[36]*(V[37]*(32*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[2]*V[23]*V[21])))));
C[2]=+S[3]*(S[1]*(V[36]*(V[37]*(64*(V[2]*(V[21]*(V[37]*V[21]-V[23]*V[2])-
 V[37]*S[7])+S[2]*V[23]*V[21])))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2];
C[1]=+27*S[2]*S[8]*S[9];
S[10]=V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[10]*V[36]*S[11];
}
REAL F199_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 U      !                                  
       ==<==@==============<==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           Z|P7         /==<==+===!==<==\                            
            1           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         U  |  t     W+ |  e2 |   !  e2 |  W+    t     U             
       ==<==@==<==@-2<--@==>==+===!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/    A|-PA             
                           P6 |   !  P6             3                
                              |   !                 |                
                              |   !  U              |  U             
                              \===!==<==============@==<==           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[29];REAL S[1];REAL tmp[2];                                    
     
if(CalcConst) C199(C);
N=+C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[7]*(C[4]*(DP[0]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+
 DP[3]+DP[8]+DP[9])+S[0]*(DP[10]+DP[14])+DP[5]*(-DP[10]-DP[14]))+DP[6]*(
 DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[0]*(
 DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*(DP[5]-S[0])))+V[50]*(DP[12]*(C[13]*(DP[1]+DP[3])+
 C[12]*(DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+DP[13]*(C[13]*(DP[1]+DP[3])+C[12]*
 (DP[2]+DP[4])+C[5]*(-DP[8]-DP[9]))+V[50]*(V[50]*(C[13]*DP[10]+C[12]*DP[11]-
 C[5]*DP[14])-C[9]*DP[10]-C[2]*DP[14]*DP[6])+DP[5]*(C[5]*DP[14]-C[13]*
 DP[10]-C[12]*DP[11])+C[7]*DP[14]-C[28]*DP[10]-C[27]*DP[11])+DP[6]*(C[2]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[6]*(-DP[10]-
 DP[11])+C[3]*DP[14])+C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+DP[10]*(C[6]*(DP[7]-DP[0])+C[11])-C[6]*DP[14]*DP[0]);
tmp[1]=+S[0]*(DP[12]*(DP[7]*(V[50]*(V[50]*(DP[3]*(C[15]*(DP[0]+DP[6]-DP[7])+
 C[24]*V[50]-C[18])+DP[9]*(C[15]*DP[0]-C[16]*V[50]-C[14]*DP[6])+DP[4]*(
 C[23]*V[50]+C[15]*DP[6]))+C[20]*DP[8]-C[26]*DP[1]-C[25]*DP[2]-C[13]*DP[3]-
 C[12]*DP[4]+C[5]*DP[9])+DP[6]*(C[2]*(DP[9]-DP[1]-DP[2])+C[4]*(-DP[3]-
 DP[4])+C[19]*DP[8])+DP[0]*(C[2]*(-DP[1]-DP[8])+C[4]*(-DP[3]-DP[9]))+DP[1]*(
 C[22]+C[2]*DP[7])+DP[3]*(C[9]+C[4]*DP[7]))+DP[0]*(DP[9]*(V[50]*(V[50]*(
 C[15]*(DP[6]-DP[0])+C[18]-C[17]*V[50])+C[8])+C[4]*(DP[0]-DP[6])-C[9])+
 DP[6]*(DP[4]*(C[15]*S[0]-C[4])+C[2]*(-DP[2]-DP[8]))+DP[8]*(C[21]*V[50]-
 C[22]+C[2]*DP[0]))+DP[6]*(DP[4]*(V[50]*(V[50]*(C[17]*V[50]-C[18]-C[15]*
 DP[6])-C[8])+C[9]+C[4]*DP[6])+DP[2]*(C[22]-C[21]*V[50]+C[2]*DP[6])))+
 DP[13]*(DP[7]*(DP[1]*(C[4]*(DP[7]-DP[0]-DP[6])+C[9]-C[13]*V[50])+DP[8]*(
 C[5]*V[50]-C[4]*DP[0]+C[2]*DP[6])+DP[2]*(-C[12]*V[50]-C[4]*DP[6]))+DP[0]*(
 DP[8]*(C[4]*(DP[0]-DP[6])+C[8]*V[50]-C[9])-C[4]*DP[6]*DP[2])+DP[2]*(DP[6]*(
 C[9]-C[8]*V[50]+C[4]*DP[6]))));
R=+DP[0]*(DP[5]*(DP[0]*(C[4]*(DP[6]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+
 DP[13]*(DP[2]+DP[4]+DP[8]+DP[9])+S[0]*(DP[11]+DP[14])+DP[5]*(-DP[11]-
 DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[0])))+V[50]*(C[8]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[0]))+DP[14]*(C[10]+C[9]*V[50]))+C[9]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*(C[6]*(DP[0]-DP[6])-
 C[11])-C[6]*DP[11]*DP[6])+DP[6]*(V[50]*(C[8]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[0]-DP[5]))+DP[11]*(V[50]*(-C[9]-C[4]*DP[6])-
 C[10]))+DP[6]*(C[4]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[6]*DP[11])+C[9]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[11]*DP[11])+tmp[0])+tmp[1]);
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}
