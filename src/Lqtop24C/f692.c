/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F692_out;
static void C692(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
S[2]=V[14]*V[14];
S[3]=V[10]*V[10];
C[136]=+S[1]*(S[3]*(S[2]*(8*S[0]+4*S[1])));
C[135]=+S[1]*(S[1]*(2*(S[3]*(S[2]+S[3])+S[0]*(S[2]-S[0])))+8*S[2]*S[0]*
 S[3]);
C[134]=+S[1]*(4*(S[1]*(S[2]-S[0]+S[3])+S[3]*(S[2]+S[3])+S[0]*(S[2]-S[0])));
C[133]=+S[1]*(4*(S[1]*(S[3]-S[0])+S[2]*(S[0]+S[3])));
S[4]=V[9]*V[9]*V[9]*V[9];
C[132]=+S[4]*(S[3]*(S[0]*(2*(S[3]*(S[2]-S[3])+S[0]*(S[2]-S[0]))-4*S[0]*
 S[3])));
C[131]=+S[1]*(S[3]*(S[0]*(4*(S[1]*(S[2]-S[0]-S[3])+S[3]*(S[2]-S[3])+S[0]*(
 S[2]-S[0]))-8*S[0]*S[3])));
C[130]=+S[1]*(S[3]*(S[0]*(16*(S[0]+S[3])+12*S[1])+4*S[3]*S[1]));
C[129]=+S[1]*(S[3]*(16*S[0]+8*S[1]));
S[5]=V[11]*V[11]*V[11]*V[11];
C[128]=+S[4]*(S[3]*(S[3]*(S[2]-11*S[0]-S[3])+S[0]*(6*S[2]-11*S[0]))+S[5]*(
 S[2]-S[0]));
C[127]=+S[1]*(S[3]*(S[3]*(2*(S[2]-S[3]-S[1])-22*S[0])+S[0]*(12*(S[2]-S[1])-
 22*S[0])+2*S[2]*S[1])+S[0]*(2*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1])));
C[126]=+S[1]*(S[3]*(48*S[0]+8*S[3]+12*S[1])+S[0]*(8*S[0]+4*S[1]));
C[125]=+S[4]*(S[3]*(2*S[2]-16*S[0]-4*S[3])+S[0]*(2*S[2]-4*S[0]));
C[124]=+S[1]*(S[3]*(4*(S[2]-S[1])-32*S[0]-8*S[3])+S[0]*(4*(S[2]-S[1])-8*
 S[0]));
C[123]=+S[4]*(S[3]*(S[0]*(8*(S[0]+S[3]))));
C[122]=+S[1]*(S[0]*(S[3]*(16*(S[0]+S[3])+12*S[1])+4*S[0]*S[1]));
C[121]=+S[1]*(S[0]*(8*(S[0]+S[1])+24*S[3]));
C[120]=+16*S[0]*S[3]*S[4];
C[119]=+S[1]*(S[1]*(8*(S[0]+S[3]))+32*S[0]*S[3]);
C[118]=+S[1]*(16*(S[0]+S[3])+8*S[1]);
C[117]=+S[4]*(S[3]*(24*S[0]+4*S[3])+4*S[5]);
C[116]=+S[1]*(S[3]*(48*S[0]+8*S[3]+4*S[1])+S[0]*(8*S[0]+12*S[1]));
C[115]=+S[1]*(8*(S[3]+S[1])+24*S[0]);
C[114]=+S[4]*(8*(S[0]+S[3]));
C[113]=+8*S[0]*S[3]*S[4];
C[112]=+S[1]*(S[0]*(16*S[3]+8*S[1]));
C[111]=+S[4]*(4*(S[0]+S[3]));
C[110]=+16*S[2]*S[3]*S[1];
C[109]=+S[1]*(S[3]*(S[0]*(8*(S[3]*(S[2]-S[3])+S[0]*(S[2]-S[0]))-16*S[0]*
 S[3])));
