/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F388_out;
static void C388(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[14]*V[14];
S[1]=V[10]*V[10];
S[2]=V[9]*V[9]*V[9]*V[9];
C[64]=+S[2]*(S[1]*(2*(S[0]+S[1])));
S[3]=V[9]*V[9];
C[63]=+S[3]*(4*(S[1]*(S[0]+S[1]+S[3])+S[0]*S[3]));
C[62]=+S[3]*(S[1]*(4*(S[0]+S[3])));
S[4]=V[10]*V[10]*V[10]*V[10];
C[61]=+2*S[0]*S[4]*S[2];
C[60]=+S[3]*(S[1]*(S[0]*(4*(S[1]+S[3]))));
C[59]=+4*S[0]*S[1]*S[2];
C[58]=+S[2]*(S[1]*(2*(S[0]-S[1])));
C[57]=+S[3]*(S[1]*(4*(S[0]-S[3])));
C[56]=+2*S[0]*S[1]*S[2];
C[55]=+8*S[2];
C[54]=+8*S[0]*S[4]*S[3];
C[53]=+S[1]*(S[0]*(8*(S[1]+S[3])));
C[52]=+16*S[0]*S[1]*S[3];
C[51]=+16*S[0]*S[1];
C[50]=+S[1]*(8*(S[0]-S[3]));
C[49]=+S[3]*(S[1]*(8*(S[0]+S[1])));
C[48]=+S[3]*(16*(S[0]+S[1]));
C[47]=+8*(S[1]*(S[0]+S[1]+S[3])+S[0]*S[3]);
C[46]=+16*(S[0]+S[1]);
C[45]=+S[1]*(8*(S[0]+S[3]));
C[44]=+8*S[0]*S[1];
C[43]=+S[4]*(S[3]*(4*(S[0]-S[1])));
C[42]=+S[3]*(S[1]*(8*(S[0]-S[1])));
C[41]=+S[3]*(S[1]*(8*S[0]-16*S[1]));
C[40]=+48*S[1]*S[3];
C[39]=+16*S[4]*S[3];
C[38]=+32*S[3];
C[37]=+32*S[1]*S[3];
C[36]=+S[1]*(4*(S[1]*(S[0]-S[1]-S[3])+S[0]*S[3]));
C[35]=+S[1]*(8*(S[0]-S[1]));
C[34]=+S[1]*(8*(S[0]-S[3])-16*S[1]);
C[33]=+16*S[4];
C[32]=+S[1]*(16*S[1]+24*S[3]);
C[31]=+48*S[1];
C[30]=+S[1]*(16*S[1]+8*S[3]);
C[29]=+16*(S[1]+S[3]);
C[28]=+32*S[1]+16*S[3];
C[27]=+32*S[1];
C[26]=+16*S[1];
C[25]=+4*S[0]*S[4]*S[3];
C[24]=+8*S[0]*S[1]*S[3];
C[23]=+S[3]*(S[1]*(4*(S[0]+S[1])));
C[22]=+S[3]*(8*(S[0]+S[1]));
C[21]=+4*S[0]*S[1]*S[3];
C[20]=+S[2]*(S[4]*(S[0]-S[1]));
C[19]=+S[3]*(S[1]*(2*(S[1]*(S[0]-S[1]-S[3])+S[0]*S[3])));
C[18]=+S[2]*(S[1]*(2*S[0]-4*S[1]));
C[17]=+S[3]*(S[1]*(4*(S[0]-S[3])-8*S[1]));
C[16]=+S[4]*(S[3]*(2*(S[0]-S[1])));
C[15]=+S[3]*(S[1]*(4*(S[0]-S[1])));
C[14]=+S[3]*(S[1]*(4*S[0]-8*S[1]));
C[13]=+S[3]*(S[1]*(8*S[1]+12*S[3]));
C[12]=+24*S[1]*S[3];
C[11]=+4*S[4]*S[2];
C[10]=+S[3]*(S[1]*(8*S[1]+4*S[3]));
C[9]=+S[3]*(8*(S[1]+S[3]));
C[8]=+8*S[4]*S[3];
C[7]=+S[3]*(16*S[1]+8*S[3]);
C[6]=+8*S[1]*S[2];
C[5]=+16*S[3];
C[4]=+16*S[1]*S[3];
C[3]=+4*S[1]*S[2];
C[2]=+8*S[1]*S[3];
S[5]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[5];
S[6]=V[49]*V[49]*V[49]*V[49];
S[7]=V[44]*V[44];
S[8]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F388_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   d                       N2     !  N2                      d       
 ==>==\                 /==<======!==<==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   C  |  W+    t     W+ |  e2     !  e2 |  W+    t     W+ |  C       
 ==<==@-1<--@==<==@-2<--@==>======!==>==@--<4-@==<==@--<3-@==<==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        B      !  B        |     |                
            |     \========<======!==<========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              b      !  b              |                
            \==============>======!==>==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[65];REAL S[2];REAL tmp[4];                                    
     
if(CalcConst) C388(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[12]*(S[1]*(DP[7]*(S[1]*(S[1]*(32*(DP[9]-DP[4]))+C[38]*(DP[2]-
 DP[8])+C[5]*DP[4]-C[26]*DP[3]-C[29]*DP[9])+DP[9]*(C[27]*(DP[0]-DP[6])+
 C[30]+C[5]*DP[5]-C[26]*DP[7])+DP[5]*(C[5]*(DP[8]-DP[2]-DP[4]))+C[4]*(DP[1]+
 DP[8])+C[45]*DP[3]+C[44]*DP[4])+DP[6]*(DP[9]*(C[32]-C[31]*S[1]+C[27]*DP[0]-
 C[26]*DP[6])+DP[4]*(C[50]+C[26]*S[1])+C[44]*DP[3]-C[4]*DP[2]+C[40]*DP[8])+
 DP[0]*(DP[9]*(C[26]*(S[1]-DP[0])+C[34])+C[51]*(-DP[3]-DP[4])-C[4]*DP[8])+
 S[1]*(C[51]*(DP[3]+DP[4])-C[35]*DP[9])+C[52]*(-DP[1]-DP[2])+C[53]*(-DP[3]-
 DP[4])+C[42]*DP[8]+C[36]*DP[9])+DP[5]*(C[2]*(DP[7]*(-DP[1]-DP[3]-DP[8]-
 DP[9])+DP[0]*(DP[8]+DP[9])+DP[6]*(DP[2]+DP[4]))+C[24]*(DP[1]+DP[2]+DP[3]+
 DP[4])+DP[6]*(C[12]*(-DP[8]-DP[9]))+C[15]*(-DP[8]-DP[9]))+DP[0]*(DP[8]*(
 C[37]*(-DP[6]-DP[7])+C[4]*DP[0]-C[41])+DP[9]*(C[4]*(-DP[6]-DP[7])+C[2]*
 DP[0]-C[14])+C[52]*(DP[1]+DP[2])+C[24]*(DP[3]+DP[4]))+DP[6]*(DP[8]*(C[4]*
 DP[6]-C[39]+C[37]*DP[7])+DP[9]*(C[2]*DP[6]-C[8]+C[4]*DP[7])+C[24]*(-DP[1]-
 DP[2])+C[21]*(-DP[3]-DP[4]))+DP[7]*(DP[7]*(C[4]*DP[8]+C[2]*DP[9])+C[24]*(-
 DP[1]-DP[2])+C[21]*(-DP[3]-DP[4])-C[39]*DP[8]-C[8]*DP[9])+C[54]*(DP[1]+
 DP[2])+C[25]*(DP[3]+DP[4])-C[43]*DP[8]-C[16]*DP[9]);
tmp[1]=+DP[5]*(DP[7]*(S[1]*(C[5]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+S[1]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+C[2]*
 DP[10]-C[9]*DP[11]+C[7]*DP[14])+C[2]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+
 DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+C[4]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[3]*(DP[11]-DP[10])-
 C[6]*DP[14])+DP[6]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[1]))+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[1]-DP[5]))+C[3]*DP[11]-C[6]*DP[14])+DP[12]*(C[24]*(-DP[1]-DP[3])+
 C[15]*(-DP[2]-DP[4])+C[8]*(-DP[8]-DP[9]))+DP[13]*(C[24]*(-DP[1]-DP[3])+
 C[15]*(-DP[2]-DP[4])+C[8]*(-DP[8]-DP[9]))+S[1]*(-C[24]*DP[10]-C[15]*DP[11]-
 C[8]*DP[14])+DP[5]*(C[24]*DP[10]+C[15]*DP[11]+C[8]*DP[14])+C[59]*DP[10]+
 C[58]*DP[11]+C[11]*DP[14]);
