/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F739_out;
static void C739(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9]*V[9]*V[9];
C[33]=+S[1]*(S[0]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
S[2]=V[17]*V[17];
S[3]=V[12]*V[12];
C[32]=+S[1]*(S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(3*(V[37]*V[22]+V[20]*
 V[2])))))));
C[31]=+S[1]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[30]=+S[1]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
S[4]=V[9]*V[9];
C[29]=+S[4]*(S[0]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[28]=+S[4]*(S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*
 V[2])))))));
C[27]=+S[4]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[26]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[25]=+S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*V[2]))))));
C[24]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(V[37]*(
 V[29]-V[28]-V[27]+V[26])))));
C[23]=+S[4]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
C[22]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(V[24]-
 V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-V[25])))));
C[21]=+S[4]*(S[0]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[20]=+S[4]*(S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*
 V[2])))))));
C[19]=+S[4]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[18]=+S[4]*(S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[17]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[16]=+S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[15]=+V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24])))));
C[14]=+S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[13]=+S[4]*(S[0]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[12]=+S[4]*(S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(6*(V[37]*V[22]+V[20]*
 V[2])))))));
C[11]=+S[4]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[10]=+S[4]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
C[9]=+S[1]*(S[0]*(V[1]*(V[12]*(2*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[8]=+S[1]*(S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(6*(V[37]*V[23]+V[21]*
 V[2])))))));
C[7]=+S[1]*(V[1]*(V[12]*(2*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[6]=+S[1]*(S[2]*(V[2]*(V[31]*(V[36]*(6*(V[37]*V[23]+V[21]*V[2]))))));
C[5]=+S[4]*(S[0]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[4]=+S[4]*(S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*
 V[2])))))));
C[3]=+S[4]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[2]=+S[4]*(S[2]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*V[2]))))));
S[5]=V[17]*V[17]*V[17]*V[17];
S[6]=V[2]*V[2]*V[2];
C[1]=+3*S[5]*S[6];
S[7]=V[49]*V[49];
S[8]=V[1]*V[1]*V[1];
C[0]=+4*S[7]*V[36]*S[0]*S[8];
}
REAL F739_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   S                       n2     !  n2                      S       
 ==<==\                 /==>======!==>==\                 /==<==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   s  |  A     t     W+ |  E2     !  E2 |  W+    t     H  |  s       
 ==>==@-1---@==>==@-2>--@==<======!==<==@-->3-@==>==@-----@==>==     
   P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2      
            |     |               !           |     |                
            |     |        b      !  b        |     |                
            |     \========>======!==>========/     |                
            |              P6     !  P6             |                
            |                     !                 |                
            |              U      !  U              |                
            \==============<======!==<==============/                
                           P5     !  P5                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[34];REAL S[1];REAL tmp[3];                                    
     
if(CalcConst) C739(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[12]*(V[50]*(DP[6]*(V[50]*(V[50]*(C[14]*(DP[0]*(DP[9]-DP[3])+
 DP[4]*(-DP[6]-DP[7])+DP[7]*DP[3])+C[16]*(DP[9]-DP[3])-C[25]*DP[4])+DP[4]*(
 C[22]*(DP[6]+DP[7])-C[26]-C[24]*DP[0])+DP[3]*(-C[17]-C[15]*DP[0]-C[22]*
 DP[7])+DP[9]*(C[17]+C[15]*DP[0]))+C[18]*(DP[0]*(DP[1]-DP[8])+DP[2]*(DP[6]+
 DP[7])-DP[7]*DP[1])+C[2]*(DP[0]*(DP[3]-DP[9])+DP[4]*(DP[6]+DP[7])-DP[7]*
 DP[3])+C[20]*(DP[1]-DP[8])+C[4]*(DP[3]-DP[9])+C[28]*DP[2]+C[12]*DP[4])+
 DP[7]*(V[50]*(V[50]*(C[14]*(DP[0]*(DP[4]-DP[9])+DP[7]*DP[3])+C[16]*(DP[4]-
 DP[9])+C[25]*DP[3])+DP[0]*(C[15]*(DP[4]-DP[9])+C[24]*DP[3])+DP[3]*(C[26]-
 C[22]*DP[7])+C[17]*(DP[4]-DP[9]))+DP[0]*(C[18]*(DP[8]-DP[2])+C[2]*(DP[9]-
 DP[4]))+DP[1]*(-C[28]-C[18]*DP[7])+DP[3]*(-C[12]-C[2]*DP[7])+C[20]*(DP[8]-
 DP[2])+C[4]*(DP[9]-DP[4])))+DP[6]*(DP[0]*(C[19]*(DP[1]-DP[8])+C[3]*(DP[3]-
 DP[9])+C[27]*DP[2]+C[11]*DP[4])+DP[7]*(C[23]*(DP[1]-DP[2])+C[10]*(DP[3]-
 DP[4]))+DP[2]*(C[29]-C[23]*DP[6])+DP[4]*(C[13]-C[10]*DP[6])+C[21]*(DP[1]-
 DP[8])+C[5]*(DP[3]-DP[9]))+DP[7]*(DP[0]*(C[19]*(DP[8]-DP[2])+C[3]*(DP[9]-
 DP[4])-C[27]*DP[1]-C[11]*DP[3])+DP[1]*(C[23]*DP[7]-C[29])+DP[3]*(C[10]*
 DP[7]-C[13])+C[21]*(DP[8]-DP[2])+C[5]*(DP[9]-DP[4])));
tmp[1]=+DP[5]*(DP[6]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(DP[12]*(DP[1]-DP[2]+
 DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+DP[6]*
 (DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+C[4]*(DP[12]*
 (DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-
 DP[14]))+C[6]*(DP[0]*(DP[10]-DP[14])+DP[7]*(DP[11]-DP[10])+DP[11]*DP[6])+
 C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[8]*(
 DP[10]-DP[14])+C[32]*DP[11])+DP[7]*(C[2]*(DP[0]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5]))+C[4]*(DP[12]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-
 DP[11]))+C[12]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+
 C[6]*(DP[0]*(DP[14]-DP[11])-DP[10]*DP[7])+C[8]*(DP[14]-DP[11])-C[32]*
 DP[10]));