C[108]=+S[1]*(S[3]*(S[0]*(16*(S[2]-S[0]-S[3]))));
C[107]=+S[1]*(S[3]*(48*S[0]+16*S[3]));
C[106]=+32*S[3]*S[1];
C[105]=+S[3]*(S[2]*(16*S[0]+8*S[1]));
C[104]=+16*S[2]*S[3];
C[103]=+S[3]*(S[0]*(8*(S[1]*(S[2]-S[0]-S[3])+S[3]*(S[2]-S[3])+S[0]*(S[2]-
 S[0]))-16*S[0]*S[3]));
C[102]=+S[3]*(S[0]*(16*(S[2]-S[0]-S[3])));
C[101]=+S[3]*(S[0]*(32*(S[0]+S[3])+24*S[1])+8*S[3]*S[1]);
C[100]=+S[3]*(48*S[0]+16*S[3]);
C[99]=+S[3]*(32*S[0]+16*S[1]);
C[98]=+32*S[3];
C[97]=+S[1]*(S[3]*(S[3]*(4*(S[2]-S[3])-44*S[0])+S[0]*(24*S[2]-44*S[0]))+
 S[5]*(4*(S[2]-S[0])));
C[96]=+S[1]*(8*(S[3]*(S[2]-S[3])+S[0]*(S[2]-S[0]))-48*S[0]*S[3]);
C[95]=+S[1]*(16*S[0]+48*S[3]);
C[94]=+S[3]*(S[3]*(4*(S[2]-S[3]-S[1])-44*S[0])+S[0]*(24*(S[2]-S[1])-44*
 S[0])+4*S[2]*S[1])+S[0]*(4*(S[0]*(S[2]-S[0]-S[1])+S[2]*S[1]));
C[93]=+8*(S[3]*(S[2]-S[3])+S[0]*(S[2]-S[0]))-48*S[0]*S[3];
C[92]=+S[3]*(96*S[0]+16*S[3]+24*S[1])+S[0]*(16*S[0]+8*S[1]);
C[91]=+16*S[0]+48*S[3];
C[90]=+S[1]*(S[3]*(8*S[2]-64*S[0]-16*S[3])+S[0]*(8*S[2]-16*S[0]));
C[89]=+S[3]*(8*(S[2]-S[1])-64*S[0]-16*S[3])+S[0]*(8*(S[2]-S[1])-16*S[0]);
C[88]=+S[1]*(8*(S[3]*(S[2]+S[3])+S[0]*(S[2]-S[0])));
C[87]=+S[1]*(16*(S[2]-S[0]+S[3]));
C[86]=+S[1]*(S[3]*(S[0]*(32*(S[0]+S[3]))));
C[85]=+S[1]*(S[0]*(16*S[0]+48*S[3]));
C[84]=+64*S[0]*S[3]*S[1];
C[83]=+S[1]*(4*(S[3]*(S[2]+S[3])+S[0]*(S[2]-S[0])))+16*S[2]*S[0]*S[3];
C[82]=+8*(S[1]*(S[2]-S[0]+S[3])+S[3]*(S[2]+S[3])+S[0]*(S[2]-S[0]));
C[81]=+16*(S[2]-S[0]+S[3]);
C[80]=+S[0]*(S[3]*(32*(S[0]+S[3])+24*S[1])+8*S[0]*S[1]);
C[79]=+S[0]*(16*(S[0]+S[1])+48*S[3]);
C[78]=+S[1]*(16*(S[0]+S[3]))+64*S[0]*S[3];
C[77]=+32*(S[0]+S[3])+16*S[1];
C[76]=+S[1]*(S[3]*(96*S[0]+16*S[3])+16*S[5]);
C[75]=+S[1]*(48*S[0]+16*S[3]);
C[74]=+8*(S[1]*(S[3]-S[0])+S[2]*(S[0]+S[3]));
C[73]=+S[3]*(96*S[0]+16*S[3]+8*S[1])+S[0]*(16*S[0]+24*S[1]);
C[72]=+16*(S[3]+S[1])+48*S[0];
C[71]=+S[1]*(32*(S[0]+S[3]));
C[70]=+32*(S[0]+S[3]);
C[69]=+S[0]*(32*S[3]+16*S[1]);
C[68]=+16*(S[0]+S[3]);
C[67]=+S[1]*(S[3]*(S[0]*(S[2]*(16*(S[0]+S[3])))));
C[66]=+32*S[2]*S[0]*S[3]*S[1];
C[65]=+S[1]*(8*(S[3]*(S[2]-S[3])+S[0]*(S[2]+S[0])));
C[64]=+S[1]*(S[2]*(S[3]*(48*S[0]+8*S[3])+8*S[5]));
C[63]=+S[1]*(S[2]*(16*(S[0]+S[3])));
C[62]=+16*S[2]*S[0]*S[1];
C[61]=+32*S[0]*S[1];
C[60]=+S[1]*(16*(S[0]-S[3]));
C[59]=+32*S[1];
C[58]=+S[3]*(S[0]*(S[2]*(16*(S[0]+S[3]+S[1]))));
C[57]=+32*S[2]*S[0]*S[3];
C[56]=+S[1]*(4*(S[3]*(S[2]-S[3])+S[0]*(S[2]+S[0])))+16*S[2]*S[0]*S[3];
C[55]=+8*(S[3]*(S[2]-S[3])+S[0]*(S[2]+S[0]));
S[6]=V[10]*V[10]*V[10]*V[10];
C[54]=+S[2]*(8*(S[1]*(S[0]+S[3])+S[5]+S[6])+48*S[0]*S[3]);
C[53]=+8*(S[1]*(S[0]-S[3])+S[2]*(S[0]+S[3]));
C[52]=+16*(S[0]-S[3]);
C[51]=+S[2]*(16*(S[0]+S[3]));
C[50]=+S[0]*(S[2]*(16*S[3]+8*S[1]));
C[49]=+S[0]*(16*(S[2]-S[1]));
C[48]=+32*S[0];
C[47]=+16*(S[0]-S[3]-S[1]);
C[46]=+S[2]*(8*(S[0]+S[3]));
C[45]=+8*S[2]*S[3]*S[1];
C[44]=+S[1]*(S[3]*(S[0]*(4*(S[3]*(S[2]-S[3])+S[0]*(S[2]-S[0]))-8*S[0]*
 S[3])));
