/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F523_out;
static void C523(REAL * C)
{
REAL* V=va_out;
REAL S[19];                                                                 
     
S[0]=V[25]*V[25];
S[1]=V[12]*V[12];
S[2]=V[10]*V[10];
S[3]=V[1]*V[1];
S[4]=V[9]*V[9]*V[9]*V[9];
C[79]=+S[4]*(S[3]*(S[2]*(S[1]*(V[24]*(2*V[24]-4*V[25])+2*S[0]))));
S[5]=V[17]*V[17];
C[78]=+S[4]*(S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(12*(V[25]-
 V[24])))))))));
S[6]=V[36]*V[36];
S[7]=V[31]*V[31];
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[9]*V[9];
S[10]=V[2]*V[2];
C[77]=+S[9]*(S[2]*(S[3]*(S[1]*(V[24]*(8*V[25]-4*V[24])-4*S[0]))+18*S[6]*
 S[7]*S[8]*S[9]*S[10]));
C[76]=+S[4]*(S[3]*(S[1]*(V[24]*(2*V[24]-4*V[25])+2*S[0])));
C[75]=+S[4]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(12*(V[25]-V[24]))))))));
C[74]=+S[9]*(S[3]*(S[1]*(V[24]*(8*V[25]-4*V[24])-4*S[0]))+18*S[6]*S[7]*S[8]*
 S[9]*S[10]);
C[73]=+S[3]*(S[9]*(S[2]*(S[1]*(V[24]*(8*V[24]-16*V[25])+8*S[0]))));
C[72]=+S[9]*(S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-
 V[24])))))))));
C[71]=+72*S[6]*S[7]*S[8]*S[2]*S[9]*S[10];
C[70]=+S[3]*(S[9]*(S[1]*(V[24]*(8*V[24]-16*V[25])+8*S[0])));
C[69]=+S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-V[24]))))))));
C[68]=+S[2]*(S[3]*(S[1]*(V[24]*(16*V[25]-8*V[24])-8*S[0]))+36*S[6]*S[7]*
 S[8]*S[9]*S[10]);
C[67]=+S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-V[24]))))))));
C[66]=+72*S[6]*S[7]*S[8]*S[2]*S[10];
C[65]=+S[3]*(S[1]*(V[24]*(16*V[25]-8*V[24])-8*S[0]))+36*S[6]*S[7]*S[8]*S[9]*
 S[10];
C[64]=+S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-V[24])))))));
S[11]=V[29]*V[29];
S[12]=V[28]*V[28];
S[13]=V[27]*V[27];
S[14]=V[26]*V[26];
S[15]=V[10]*V[10]*V[10]*V[10];
C[63]=+S[15]*(S[3]*(S[9]*(S[2]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+16*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(16*V[25]-8*
 V[24])-8*S[0]))));
C[62]=+S[15]*(S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+
 V[27]-V[26])+V[31]*(V[25]-V[24])))))))));
S[16]=V[30]*V[30];
C[61]=+S[8]*(S[10]*(S[9]*(S[2]*(S[6]*(72*S[7]*S[2]-36*S[16]*S[1])))));
C[60]=+36*S[6]*S[16]*S[8]*S[1]*S[9]*S[10];
C[59]=+S[3]*(S[9]*(S[2]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+16*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(16*V[25]-8*V[24])-
 8*S[0])));
C[58]=+S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[57]=+72*S[6]*S[7]*S[8]*S[9]*S[10];
C[56]=+S[15]*(S[3]*(S[9]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+32*(S[11]+S[12]+S[13]+S[14]))));
C[55]=+S[9]*(S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-
 V[27]+V[26])))))))));
C[54]=+S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[53]=+S[3]*(S[9]*(S[2]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+32*(S[11]+S[12]+S[13]+S[14]))));
C[52]=+S[3]*(S[9]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+32*(S[11]+S[12]+S[13]+S[14])));
C[51]=+S[2]*(S[2]*(S[3]*(S[2]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+16*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(16*V[25]-8*
 V[24])-8*S[0]))+36*S[6]*S[7]*S[8]*S[9]*S[10])-18*S[6]*S[16]*S[8]*S[1]*S[9]*
 S[10]);
