/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F294_out;
static void C294(REAL * C)
{
REAL* V=va_out;
REAL S[19];                                                                 
     
S[0]=V[29]*V[29];
S[1]=V[28]*V[28];
S[2]=V[27]*V[27];
S[3]=V[26]*V[26];
S[4]=V[25]*V[25];
S[5]=V[12]*V[12];
S[6]=V[14]*V[14];
S[7]=V[1]*V[1];
S[8]=V[14]*V[14]*V[14]*V[14];
S[9]=V[9]*V[9]*V[9]*V[9];
C[79]=+S[9]*(S[8]*(S[7]*(S[6]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+4*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(4*V[25]-2*V[24])-
 2*S[4]))));
S[10]=V[17]*V[17];
C[78]=+S[9]*(S[8]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(12*(V[30]*(V[28]-V[29]+
 V[27]-V[26])+V[31]*(V[25]-V[24])))))))));
S[11]=V[36]*V[36];
S[12]=V[31]*V[31];
S[13]=V[17]*V[17]*V[17]*V[17];
S[14]=V[9]*V[9];
S[15]=V[2]*V[2];
S[16]=V[30]*V[30];
C[77]=+S[14]*(S[6]*(S[6]*(S[7]*(S[6]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(
 V[28]-V[29])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(8*V[25]-4*
 V[24])-4*S[4]))+18*S[11]*S[12]*S[13]*S[14]*S[15])-9*S[11]*S[16]*S[13]*S[5]*
 S[14]*S[15]));
C[76]=+S[9]*(S[8]*(S[7]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))));
C[75]=+S[9]*(S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[29]-V[28]-
 V[27]+V[26])))))))));
C[74]=+S[9]*(S[7]*(S[6]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))));
C[73]=+S[9]*(S[7]*(S[6]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+4*(S[0]+S[1]+S[2]+S[3]))));
C[72]=+S[9]*(S[8]*(S[7]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+4*(S[0]+S[1]+S[2]+S[3]))));
C[71]=+S[14]*(S[8]*(S[7]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3])))+9*S[11]*S[16]*S[13]*S[5]*S[14]*
 S[15]);
C[70]=+S[9]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(12*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[69]=+S[9]*(S[7]*(S[6]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+4*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(4*V[25]-2*V[24])-2*
 S[4])));
C[68]=+S[9]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(12*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[67]=+S[14]*(S[7]*(S[6]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(8*V[25]-4*V[24])-4*
 S[4]))+18*S[11]*S[12]*S[13]*S[14]*S[15]);
C[66]=+S[9]*(S[7]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+8*(S[0]+S[1]+S[2]+S[3])));
C[65]=+S[9]*(S[7]*(8*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+4*(S[0]+S[1]+S[2]+S[3])));
C[64]=+S[8]*(S[7]*(S[14]*(S[6]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(16*V[25]-8*
 V[24])-8*S[4]))));
C[63]=+S[8]*(S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+
 V[27]-V[26])+V[31]*(V[25]-V[24])))))))));
C[62]=+S[13]*(S[15]*(S[14]*(S[6]*(S[11]*(72*S[12]*S[6]-36*S[16]*S[5])))));
C[61]=+S[6]*(S[6]*(S[7]*(S[6]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(16*V[25]-8*
 V[24])-8*S[4]))+36*S[11]*S[12]*S[13]*S[14]*S[15])-18*S[11]*S[16]*S[13]*
 S[5]*S[14]*S[15]);
C[60]=+S[8]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[59]=+S[13]*(S[15]*(S[6]*(S[11]*(72*S[12]*S[6]-36*S[16]*S[5]))));
C[58]=+S[8]*(S[7]*(S[14]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+32*(S[0]+S[1]+S[2]+S[3]))));
C[57]=+S[14]*(S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-
 V[27]+V[26])))))))));
C[56]=+S[7]*(S[14]*(S[6]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+32*(S[0]+S[1]+S[2]+S[3]))));
C[55]=+S[8]*(S[7]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+32*(S[0]+S[1]+S[2]+S[3])));
C[54]=+S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[53]=+S[7]*(S[6]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+32*(S[0]+S[1]+S[2]+S[3])));
C[52]=+S[7]*(S[6]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[0]+S[1]+S[2]+S[3])));
C[51]=+36*S[11]*S[16]*S[13]*S[5]*S[14]*S[15];
C[50]=+S[8]*(S[7]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[0]+S[1]+S[2]+S[3])))+18*S[11]*S[16]*S[13]*S[5]*S[14]*S[15];
C[49]=+36*S[11]*S[16]*S[13]*S[5]*S[15];
C[48]=+S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[47]=+S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(48*(V[29]-V[28]-V[27]+
 V[26])))))));
