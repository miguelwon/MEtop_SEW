/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F633_out;
static void C633(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[9]*V[9]*V[9]*V[9];
S[1]=V[11]*V[11]*V[11]*V[11]*V[11]*V[11];
C[52]=+S[1]*(S[0]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26]))));
S[2]=V[17]*V[17];
S[3]=V[11]*V[11]*V[11]*V[11];
C[51]=+3*V[36]*V[30]*S[2]*V[12]*S[3]*S[0]*V[2];
S[4]=V[11]*V[11];
S[5]=V[9]*V[9];
C[50]=+S[5]*(S[4]*(V[1]*(4*(S[5]*(V[29]-V[28]-V[27]+V[26])+S[4]*(V[29]-
 V[28]-V[27]+V[26])))));
C[49]=+S[0]*(S[3]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26]))));
C[48]=+S[0]*(S[3]*(V[1]*(6*(V[29]-V[28]-V[27]+V[26]))));
C[47]=+6*V[36]*V[30]*S[2]*V[12]*S[4]*S[0]*V[2];
C[46]=+S[5]*(S[4]*(V[1]*(S[5]*(4*(V[28]-V[29]+V[27]-V[26]))+S[4]*(12*(V[29]-
 V[28]-V[27]+V[26])))));
C[45]=+S[5]*(S[2]*(V[2]*(V[12]*(V[30]*(V[36]*(12*S[4]-6*S[5]))))));
C[44]=+S[5]*(V[1]*(4*(S[5]*(V[28]-V[29]+V[27]-V[26])+S[4]*(V[29]-V[28]-
 V[27]+V[26]))));
C[43]=+S[5]*(V[1]*(S[5]*(4*(V[28]-V[29]+V[27]-V[26]))+S[4]*(8*(V[29]-V[28]-
 V[27]+V[26]))));
C[42]=+S[1]*(S[5]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26]))));
C[41]=+12*V[36]*V[30]*S[2]*V[12]*S[3]*S[5]*V[2];
C[40]=+S[1]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[39]=+12*V[36]*V[30]*S[2]*V[12]*S[3]*V[2];
C[38]=+S[4]*(V[1]*(8*(S[5]*(V[29]-V[28]-V[27]+V[26])+S[4]*(V[29]-V[28]-
 V[27]+V[26]))));
C[37]=+S[3]*(S[5]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26]))));
C[36]=+S[3]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[35]=+S[4]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[34]=+S[3]*(S[5]*(V[1]*(24*(V[29]-V[28]-V[27]+V[26]))));
C[33]=+24*V[36]*V[30]*S[2]*V[12]*S[4]*S[5]*V[2];
C[32]=+S[4]*(V[1]*(S[5]*(8*(V[28]-V[29]+V[27]-V[26]))+S[4]*(24*(V[29]-V[28]-
 V[27]+V[26]))));
C[31]=+S[2]*(V[2]*(V[12]*(V[30]*(V[36]*(24*S[4]-12*S[5])))));
C[30]=+V[1]*(8*(S[5]*(V[28]-V[29]+V[27]-V[26])+S[4]*(V[29]-V[28]-V[27]+
 V[26])));
C[29]=+V[1]*(S[5]*(8*(V[28]-V[29]+V[27]-V[26]))+S[4]*(16*(V[29]-V[28]-V[27]+
 V[26])));
C[28]=+S[5]*(S[4]*(V[1]*(16*(V[29]-V[28]-V[27]+V[26]))));
C[27]=+24*V[36]*V[30]*S[2]*V[12]*S[5]*V[2];
C[26]=+S[5]*(V[1]*(16*(V[29]-V[28]-V[27]+V[26])));
C[25]=+S[4]*(V[1]*(16*(V[29]-V[28]-V[27]+V[26])));
C[24]=+24*V[36]*V[30]*S[2]*V[12]*V[2];
C[23]=+V[1]*(8*(S[5]*(V[29]-V[28]-V[27]+V[26])+S[4]*(V[29]-V[28]-V[27]+
 V[26])));