tmp[2]=+DP[5]*(DP[6]*(DP[0]*(C[3]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+C[11]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[7]*(DP[10]-DP[14])+C[31]*
 DP[11])+C[10]*(DP[7]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[13]*(DP[2]-DP[1]-
 DP[3]+DP[4])+DP[5]*(DP[10]-DP[11]))+DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5]))+C[5]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+C[13]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(C[30]*(-DP[6]-
 DP[7])+C[33])+DP[10]*(C[9]+C[30]*DP[7])-C[9]*DP[14])+DP[7]*(DP[0]*(C[3]*(
 DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(
 DP[14]-DP[11]))+C[11]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])+C[7]*(DP[14]-DP[11])-C[31]*DP[10])+C[5]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[7]*(
 C[10]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[30]*
 DP[10])+C[13]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+
 C[9]*(DP[14]-DP[11])-C[33]*DP[10]));
R=+V[50]*(V[50]*(DP[6]*(DP[5]*(V[50]*(C[2]*(DP[0]*(DP[14]-DP[10])+DP[7]*(
 DP[10]-DP[11])-DP[11]*DP[6])+C[4]*(DP[14]-DP[10])-C[12]*DP[11])+DP[11]*(
 C[10]*(DP[6]+DP[7])-C[13]-C[11]*DP[0])+DP[10]*(-C[5]-C[3]*DP[0]-C[10]*
 DP[7])+DP[14]*(C[5]+C[3]*DP[0]))+DP[13]*(V[50]*(C[2]*(DP[0]*(DP[1]-DP[8])+
 DP[2]*(DP[6]+DP[7])-DP[7]*DP[1])+C[4]*(DP[1]-DP[8])+C[12]*DP[2])+DP[2]*(
 C[10]*(-DP[6]-DP[7])+C[13]+C[11]*DP[0])+DP[1]*(C[5]+C[3]*DP[0]+C[10]*
 DP[7])+DP[8]*(-C[5]-C[3]*DP[0])))+DP[7]*(DP[5]*(V[50]*(C[2]*(DP[0]*(DP[11]-
 DP[14])+DP[10]*DP[7])+C[4]*(DP[11]-DP[14])+C[12]*DP[10])+DP[0]*(C[3]*(
 DP[11]-DP[14])+C[11]*DP[10])+DP[10]*(C[13]-C[10]*DP[7])+C[5]*(DP[11]-
 DP[14]))+DP[13]*(V[50]*(C[2]*(DP[0]*(DP[8]-DP[2])-DP[7]*DP[1])+C[4]*(DP[8]-
 DP[2])-C[12]*DP[1])+DP[0]*(C[3]*(DP[8]-DP[2])-C[11]*DP[1])+DP[1]*(C[10]*
 DP[7]-C[13])+C[5]*(DP[8]-DP[2])))+tmp[0])+tmp[1])+tmp[2];
R*=(N/D)*Q1[6]*Q2[1]*Q2[2]*Q1[4];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