C[46]=+S[7]*(S[14]*(S[6]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(16*V[25]-8*V[24])-8*
 S[4])));
C[45]=+S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[44]=+S[7]*(S[6]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(16*V[25]-8*V[24])-8*S[4]))+
 36*S[11]*S[12]*S[13]*S[14]*S[15];
C[43]=+S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(48*(V[30]*(V[28]-V[29]+V[27]-V[26])+
 V[31]*(V[25]-V[24])))))));
C[42]=+S[7]*(S[14]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+32*(S[0]+S[1]+S[2]+S[3])));
C[41]=+S[7]*(64*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*V[28])+
 32*(S[0]+S[1]+S[2]+S[3]));
C[40]=+S[7]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*V[28])+
 16*(S[0]+S[1]+S[2]+S[3]));
C[39]=+S[7]*(S[14]*(S[5]*(S[6]*(V[24]*(8*V[24]-16*V[25])+8*S[4]))));
C[38]=+S[14]*(S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-
 V[24])))))))));
C[37]=+72*S[11]*S[12]*S[13]*S[6]*S[14]*S[15];
C[36]=+S[7]*(S[14]*(S[5]*(V[24]*(8*V[24]-16*V[25])+8*S[4])));
C[35]=+S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-
 V[24]))))))));
C[34]=+72*S[11]*S[12]*S[13]*S[14]*S[15];
C[33]=+S[6]*(S[7]*(S[5]*(V[24]*(16*V[25]-8*V[24])-8*S[4]))+36*S[11]*S[12]*
 S[13]*S[14]*S[15]);
C[32]=+S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-
 V[24]))))))));
C[31]=+72*S[11]*S[12]*S[13]*S[6]*S[15];
C[30]=+S[7]*(S[5]*(V[24]*(16*V[25]-8*V[24])-8*S[4]))+36*S[11]*S[12]*S[13]*
 S[14]*S[15];
C[29]=+S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(48*(V[25]-V[24])))))));
C[28]=+72*S[11]*S[12]*S[13]*S[15];
C[27]=+S[8]*(S[7]*(S[14]*(S[6]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-
 V[29])-V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(8*V[25]-4*V[24])-
 4*S[4]))));
C[26]=+S[8]*(S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(24*(V[30]*(V[28]-V[29]+
 V[27]-V[26])+V[31]*(V[25]-V[24])))))))));
C[25]=+S[13]*(S[15]*(S[14]*(S[6]*(S[11]*(36*S[12]*S[6]-18*S[16]*S[5])))));
C[24]=+S[8]*(S[7]*(S[14]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3]))));
C[23]=+S[14]*(S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[29]-V[28]-
 V[27]+V[26])))))))));
C[22]=+S[7]*(S[14]*(S[6]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+16*(S[0]+S[1]+S[2]+S[3]))));
C[21]=+S[7]*(S[14]*(S[6]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))));
C[20]=+S[8]*(S[7]*(S[14]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))));
C[19]=+18*S[11]*S[16]*S[13]*S[5]*S[14]*S[15];
C[18]=+S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[30]*(V[36]*(24*(V[29]-V[28]-V[27]+
 V[26]))))))));
C[17]=+S[7]*(S[14]*(S[6]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-
 V[29]*V[28])+8*(S[0]+S[1]+S[2]+S[3]))+S[5]*(V[24]*(8*V[25]-4*V[24])-4*
 S[4])));
C[16]=+S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[36]*(24*(V[30]*(V[28]-V[29]+V[27]-
 V[26])+V[31]*(V[25]-V[24]))))))));
C[15]=+S[7]*(S[14]*(32*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+16*(S[0]+S[1]+S[2]+S[3])));
C[14]=+S[7]*(S[14]*(16*(V[26]*(V[29]-V[28]-V[27])+V[27]*(V[28]-V[29])-V[29]*
 V[28])+8*(S[0]+S[1]+S[2]+S[3])));
C[13]=+S[9]*(S[7]*(S[5]*(S[6]*(V[24]*(2*V[24]-4*V[25])+2*S[4]))));
C[12]=+S[9]*(S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(12*(V[25]-
 V[24])))))))));