C[43]=+S[1]*(S[3]*(S[0]*(8*(S[2]-S[0]-S[3]))));
C[42]=+S[1]*(S[3]*(24*S[0]+8*S[3]));
C[41]=+16*S[3]*S[1];
C[40]=+S[1]*(S[3]*(S[3]*(2*(S[2]-S[3])-22*S[0])+S[0]*(12*S[2]-22*S[0]))+
 S[5]*(2*(S[2]-S[0])));
C[39]=+S[1]*(4*(S[3]*(S[2]-S[3])+S[0]*(S[2]-S[0]))-24*S[0]*S[3]);
C[38]=+S[1]*(8*S[0]+24*S[3]);
C[37]=+S[1]*(S[3]*(4*S[2]-32*S[0]-8*S[3])+S[0]*(4*S[2]-8*S[0]));
C[36]=+S[1]*(4*(S[3]*(S[2]+S[3])+S[0]*(S[2]-S[0])));
C[35]=+S[1]*(8*(S[2]-S[0]+S[3]));
C[34]=+S[1]*(S[3]*(S[0]*(16*(S[0]+S[3]))));
C[33]=+S[1]*(S[0]*(8*S[0]+24*S[3]));
C[32]=+32*S[0]*S[3]*S[1];
C[31]=+S[1]*(S[3]*(48*S[0]+8*S[3])+8*S[5]);
C[30]=+S[1]*(24*S[0]+8*S[3]);
C[29]=+S[1]*(16*(S[0]+S[3]));
C[28]=+16*S[0]*S[3]*S[1];
C[27]=+S[1]*(8*(S[0]+S[3]));
C[26]=+S[4]*(S[3]*(S[0]*(S[2]*(4*(S[0]+S[3])))));
C[25]=+S[1]*(S[3]*(S[0]*(S[2]*(8*(S[0]+S[3]+S[1])))));
C[24]=+S[1]*(S[1]*(2*(S[3]*(S[2]-S[3])+S[0]*(S[2]+S[0])))+8*S[2]*S[0]*S[3]);
C[23]=+S[1]*(S[3]*(S[0]*(S[2]*(8*(S[0]+S[3])))));
C[22]=+16*S[2]*S[0]*S[3]*S[1];
C[21]=+S[1]*(4*(S[3]*(S[2]-S[3])+S[0]*(S[2]+S[0])));
C[20]=+S[4]*(S[2]*(S[3]*(12*S[0]+2*S[3])+2*S[5]));
C[19]=+S[1]*(S[2]*(4*(S[1]*(S[0]+S[3])+S[5]+S[6])+24*S[0]*S[3]));
C[18]=+S[1]*(4*(S[1]*(S[0]-S[3])+S[2]*(S[0]+S[3])));
C[17]=+S[1]*(S[2]*(S[3]*(24*S[0]+4*S[3])+4*S[5]));
C[16]=+S[4]*(S[2]*(4*(S[0]+S[3])));
C[15]=+S[1]*(S[2]*(8*(S[0]+S[3])));
C[14]=+4*S[2]*S[0]*S[3]*S[4];
C[13]=+S[1]*(S[0]*(S[2]*(8*S[3]+4*S[1])));
C[12]=+S[1]*(S[0]*(8*(S[2]-S[1])));
C[11]=+S[4]*(4*(S[0]-S[3]));
C[10]=+S[1]*(8*(S[0]-S[3]-S[1]));
C[9]=+8*S[2]*S[0]*S[3]*S[1];
C[8]=+8*S[2]*S[0]*S[1];
C[7]=+16*S[0]*S[1];
C[6]=+S[1]*(8*(S[0]-S[3]));
C[5]=+S[4]*(S[2]*(2*(S[0]+S[3])));
C[4]=+8*S[4];
C[3]=+S[1]*(S[2]*(4*(S[0]+S[3])));
C[2]=+16*S[1];
S[7]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[7];
S[8]=V[49]*V[49]*V[49]*V[49];
S[9]=V[45]*V[45];
S[10]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F692_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         s                 c      !  c                 s             
       ==>==@==============>======!==>==============@==>==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
          W+|P7         /==<======!==<==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         B  |  t     W+ |  e2     !  e2 |  W+    t  |  B             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[137];REAL S[2];REAL tmp[7];                                   
     
