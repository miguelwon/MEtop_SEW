/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F709_out;
static void C709(REAL * C)
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
C[42]=+S[2]*(S[0]*(5*(V[37]*V[22]+V[20]*V[2])));
C[41]=+S[1]*(S[1]*(2*(V[37]*V[22]+V[20]*V[2]))+S[0]*(10*(V[37]*V[22]+V[20]*
 V[2])));
C[40]=+S[2]*(S[0]*(3*(V[37]*V[22]+V[20]*V[2])));
C[39]=+S[2]*(S[0]*(4*(V[37]*V[22]+V[20]*V[2])));
C[38]=+S[1]*(S[0]*(2*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2]))));
S[3]=V[11]*V[11]*V[11]*V[11];
C[37]=+S[2]*(S[3]*(2*(V[37]*V[22]+V[20]*V[2])));
C[36]=+S[1]*(S[0]*(24*(V[37]*V[22]+V[20]*V[2])));
C[35]=+S[0]*(S[1]*(12*(V[37]*V[22]+V[20]*V[2]))+S[0]*(4*(V[37]*V[22]+V[20]*
 V[2])));
C[34]=+S[0]*(24*(V[37]*V[22]+V[20]*V[2]));
C[33]=+S[1]*(16*(V[37]*V[22]+V[20]*V[2]));
C[32]=+8*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]));
C[31]=+16*(V[37]*V[22]+V[20]*V[2]);
C[30]=+S[0]*(4*(S[1]*(V[37]*V[22]+V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[29]=+S[1]*(S[0]*(20*(V[37]*V[22]+V[20]*V[2])));
C[28]=+S[3]*(S[1]*(8*(V[37]*V[22]+V[20]*V[2])));
C[27]=+S[0]*(S[1]*(4*(V[37]*V[22]+V[20]*V[2]))+S[0]*(8*(V[37]*V[22]+V[20]*
 V[2])));
C[26]=+S[1]*(4*(V[37]*V[22]+V[20]*V[2]))+S[0]*(20*(V[37]*V[22]+V[20]*V[2]));
C[25]=+S[3]*(8*(V[37]*V[22]+V[20]*V[2]));
C[24]=+S[0]*(12*(V[37]*V[22]+V[20]*V[2]));
C[23]=+S[1]*(S[0]*(16*(V[37]*V[22]+V[20]*V[2])));
C[22]=+S[0]*(16*(V[37]*V[22]+V[20]*V[2]));
C[21]=+4*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]));
C[20]=+8*(V[37]*V[22]+V[20]*V[2]);
C[19]=+S[0]*(4*(V[37]*V[22]+V[20]*V[2]));
C[18]=+S[0]*(4*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[17]=+S[0]*(8*(V[37]*V[22]+V[20]*V[2]));
C[16]=+S[1]*(S[0]*(12*(V[37]*V[22]+V[20]*V[2])));
C[15]=+S[1]*(8*(V[37]*V[22]+V[20]*V[2]));
C[14]=+S[1]*(S[0]*(10*(V[37]*V[22]+V[20]*V[2])));
C[13]=+S[3]*(S[1]*(4*(V[37]*V[22]+V[20]*V[2])));
C[12]=+S[1]*(S[0]*(6*(V[37]*V[22]+V[20]*V[2])));
C[11]=+S[1]*(S[0]*(8*(V[37]*V[22]+V[20]*V[2])));
C[10]=+S[1]*(2*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2])));
C[9]=+S[1]*(4*(V[37]*V[22]+V[20]*V[2]));
C[8]=+S[2]*(S[0]*(V[37]*V[22]+V[20]*V[2]));
C[7]=+S[1]*(S[0]*(2*(V[37]*V[22]+V[20]*V[2])));
C[6]=+S[2]*(S[3]*(V[37]*V[22]+V[20]*V[2]));
C[5]=+S[1]*(S[0]*(2*(S[1]*(-V[37]*V[22]-V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*
 V[2]))));
C[4]=+S[3]*(S[1]*(2*(V[37]*V[22]+V[20]*V[2])));
C[3]=+S[2]*(S[0]*(2*(V[37]*V[22]+V[20]*V[2])));
C[2]=+S[1]*(S[0]*(4*(V[37]*V[22]+V[20]*V[2])));
S[4]=V[17]*V[17];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[4]*S[5];
S[6]=V[49]*V[49];
S[7]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[6]*V[48]*V[42]*V[36]*V[12]*S[7];
}
REAL F709_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         S                 S      !                                  
       ==<==@==============<==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           A|P7         /==<==+===!==<==\                            
            1           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         U  |  t     W+ |  e2 |   !  e2 |  W+    t     S             
       ==<==@==<==@-2<--@==>==+===!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/   W+|-PA             
                           P6 |   !  P6             3                
                              |   !                 |                
                              |   !  S              |  U             
                              \===!==<==============@==<==           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[46];REAL S[2];REAL tmp[3];                                    
     