C[11]=+S[14]*(S[6]*(S[7]*(S[5]*(V[24]*(8*V[25]-4*V[24])-4*S[4]))+18*S[11]*
 S[12]*S[13]*S[14]*S[15]));
C[10]=+S[7]*(S[14]*(S[5]*(S[6]*(V[24]*(4*V[24]-8*V[25])+4*S[4]))));
C[9]=+S[14]*(S[6]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(24*(V[25]-
 V[24])))))))));
C[8]=+36*S[11]*S[12]*S[13]*S[6]*S[14]*S[15];
C[7]=+S[9]*(S[7]*(S[5]*(V[24]*(2*V[24]-4*V[25])+2*S[4])));
C[6]=+S[9]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(12*(V[25]-V[24]))))))));
C[5]=+S[14]*(S[7]*(S[5]*(V[24]*(8*V[25]-4*V[24])-4*S[4]))+18*S[11]*S[12]*
 S[13]*S[14]*S[15]);
C[4]=+S[7]*(S[14]*(S[5]*(V[24]*(4*V[24]-8*V[25])+4*S[4])));
C[3]=+S[14]*(S[10]*(V[1]*(V[2]*(V[12]*(V[31]*(V[36]*(24*(V[25]-
 V[24]))))))));
C[2]=+36*S[11]*S[12]*S[13]*S[14]*S[15];
S[17]=V[2]*V[2]*V[2]*V[2];
C[1]=+4*S[13]*S[17];
S[18]=V[49]*V[49];
C[0]=+S[18]*S[6]*S[7];
}
REAL F294_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         U     t     W+ |  e2     !  e2 |  W+    t     U             
       ==<==@==<==@-1<--@==>======!==>==@--<2-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
           H|P7   \========<======!==<========/    H|-PA             
            |              P6     !  P6             |                
            |                     !                 |                
         b  |              b      !  b              |  b             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[80];REAL S[3];REAL tmp[6];                                    
     
