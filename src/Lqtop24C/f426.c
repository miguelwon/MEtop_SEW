/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F426_out;
static void C426(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[17]*V[17];
S[1]=V[1]*V[1];
S[2]=V[9]*V[9]*V[9]*V[9];
C[19]=+S[2]*(S[1]*(S[0]*(V[36]*(V[47]*(2*(V[37]*V[22]+V[20]*V[2]))))));
S[3]=V[9]*V[9];
C[18]=+S[3]*(V[36]*(V[2]*(S[3]*(V[2]*(V[26]*(8*(-V[37]*V[22]-V[20]*V[2]))))+
 4*V[47]*V[20]*S[0]*S[1])+4*V[47]*V[37]*V[22]*S[0]*S[1]));
C[17]=+S[1]*(S[3]*(S[0]*(V[36]*(V[47]*(8*(V[37]*V[22]+V[20]*V[2]))))));
S[4]=V[2]*V[2];
C[16]=+S[4]*(S[3]*(V[26]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2])))));
C[15]=+V[36]*(V[2]*(S[3]*(V[2]*(V[26]*(16*(-V[37]*V[22]-V[20]*V[2]))))+8*
 V[47]*V[20]*S[0]*S[1])+8*V[47]*V[37]*V[22]*S[0]*S[1]);
C[14]=+S[4]*(V[26]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))));
C[13]=+S[4]*(S[3]*(V[12]*(V[20]*(32*(V[37]*V[22]+V[20]*V[2])))));
C[12]=+V[36]*(V[2]*(S[3]*(V[2]*(V[26]*(8*(-V[37]*V[22]-V[20]*V[2]))))+4*
 V[47]*V[20]*S[0]*S[1])+4*V[47]*V[37]*V[22]*S[0]*S[1]);
C[11]=+S[4]*(V[12]*(V[20]*(32*(V[37]*V[22]+V[20]*V[2]))));
C[10]=+S[4]*(V[26]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))));
C[9]=+S[1]*(S[3]*(S[0]*(V[36]*(V[47]*(4*(V[37]*V[22]+V[20]*V[2]))))));
C[8]=+S[4]*(S[3]*(V[26]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2])))));
C[7]=+S[2]*(S[1]*(S[0]*(V[36]*(V[47]*(V[37]*V[22]+V[20]*V[2])))));
C[6]=+S[2]*(S[4]*(V[12]*(V[20]*(8*(V[37]*V[22]+V[20]*V[2])))));
C[5]=+S[3]*(V[36]*(V[2]*(S[3]*(V[2]*(V[26]*(4*(-V[37]*V[22]-V[20]*V[2]))))+
 2*V[47]*V[20]*S[0]*S[1])+2*V[47]*V[37]*V[22]*S[0]*S[1]));
C[4]=+S[1]*(S[3]*(S[0]*(V[36]*(V[47]*(2*(V[37]*V[22]+V[20]*V[2]))))));
C[3]=+S[4]*(S[3]*(V[12]*(V[20]*(16*(V[37]*V[22]+V[20]*V[2])))));
C[2]=+S[4]*(S[3]*(V[26]*(V[36]*(8*(V[37]*V[22]+V[20]*V[2])))));
S[5]=V[17]*V[17]*V[17]*V[17];
S[6]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[5]*S[6];
S[7]=V[49]*V[49];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+4*S[7]*V[41]*V[12]*S[8];
}
REAL F426_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         D                 D      !                                  
       ==<==@==============<==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           A|P7         /==<==+===!==<==\                            
            1           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         U  |  t     W+ |  e2 |   !  e2 |  W+    t     D             
       ==<==@==<==@-2<--@==>==+===!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/   W+|-PA             
                           P6 |   !  P6             3                
                              |   !                 |                
                              |   !  D              |  U             
                              \===!==<==============@==<==           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[20];REAL S[2];REAL tmp[1];                                    
     
if(CalcConst) C426(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+V[50]*(DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[10]*(DP[6]*DP[4]+DP[7]*
 DP[3]-DP[9]*DP[0])+C[14]*DP[6]*DP[3])+C[11]*(DP[6]*DP[4]+DP[7]*DP[3]-DP[9]*
 DP[0]))+DP[6]*(C[15]*DP[3]-C[16]*DP[1]-C[8]*DP[2]+C[12]*DP[4])+DP[0]*(C[8]*
 DP[8]-C[12]*DP[9])+DP[7]*(C[12]*DP[3]-C[8]*DP[1]))+C[13]*(DP[8]*DP[0]-
 DP[6]*DP[2]-DP[7]*DP[1])+C[3]*(DP[9]*DP[0]-DP[6]*DP[4]-DP[7]*DP[3]))+DP[5]*
 (C[2]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(DP[1]+DP[3]))+DP[6]*
 (C[8]*(DP[1]+DP[3])))+DP[6]*(C[9]*(-DP[2]-DP[3])-C[17]*DP[1]-C[4]*DP[4])+
 DP[0]*(C[9]*DP[8]+C[4]*DP[9])+DP[7]*(-C[9]*DP[1]-C[4]*DP[3]))+DP[5]*(C[2]*(
 DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(DP[1]+DP[3]))+S[1]*
 (DP[10]*DP[7]+DP[11]*DP[6]-DP[14]*DP[0])+DP[5]*(DP[14]*DP[0]-DP[10]*DP[7]-
 DP[11]*DP[6]))+DP[6]*(C[8]*(DP[10]*(S[1]-DP[5])+DP[13]*(DP[1]+DP[3]))+
 DP[11]*(C[5]+C[3]*V[50])+C[18]*DP[10])+V[50]*(C[3]*(DP[10]*DP[7]-DP[14]*
 DP[0]))+C[5]*(DP[10]*DP[7]-DP[14]*DP[0]))+DP[13]*(V[50]*(V[50]*(C[2]*(
 DP[8]*DP[0]-DP[6]*DP[2]-DP[7]*DP[1])-C[8]*DP[6]*DP[1])+C[3]*(DP[8]*DP[0]-
 DP[6]*DP[2]-DP[7]*DP[1]))+C[4]*(DP[8]*DP[0]-DP[6]*DP[2]-DP[7]*DP[1])-C[9]*
 DP[6]*DP[1]));
R=+DP[0]*(V[50]*(DP[5]*(C[3]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[5]*(DP[14]*DP[0]-DP[10]*DP[7]-DP[11]*
 DP[6]))+C[6]*(DP[14]*DP[0]-DP[10]*DP[7]-DP[11]*DP[6]))+tmp[0])+DP[5]*(C[4]*
 (DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(DP[1]+DP[3]))+
 DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+DP[4])+DP[7]*(DP[1]+DP[3]))+
 DP[5]*(DP[14]*DP[0]-DP[10]*DP[7]-DP[11]*DP[6]))+DP[6]*(C[9]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[19]*DP[10]-C[7]*DP[11])+C[7]*
 (DP[14]*DP[0]-DP[10]*DP[7])));
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}
