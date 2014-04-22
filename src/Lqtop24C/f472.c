/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F472_out;
static void C472(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9]*V[9]*V[9];
C[64]=+S[2]*(S[1]*(2*(S[0]+S[1])));
S[3]=V[9]*V[9];
C[63]=+S[3]*(4*(S[1]*(S[0]+S[1]+S[3])+S[0]*S[3]));
C[62]=+S[3]*(S[1]*(4*(S[0]+S[3])));
S[4]=V[10]*V[10]*V[10]*V[10];
C[61]=+S[2]*(S[4]*(S[0]-S[1]));
C[60]=+S[3]*(S[1]*(2*(S[1]*(S[0]-S[1]-S[3])+S[0]*S[3])));
C[59]=+S[3]*(S[1]*(8*S[1]+12*S[3]));
C[58]=+S[2]*(S[1]*(2*S[0]-4*S[1]));
C[57]=+S[3]*(S[1]*(4*(S[0]-S[3])-8*S[1]));
C[56]=+S[3]*(16*S[1]+8*S[3]);
C[55]=+4*S[4]*S[2];
C[54]=+S[3]*(S[1]*(8*S[1]+4*S[3]));
C[53]=+8*S[1]*S[2];
C[52]=+16*S[4];
C[51]=+S[4]*(S[3]*(4*(S[0]-S[1])));
C[50]=+48*S[1]*S[3];
C[49]=+S[1]*(4*(S[1]*(S[0]-S[1]-S[3])+S[0]*S[3]));
C[48]=+S[1]*(16*S[1]+24*S[3]);
C[47]=+48*S[1];
C[46]=+S[3]*(S[1]*(8*S[0]-16*S[1]));
C[45]=+S[1]*(8*(S[0]-S[3])-16*S[1]);
C[44]=+S[3]*(S[1]*(8*(S[0]+S[1])));
C[43]=+S[3]*(16*(S[0]+S[1]));
C[42]=+8*(S[1]*(S[0]+S[1]+S[3])+S[0]*S[3]);
C[41]=+16*(S[0]+S[1]);
C[40]=+32*S[1]+16*S[3];
C[39]=+16*S[4]*S[3];
C[38]=+S[1]*(8*(S[0]+S[3]));
C[37]=+S[1]*(16*S[1]+8*S[3]);
C[36]=+32*S[1]*S[3];
C[35]=+32*S[1];
C[34]=+S[3]*(S[1]*(8*(S[0]-S[1])));
C[33]=+8*S[0]*S[4]*S[3];
C[32]=+16*S[0]*S[1]*S[3];
C[31]=+32*S[3];
C[30]=+S[1]*(8*(S[0]-S[1]));
C[29]=+S[1]*(S[0]*(8*(S[1]+S[3])));
C[28]=+S[1]*(8*(S[0]-S[3]));
C[27]=+16*S[1];
C[26]=+16*S[0]*S[1];
C[25]=+16*(S[1]+S[3]);
C[24]=+8*S[0]*S[1];
C[23]=+S[4]*(S[3]*(2*(S[0]-S[1])));
C[22]=+24*S[1]*S[3];
C[21]=+S[3]*(S[1]*(4*S[0]-8*S[1]));
C[20]=+S[3]*(S[1]*(4*(S[0]+S[1])));
C[19]=+S[3]*(8*(S[0]+S[1]));
C[18]=+8*S[4]*S[3];
C[17]=+16*S[1]*S[3];
C[16]=+S[2]*(S[1]*(2*(S[0]-S[1])));
C[15]=+S[3]*(S[1]*(4*(S[0]-S[1])));
C[14]=+2*S[0]*S[4]*S[2];
C[13]=+S[3]*(S[1]*(S[0]*(4*(S[1]+S[3]))));
C[12]=+S[3]*(S[1]*(4*(S[0]-S[3])));
C[11]=+4*S[0]*S[4]*S[3];
C[10]=+4*S[0]*S[1]*S[2];
C[9]=+8*S[0]*S[1]*S[3];
C[8]=+4*S[1]*S[2];
C[7]=+S[3]*(8*(S[1]+S[3]));
C[6]=+8*S[1]*S[3];
C[5]=+2*S[0]*S[1]*S[2];
C[4]=+8*S[2];
C[3]=+4*S[0]*S[1]*S[3];
C[2]=+16*S[3];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[49]*V[49];
S[7]=V[48]*V[48];
S[8]=V[44]*V[44];
S[9]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8]*S[9];
}
REAL F472_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         D                 C      !  C                 D             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
          W+|P7         /==>======!==>==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         s  |  t     W+ |  E2     !  E2 |  W+    t  |  s             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[65];REAL S[2];REAL tmp[4];                                    
     