if(CalcConst) C692(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[12]*(C[6]*(DP[0]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[1]*(-DP[6]-DP[7])+
 DP[3]*(-DP[6]-DP[7]))+DP[2]*(C[33]+C[29]*DP[0]-C[30]*DP[6]-C[7]*DP[7])+
 DP[4]*(C[33]+C[29]*DP[0]-C[30]*DP[6]-C[7]*DP[7])+C[36]*(-DP[1]-DP[3])+C[8]*
 (DP[8]+DP[9]))+DP[13]*(C[6]*(DP[0]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[1]*(-DP[6]-
 DP[7])+DP[3]*(-DP[6]-DP[7]))+DP[2]*(C[33]+C[29]*DP[0]-C[30]*DP[6]-C[7]*
 DP[7])+DP[4]*(C[33]+C[29]*DP[0]-C[30]*DP[6]-C[7]*DP[7])+C[36]*(-DP[1]-
 DP[3])+C[8]*(DP[8]+DP[9]))+DP[11]*(DP[6]*(C[29]*(DP[0]-DP[6])+C[116]+C[30]*
 DP[5]-C[27]*DP[7])+DP[5]*(C[7]*DP[7]-C[33]-C[29]*DP[0])+C[112]*DP[7]-
 C[122]-C[119]*DP[0])+DP[10]*(DP[5]*(C[6]*(DP[6]-DP[0]+DP[7])+C[36])+C[11]*(
 DP[7]-DP[0])+C[135]-C[133]*DP[6])+DP[14]*(DP[0]*(-C[11]-C[6]*DP[5])+C[3]*
 DP[6]-C[13]-C[8]*DP[5]);
tmp[1]=+DP[0]*(DP[6]*(C[38]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[1]-DP[5]))+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[1]-DP[5]))+DP[11]*(C[29]*DP[6]-C[126]-C[27]*DP[0])+C[3]*DP[10]-
 C[18]*DP[14])+DP[0]*(C[41]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[1]))+C[6]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*(DP[5]-S[1]))+C[129]*DP[11]+C[11]*DP[14])+DP[12]*(C[45]*(DP[1]+
 DP[3])+C[42]*(-DP[2]-DP[4])+C[21]*(-DP[8]-DP[9]))+DP[13]*(C[45]*(DP[1]+
 DP[3])+C[42]*(-DP[2]-DP[4])+C[21]*(-DP[8]-DP[9]))+S[1]*(C[45]*DP[10]-C[42]*
 DP[11]-C[21]*DP[14])+DP[5]*(C[42]*DP[11]-C[45]*DP[10]+C[21]*DP[14])+C[130]*
 DP[11]-C[136]*DP[10]+C[24]*DP[14])+DP[6]*(C[15]*(DP[12]*(DP[8]-DP[1]-DP[3]+
 DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[10]*(DP[5]-S[1]-DP[6])+DP[14]*(
 S[1]-DP[5]+DP[6]))+DP[6]*(C[27]*(DP[11]*(DP[5]-S[1]-DP[6])+DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13]))-C[124]*DP[11])+C[39]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+C[19]*(DP[10]-DP[14])+
 C[127]*DP[11])+C[22]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-
 DP[8]-DP[9])+S[1]*(DP[10]-DP[14])+DP[5]*(DP[14]-DP[10]))+C[43]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))+C[25]*(DP[14]-
 DP[10])-C[131]*DP[11];
