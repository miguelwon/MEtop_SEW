/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F700_out;
static void C700(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
C[33]=+S[1]*(S[0]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
S[2]=V[17]*V[17];
S[3]=V[12]*V[12];
C[32]=+S[1]*(S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*
 V[2])))))));
C[31]=+S[1]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[30]=+S[1]*(S[0]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[29]=+S[1]*(S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*
 V[2])))))));
C[28]=+S[1]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
C[27]=+S[1]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[26]=+S[1]*(S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[25]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[24]=+S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*V[2]))))));
C[23]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(V[37]*(
 V[29]-V[28]-V[27]+V[26])))));
C[22]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[21]=+S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[20]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(V[24]-
 V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-V[25])))));
C[19]=+V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24])))));
C[18]=+S[2]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2])))));
S[4]=V[9]*V[9]*V[9]*V[9];
C[17]=+S[4]*(S[0]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[16]=+S[4]*(S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(3*(V[37]*V[22]+V[20]*
 V[2])))))));
C[15]=+S[1]*(S[0]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[14]=+S[1]*(S[3]*(S[2]*(V[2]*(V[30]*(V[36]*(6*(V[37]*V[22]+V[20]*
 V[2])))))));
C[13]=+S[4]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[12]=+S[1]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[11]=+S[4]*(S[0]*(V[1]*(V[12]*(2*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[10]=+S[4]*(S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(6*(V[37]*V[23]+V[21]*
 V[2])))))));
C[9]=+S[4]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
C[8]=+S[1]*(S[0]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[7]=+S[1]*(S[0]*(S[2]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*
 V[2])))))));
C[6]=+S[1]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
C[5]=+S[4]*(V[1]*(V[12]*(2*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[4]=+S[4]*(S[2]*(V[2]*(V[31]*(V[36]*(6*(V[37]*V[23]+V[21]*V[2]))))));
C[3]=+S[1]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[2]=+S[1]*(S[2]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*V[2]))))));
S[5]=V[17]*V[17]*V[17]*V[17];
S[6]=V[2]*V[2]*V[2];
C[1]=+3*S[5]*S[6];
S[7]=V[49]*V[49];
S[8]=V[1]*V[1]*V[1];
C[0]=+4*S[7]*V[36]*S[0]*S[8];
}
REAL F700_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         S                 S      !  S                 S             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              n2     !  n2             |                
           A|P7         /==>======!==>==\          H|-PA             
            1           |  P3     !  P3 |           |                
            |           |         !     |           |                
         u  |  t     W+ |  E2     !  E2 |  W+    t  |  u             
       ==>==@==>==@-2>--@==<======!==<==@-->3-@==>==@==>==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        b      !  b        |                      
                  \========>======!==>========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[34];REAL S[1];REAL tmp[3];                                    
     
if(CalcConst) C700(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[12]*(V[50]*(DP[0]*(V[50]*(V[50]*(C[18]*(DP[3]*(DP[6]+DP[7])+
 DP[9]*(DP[7]-DP[0])+DP[6]*DP[4])+C[21]*(-DP[3]-DP[4])+C[24]*DP[9])+DP[9]*(
 C[20]*(DP[0]-DP[7])+C[25]-C[23]*DP[6])+DP[3]*(C[19]*DP[6]-C[22]-C[20]*
 DP[7])+DP[4]*(C[19]*DP[6]-C[22]))+C[26]*(DP[1]*(-DP[6]-DP[7])+DP[8]*(DP[0]-
 DP[7])-DP[6]*DP[2])+C[2]*(DP[3]*(-DP[6]-DP[7])+DP[9]*(DP[0]-DP[7])-DP[6]*
 DP[4])+C[29]*(DP[1]+DP[2])+C[7]*(DP[3]+DP[4])-C[32]*DP[8]-C[14]*DP[9])+
 DP[7]*(V[50]*(V[50]*(C[18]*(DP[6]*(DP[4]-DP[9])-DP[7]*DP[3])+C[21]*(DP[9]-
 DP[4])-C[24]*DP[3])+DP[3]*(C[23]*DP[6]-C[25]+C[20]*DP[7])+DP[4]*(C[19]*
 DP[6]-C[22])+DP[9]*(C[22]-C[19]*DP[6]))+DP[6]*(C[26]*(DP[8]-DP[2])+C[2]*(
 DP[9]-DP[4]))+DP[1]*(C[32]+C[26]*DP[7])+DP[3]*(C[14]+C[2]*DP[7])+C[29]*(
 DP[2]-DP[8])+C[7]*(DP[4]-DP[9])))+DP[0]*(DP[6]*(C[27]*(-DP[1]-DP[2])+C[3]*
 (-DP[3]-DP[4])+C[31]*DP[8]+C[12]*DP[9])+DP[7]*(C[28]*(DP[1]+DP[8])+C[6]*(
 DP[3]+DP[9]))+DP[0]*(-C[28]*DP[8]-C[6]*DP[9])+C[30]*(DP[1]+DP[2])+C[8]*(
 DP[3]+DP[4])-C[33]*DP[8]-C[15]*DP[9])+DP[7]*(DP[6]*(C[27]*(DP[8]-DP[2])+
 C[3]*(DP[9]-DP[4])-C[31]*DP[1]-C[12]*DP[3])+DP[1]*(C[33]-C[28]*DP[7])+
 DP[3]*(C[15]-C[6]*DP[7])+C[30]*(DP[2]-DP[8])+C[8]*(DP[4]-DP[9])));
tmp[1]=+DP[5]*(DP[0]*(C[2]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(DP[12]*(DP[1]+
 DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-
 DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5]))+C[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[5]*(DP[10]+DP[11]))+C[4]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-
 DP[14])+DP[14]*DP[0])+C[14]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])+C[10]*(DP[10]+DP[11])-C[16]*DP[14])+DP[7]*(C[2]*(DP[6]*(
 DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(
 DP[14]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5]))+C[7]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-
 DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+C[14]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[4]*(DP[6]*(DP[14]-DP[11])+DP[10]*DP[7])+
 C[10]*(DP[11]-DP[14])+C[16]*DP[10]));