if(CalcConst) C472(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[12]*(S[1]*(DP[7]*(S[1]*(S[1]*(32*(DP[4]-DP[9]))+C[31]*(DP[8]-
 DP[2])+C[27]*DP[3]-C[25]*DP[4]+C[2]*DP[9])+DP[4]*(C[35]*(DP[0]-DP[6])+
 C[37]+C[2]*DP[5]-C[27]*DP[7])+DP[5]*(C[2]*(DP[2]-DP[8]-DP[9]))+C[17]*(
 DP[2]-DP[1])+C[24]*DP[9]-C[38]*DP[3])+DP[0]*(DP[4]*(C[47]*S[1]-C[48]-C[27]*
 DP[0]+C[35]*DP[6])+DP[9]*(-C[28]-C[27]*S[1])+C[24]*DP[3]-C[50]*DP[2]+C[17]*
 DP[8])+DP[6]*(DP[4]*(C[27]*(-S[1]-DP[6])-C[45])+C[26]*(DP[9]-DP[3])+C[17]*
 DP[2])+S[1]*(C[26]*(DP[9]-DP[3])-C[30]*DP[4])+C[32]*(DP[1]-DP[8])+C[29]*(
 DP[3]-DP[9])+C[34]*DP[2]+C[49]*DP[4])+DP[0]*(DP[2]*(C[36]*(-DP[6]-DP[7])+
 C[39]+C[17]*DP[0]+C[22]*DP[5])+DP[4]*(C[17]*(-DP[6]-DP[7])+C[18]+C[6]*
 DP[0]+C[22]*DP[5])+DP[5]*(C[6]*(-DP[8]-DP[9]))+C[9]*(DP[8]-DP[1])+C[3]*(
 DP[9]-DP[3]))+DP[7]*(C[6]*(DP[5]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[7]*DP[4])+
 DP[2]*(C[36]*DP[6]-C[39]+C[17]*DP[7])+DP[4]*(C[17]*DP[6]-C[18])+C[9]*(
 DP[1]-DP[8])+C[3]*(DP[3]-DP[9]))+DP[6]*(DP[2]*(C[46]-C[6]*DP[5]+C[17]*
 DP[6])+DP[4]*(C[6]*(DP[6]-DP[5])+C[21])+C[32]*(DP[1]-DP[8])+C[9]*(DP[3]-
 DP[9]))+DP[5]*(C[9]*(DP[8]-DP[1]-DP[3]+DP[9])+C[15]*(-DP[2]-DP[4]))+C[33]*(
 DP[8]-DP[1])+C[11]*(DP[9]-DP[3])-C[51]*DP[2]-C[23]*DP[4]);
tmp[1]=+DP[5]*(DP[7]*(S[1]*(C[2]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+C[56]*
 DP[11]-C[6]*DP[10]-C[7]*DP[14])+C[6]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+
 DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+C[17]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[8]*(DP[10]+DP[14])-
 C[53]*DP[11])+DP[0]*(C[17]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[1]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[1]-DP[5]))+C[53]*DP[11]-C[8]*DP[14])+DP[12]*(C[9]*(DP[1]+DP[3])+
 C[18]*(-DP[2]-DP[4])+C[15]*(-DP[8]-DP[9]))+DP[13]*(C[9]*(DP[1]+DP[3])+
 C[18]*(-DP[2]-DP[4])+C[15]*(-DP[8]-DP[9]))+S[1]*(C[9]*DP[10]-C[18]*DP[11]-
 C[15]*DP[14])+DP[5]*(C[18]*DP[11]-C[9]*DP[10]+C[15]*DP[14])+C[55]*DP[11]-
 C[10]*DP[10]+C[16]*DP[14]);
tmp[2]=+DP[0]*(S[1]*(DP[12]*(DP[7]*(S[1]*(S[1]*(32*(DP[9]-DP[4]))+C[31]*(
 DP[2]-DP[8])+C[40]*DP[4]-C[27]*DP[3]-C[25]*DP[9])+C[17]*(DP[1]-DP[4]+
 DP[8])+C[6]*(DP[3]+DP[9])-C[36]*DP[2])+DP[0]*(S[1]*(C[27]*DP[9]-C[35]*
 DP[4])+C[17]*(DP[4]-DP[8])+C[36]*DP[2]-C[6]*DP[9])+S[1]*(C[26]*DP[3]-C[52]*
 DP[4]-C[30]*DP[9])+C[39]*DP[2]-C[32]*DP[1]-C[9]*DP[3]+C[18]*DP[4]+C[34]*
 DP[8]+C[15]*DP[9])+DP[13]*(DP[7]*(S[1]*(C[2]*(DP[2]-DP[8]))+C[6]*(DP[1]+
 DP[8])-C[17]*DP[2])+DP[0]*(C[17]*DP[2]-C[6]*DP[8])+C[18]*DP[2]-C[9]*DP[1]+
 C[15]*DP[8]))+tmp[1])+DP[7]*(S[1]*(DP[5]*(DP[7]*(C[2]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[7]*DP[10])+C[19]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))-C[63]*
 DP[10])+DP[12]*(S[1]*(DP[3]*(S[1]*(C[41]-32*DP[7])+C[25]*DP[7]-C[42])+
 DP[1]*(C[31]*DP[7]-C[43]))+DP[1]*(C[44]-C[17]*DP[7])+DP[3]*(C[20]-C[6]*
 DP[7]))+DP[1]*(DP[13]*(S[1]*(C[2]*DP[7]-C[19])+C[20]-C[6]*DP[7])))+DP[5]*(
 DP[7]*(C[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-
 C[8]*DP[10])+C[20]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[64]*DP[10]));