C[50]=+S[15]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[49]=+S[8]*(S[10]*(S[2]*(S[6]*(72*S[7]*S[2]-36*S[16]*S[1]))));
C[48]=+S[15]*(S[3]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[11]+S[12]+S[13]+S[14])))+18*S[6]*S[16]*S[8]*S[1]*S[9]*S[10];
C[47]=+36*S[6]*S[16]*S[8]*S[1]*S[10];
C[46]=+S[3]*(S[2]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(16*V[25]-8*V[24])-8*
 S[0]))+36*S[6]*S[7]*S[8]*S[9]*S[10];
C[45]=+S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+V[27]-V[26])+
 V[31]*(V[25]-V[24])))))));
C[44]=+72*S[6]*S[7]*S[8]*S[10];
C[43]=+S[15]*(S[3]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+32*(S[11]+S[12]+S[13]+S[14])));
C[42]=+S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[41]=+S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-V[27]+
 V[26])))))));
C[40]=+S[3]*(S[2]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+32*(S[11]+S[12]+S[13]+S[14])));
C[39]=+S[3]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*V[28])+
 32*(S[11]+S[12]+S[13]+S[14]));
C[38]=+S[3]*(S[2]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[11]+S[12]+S[13]+S[14])));
C[37]=+S[3]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*V[28])+
 16*(S[11]+S[12]+S[13]+S[14]));
C[36]=+S[3]*(S[9]*(S[2]*(S[1]*(V[24]*(4*V[24]-8*V[25])+4*S[0]))));
C[35]=+S[9]*(S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(24*(V[25]-
 V[24])))))))));
C[34]=+36*S[6]*S[7]*S[8]*S[2]*S[9]*S[10];
C[33]=+S[3]*(S[9]*(S[1]*(V[24]*(4*V[24]-8*V[25])+4*S[0])));
C[32]=+S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(24*(V[25]-V[24]))))))));
C[31]=+S[4]*(S[15]*(S[3]*(S[2]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+4*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(4*V[25]-2*
 V[24])-2*S[0]))));
C[30]=+S[4]*(S[15]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(12*(V[30]*(V[28]-V[29]+
 V[27]-V[26])+V[31]*(V[25]-V[24])))))))));
C[29]=+S[9]*(S[2]*(S[2]*(S[3]*(S[2]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(
 V[28]-V[29])-V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(8*
 V[25]-4*V[24])-4*S[0]))+18*S[6]*S[7]*S[8]*S[9]*S[10])-9*S[6]*S[16]*S[8]*
 S[1]*S[9]*S[10]));
C[28]=+S[4]*(S[15]*(S[3]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+4*(S[11]+S[12]+S[13]+S[14]))));
C[27]=+S[9]*(S[15]*(S[3]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14])))+9*S[6]*S[16]*S[8]*S[1]*S[9]*
 S[10]);
C[26]=+S[4]*(S[3]*(S[2]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+4*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(4*V[25]-2*V[24])-2*
 S[0])));
C[25]=+S[4]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(12*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[24]=+S[9]*(S[3]*(S[2]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(8*V[25]-4*V[24])-4*
 S[0]))+18*S[6]*S[7]*S[8]*S[9]*S[10]);
C[23]=+S[15]*(S[3]*(S[9]*(S[2]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(8*V[25]-4*
 V[24])-4*S[0]))));
C[22]=+S[15]*(S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(24*(V[30]*(V[28]-V[29]+
 V[27]-V[26])+V[31]*(V[25]-V[24])))))))));
C[21]=+S[8]*(S[10]*(S[9]*(S[2]*(S[6]*(36*S[7]*S[2]-18*S[16]*S[1])))));
C[20]=+S[15]*(S[3]*(S[9]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))));
C[19]=+18*S[6]*S[16]*S[8]*S[1]*S[9]*S[10];
C[18]=+S[3]*(S[9]*(S[2]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))+S[1]*(V[24]*(8*V[25]-4*V[24])-4*
 S[0])));
C[17]=+S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[36]*(24*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[16]=+36*S[6]*S[7]*S[8]*S[9]*S[10];
C[15]=+S[4]*(S[15]*(S[3]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))));
C[14]=+S[4]*(S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[29]-V[28]-
 V[27]+V[26])))))))));