if(CalcConst) C294(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=DP[6]*DP[6];
tmp[0]=+V[50]*(V[50]*(DP[7]*(V[50]*(V[50]*(C[28]*(DP[0]*(DP[9]-DP[4])+DP[6]*
 (DP[4]-DP[9])-DP[7]*DP[3])-C[49]*DP[3])+C[29]*(DP[0]*(DP[9]-DP[4])+DP[6]*(
 DP[4]-DP[9]))+DP[3]*(C[47]*(DP[6]-DP[0])-C[43]*DP[7]))+DP[3]*(DP[7]*(C[41]*
 (DP[0]-DP[6])+C[44]-C[40]*DP[7])+DP[0]*(C[41]*DP[6]-C[40]*DP[0])+C[50]-
 C[40]*S[1])+C[34]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+
 C[30]*(DP[0]*(DP[4]-DP[9])+DP[6]*(DP[9]-DP[4]))+C[51]*DP[1])+V[50]*(V[50]*(
 C[31]*(DP[0]*(DP[9]-DP[4])+DP[6]*(DP[4]-DP[9]))+C[59]*DP[3])+C[32]*(DP[0]*(
 DP[9]-DP[4])+DP[6]*(DP[4]-DP[9]))+DP[3]*(C[54]*(DP[6]-DP[0])+C[60]))+DP[0]*
 (DP[3]*(C[53]*DP[6]-C[55]-C[52]*DP[0])+C[37]*(DP[2]-DP[8])+C[33]*(DP[4]-
 DP[9]))+DP[6]*(DP[3]*(C[55]-C[52]*DP[6])+C[37]*(DP[8]-DP[2])+C[33]*(DP[9]-
 DP[4]))-C[62]*DP[1]-C[61]*DP[3])+DP[7]*(DP[0]*(C[35]*(DP[2]-DP[8])+C[3]*(
 DP[4]-DP[9])+C[48]*DP[1]+C[18]*DP[3])+DP[6]*(C[35]*(DP[8]-DP[2])+C[3]*(
 DP[9]-DP[4])-C[48]*DP[1]-C[18]*DP[3])+DP[7]*(C[45]*DP[1]+C[16]*DP[3]))+
 DP[0]*(C[38]*(DP[2]-DP[8])+C[9]*(DP[4]-DP[9])+C[57]*DP[1]+C[23]*DP[3])+
 DP[6]*(C[38]*(DP[8]-DP[2])+C[9]*(DP[9]-DP[4])-C[57]*DP[1]-C[23]*DP[3])-
 C[63]*DP[1]-C[26]*DP[3]);
S[2]=V[50]*V[50];
tmp[1]=+DP[5]*(DP[7]*(C[2]*(DP[13]*(DP[0]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[6]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[7]*(-DP[1]-DP[3]))+S[2]*(DP[0]*(DP[14]-DP[11])+
 DP[6]*(DP[11]-DP[14])-DP[10]*DP[7])+DP[5]*(DP[0]*(DP[11]-DP[14])+DP[6]*(
 DP[14]-DP[11])+DP[10]*DP[7]))+DP[10]*(DP[7]*(C[15]*(DP[0]-DP[6])+C[67]-
 C[16]*V[50]-C[14]*DP[7])+V[50]*(C[18]*(DP[6]-DP[0])-C[19]*V[50])+DP[0]*(
 C[15]*DP[6]-C[14]*DP[0])+C[71]+C[19]*DP[5]-C[14]*S[1])+V[50]*(C[3]*(DP[0]*(
 DP[14]-DP[11])+DP[6]*(DP[11]-DP[14])))+C[5]*(DP[0]*(DP[11]-DP[14])+DP[6]*(
 DP[14]-DP[11]))+DP[13]*(C[19]*(-DP[1]-DP[3])))+DP[0]*(C[8]*(DP[13]*(DP[8]-
 DP[2]-DP[4]+DP[9])+S[2]*(DP[14]-DP[11])+DP[5]*(DP[11]-DP[14]))+DP[10]*(
 C[22]*DP[6]-C[24]-C[23]*V[50]-C[21]*DP[0])+V[50]*(C[9]*(DP[14]-DP[11]))+
 C[11]*(DP[11]-DP[14]))+DP[6]*(C[8]*(DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+S[2]*(
 DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+V[50]*(C[9]*(DP[11]-DP[14])+C[23]*
 DP[10])+DP[10]*(C[24]-C[21]*DP[6])+C[11]*(DP[14]-DP[11]))+DP[10]*(V[50]*(
 C[26]+C[25]*V[50])-C[77]-C[25]*DP[5])+DP[13]*(C[25]*(DP[1]+DP[3])));
tmp[2]=+DP[12]*(DP[7]*(DP[0]*(DP[5]*(C[2]*(DP[8]-DP[2]-DP[4]+DP[9]))+DP[1]*(
 C[42]*(-DP[6]-DP[7])+C[15]*DP[0])+DP[3]*(C[15]*(-DP[6]-DP[7])+C[14]*DP[0])+
 C[36]*(DP[2]-DP[8])+C[4]*(DP[4]-DP[9]))+DP[6]*(DP[5]*(C[2]*(DP[2]+DP[4]-
 DP[8]-DP[9]))+DP[1]*(C[15]*DP[6]+C[42]*DP[7])+DP[3]*(C[14]*DP[6]+C[15]*
 DP[7])+C[36]*(DP[8]-DP[2])+C[4]*(DP[9]-DP[4]))+DP[7]*(DP[1]*(C[15]*DP[7]-
 C[46]-C[2]*DP[5])+DP[3]*(C[14]*DP[7]-C[17]-C[2]*DP[5]))+DP[1]*(-C[24]-
 C[19]*DP[5])+DP[3]*(-C[20]-C[19]*DP[5]))+DP[0]*(DP[5]*(C[8]*(DP[8]-DP[2]-
 DP[4]+DP[9]))+DP[1]*(C[58]+C[22]*DP[0]-C[56]*DP[6])+DP[3]*(C[24]+C[21]*
 DP[0]-C[22]*DP[6])+C[39]*(DP[2]-DP[8])+C[10]*(DP[4]-DP[9]))+DP[6]*(DP[5]*(
 C[8]*(DP[2]+DP[4]-DP[8]-DP[9]))+DP[1]*(C[22]*DP[6]-C[58])+DP[3]*(C[21]*
 DP[6]-C[24])+C[39]*(DP[8]-DP[2])+C[10]*(DP[9]-DP[4]))+DP[1]*(C[64]+C[25]*
 DP[5])+DP[3]*(C[27]+C[25]*DP[5])+tmp[0]);
tmp[3]=+DP[5]*(DP[7]*(C[3]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[6]*(DP[12]*(DP[2]+DP[4]-
 DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11])))+
 C[18]*(DP[0]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+
 DP[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5]))+DP[7]*(
 C[16]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[68]*
 DP[10])+C[6]*(DP[0]*(DP[11]-DP[14])+DP[6]*(DP[14]-DP[11]))+DP[10]*(C[70]*(
 DP[0]-DP[6])))+C[9]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-
 DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[6]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11])))+C[23]*(
 DP[0]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+DP[6]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5]))+C[26]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[12]*(DP[0]*(DP[11]-
 DP[14])+DP[6]*(DP[14]-DP[11]))+DP[10]*(C[75]*(DP[0]-DP[6])-C[78]));