C[22]=+12*V[36]*V[30]*S[2]*V[12]*V[2];
C[21]=+V[1]*(16*(V[29]-V[28]-V[27]+V[26]));
C[20]=+V[1]*(8*(V[29]-V[28]-V[27]+V[26]));
C[19]=+S[1]*(S[5]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[18]=+6*V[36]*V[30]*S[2]*V[12]*S[3]*S[5]*V[2];
C[17]=+S[3]*(S[5]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[16]=+S[3]*(S[5]*(V[1]*(12*(V[29]-V[28]-V[27]+V[26]))));
C[15]=+12*V[36]*V[30]*S[2]*V[12]*S[4]*S[5]*V[2];
C[14]=+S[0]*(S[4]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[13]=+6*V[36]*V[30]*S[2]*V[12]*S[0]*V[2];
C[12]=+S[5]*(S[4]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26]))));
C[11]=+12*V[36]*V[30]*S[2]*V[12]*S[5]*V[2];
C[10]=+S[0]*(S[4]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26]))));
C[9]=+3*V[36]*V[30]*S[2]*V[12]*S[0]*V[2];
C[8]=+S[5]*(V[1]*(4*(S[5]*(V[29]-V[28]-V[27]+V[26])+S[4]*(V[29]-V[28]-V[27]+
 V[26]))));
C[7]=+S[5]*(S[4]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26]))));
C[6]=+6*V[36]*V[30]*S[2]*V[12]*S[5]*V[2];
C[5]=+S[0]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26])));
C[4]=+S[5]*(V[1]*(8*(V[29]-V[28]-V[27]+V[26])));
C[3]=+S[0]*(V[1]*(2*(V[29]-V[28]-V[27]+V[26])));
C[2]=+S[5]*(V[1]*(4*(V[29]-V[28]-V[27]+V[26])));
S[6]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+12*S[2]*S[6];
S[7]=V[49]*V[49];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[7]*V[48]*V[42]*S[4]*S[8];
}
REAL F633_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  s                 s             
                                 /!==>==============@==>==           
                                 |!  P5             |  P1            
                                 |!                 |                
                           n2    |!  n2             |                
                        /==>=====+!==>==\          H|-PA             
                        |  P3    |!  P3 |           |                
                        |        |!     |           |                
         s     t     W+ |  E2    |!  E2 |  W+    t  |  u             
       ==>==@==>==@-2>--@==<=====+!==<==@-->3-@==>==@==>==           
         P1 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2            
            |     |              |!           |                      
            |     |        b     |!  b        |                      
          W+|P7   \========>=====+!==>========/                      
            1              P6    |!  P6                              
            |                    |!                                  
         u  |              s     |!                                  
       ==>==@==============>=====/!                                  
         P2                P5     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[53];REAL S[5];REAL tmp[8];                                    
     
