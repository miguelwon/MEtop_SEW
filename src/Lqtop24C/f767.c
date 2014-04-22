/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F767_out;
static void C767(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[29]*V[29];
S[1]=V[28]*V[28];
S[2]=V[27]*V[27];
S[3]=V[26]*V[26];
S[4]=V[14]*V[14];
S[5]=V[9]*V[9]*V[9]*V[9];
C[26]=+S[5]*(S[4]*(V[1]*(2*(S[0]+S[1]-S[2]-S[3])+4*(V[27]*V[26]-V[29]*
 V[28]))));
S[6]=V[17]*V[17];
C[25]=+S[5]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(6*(V[29]-V[28]+V[27]-
 V[26])))))));
C[24]=+S[5]*(V[1]*(6*(S[0]+S[1]-S[2]-S[3])+12*(V[27]*V[26]-V[29]*V[28])));
C[23]=+S[5]*(V[1]*(4*(S[0]+S[1]-S[2]-S[3])+8*(V[27]*V[26]-V[29]*V[28])));
S[7]=V[9]*V[9];
C[22]=+S[7]*(S[4]*(V[1]*(8*(S[0]+S[1]-S[2]-S[3])+16*(V[27]*V[26]-V[29]*
 V[28]))));
C[21]=+S[7]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[29]-V[28]+V[27]-
 V[26])))))));
C[20]=+S[4]*(V[1]*(8*(S[0]+S[1]-S[2]-S[3])+16*(V[27]*V[26]-V[29]*V[28])));
C[19]=+S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[29]-V[28]+V[27]-V[26]))))));
C[18]=+S[7]*(V[1]*(24*(S[0]+S[1]-S[2]-S[3])+48*(V[27]*V[26]-V[29]*V[28])));
C[17]=+V[1]*(24*(S[0]+S[1]-S[2]-S[3])+48*(V[27]*V[26]-V[29]*V[28]));
C[16]=+S[7]*(V[1]*(16*(S[0]+S[1]-S[2]-S[3])+32*(V[27]*V[26]-V[29]*V[28])));
C[15]=+V[1]*(16*(S[0]+S[1]-S[2]-S[3])+32*(V[27]*V[26]-V[29]*V[28]));
C[14]=+S[4]*(V[1]*(4*(S[0]+S[1]-S[2]-S[3])+8*(V[27]*V[26]-V[29]*V[28])));
C[13]=+S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[29]-V[28]+V[27]-V[26]))))));
C[12]=+V[1]*(8*(S[0]+S[1]-S[2]-S[3])+16*(V[27]*V[26]-V[29]*V[28]));
C[11]=+S[7]*(S[4]*(V[1]*(4*(S[0]+S[1]-S[2]-S[3])+8*(V[27]*V[26]-V[29]*
 V[28]))));
C[10]=+S[7]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[29]-V[28]+V[27]-
 V[26])))))));
C[9]=+S[7]*(V[1]*(12*(S[0]+S[1]-S[2]-S[3])+24*(V[27]*V[26]-V[29]*V[28])));
C[8]=+S[7]*(V[1]*(8*(S[0]+S[1]-S[2]-S[3])+16*(V[27]*V[26]-V[29]*V[28])));
C[7]=+S[5]*(S[4]*(V[1]*(V[26]*(2*V[27]-V[26])+V[28]*(V[28]-2*V[29])+S[0]-
 S[2])));
C[6]=+S[5]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(3*(V[29]-V[28]+V[27]-
 V[26])))))));
C[5]=+S[7]*(S[4]*(V[1]*(2*(S[0]+S[1]-S[2]-S[3])+4*(V[27]*V[26]-V[29]*
 V[28]))));
C[4]=+S[7]*(S[6]*(V[2]*(V[12]*(V[30]*(V[36]*(6*(V[29]-V[28]+V[27]-
 V[26])))))));
C[3]=+S[5]*(V[1]*(2*(S[0]+S[1]-S[2]-S[3])+4*(V[27]*V[26]-V[29]*V[28])));
C[2]=+S[7]*(V[1]*(4*(S[0]+S[1]-S[2]-S[3])+8*(V[27]*V[26]-V[29]*V[28])));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+6*S[8]*S[9];
S[10]=V[49]*V[49]*V[49];
S[11]=V[1]*V[1]*V[1];
C[0]=+S[10]*V[41]*S[4]*S[11];
}
REAL F767_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  d                 b             
                                 /!==>==============@==>==           
                                 |!  P5             |  P1            
                                 |!                 |                
                           n2    |!  n2             |                
                        /==>=====+!==>==\          H|-PA             
                        |  P3    |!  P3 |           |                
                        |        |!     |           |                
         b     t     W+ |  E2    |!  E2 |  W+    t  |  u             
       ==>==@==>==@-2>--@==<=====+!==<==@-->3-@==>==@==>==           
         P1 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2            
            |     |              |!           |                      
            |     |        b     |!  b        |                      
          W+|P7   \========>=====+!==>========/                      
            1              P6    |!  P6                              
            |                    |!                                  
         u  |              d     |!                                  
       ==>==@==============>=====/!                                  
         P2                P5     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[27];REAL S[1];REAL tmp[2];                                    
     