tmp[4]=+DP[7]*(DP[0]*(DP[12]*(C[4]*(DP[8]-DP[2]-DP[4]+DP[9])+C[15]*(DP[1]*(
 DP[6]+DP[7])+DP[3]*(DP[6]+DP[7]))+DP[0]*(C[14]*(-DP[1]-DP[3])))+DP[13]*(
 C[4]*(DP[8]-DP[2]-DP[4]+DP[9])+C[15]*(DP[1]*(DP[6]+DP[7])+DP[3]*(DP[6]+
 DP[7]))+DP[0]*(C[14]*(-DP[1]-DP[3])))+DP[10]*(DP[5]*(C[15]*(-DP[6]-DP[7])+
 C[14]*DP[0])+C[66]*(-DP[6]-DP[7])+C[65]*DP[0])+DP[5]*(C[4]*(DP[11]-
 DP[14]))+C[7]*(DP[11]-DP[14]))+DP[6]*(C[4]*(DP[12]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[6]*(
 C[14]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[65]*
 DP[10])+DP[7]*(C[15]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[66]*DP[10])+C[7]*(DP[14]-DP[11]))+DP[7]*(DP[7]*(C[14]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[65]*DP[10])+C[17]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[69]*DP[10])+
 C[20]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[72]*
 DP[10]);
tmp[5]=+DP[5]*(DP[0]*(DP[12]*(C[10]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[1]*(C[22]*
 DP[6]-C[24]-C[21]*DP[0])+DP[3]*(C[22]*DP[6]-C[24]-C[21]*DP[0]))+DP[13]*(
 C[10]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[1]*(C[22]*DP[6]-C[24]-C[21]*DP[0])+
 DP[3]*(C[22]*DP[6]-C[24]-C[21]*DP[0]))+DP[10]*(DP[5]*(C[24]+C[21]*DP[0]-
 C[22]*DP[6])+C[76]+C[73]*DP[0]-C[74]*DP[6])+DP[5]*(C[10]*(DP[11]-DP[14]))+
 C[13]*(DP[11]-DP[14]))+DP[6]*(C[10]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+
 DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+DP[6]*(C[21]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[73]*DP[10])+
 C[24]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[13]*(
 DP[14]-DP[11])-C[76]*DP[10])+C[27]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[79]*DP[10]+tmp[4]);
R=+V[50]*(V[50]*(DP[13]*(V[50]*(DP[7]*(V[50]*(C[2]*(DP[0]*(DP[2]-DP[8])+
 DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+C[19]*DP[1])+C[3]*(DP[0]*(DP[2]-DP[8])+
 DP[6]*(DP[8]-DP[2]))+DP[1]*(C[18]*(DP[0]-DP[6])+C[16]*DP[7]))+V[50]*(C[8]*(
 DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2]))-C[25]*DP[1])+C[9]*(DP[0]*(DP[2]-
 DP[8])+DP[6]*(DP[8]-DP[2]))+DP[1]*(C[23]*(DP[0]-DP[6])-C[26]))+DP[1]*(
 DP[7]*(DP[7]*(C[15]*(DP[6]-DP[0])+C[14]*DP[7]-C[17])+DP[0]*(C[14]*DP[0]-
 C[15]*DP[6])+C[14]*S[1]-C[20])+DP[0]*(C[24]+C[21]*DP[0]-C[22]*DP[6])+DP[6]*
 (C[21]*DP[6]-C[24])+C[27])+DP[0]*(DP[2]*(C[10]+C[4]*DP[7])+DP[8]*(-C[10]-
 C[4]*DP[7]))+DP[6]*(DP[2]*(-C[10]-C[4]*DP[7])+DP[8]*(C[10]+C[4]*DP[7])))+
 tmp[1]+tmp[2])+tmp[3])+tmp[5];
R*=(N/D)*Q2[6]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