tmp[2]=+DP[6]*(S[1]*(DP[12]*(DP[7]*(S[1]*(S[1]*(32*(DP[4]-DP[9]))+C[38]*(
 DP[8]-DP[2])+C[26]*DP[3]-C[29]*DP[4]+C[28]*DP[9])+C[4]*(DP[2]-DP[1]-DP[9])+
 C[2]*(DP[4]-DP[3])-C[37]*DP[8])+DP[6]*(S[1]*(C[27]*DP[9]-C[26]*DP[4])+C[4]*
 (DP[2]-DP[9])+C[2]*DP[4]-C[37]*DP[8])+S[1]*(-C[51]*DP[3]-C[35]*DP[4]-C[33]*
 DP[9])+C[52]*DP[1]+C[42]*DP[2]+C[24]*DP[3]+C[15]*DP[4]+C[39]*DP[8]+C[8]*
 DP[9])+DP[13]*(DP[7]*(S[1]*(C[5]*(DP[8]-DP[2]))+C[2]*(DP[2]-DP[1])-C[4]*
 DP[8])+DP[2]*(C[15]+C[2]*DP[6])+DP[8]*(C[8]-C[4]*DP[6])+C[24]*DP[1]))+
 tmp[1])+DP[7]*(S[1]*(DP[5]*(DP[7]*(C[5]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[9]*DP[10])+C[22]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))-C[63]*DP[10])+DP[12]*(
 S[1]*(DP[3]*(S[1]*(C[46]-32*DP[7])+C[29]*DP[7]-C[47])+DP[1]*(C[38]*DP[7]-
 C[48]))+DP[1]*(C[49]-C[4]*DP[7])+DP[3]*(C[23]-C[2]*DP[7]))+DP[1]*(DP[13]*(
 S[1]*(C[5]*DP[7]-C[22])+C[23]-C[2]*DP[7])))+DP[5]*(DP[7]*(C[2]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[3]*DP[10])+C[23]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[64]*DP[10]));