if(CalcConst) C633(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(V[50]*(V[50]*(V[50]*(C[21]*(DP[3]*(DP[6]-DP[0]+DP[7])+DP[4]*(
 DP[6]+DP[7])-DP[9]*DP[0])+V[50]*(C[24]*(-DP[3]-DP[4]))+C[25]*(-DP[3]-
 DP[4]))+C[22]*(DP[3]*(DP[0]-DP[6]-DP[7])+DP[9]*DP[0]-DP[6]*DP[4])+C[27]*(
 DP[1]+DP[2])+C[11]*DP[3]-C[31]*DP[4])+DP[0]*(C[21]*(DP[6]*(-DP[3]-DP[4]-
 DP[9])+DP[9]*DP[0]-DP[7]*DP[3])+DP[3]*(C[23]+C[20]*DP[0])+DP[9]*(C[23]-
 C[20]*DP[7])+C[26]*(DP[1]+DP[8])-C[25]*DP[4])+DP[6]*(DP[3]*(C[20]*DP[6]-
 C[23]+C[21]*DP[7])+DP[4]*(C[30]+C[21]*DP[6]+C[20]*DP[7])+C[26]*(-DP[1]-
 DP[2]))+DP[7]*(DP[3]*(C[20]*DP[7]-C[23])+C[26]*(-DP[1]-DP[2])+C[29]*DP[4])+
 C[28]*(DP[1]+DP[2])+C[12]*DP[3]-C[32]*DP[4])+C[11]*(DP[1]*(DP[6]-DP[0]-
 DP[5]+DP[7])+DP[5]*(-DP[2]-DP[3]-DP[4])+DP[6]*DP[2]-DP[8]*DP[0])+C[6]*(
 DP[3]*(DP[6]-DP[0]+DP[7])+DP[6]*DP[4]-DP[9]*DP[0])+C[33]*DP[2]+C[15]*
 DP[4]);
S[1]=V[50]*V[50];
S[2]=DP[0]*DP[0];
S[3]=DP[6]*DP[6];
S[4]=DP[7]*DP[7];
tmp[1]=+DP[5]*(C[4]*(DP[0]*(DP[10]*(DP[5]-S[1]-DP[6]-DP[7])+DP[13]*(-DP[1]-
 DP[3]-DP[8]-DP[9])+DP[14]*(DP[0]-S[1]+DP[5]-DP[6])-DP[11]*DP[6])+DP[6]*(
 DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[10]*(S[1]-DP[5]+DP[7])+DP[11]*(S[1]-
 DP[5]+DP[6]))+DP[7]*(DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+
 DP[5]*(-DP[10]-DP[11])))+V[50]*(C[11]*(DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 S[1]*(-DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]))+DP[10]*(C[6]*(DP[0]-DP[6]-
 DP[7])+C[13]-C[12]*V[50])+DP[11]*(-C[45]-C[12]*V[50]-C[6]*DP[6])+C[6]*
 DP[14]*DP[0])+DP[10]*(C[8]*(DP[0]-DP[6]-DP[7])+C[2]*(S[2]+S[3]+S[4])+C[14]+
 C[12]*DP[5])+DP[11]*(DP[6]*(C[44]+C[2]*DP[7])+C[12]*(DP[5]-DP[0])+C[43]*
 DP[7]-C[46])+DP[13]*(C[12]*(-DP[1]-DP[2]-DP[3]-DP[4]))+DP[0]*(DP[14]*(C[8]-
 C[2]*DP[7])))+DP[13]*(DP[1]*(V[50]*(V[50]*(C[4]*(DP[0]-DP[6]-DP[7])+C[12]+
 C[11]*V[50])+C[6]*(DP[6]-DP[0]+DP[7]))+DP[0]*(C[4]*(DP[6]+DP[7])-C[7]-C[2]*
 DP[0])+DP[6]*(C[7]-C[2]*DP[6]-C[4]*DP[7])+DP[7]*(C[7]-C[2]*DP[7]))+DP[2]*(
 V[50]*(V[50]*(C[4]*(-DP[6]-DP[7])+C[12]+C[11]*V[50])+C[15]+C[6]*DP[6])+
 DP[6]*(C[4]*(DP[0]-DP[6])-C[7]-C[2]*DP[7])+C[12]*(DP[0]-DP[7])+C[16])+
 DP[0]*(DP[8]*(C[4]*(S[1]-DP[0]+DP[6])+C[2]*DP[7]-C[7]-C[6]*V[50])));