if(CalcConst) C767(C);
N=+C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[7]*(C[2]*(DP[0]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-
 DP[1]-DP[3]-DP[8]-DP[9])+S[0]*(-DP[10]-DP[14])+DP[5]*(DP[10]+DP[14]))+
 DP[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[0]-DP[5]))+
 DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[0]-DP[5])))+
 V[50]*(V[50]*(DP[11]*(C[8]*(DP[7]-DP[0])+C[9]*DP[6]-C[11]-C[10]*V[50])+
 DP[10]*(-C[5]-C[4]*V[50]))+C[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[10]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[6]*DP[10]+C[25]*DP[11])+DP[12]*(DP[2]*(C[8]*(DP[7]-DP[0])+
 C[9]*DP[6]-C[11])+DP[4]*(C[8]*(DP[7]-DP[0])+C[9]*DP[6]-C[11])+C[5]*(-DP[1]-
 DP[3]))+DP[13]*(DP[2]*(C[8]*(DP[7]-DP[0])+C[9]*DP[6]-C[11])+DP[4]*(C[8]*(
 DP[7]-DP[0])+C[9]*DP[6]-C[11])+C[5]*(-DP[1]-DP[3]))+DP[11]*(DP[5]*(C[8]*(
 DP[0]-DP[7])+C[11]-C[9]*DP[6])+C[23]*(DP[0]-DP[7])+C[26]-C[24]*DP[6])+
 DP[10]*(C[3]*(DP[0]-DP[6]-DP[7])+C[7]+C[5]*DP[5])+C[3]*DP[14]*DP[0]);
tmp[1]=+S[0]*(DP[12]*(DP[7]*(V[50]*(V[50]*(DP[3]*(C[12]*(DP[6]-DP[0]+DP[7])-
 C[14]-C[13]*V[50])+DP[4]*(C[15]*(DP[7]-DP[0])+C[17]*DP[6]-C[20]-C[19]*
 V[50])-C[12]*DP[9]*DP[0])+C[10]*(DP[1]+DP[4])+C[21]*DP[2]+C[4]*DP[3])+
 DP[0]*(C[8]*(DP[1]+DP[4]+DP[8])+C[2]*(DP[3]+DP[9])+C[16]*DP[2])+DP[6]*(-
 C[8]*DP[1]-C[18]*DP[2]-C[2]*DP[3]-C[9]*DP[4])+DP[7]*(C[8]*(-DP[1]-DP[4])-
 C[16]*DP[2]-C[2]*DP[3])+C[11]*(DP[1]+DP[4])+C[22]*DP[2]+C[5]*DP[3])+DP[0]*(
 DP[9]*(V[50]*(V[50]*(C[12]*(DP[0]-DP[6])+C[14]+C[13]*V[50])-C[4])+C[2]*(
 DP[6]-DP[0])-C[5])+DP[6]*(DP[4]*(C[2]-C[12]*S[0])+C[8]*(DP[2]+DP[8]))+
 DP[8]*(-C[11]-C[10]*V[50]-C[8]*DP[0]))+DP[6]*(DP[4]*(V[50]*(V[50]*(C[12]*
 DP[6]-C[14]-C[13]*V[50])+C[4])+C[5]-C[2]*DP[6])+DP[2]*(C[11]+C[10]*V[50]-
 C[8]*DP[6])))+DP[13]*(DP[7]*(DP[1]*(C[2]*(DP[0]-DP[6]-DP[7])+C[5]+C[4]*
 V[50])+DP[2]*(C[8]*(DP[0]-DP[7])+C[11]+C[10]*V[50]-C[9]*DP[6])+C[2]*DP[8]*
 DP[0])+DP[0]*(DP[8]*(C[2]*(DP[6]-DP[0])-C[5]-C[4]*V[50])+C[2]*DP[6]*DP[2])+
 DP[2]*(DP[6]*(C[5]+C[4]*V[50]-C[2]*DP[6]))));
R=+DP[5]*(DP[0]*(C[2]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*(-
 DP[2]-DP[4]-DP[8]-DP[9])+S[0]*(-DP[11]-DP[14])+DP[5]*(DP[11]+DP[14]))+
 DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[0]-DP[5])))+
 V[50]*(C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[0]-
 DP[5]))+DP[14]*(C[5]*V[50]-C[6]))+C[5]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*(C[3]*(DP[6]-DP[0])-C[7])+C[3]*DP[11]*
 DP[6])+DP[6]*(V[50]*(C[4]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[0]))+DP[11]*(V[50]*(C[2]*DP[6]-C[5])+C[6]))+DP[6]*(C[2]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[3]*DP[11])+
 C[5]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[7]*
 DP[11])+tmp[0])+tmp[1];
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}