tmp[2]=+S[1]*(DP[7]*(S[1]*(S[1]*(32*(DP[0]*(DP[9]-DP[4])+DP[6]*(DP[4]-
 DP[9])-DP[7]*DP[3])+C[48]*(DP[9]-DP[4])+C[81]*DP[3])+DP[0]*(C[59]*(DP[2]-
 DP[8])+C[52]*DP[3]+C[77]*DP[4]+C[47]*DP[9])+DP[6]*(C[59]*(DP[8]-DP[2])+
 C[2]*DP[9]-C[52]*DP[3]-C[72]*DP[4])+DP[7]*(C[59]*DP[1]-C[47]*DP[3]-C[48]*
 DP[4])+C[61]*(DP[2]-DP[8])+C[79]*DP[4]-C[87]*DP[1]-C[82]*DP[3]+C[49]*
 DP[9])+DP[6]*(DP[4]*(C[70]*(DP[0]-DP[6])+C[73]-C[68]*DP[7])+C[60]*DP[1]+
 C[75]*DP[2]-C[74]*DP[3]+C[46]*DP[9])+DP[0]*(C[60]*(-DP[1]-DP[8])+C[6]*(-
 DP[3]-DP[9])-C[71]*DP[2]-C[78]*DP[4])+DP[7]*(C[60]*DP[1]+C[61]*DP[2]+C[6]*
 DP[3]+C[69]*DP[4])+C[88]*DP[1]-C[85]*DP[2]+C[83]*DP[3]-C[80]*DP[4]-C[62]*
 DP[8]-C[50]*DP[9])+DP[0]*(DP[6]*(DP[4]*(C[91]*S[1]-C[92]-C[68]*DP[0]+C[70]*
 DP[6])+DP[9]*(C[52]*S[1]-C[53])+C[46]*DP[3]-C[95]*DP[2]-C[60]*DP[8])+DP[0]*
 (S[1]*(-C[98]*DP[4]-C[52]*DP[9])+C[106]*DP[2]+C[99]*DP[4]+C[60]*DP[8]+C[6]*
 DP[9])+S[1]*(C[104]*DP[3]-C[100]*DP[4]-C[55]*DP[9])+C[107]*DP[2]-C[110]*
 DP[1]-C[105]*DP[3]+C[101]*DP[4]+C[65]*DP[8]+C[56]*DP[9])+DP[6]*(DP[6]*(
 DP[4]*(C[68]*(-S[1]-DP[6])-C[89])+C[51]*(DP[9]-DP[3])+C[29]*DP[2])+S[1]*(
 C[51]*(DP[9]-DP[3])-C[93]*DP[4])+C[63]*(DP[1]-DP[8])+C[54]*(DP[3]-DP[9])+
 C[96]*DP[2]+C[94]*DP[4])+S[1]*(C[57]*(DP[3]-DP[9])+C[102]*DP[4])+C[66]*(
 DP[8]-DP[1])+C[58]*(DP[9]-DP[3])-C[108]*DP[2]-C[103]*DP[4]);