tmp[2]=+V[50]*(V[50]*(DP[12]*(V[50]*(V[50]*(DP[4]*(C[21]*(DP[6]-DP[0])-
 C[25]-C[24]*V[50])+DP[9]*(C[21]*(DP[0]-DP[6])+C[25]+C[24]*V[50]))+DP[9]*(
 C[22]*(DP[6]-DP[0])-C[11])+DP[4]*(C[11]+C[22]*DP[6])+C[27]*(DP[2]-DP[8]))+
 DP[6]*(DP[4]*(C[30]+C[20]*DP[0]-C[21]*DP[6])+DP[9]*(C[23]+C[21]*DP[0]-
 C[20]*DP[6])+C[26]*(DP[8]-DP[2]))+DP[0]*(DP[9]*(-C[23]-C[20]*DP[0])+C[26]*(
 DP[2]-DP[8])+C[4]*DP[4])+C[28]*(DP[2]-DP[8])+C[38]*DP[4]-C[12]*DP[9])+
 DP[5]*(DP[11]*(C[4]*(DP[6]-DP[0])-C[12]-C[11]*V[50])+DP[14]*(C[4]*(DP[0]-
 DP[6])+C[12]+C[11]*V[50]))+DP[13]*(DP[2]*(C[4]*(DP[0]-DP[6])+C[12]+C[11]*
 V[50])+DP[8]*(C[4]*(DP[6]-DP[0])-C[12]-C[11]*V[50])))+DP[5]*(C[11]*(DP[12]*
 (DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+DP[14]*(C[6]*(DP[6]-DP[0])-C[13])+DP[11]*(C[13]+C[6]*DP[6]))+
 DP[6]*(DP[12]*(C[11]*(-DP[2]-DP[8])+C[6]*(-DP[4]-DP[9]))+DP[13]*(C[6]*(-
 DP[2]-DP[8])))+DP[0]*(DP[8]*(C[11]*DP[12]+C[6]*DP[13])+C[6]*DP[12]*DP[9]));
tmp[3]=+DP[0]*(DP[5]*(C[4]*(DP[6]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11])+DP[14]*DP[0]-DP[11]*DP[6])+
 DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[5]*(DP[11]-DP[14])))+C[12]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[14]*(DP[0]*(-C[8]-C[2]*
 DP[0])+DP[6]*(C[8]-C[2]*DP[6])-C[14])+DP[11]*(DP[0]*(C[5]+C[2]*DP[6])+
 C[50]+C[44]*DP[6]))+DP[6]*(DP[12]*(DP[0]*(C[4]*(-DP[2]-DP[9])-C[2]*DP[4]-
 C[26]*DP[8])+DP[6]*(C[4]*(DP[4]+DP[8])+C[26]*DP[2]+C[2]*DP[9])+C[12]*(-
 DP[2]-DP[8])+C[7]*(-DP[4]-DP[9]))+DP[13]*(DP[2]*(C[4]*DP[6]-C[7]-C[2]*
 DP[0])+DP[8]*(C[2]*DP[6]-C[7]-C[4]*DP[0])))+DP[0]*(DP[8]*(DP[0]*(C[4]*
 DP[12]+C[2]*DP[13])+C[12]*DP[12]+C[7]*DP[13])+DP[9]*(DP[12]*(C[7]+C[2]*
 DP[0])))+DP[2]*(-C[37]*DP[12]-C[17]*DP[13])-C[17]*DP[12]*DP[4]+tmp[2]);
tmp[4]=+V[50]*(DP[7]*(DP[12]*(DP[0]*(C[4]*(DP[5]*(-DP[1]-DP[3]-DP[8]-DP[9])+
 DP[6]*(DP[3]+DP[4]+DP[9])+DP[0]*(-DP[1]-DP[9])+DP[7]*(DP[3]+DP[8]))+C[26]*(
 DP[6]*(DP[1]+DP[2]+DP[8])+DP[7]*DP[1]-DP[8]*DP[0])+C[12]*(DP[4]-DP[1]-
 DP[8])+DP[3]*(-C[7]-C[2]*DP[0])+DP[9]*(C[2]*DP[7]-C[7])+C[28]*DP[2])+DP[6]*
 (C[4]*(DP[5]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[6]*(-DP[1]-DP[4])+DP[7]*(-DP[2]-
 DP[3]))+DP[1]*(C[12]-C[26]*DP[7])+DP[2]*(-C[12]-C[26]*DP[6])+DP[3]*(C[7]-
 C[2]*DP[6])+DP[4]*(-C[7]-C[2]*DP[7]))+DP[7]*(C[4]*(DP[5]*(DP[1]+DP[2]+
 DP[3]+DP[4])-DP[7]*DP[1])+DP[3]*(C[7]-C[2]*DP[7])+C[12]*(DP[1]-DP[4])-
 C[28]*DP[2])+DP[5]*(C[12]*(-DP[1]-DP[2]-DP[3]-DP[4]))+C[34]*DP[2]+C[16]*
 DP[4]+tmp[0])+tmp[1])+DP[6]*(DP[6]*(DP[12]*(DP[4]*(V[50]*(V[50]*(C[20]*
 DP[6]-C[35]-C[22]*V[50])+C[6])+C[7]-C[2]*DP[6])+DP[2]*(C[12]+C[11]*V[50]-
 C[4]*DP[6]))+DP[2]*(DP[13]*(C[7]+C[6]*V[50]-C[2]*DP[6]))+DP[5]*(DP[11]*(
 C[2]*DP[6]-C[7]-C[6]*V[50])))+DP[12]*(DP[4]*(C[17]-C[36]*S[1])+C[37]*
 DP[2])+C[17]*(DP[13]*DP[2]-DP[11]*DP[5]))+V[50]*(DP[12]*(DP[4]*(V[50]*(
 C[40]+C[39]*V[50])-C[18])-C[41]*DP[2])+C[18]*(DP[11]*DP[5]-DP[13]*DP[2]))+
 C[19]*(DP[11]*DP[5]-DP[12]*DP[4]-DP[13]*DP[2])-C[42]*DP[12]*DP[2]+tmp[3]);