C[13]=+S[4]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[12]=+S[15]*(S[3]*(S[9]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+16*(S[11]+S[12]+S[13]+S[14]))));
C[11]=+S[9]*(S[2]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[29]-V[28]-
 V[27]+V[26])))))))));
C[10]=+S[9]*(S[5]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[9]=+S[4]*(S[3]*(S[2]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))));
C[8]=+S[4]*(S[3]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+8*(S[11]+S[12]+S[13]+S[14])));
C[7]=+S[3]*(S[9]*(S[2]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+16*(S[11]+S[12]+S[13]+S[14]))));
C[6]=+S[3]*(S[9]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[11]+S[12]+S[13]+S[14])));
C[5]=+S[4]*(S[3]*(S[2]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+4*(S[11]+S[12]+S[13]+S[14]))));
C[4]=+S[4]*(S[3]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+4*(S[11]+S[12]+S[13]+S[14])));
C[3]=+S[3]*(S[9]*(S[2]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[11]+S[12]+S[13]+S[14]))));
C[2]=+S[3]*(S[9]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+8*(S[11]+S[12]+S[13]+S[14])));
S[17]=V[2]*V[2]*V[2]*V[2];
C[1]=+4*S[8]*S[17];
S[18]=V[49]*V[49];
C[0]=+S[18]*S[2]*S[3];
}
REAL F523_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
   c                       n2     !  n2                      c       
 ==>==\                 /==>======!==>==\                 /==>==     
   P1 |                 |  P3     !  P3 |                 |  P1      
      |                 |         !     |                 |          
   C  |  H     t     W+ |  E2     !  E2 |  W+    t     H  |  C       
 ==<==@-----@==>==@-1>--@==<======!==<==@-->2-@==>==@-----@==<==     
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
static REAL C[80];REAL S[3];REAL tmp[6];                                    
     
if(CalcConst) C523(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=DP[7]*DP[7];
tmp[0]=+V[50]*(V[50]*(DP[0]*(V[50]*(V[50]*(C[44]*(DP[3]*(-DP[6]-DP[7])+
 DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])-C[47]*DP[9])+C[64]*(DP[3]*(-DP[6]-DP[7])+
 DP[4]*(-DP[6]-DP[7]))+DP[9]*(C[41]*(DP[6]+DP[7])+C[45]*DP[0]))+DP[9]*(
 DP[0]*(C[39]*(DP[6]+DP[7])-C[46]-C[37]*DP[0])+DP[6]*(-C[37]*DP[6]-C[39]*
 DP[7])+C[48]-C[37]*S[1])+C[57]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])-
 DP[8]*DP[0])+C[65]*(DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7]))+C[60]*DP[8])+
 V[50]*(V[50]*(C[66]*(DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7]))-C[49]*DP[9])+
 C[67]*(DP[3]*(DP[6]+DP[7])+DP[4]*(DP[6]+DP[7]))+DP[9]*(C[42]*(-DP[6]-
 DP[7])-C[50]))+DP[6]*(DP[9]*(C[38]*DP[6]-C[43]+C[40]*DP[7])+C[71]*(-DP[1]-
 DP[2])+C[68]*(-DP[3]-DP[4]))+DP[7]*(DP[9]*(C[38]*DP[7]-C[43])+C[71]*(-
 DP[1]-DP[2])+C[68]*(-DP[3]-DP[4]))+C[61]*DP[8]+C[51]*DP[9])+DP[0]*(DP[6]*(
 C[69]*(DP[1]+DP[2])+C[32]*(DP[3]+DP[4])-C[54]*DP[8]-C[10]*DP[9])+DP[7]*(
 C[69]*(DP[1]+DP[2])+C[32]*(DP[3]+DP[4])-C[54]*DP[8]-C[10]*DP[9])+DP[0]*(-
 C[58]*DP[8]-C[17]*DP[9]))+DP[6]*(C[72]*(-DP[1]-DP[2])+C[35]*(-DP[3]-DP[4])+
 C[55]*DP[8]+C[11]*DP[9])+DP[7]*(C[72]*(-DP[1]-DP[2])+C[35]*(-DP[3]-DP[4])+
 C[55]*DP[8]+C[11]*DP[9])+C[62]*DP[8]+C[22]*DP[9]);