tmp[3]=+DP[13]*(S[1]*(DP[7]*(S[1]*(C[2]*(DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-
 DP[2])+DP[7]*DP[1])+C[7]*(DP[2]-DP[8])-C[35]*DP[1])+DP[1]*(C[6]*(DP[6]-
 DP[0]+DP[7])+C[36])+DP[2]*(C[30]*DP[6]-C[33]-C[29]*DP[0]+C[7]*DP[7])+DP[8]*
 (-C[8]-C[6]*DP[0]))+DP[0]*(DP[2]*(C[42]+C[41]*DP[0]-C[38]*DP[6])+DP[8]*(
 C[6]*(DP[0]-DP[6])+C[21])-C[45]*DP[1])+DP[6]*(DP[2]*(C[39]+C[27]*DP[6])+
 C[15]*(DP[1]-DP[8]))+C[22]*(DP[8]-DP[1])-C[43]*DP[2])+DP[6]*(DP[2]*(DP[0]*(
 C[29]*(-DP[6]-DP[7])+C[31]+C[27]*DP[0])+DP[6]*(C[37]+C[27]*DP[6]+C[29]*
 DP[7])+DP[7]*(C[27]*DP[7]-C[31])-C[40])+DP[1]*(C[3]*(DP[7]-DP[0])+C[15]*
 DP[6]-C[17])+DP[8]*(C[3]*(DP[0]-DP[7])+C[17]-C[15]*DP[6]))+DP[2]*(DP[0]*(
 C[32]*DP[7]-C[34]-C[28]*DP[0])+DP[7]*(C[34]-C[28]*DP[7])+C[44])+C[9]*(
 DP[0]*(DP[1]-DP[8])+DP[7]*(DP[8]-DP[1]))+C[23]*(DP[1]-DP[8]));
tmp[4]=+DP[12]*(DP[6]*(DP[0]*(DP[2]*(C[71]*(-DP[6]-DP[7])+C[76]+C[29]*
 DP[0])+DP[4]*(C[29]*(-DP[6]-DP[7])+C[31]+C[27]*DP[0])+C[15]*(DP[8]-DP[1])+
 C[3]*(DP[9]-DP[3]))+DP[6]*(DP[2]*(C[90]+C[29]*DP[6]+C[71]*DP[7])+DP[4]*(
 C[37]+C[27]*DP[6]+C[29]*DP[7])+C[63]*(DP[1]-DP[8])+C[15]*(DP[3]-DP[9]))+
 DP[7]*(DP[2]*(C[29]*DP[7]-C[76])+DP[4]*(C[27]*DP[7]-C[31])+C[15]*(DP[1]-
 DP[8])+C[3]*(DP[3]-DP[9]))+C[64]*(DP[8]-DP[1])+C[17]*(DP[9]-DP[3])-C[97]*
 DP[2]-C[40]*DP[4])+DP[0]*(DP[2]*(C[84]*DP[7]-C[86]-C[32]*DP[0])+DP[4]*(
 C[32]*DP[7]-C[34]-C[28]*DP[0])+C[22]*(DP[1]-DP[8])+C[9]*(DP[3]-DP[9]))+
 DP[7]*(DP[2]*(C[86]-C[32]*DP[7])+DP[4]*(C[34]-C[28]*DP[7])+C[22]*(DP[8]-
 DP[1])+C[9]*(DP[9]-DP[3]))+C[67]*(DP[1]-DP[8])+C[23]*(DP[3]-DP[9])+C[109]*
 DP[2]+C[44]*DP[4]+tmp[2])+tmp[3];