tmp[3]=+DP[0]*(DP[5]*(DP[0]*(DP[12]*(DP[8]*(C[4]*(DP[6]+DP[7])+C[14]-C[2]*
 DP[0])+DP[9]*(C[4]*(DP[6]+DP[7])+C[14]-C[2]*DP[0])+C[24]*(-DP[1]-DP[2]-
 DP[3]-DP[4]))+DP[13]*(DP[8]*(C[4]*(DP[6]+DP[7])+C[14]-C[2]*DP[0])+DP[9]*(
 C[4]*(DP[6]+DP[7])+C[14]-C[2]*DP[0])+C[24]*(-DP[1]-DP[2]-DP[3]-DP[4]))+
 DP[14]*(DP[5]*(C[4]*(-DP[6]-DP[7])+C[2]*DP[0]-C[14])+C[6]*(-DP[6]-DP[7])+
 C[3]*DP[0]-C[18])+DP[5]*(C[24]*(DP[10]+DP[11]))+C[59]*(DP[10]+DP[11]))+
 DP[6]*(DP[12]*(C[21]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[8]*(C[8]-C[2]*DP[6]-C[4]*
 DP[7])+DP[9]*(C[8]-C[2]*DP[6]-C[4]*DP[7]))+DP[13]*(C[21]*(DP[1]+DP[2]+
 DP[3]+DP[4])+DP[8]*(C[8]-C[2]*DP[6]-C[4]*DP[7])+DP[9]*(C[8]-C[2]*DP[6]-
 C[4]*DP[7]))+DP[14]*(DP[5]*(C[2]*DP[6]-C[8]+C[4]*DP[7])+C[3]*DP[6]-C[11]+
 C[6]*DP[7])+DP[5]*(C[21]*(-DP[10]-DP[11]))+C[56]*(-DP[10]-DP[11]))+DP[7]*(
 C[21]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[5]*(-DP[10]-DP[11]))+DP[7]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+C[3]*DP[14])+C[8]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5])+C[56]*(-DP[10]-DP[11])-C[11]*DP[14])+C[25]*(
 DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(
 DP[10]+DP[11]))+C[16]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[61]*(DP[10]+DP[11])-C[20]*DP[14]));
R=+S[1]*(DP[0]*(DP[5]*(DP[7]*(S[1]*(C[5]*(DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+
 S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+C[55]*DP[11]-C[2]*DP[10]-C[9]*
 DP[14])+C[2]*(DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14])-
 DP[14]*DP[7])+DP[14]*(C[4]*(DP[0]-DP[6])+C[10])+C[62]*DP[10]+C[21]*DP[11])+
 DP[6]*(DP[14]*(C[12]*(DP[5]-S[1])+C[13]+C[4]*DP[0]-C[2]*DP[6])+DP[13]*(
 C[2]*(DP[2]+DP[4])+C[12]*(-DP[8]-DP[9]))+DP[11]*(C[2]*(S[1]-DP[5])+C[57])+
 C[21]*DP[10])+C[24]*(DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[10]*(S[1]-DP[0]-
 DP[5])+DP[11]*(S[1]-DP[0]-DP[5]))+DP[14]*(DP[0]*(C[2]*(S[1]-DP[0]-DP[5])+
 C[17])+C[15]*(DP[5]-S[1])+C[19])+DP[13]*(DP[0]*(C[2]*(DP[8]+DP[9]))+C[15]*
 (-DP[8]-DP[9]))+C[60]*(-DP[10]-DP[11]))+DP[13]*(DP[8]*(DP[7]*(S[1]*(C[2]-
 C[5]*S[1])+C[4]*(DP[6]-DP[0])+C[2]*DP[7]-C[8])+DP[0]*(C[2]*(DP[0]-S[1])-
 C[14]-C[4]*DP[6])+DP[6]*(C[12]*S[1]-C[8]+C[2]*DP[6])+C[15]*S[1]-C[16])+
 DP[2]*(S[1]*(C[5]*DP[7]*S[1]-C[24]-C[2]*DP[6])+C[21]*(-DP[6]-DP[7])+C[25]+
 C[24]*DP[0])+DP[1]*(S[1]*(C[2]*DP[7]-C[24])+C[21]*(-DP[6]-DP[7])+C[25]+
 C[24]*DP[0]))+tmp[0])+tmp[2])+tmp[3];
R*=(N/D)*Q2[1]*Q2[2]*Q2[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