S[2]=V[50]*V[50];
tmp[1]=+DP[5]*(DP[0]*(C[16]*(DP[13]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[7]*
 (-DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(DP[8]+DP[9]))+S[2]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0])+DP[5]*(DP[6]*(DP[10]+DP[11])+
 DP[7]*(DP[10]+DP[11])-DP[14]*DP[0]))+DP[14]*(DP[0]*(C[6]*(DP[6]+DP[7])+
 C[17]*V[50]-C[24]-C[2]*DP[0])+V[50]*(C[10]*(DP[6]+DP[7])-C[19]*V[50])+
 DP[6]*(-C[2]*DP[6]-C[6]*DP[7])+C[27]+C[19]*DP[5]-C[2]*S[1])+V[50]*(C[32]*(
 DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11])))+C[74]*(DP[6]*(DP[10]+
 DP[11])+DP[7]*(DP[10]+DP[11]))+DP[13]*(C[19]*(-DP[8]-DP[9])))+DP[6]*(C[34]*
 (DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-
 DP[11]))+DP[14]*(C[3]*DP[6]-C[12]-C[11]*V[50]+C[7]*DP[7])+V[50]*(C[35]*(
 DP[10]+DP[11]))+C[77]*(-DP[10]-DP[11]))+DP[7]*(C[34]*(DP[13]*(DP[1]+DP[2]+
 DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+V[50]*(C[35]*(
 DP[10]+DP[11])-C[11]*DP[14])+DP[14]*(C[3]*DP[7]-C[12])+C[77]*(-DP[10]-
 DP[11]))+DP[14]*(V[50]*(-C[22]-C[21]*V[50])+C[29]+C[21]*DP[5])+DP[13]*(
 C[21]*(-DP[8]-DP[9])));
tmp[2]=+DP[12]*(DP[0]*(DP[6]*(DP[5]*(C[16]*(-DP[1]-DP[2]-DP[3]-DP[4]))+
 DP[8]*(C[52]*(DP[7]-DP[0])+C[6]*DP[6])+DP[9]*(C[6]*(DP[7]-DP[0])+C[2]*
 DP[6])+C[70]*(DP[1]+DP[2])+C[33]*(DP[3]+DP[4]))+DP[7]*(DP[5]*(C[16]*(-
 DP[1]-DP[2]-DP[3]-DP[4]))+DP[0]*(-C[52]*DP[8]-C[6]*DP[9])+DP[7]*(C[6]*
 DP[8]+C[2]*DP[9])+C[70]*(DP[1]+DP[2])+C[33]*(DP[3]+DP[4]))+DP[0]*(DP[8]*(
 C[59]+C[6]*DP[0]+C[16]*DP[5])+DP[9]*(C[18]+C[2]*DP[0]+C[16]*DP[5]))+DP[5]*(
 C[19]*(-DP[8]-DP[9]))-C[12]*DP[8]-C[20]*DP[9])+DP[6]*(DP[5]*(C[34]*(DP[1]+
 DP[2]+DP[3]+DP[4]))+DP[8]*(C[56]-C[7]*DP[6]-C[53]*DP[7])+DP[9]*(C[12]-C[3]*
 DP[6]-C[7]*DP[7])+C[73]*(-DP[1]-DP[2])+C[36]*(-DP[3]-DP[4]))+DP[7]*(DP[5]*(
 C[34]*(DP[1]+DP[2]+DP[3]+DP[4]))+DP[7]*(-C[7]*DP[8]-C[3]*DP[9])+C[73]*(-
 DP[1]-DP[2])+C[36]*(-DP[3]-DP[4])+C[56]*DP[8]+C[12]*DP[9])+DP[5]*(C[21]*(-
 DP[8]-DP[9]))-C[63]*DP[8]-C[23]*DP[9]+tmp[0]);
tmp[3]=+DP[5]*(DP[0]*(C[32]*(DP[6]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+DP[7]*(DP[12]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+
 DP[11])))+C[10]*(DP[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+DP[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5]))+
 DP[0]*(C[17]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-
 C[25]*DP[14])+C[75]*(DP[6]*(DP[10]+DP[11])+DP[7]*(DP[10]+DP[11]))+DP[14]*(
 C[13]*(-DP[6]-DP[7])))+C[35]*(DP[6]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(DP[12]*(
 DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-
 DP[11])))+C[11]*(DP[6]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+DP[7]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5]))+C[22]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[78]*(DP[6]*(-DP[10]-DP[11])+DP[7]*(-DP[10]-DP[11]))+DP[14]*(C[14]*(DP[6]+
 DP[7])+C[30]));