tmp[3]=+DP[5]*(DP[6]*(DP[0]*(DP[12]*(DP[2]*(C[17]*(DP[6]+DP[7])-C[18]-C[6]*
 DP[0])+DP[4]*(C[17]*(DP[6]+DP[7])-C[18]-C[6]*DP[0])+C[3]*(DP[1]+DP[3]-
 DP[8]-DP[9]))+DP[13]*(DP[2]*(C[17]*(DP[6]+DP[7])-C[18]-C[6]*DP[0])+DP[4]*(
 C[17]*(DP[6]+DP[7])-C[18]-C[6]*DP[0])+C[3]*(DP[1]+DP[3]-DP[8]-DP[9]))+
 DP[11]*(DP[5]*(C[17]*(-DP[6]-DP[7])+C[18]+C[6]*DP[0])+C[53]*(-DP[6]-DP[7])+
 C[55]+C[8]*DP[0])+DP[5]*(C[3]*(DP[14]-DP[10]))+C[5]*(DP[14]-DP[10]))+DP[6]*
 (DP[12]*(C[9]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[2]*(-C[21]-C[6]*DP[6]-C[17]*
 DP[7])+DP[4]*(-C[21]-C[6]*DP[6]-C[17]*DP[7]))+DP[13]*(C[9]*(DP[8]-DP[1]-
 DP[3]+DP[9])+DP[2]*(-C[21]-C[6]*DP[6]-C[17]*DP[7])+DP[4]*(-C[21]-C[6]*
 DP[6]-C[17]*DP[7]))+DP[11]*(DP[5]*(C[21]+C[6]*DP[6]+C[17]*DP[7])+C[58]+
 C[8]*DP[6]+C[53]*DP[7])+DP[5]*(C[9]*(DP[10]-DP[14]))+C[10]*(DP[10]-
 DP[14]))+DP[7]*(C[3]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-
 DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(C[6]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[8]*DP[11])+C[18]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[5]*(DP[10]-DP[14])-C[55]*
 DP[11])+C[11]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[5]*(DP[14]-DP[10]))+C[23]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])+C[14]*(DP[14]-DP[10])-C[61]*DP[11]));
R=+S[1]*(DP[6]*(DP[5]*(DP[7]*(S[1]*(C[2]*(DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+
 S[1]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+C[6]*DP[10]-C[7]*DP[11]+C[4]*
 DP[14])+C[6]*(DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10])-
 DP[11]*DP[7])+DP[11]*(C[17]*(DP[0]-DP[6])+C[54])+C[3]*DP[14]-C[62]*DP[10])+
 DP[0]*(DP[11]*(C[22]*(S[1]-DP[5])+C[17]*DP[6]-C[59]-C[6]*DP[0])+DP[13]*(
 C[22]*(DP[2]+DP[4])+C[6]*(-DP[8]-DP[9]))+DP[14]*(C[6]*(DP[5]-S[1])-C[12])+
 C[3]*DP[10])+C[9]*(DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[10]*(DP[5]-S[1]-
 DP[6])+DP[14]*(S[1]-DP[5]+DP[6]))+DP[11]*(DP[6]*(C[6]*(DP[5]-S[1]-DP[6])-
 C[57])+C[15]*(DP[5]-S[1])+C[60])+DP[13]*(DP[2]*(-C[15]-C[6]*DP[6])+DP[4]*(-
 C[15]-C[6]*DP[6]))+C[13]*(DP[10]-DP[14]))+DP[13]*(DP[2]*(DP[7]*(S[1]*(C[6]-
 C[2]*S[1])+C[17]*(DP[6]-DP[0])+C[6]*DP[7]-C[18])+DP[0]*(C[18]-C[22]*S[1]+
 C[6]*DP[0]-C[17]*DP[6])+DP[6]*(C[6]*(S[1]+DP[6])+C[21])+C[15]*S[1]-C[23])+
 DP[8]*(S[1]*(C[6]*DP[0]-C[9]+C[2]*DP[7]*S[1])+C[3]*(DP[0]-DP[7])+C[11]-
 C[9]*DP[6])+DP[1]*(S[1]*(C[9]-C[6]*DP[7])+C[3]*(DP[7]-DP[0])+C[9]*DP[6]-
 C[11]))+tmp[0])+tmp[2])+tmp[3];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}