if(CalcConst) C709(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[0]*(S[1]*(C[9]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*(DP[5]-S[1]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])+DP[11]*(S[1]-DP[5]))+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[1]-DP[5])))+C[2]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[14]*(S[1]-DP[5]+DP[7])+DP[11]*(DP[5]-
 S[1])+DP[10]*DP[0])+DP[6]*(C[15]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])+DP[10]*(S[1]-DP[5]))+C[10]*DP[11]-C[44]*DP[10]+C[7]*DP[14])+C[16]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+DP[10]*(
 C[45]-C[41]*DP[7])+DP[14]*(-C[3]-C[10]*DP[0])-C[5]*DP[11])+DP[6]*(C[7]*(
 DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-
 DP[11]-DP[14]))+C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[8]*(-DP[11]-DP[14])+C[3]*DP[10])+DP[0]*(C[2]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[7]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[8]*DP[14]-C[3]*DP[10])+DP[7]*(C[14]*
 (DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[2]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[42]*DP[10]-C[3]*
 DP[14])+C[4]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-
 DP[4])+DP[5]*(DP[11]-DP[10]))+C[6]*(DP[11]-DP[10]));
tmp[1]=+DP[12]*(S[1]*(DP[0]*(S[1]*(DP[3]*(C[31]*DP[6]-C[34]+C[20]*DP[7])+
 DP[4]*(C[20]*DP[6]-C[17])+DP[9]*(C[17]-C[20]*DP[0]))+DP[6]*(C[21]*DP[4]-
 C[33]*DP[1]-C[15]*DP[2]-C[32]*DP[3]+C[19]*DP[9])+DP[0]*(C[17]*DP[3]+C[15]*
 DP[8]-C[21]*DP[9])+DP[7]*(C[17]*DP[9]-C[15]*DP[1]-C[26]*DP[3])+C[11]*(
 DP[2]-DP[8])+C[36]*DP[1]+C[35]*DP[3]-C[18]*DP[4]-C[2]*DP[9])+DP[7]*(DP[3]*(
 C[17]*S[1]-C[27]+C[24]*DP[6]+C[22]*DP[7])+DP[9]*(C[17]*(-S[1]-DP[7])-
 C[18])+DP[4]*(C[25]-C[17]*DP[6])+C[11]*(DP[8]-DP[1]))+DP[4]*(DP[6]*(C[30]-
 C[17]*S[1]-C[19]*DP[6])+C[25]*S[1]-C[13])+DP[2]*(C[11]*DP[6]-C[28]))+DP[0]*
 (DP[6]*(C[2]*(DP[3]-DP[2]-DP[8])+C[7]*(-DP[4]-DP[9])+C[11]*DP[1])+DP[0]*(
 C[2]*(DP[8]-DP[3])+C[7]*DP[9]-C[11]*DP[1])+DP[7]*(C[29]*DP[1]+C[14]*DP[3]-
 C[11]*DP[8]-C[2]*DP[9])+C[13]*(DP[2]-DP[1])+C[4]*(DP[4]-DP[3]))+DP[7]*(
 DP[6]*(C[11]*DP[2]-C[16]*DP[1]-C[12]*DP[3]+C[2]*DP[4])+DP[7]*(C[11]*(DP[8]-
 DP[3])+C[2]*DP[9]-C[23]*DP[1])+C[13]*(DP[3]-DP[4]+DP[8])+C[28]*(DP[1]-
 DP[2])+C[4]*DP[9])+DP[6]*(DP[2]*(C[2]*DP[6]-C[13])+DP[4]*(C[7]*DP[6]-
 C[4])));
tmp[2]=+DP[5]*(DP[7]*(C[2]*(S[1]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(
 DP[1]+DP[3]-DP[8]-DP[9])+DP[14]*(DP[5]-S[1]-DP[7])+DP[10]*(S[1]-DP[5])-
 DP[11]*DP[6])+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+DP[7]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+
 C[13]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-DP[3]+DP[4])+
 DP[5]*(DP[10]-DP[11])+DP[11]*S[1])+DP[6]*(C[12]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+C[3]*DP[11]-C[40]*DP[10])+DP[7]*
 (C[11]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))+
 C[3]*DP[14]-C[39]*DP[10])+C[4]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+S[1]*(-C[43]*DP[10]-C[5]*DP[14])+C[37]*(DP[10]-
 DP[11])+C[6]*DP[14])+DP[6]*(S[1]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+DP[11]*(C[38]-C[7]*DP[6]))+DP[6]*(C[7]*
 (DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[8]*DP[11])+
 C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[6]*
 DP[11])+S[1]*(C[13]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(
 S[1]-DP[5]))-C[37]*DP[11])+tmp[0]);
R=+S[1]*(DP[13]*(DP[0]*(S[1]*(DP[1]*(C[16]-C[15]*DP[6]-C[9]*DP[7])+DP[2]*(
 C[2]-C[9]*DP[6])+DP[8]*(C[9]*DP[0]-C[2]))+DP[1]*(C[2]*(DP[6]-DP[0])+C[14]*
 DP[7]-C[4])+DP[8]*(C[7]*(DP[0]-DP[6])-C[2]*DP[7])+DP[2]*(C[4]-C[7]*DP[6]))+
 DP[7]*(DP[1]*(C[13]-C[2]*S[1]-C[12]*DP[6]-C[11]*DP[7])+DP[8]*(C[2]*(S[1]+
 DP[7])+C[4])+DP[2]*(C[2]*DP[6]-C[13]))+DP[2]*(DP[6]*(C[2]*S[1]-C[4]+C[7]*
 DP[6])-C[13]*S[1]))+tmp[1])+tmp[2];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}