tmp[4]=+DP[0]*(DP[6]*(DP[12]*(C[33]*(-DP[1]-DP[2]-DP[3]-DP[4])+C[6]*(DP[0]*(
 DP[8]+DP[9])+DP[7]*(-DP[8]-DP[9]))+DP[6]*(C[2]*(-DP[8]-DP[9])))+DP[13]*(
 C[33]*(-DP[1]-DP[2]-DP[3]-DP[4])+C[6]*(DP[0]*(DP[8]+DP[9])+DP[7]*(-DP[8]-
 DP[9]))+DP[6]*(C[2]*(-DP[8]-DP[9])))+DP[14]*(DP[5]*(C[6]*(DP[7]-DP[0])+
 C[2]*DP[6])+C[8]*(DP[7]-DP[0])+C[4]*DP[6])+DP[5]*(C[33]*(DP[10]+DP[11]))+
 C[76]*(DP[10]+DP[11]))+DP[7]*(C[33]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+DP[0]*(C[6]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[8]*DP[14])+
 DP[7]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[4]*DP[14])+C[76]*(DP[10]+DP[11]))+DP[0]*(DP[0]*(C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[4]*DP[14])+C[18]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[26]*DP[14])+C[20]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[28]*DP[14]);
tmp[5]=+DP[5]*(DP[6]*(DP[12]*(C[36]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[8]*(C[3]*
 DP[6]-C[12]+C[7]*DP[7])+DP[9]*(C[3]*DP[6]-C[12]+C[7]*DP[7]))+DP[13]*(C[36]*
 (DP[1]+DP[2]+DP[3]+DP[4])+DP[8]*(C[3]*DP[6]-C[12]+C[7]*DP[7])+DP[9]*(C[3]*
 DP[6]-C[12]+C[7]*DP[7]))+DP[14]*(DP[5]*(C[12]-C[3]*DP[6]-C[7]*DP[7])+C[15]-
 C[5]*DP[6]-C[9]*DP[7])+DP[5]*(C[36]*(-DP[10]-DP[11]))+C[79]*(-DP[10]-
 DP[11]))+DP[7]*(C[36]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11]))+DP[7]*(C[3]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[5]*DP[14])+C[12]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[79]*(-DP[10]-DP[11])+
 C[15]*DP[14])+C[23]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])-C[31]*DP[14]+tmp[4]);
R=+V[50]*(V[50]*(DP[13]*(V[50]*(DP[0]*(V[50]*(C[16]*(DP[1]*(DP[6]+DP[7])+
 DP[2]*(DP[6]+DP[7])-DP[8]*DP[0])+C[19]*DP[8])+C[32]*(DP[1]*(DP[6]+DP[7])+
 DP[2]*(DP[6]+DP[7]))+DP[8]*(C[10]*(-DP[6]-DP[7])-C[17]*DP[0]))+V[50]*(
 C[34]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7]))+C[21]*DP[8])+C[35]*(
 DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7]))+DP[8]*(C[11]*(DP[6]+DP[7])+
 C[22]))+DP[8]*(DP[0]*(DP[0]*(C[6]*(-DP[6]-DP[7])+C[18]+C[2]*DP[0])+DP[6]*(
 C[2]*DP[6]+C[6]*DP[7])+C[2]*S[1]-C[20])+DP[6]*(C[12]-C[3]*DP[6]-C[7]*
 DP[7])+DP[7]*(C[12]-C[3]*DP[7])-C[23])+DP[0]*(C[33]*(DP[1]*(DP[6]+DP[7])+
 DP[2]*(DP[6]+DP[7])))+C[36]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])))+
 tmp[1]+tmp[2])+tmp[3])+tmp[5];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