tmp[2]=+DP[5]*(DP[0]*(DP[6]*(C[3]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11]))+C[12]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*(-DP[10]-DP[11])+C[13]*
 DP[14])+C[6]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-
 DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5]))+C[8]*(DP[12]*(-DP[1]-DP[2]-DP[3]-
 DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+C[15]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*(C[9]*(
 DP[7]-DP[0])-C[17])+DP[10]*(C[11]+C[9]*DP[7])+C[11]*DP[11])+DP[7]*(DP[6]*(
 C[3]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[5]*(DP[14]-DP[11]))+C[12]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[5]*(DP[14]-DP[11])-C[13]*DP[10])+C[8]*(DP[12]*(DP[8]-DP[2]-
 DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[7]*
 (C[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[9]*
 DP[10])+C[15]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+
 C[11]*(DP[11]-DP[14])+C[17]*DP[10]));
R=+V[50]*(V[50]*(DP[0]*(DP[5]*(V[50]*(C[2]*(DP[6]*(DP[10]+DP[11])+DP[7]*(
 DP[10]+DP[14])-DP[14]*DP[0])+C[7]*(-DP[10]-DP[11])+C[14]*DP[14])+DP[14]*(
 C[6]*(DP[0]-DP[7])+C[15]-C[12]*DP[6])+DP[10]*(C[3]*DP[6]-C[8]-C[6]*DP[7])+
 DP[11]*(C[3]*DP[6]-C[8]))+DP[13]*(V[50]*(C[2]*(DP[1]*(-DP[6]-DP[7])+DP[8]*(
 DP[0]-DP[7])-DP[6]*DP[2])+C[7]*(DP[1]+DP[2])-C[14]*DP[8])+DP[8]*(C[6]*(
 DP[7]-DP[0])+C[12]*DP[6]-C[15])+DP[1]*(C[8]-C[3]*DP[6]+C[6]*DP[7])+DP[2]*(
 C[8]-C[3]*DP[6])))+DP[7]*(DP[5]*(V[50]*(C[2]*(DP[6]*(DP[11]-DP[14])-DP[10]*
 DP[7])+C[7]*(DP[14]-DP[11])-C[14]*DP[10])+DP[6]*(C[3]*(DP[11]-DP[14])+
 C[12]*DP[10])+DP[10]*(C[6]*DP[7]-C[15])+C[8]*(DP[14]-DP[11]))+DP[13]*(
 V[50]*(C[2]*(DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+C[7]*(DP[2]-DP[8])+C[14]*
 DP[1])+DP[1]*(C[15]-C[12]*DP[6]-C[6]*DP[7])+DP[2]*(C[8]-C[3]*DP[6])+DP[8]*(
 C[3]*DP[6]-C[8])))+tmp[0])+tmp[1])+tmp[2];
R*=(N/D)*Q1[4]*Q2[2]*Q2[3]*Q1[6];
if(gswidth_out ) R=R*Q0[1];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