tmp[5]=+DP[6]*(DP[6]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[4]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])-C[3]*DP[10]-C[5]*DP[11])+DP[7]*(C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])-C[5]*DP[10]-C[3]*DP[11])+C[7]*(DP[12]*(DP[2]-DP[1]-
 DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[5]*(DP[10]-DP[11]))+C[10]*
 (DP[10]-DP[11]))+DP[7]*(DP[7]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])-C[3]*DP[10])+C[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[12]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])+C[10]*DP[10]-C[14]*DP[11])+C[16]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[48]*DP[11];
tmp[6]=+DP[0]*(DP[6]*(DP[0]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])-C[3]*DP[11]-C[5]*DP[14])+DP[6]*(C[4]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+C[5]*DP[11]+C[3]*DP[14])+C[7]*(DP[12]*(DP[2]+
 DP[4]+DP[8]+DP[9])+DP[13]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-
 DP[14]))+C[10]*(-DP[11]-DP[14]))+DP[0]*(DP[0]*(C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[3]*DP[14])+C[7]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[10]*DP[14])+C[17]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[49]*DP[11])+
 DP[6]*(DP[6]*(DP[6]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[3]*DP[11])+C[7]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[10]*DP[11])+C[17]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+C[49]*DP[11])+C[19]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[52]*DP[11];
tmp[7]=+V[50]*(DP[5]*(C[6]*(DP[0]*(DP[6]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+
 DP[13]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+DP[7]*(DP[12]*(
 DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-
 DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5]))+DP[6]*(DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+S[4]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5]))+DP[7]*(C[9]*(DP[10]*(DP[6]-DP[0]+DP[7])+
 DP[11]*DP[6]-DP[14]*DP[0])+C[15]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[47]*DP[11])+C[18]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+C[9]*(DP[0]*(DP[6]*(-DP[11]-DP[14])+DP[14]*
 DP[0])+DP[11]*S[3])-C[51]*DP[11])+tmp[4]);
R=+DP[5]*(DP[7]*(DP[0]*(C[4]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4]-DP[8]-
 DP[9])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[11]+
 DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+
 DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5]))+DP[12]*
 (C[7]*(DP[1]+DP[3]+DP[8]+DP[9])+C[2]*(DP[0]*(DP[1]+DP[3])+DP[7]*(-DP[8]-
 DP[9]))+C[12]*(-DP[2]-DP[4]))+DP[13]*(C[7]*(DP[1]+DP[3]+DP[8]+DP[9])+C[2]*(
 DP[0]*(DP[1]+DP[3])+DP[7]*(-DP[8]-DP[9]))+C[12]*(-DP[2]-DP[4]))+DP[10]*(
 DP[0]*(-C[3]-C[2]*DP[5])+C[5]*(DP[6]+DP[7])-C[10]-C[7]*DP[5])+DP[14]*(
 DP[5]*(C[2]*DP[7]-C[7])+C[5]*(DP[6]-DP[0])+C[3]*DP[7]-C[10])+DP[11]*(C[14]+
 C[12]*DP[5]+C[5]*DP[6]))+tmp[5])+tmp[6])+tmp[7];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
 if(cb_coeff_out)
 {
 }
 return R;
}