tmp[5]=+DP[0]*(DP[12]*(DP[2]*(C[29]*(DP[6]+DP[7])-C[31]-C[27]*DP[0])+DP[4]*(
 C[29]*(DP[6]+DP[7])-C[31]-C[27]*DP[0])+C[3]*(DP[1]+DP[3]-DP[8]-DP[9]))+
 DP[13]*(DP[2]*(C[29]*(DP[6]+DP[7])-C[31]-C[27]*DP[0])+DP[4]*(C[29]*(DP[6]+
 DP[7])-C[31]-C[27]*DP[0])+C[3]*(DP[1]+DP[3]-DP[8]-DP[9]))+DP[11]*(DP[5]*(
 C[29]*(-DP[6]-DP[7])+C[31]+C[27]*DP[0])+C[114]*(-DP[6]-DP[7])+C[117]+
 C[111]*DP[0])+DP[5]*(C[3]*(DP[14]-DP[10]))+C[5]*(DP[14]-DP[10]))+DP[6]*(
 DP[12]*(C[15]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[2]*(-C[37]-C[27]*DP[6]-C[29]*
 DP[7])+DP[4]*(-C[37]-C[27]*DP[6]-C[29]*DP[7]))+DP[13]*(C[15]*(DP[8]-DP[1]-
 DP[3]+DP[9])+DP[2]*(-C[37]-C[27]*DP[6]-C[29]*DP[7])+DP[4]*(-C[37]-C[27]*
 DP[6]-C[29]*DP[7]))+DP[11]*(DP[5]*(C[37]+C[27]*DP[6]+C[29]*DP[7])+C[125]+
 C[111]*DP[6]+C[114]*DP[7])+DP[5]*(C[15]*(DP[10]-DP[14]))+C[16]*(DP[10]-
 DP[14]))+DP[7]*(C[3]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-
 DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+DP[7]*(C[27]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[111]*DP[11])+C[31]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[5]*(DP[10]-DP[14])-C[117]*
 DP[11])+C[17]*(DP[12]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-
 DP[9])+DP[5]*(DP[14]-DP[10]))+C[40]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])+C[20]*(DP[14]-DP[10])-C[128]*DP[11];
tmp[6]=+DP[5]*(DP[6]*tmp[5]+DP[0]*(DP[12]*(C[9]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[2]*(C[34]+C[28]*DP[0]-C[32]*DP[7])+DP[4]*(C[34]+C[28]*DP[0]-C[32]*
 DP[7]))+DP[13]*(C[9]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[2]*(C[34]+C[28]*DP[0]-
 C[32]*DP[7])+DP[4]*(C[34]+C[28]*DP[0]-C[32]*DP[7]))+DP[11]*(DP[5]*(C[32]*
 DP[7]-C[34]-C[28]*DP[0])+C[120]*DP[7]-C[123]-C[113]*DP[0])+DP[5]*(C[9]*(
 DP[10]-DP[14]))+C[14]*(DP[10]-DP[14]))+DP[7]*(C[9]*(DP[12]*(DP[1]+DP[3]-
 DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[10]))+DP[7]*
 (C[28]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[113]*
 DP[11])+C[34]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[14]*(DP[14]-DP[10])+C[123]*DP[11])+C[23]*(DP[12]*(DP[8]-DP[1]-DP[3]+
 DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14]))+C[44]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[26]*(DP[10]-
 DP[14])+C[132]*DP[11]);
R=+S[1]*(DP[5]*(DP[7]*(S[1]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-
 DP[14]))+DP[6]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-
 DP[9])+S[1]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1])))+C[7]*(DP[12]*(DP[8]-
 DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[11]*(DP[5]-S[1]-
 DP[7])+DP[14]*(S[1]-DP[5]))+DP[10]*(C[35]*(S[1]-DP[5])+C[6]*(DP[0]-DP[6])-
 C[134]-C[10]*DP[7])+C[35]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13]))+
 DP[11]*(C[121]+C[118]*DP[0]-C[115]*DP[6])+DP[14]*(C[12]+C[10]*DP[0]+C[4]*
 DP[6]))+tmp[0])+tmp[1])+tmp[4])+tmp[6];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
