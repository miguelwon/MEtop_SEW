/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F902_out;
static void C902(REAL * C)
{
REAL* V=va_out;
REAL S[10];                                                                 
     
S[0]=V[14]*V[14]*V[14]*V[14];
C[85]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
S[1]=V[17]*V[17];
C[84]=+S[0]*(S[1]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
S[2]=V[9]*V[9];
C[83]=+S[0]*(S[2]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[82]=+S[0]*(S[2]*(S[1]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*
 V[2])))))));
C[81]=+S[0]*(S[2]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[80]=+S[0]*(S[2]*(S[1]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*
 V[2])))))));
S[3]=V[14]*V[14];
S[4]=V[12]*V[12];
C[79]=+S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(12*(V[37]*V[22]+V[20]*V[2])))+S[3]*(
 V[31]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[78]=+S[3]*(V[1]*(V[12]*(16*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24]))))));
C[77]=+S[3]*(S[1]*(V[2]*(V[31]*(V[36]*(48*(V[37]*V[23]+V[21]*V[2]))))));
S[5]=V[9]*V[9]*V[9]*V[9];
C[76]=+S[5]*(S[0]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[75]=+S[5]*(S[4]*(S[3]*(S[1]*(V[2]*(V[30]*(V[36]*(3*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[74]=+S[2]*(S[3]*(V[1]*(V[12]*(16*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*
 (V[25]-V[24])))))));
C[73]=+S[5]*(S[0]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+4*(V[2]*(V[21]*(V[25]-V[24]))+
 V[23]*(V[37]*(V[25]-V[24])))))));
C[72]=+S[5]*(S[3]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(3*(V[37]*V[22]+V[20]*
 V[2])))+S[3]*(V[31]*(12*(V[37]*V[23]+V[21]*V[2]))))))));
C[71]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[25]-V[24]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[25]-
 V[24]))))));
C[70]=+S[3]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(12*(V[37]*V[22]+V[20]*V[2])))+
 S[3]*(V[31]*(24*(V[37]*V[23]+V[21]*V[2])))))));
C[69]=+S[0]*(S[2]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+8*(V[2]*(V[21]*(V[25]-V[24]))+
 V[23]*(V[37]*(V[25]-V[24])))))));
C[68]=+S[2]*(S[3]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(6*(V[37]*V[22]+V[20]*
 V[2])))+S[3]*(V[31]*(24*(V[37]*V[23]+V[21]*V[2]))))))));
C[67]=+S[5]*(S[3]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+4*(V[2]*(V[21]*(V[25]-V[24]))+
 V[23]*(V[37]*(V[25]-V[24])))))));
C[66]=+S[5]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(3*(V[37]*V[22]+V[20]*V[2])))+
 S[3]*(V[31]*(12*(V[37]*V[23]+V[21]*V[2])))))));
C[65]=+S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+16*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(
 V[37]*(V[25]-V[24]))))));
C[64]=+S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(12*(V[37]*V[22]+V[20]*V[2])))+S[3]*(
 V[31]*(48*(V[37]*V[23]+V[21]*V[2]))))));
C[63]=+S[2]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(6*(V[37]*V[22]+V[20]*V[2])))+
 S[3]*(V[31]*(24*(V[37]*V[23]+V[21]*V[2])))))));
C[62]=+S[5]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(
 V[37]*(V[25]-V[24]))))));
C[61]=+S[5]*(S[3]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+4*(V[2]*(V[21]*(V[24]-V[25]))+
 V[23]*(V[37]*(V[24]-V[25])))))));
C[60]=+S[5]*(S[3]*(S[1]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*
 V[2])))))));
C[59]=+S[2]*(S[3]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+8*(V[2]*(V[21]*(V[24]-V[25]))+
 V[23]*(V[37]*(V[24]-V[25])))))));
C[58]=+S[0]*(S[2]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[57]=+S[2]*(S[4]*(S[3]*(S[1]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[56]=+S[2]*(S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+
 V[21]*(V[25]-V[24]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[25]-
 V[24])))))));
C[55]=+S[2]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(12*(V[37]*V[22]+V[20]*V[2])))+
 S[3]*(V[31]*(24*(V[37]*V[23]+V[21]*V[2])))))));
C[54]=+S[2]*(S[4]*(S[1]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*
 V[2])))))));
C[53]=+S[2]*(S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+
 V[21]*(V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25])))))));
C[52]=+S[2]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(12*(-V[37]*V[22]-V[20]*V[2])))+
 S[3]*(V[31]*(24*(V[37]*V[23]+V[21]*V[2])))))));
C[51]=+S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25]))))));
C[50]=+S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(12*(-V[37]*V[22]-V[20]*V[2])))+S[3]*(
 V[31]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[49]=+S[2]*(S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[48]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(V[37]*(
 V[29]-V[28]-V[27]+V[26])))));
C[47]=+S[2]*(S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+16*(V[2]*(V[21]*(V[25]-V[24]))+
 V[23]*(V[37]*(V[25]-V[24])))))));
C[46]=+S[2]*(S[3]*(S[1]*(V[2]*(V[31]*(V[36]*(48*(V[37]*V[23]+V[21]*
 V[2])))))));
C[45]=+S[2]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+16*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(
 V[37]*(V[25]-V[24]))))));
C[44]=+S[2]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[43]=+S[2]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+16*(V[2]*(V[21]*(V[24]-V[25]))+V[23]*(
 V[37]*(V[24]-V[25]))))));
C[42]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(V[24]-
 V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-V[25])))));
C[41]=+S[0]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[40]=+S[4]*(S[3]*(S[1]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*
 V[2])))))));
C[39]=+S[0]*(S[2]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[38]=+S[2]*(S[4]*(S[3]*(S[1]*(V[2]*(V[30]*(V[36]*(6*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[37]=+S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[36]=+S[4]*(S[1]*(V[2]*(V[30]*(V[36]*(12*(V[37]*V[22]+V[20]*V[2]))))));
C[35]=+S[2]*(S[3]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+
 V[21]*(V[25]-V[24]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[25]-
 V[24])))))));
C[34]=+S[2]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(6*(V[37]*V[22]+V[20]*V[2])))+
 S[3]*(V[31]*(12*(V[37]*V[23]+V[21]*V[2])))))));
C[33]=+S[2]*(S[3]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+
 V[21]*(V[24]-V[25]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[24]-
 V[25])))))));
C[32]=+S[2]*(S[1]*(V[2]*(V[36]*(S[4]*(V[30]*(6*(-V[37]*V[22]-V[20]*V[2])))+
 S[3]*(V[31]*(12*(V[37]*V[23]+V[21]*V[2])))))));
C[31]=+S[3]*(V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(
 V[25]-V[24]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[25]-
 V[24]))))));
C[30]=+S[2]*(S[3]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))+8*(V[2]*(V[21]*(V[25]-V[24]))+
 V[23]*(V[37]*(V[25]-V[24])))))));
C[29]=+V[1]*(V[12]*(8*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26])+V[21]*(V[25]-
 V[24]))+V[37]*(V[22]*(V[29]-V[28]-V[27]+V[26])+V[23]*(V[25]-V[24])))));
C[28]=+S[2]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(
 V[37]*(V[25]-V[24]))))));
C[27]=+S[5]*(S[3]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[26]=+S[5]*(S[4]*(S[1]*(V[2]*(V[30]*(V[36]*(3*(V[37]*V[22]+V[20]*
 V[2])))))));
C[25]=+S[2]*(S[3]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+
 V[22]*(V[37]*(V[29]-V[28]-V[27]+V[26])))))));
C[24]=+S[2]*(S[4]*(S[1]*(V[2]*(V[30]*(V[36]*(6*(V[37]*V[22]+V[20]*
 V[2])))))));
C[23]=+V[1]*(V[12]*(16*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24])))));
C[22]=+S[1]*(V[2]*(V[31]*(V[36]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[21]=+S[5]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[20]=+S[2]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26]))))));
C[19]=+S[5]*(V[1]*(V[12]*(2*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+4*(V[2]*(V[21]*(V[24]-V[25]))+V[23]*(
 V[37]*(V[24]-V[25]))))));
C[18]=+S[2]*(V[1]*(V[12]*(4*(V[2]*(V[20]*(V[29]-V[28]-V[27]+V[26]))+V[22]*(
 V[37]*(V[29]-V[28]-V[27]+V[26])))+8*(V[2]*(V[21]*(V[24]-V[25]))+V[23]*(
 V[37]*(V[24]-V[25]))))));
C[17]=+S[5]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[16]=+S[5]*(S[1]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*V[2]))))));
C[15]=+S[2]*(V[1]*(V[12]*(16*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24]))))));
C[14]=+S[2]*(S[1]*(V[2]*(V[31]*(V[36]*(48*(V[37]*V[23]+V[21]*V[2]))))));
C[13]=+S[2]*(S[3]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[12]=+S[2]*(S[3]*(S[1]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*
 V[2])))))));
C[11]=+S[3]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[10]=+S[3]*(S[1]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[9]=+S[2]*(S[3]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(
 V[25]-V[24])))))));
C[8]=+S[2]*(S[3]*(S[1]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*
 V[2])))))));
C[7]=+V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24])))));
C[6]=+S[1]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[5]=+S[2]*(V[1]*(V[12]*(8*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[4]=+S[2]*(S[1]*(V[2]*(V[31]*(V[36]*(24*(V[37]*V[23]+V[21]*V[2]))))));
C[3]=+S[2]*(V[1]*(V[12]*(4*(V[2]*(V[21]*(V[25]-V[24]))+V[23]*(V[37]*(V[25]-
 V[24]))))));
C[2]=+S[2]*(S[1]*(V[2]*(V[31]*(V[36]*(12*(V[37]*V[23]+V[21]*V[2]))))));
S[6]=V[17]*V[17]*V[17]*V[17];
S[7]=V[2]*V[2]*V[2];
C[1]=+9*S[6]*S[7];
S[8]=V[49]*V[49];
S[9]=V[1]*V[1]*V[1];
C[0]=+S[8]*V[36]*S[3]*S[9];
}
REAL F902_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  B                 B             
         B                 B     /!==<==============@==<==           
       ==<==@==============<==\  |!  P6             |  P1            
         P1 |              P5 |  |!                 |                
            |                 |  |!  N2             |                
            |              N2 |/=+!==<==\          H|-PA             
           A|P7         /==<==+/ |!  P3 |           |                
            1           |  P3 |  |!     |           |                
            |           |     |  |!  e2 |  W+    t  |  U             
         U  |  t     W+ |  e2 | /+!==>==@--<3-@==<==@==<==           
       ==<==@==<==@-2<--@==>==+=/|!  P4   -PC | -PB    P2            
         P2    P8 |  P9    P4 |  |!           |                      
                  |           |  |!  B        |                      
                  |        B  \==+!==<========/                      
                  \========<=====/!  P5                              
                           P6     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[86];REAL S[7];REAL tmp[16];                                   
     
if(CalcConst) C902(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=DP[10]*DP[10];
tmp[0]=+C[6]*(DP[0]*(DP[6]*(DP[5]*(DP[10]-DP[7]-DP[11]-DP[14])+DP[12]*(
 DP[3]+DP[4]+DP[9])+DP[2]*(DP[9]+DP[13])+DP[8]*(DP[3]+DP[4])-DP[13]*DP[1])+
 DP[8]*(DP[13]*(DP[7]-DP[0]+DP[11])+DP[3]*(DP[7]+DP[11])+DP[4]*(DP[10]-
 DP[14])-DP[9]*DP[0])+DP[1]*(DP[11]*(DP[9]-DP[3]-DP[13])+DP[13]*(DP[0]-
 DP[7])-DP[14]*DP[4])+DP[5]*(DP[10]*(DP[7]-DP[0]+DP[11])+DP[14]*(DP[0]-
 DP[7]-DP[11]))+DP[2]*(DP[3]*(DP[10]-DP[14])+DP[9]*(DP[14]-DP[10]))+DP[12]*(
 DP[9]*(DP[11]-DP[0])+DP[7]*DP[3]-DP[10]*DP[4]))+DP[11]*(DP[6]*(DP[5]*(
 DP[6]+DP[7]+DP[11])+DP[13]*(DP[1]-DP[2]-DP[8])+DP[4]*(DP[8]-DP[12])+DP[9]*
 (-DP[1]-DP[2])-DP[12]*DP[3])+DP[3]*(DP[2]*(DP[14]-DP[10])+DP[7]*(-DP[8]-
 DP[12])+DP[11]*(DP[1]-DP[8]))+DP[1]*(DP[4]*(DP[14]-DP[10])+DP[13]*DP[7]-
 DP[11]*DP[9])+DP[8]*(DP[4]*(DP[10]-DP[14])+DP[11]*DP[9]-DP[13]*DP[7])+
 DP[2]*(DP[9]*(DP[10]-DP[14]))+DP[5]*(DP[7]*(DP[14]-DP[10])))+DP[6]*(DP[4]*(
 DP[12]*(DP[10]-DP[6]-DP[7])+DP[1]*(DP[7]+DP[14])-DP[6]*DP[2])+DP[2]*(
 DP[13]*(DP[14]-DP[10])-DP[6]*DP[3])+DP[7]*(DP[3]*DP[1]-DP[13]*DP[12]))+
 DP[4]*(DP[14]*(DP[7]*(DP[1]-DP[12])+DP[14]*DP[2])+S[1]*DP[2]));
tmp[1]=+DP[0]*(DP[5]*(DP[6]*(C[29]*DP[10]-C[37]-C[48]*DP[0])+C[11]*(DP[7]+
 DP[11]+DP[14])+C[41]+C[37]*DP[0]-C[31]*DP[10])+DP[9]*(DP[1]*(C[48]*(DP[0]-
 DP[10])+C[37]-C[42]*DP[11])+DP[12]*(C[42]*(DP[0]-DP[11])+C[51]-C[48]*
 DP[10])-C[11]*DP[2])+DP[3]*(DP[2]*(C[48]*DP[6]-C[37])+DP[7]*(-C[48]*DP[1]-
 C[42]*DP[12])+C[11]*(-DP[8]-DP[12]))+DP[13]*(DP[2]*(C[29]*DP[6]-C[31])+
 C[11]*DP[1])+DP[4]*(C[11]*(DP[1]-DP[8])))+DP[11]*(C[11]*(DP[1]*(DP[9]-
 DP[13])+DP[4]*(DP[12]-DP[8])+DP[9]*DP[2]-DP[7]*DP[5]+DP[12]*DP[3]+DP[13]*
 DP[8])+DP[5]*(DP[6]*(C[48]*DP[10]-C[65]+C[29]*DP[11])+C[71]-C[37]*DP[10]-
 C[31]*DP[11])+DP[2]*(DP[3]*(C[37]-C[48]*DP[6])+DP[13]*(C[31]-C[29]*DP[6]))+
 DP[3]*(DP[7]*(C[48]*DP[1]+C[42]*DP[12])))+DP[2]*(DP[6]*(DP[3]*(C[65]-C[48]*
 DP[10])+DP[13]*(C[37]-C[29]*DP[10])+C[78]*DP[4])+DP[10]*(C[37]*DP[3]+C[31]*
 DP[13]-C[23]*DP[14]*DP[4])+DP[13]*(-C[41]-C[11]*DP[14])-C[71]*DP[3]-C[85]*
 DP[4])+DP[4]*(DP[1]*(C[11]*(-DP[6]-DP[14])+C[85]-C[78]*DP[7])+DP[12]*(
 DP[10]*(C[23]*DP[7]-C[11])+C[11]*DP[6]))+DP[7]*(DP[3]*(DP[1]*(C[48]*DP[10]-
 C[31])+DP[12]*(C[48]*DP[10]-C[37]))+C[11]*DP[13]*DP[12]);
tmp[2]=+C[7]*(DP[0]*(DP[6]*(DP[5]*(-DP[7]-DP[11]-DP[14])+DP[12]*(DP[3]+
 DP[4]+DP[9])+DP[8]*(DP[3]+DP[4])+DP[9]*DP[2]-DP[13]*DP[1])+DP[8]*(DP[13]*(
 DP[7]-DP[0]+DP[11])+DP[3]*(DP[7]+DP[11])+DP[4]*(DP[10]-DP[14])-DP[9]*
 DP[0])+DP[5]*(DP[10]*(DP[7]-DP[0]+DP[11])+DP[14]*(DP[0]-DP[7]-DP[11]))+
 DP[1]*(DP[13]*(DP[0]-DP[7]-DP[11])-DP[11]*DP[3]-DP[14]*DP[4])+DP[2]*(DP[3]*
 (DP[10]-DP[14])+DP[9]*(DP[14]-DP[10]))-DP[12]*DP[10]*DP[4])+DP[11]*(DP[6]*(
 DP[1]*(DP[13]-DP[9])+DP[4]*(DP[8]-DP[12])+DP[5]*(DP[6]+DP[7])-DP[9]*DP[2]-
 DP[12]*DP[3]-DP[13]*DP[8])+DP[8]*(DP[3]*(-DP[7]-DP[11])+DP[4]*(DP[10]-
 DP[14])+DP[11]*DP[9]-DP[13]*DP[7])+DP[1]*(DP[4]*(DP[14]-DP[10])+DP[11]*(
 DP[3]-DP[9])+DP[13]*DP[7])+DP[2]*(DP[3]*(DP[14]-DP[10])+DP[9]*(DP[10]-
 DP[14]))+DP[5]*(DP[7]*(DP[14]-DP[10])))+DP[4]*(DP[6]*(DP[12]*(DP[10]-DP[6]-
 DP[7])+DP[1]*(DP[7]+DP[14])-DP[6]*DP[2])+DP[14]*(DP[7]*(DP[1]-DP[12])+
 DP[14]*DP[2])+S[1]*DP[2])+DP[6]*(DP[2]*(DP[14]*DP[13]-DP[6]*DP[3])+DP[7]*(
 DP[3]*DP[1]-DP[13]*DP[12])))+tmp[1];
tmp[3]=+DP[0]*(C[2]*(DP[1]*(DP[9]*(-DP[6]-DP[7])+DP[13]*(DP[11]-DP[0])-
 DP[10]*DP[4])+DP[12]*(DP[3]*(DP[11]-DP[0])+DP[9]*(-DP[6]-DP[7])+DP[10]*
 DP[4])+DP[8]*(DP[3]*(-DP[6]-DP[7])+DP[13]*(-DP[6]-DP[7])))+DP[8]*(DP[12]*(
 C[14]*(DP[0]-DP[11])+C[52])+DP[1]*(C[52]-C[14]*DP[11])+C[32]*(DP[3]+
 DP[13])+C[12]*DP[4])+DP[5]*(C[12]*(-DP[7]-DP[10])+C[38]+C[24]*DP[14])+
 DP[1]*(C[32]*DP[9]-C[8]*DP[4])+DP[12]*(C[8]*DP[4]+C[32]*DP[9]))+DP[11]*(
 DP[8]*(C[2]*(DP[3]*(DP[6]+DP[7])+DP[13]*(DP[6]+DP[7]))+DP[1]*(C[14]*DP[11]-
 C[12])+C[8]*(-DP[3]-DP[13])-C[12]*DP[12])+DP[9]*(C[2]*(DP[1]*(DP[6]+DP[7])+
 DP[12]*(DP[6]+DP[7]))+C[8]*(-DP[1]-DP[12]))+DP[5]*(C[12]*(DP[11]-DP[7])+
 C[68]-C[63]*DP[6])-C[12]*DP[12]*DP[4])+DP[4]*(DP[1]*(DP[6]*(C[2]*(DP[6]-
 DP[7]-DP[14])-C[34])+DP[7]*(C[12]-C[2]*DP[14])+C[38]+C[8]*DP[14])+DP[12]*(
 DP[6]*(C[2]*(DP[6]+DP[7]-DP[14])-C[34])+DP[14]*(C[8]+C[2]*DP[7])+C[38]))+
 DP[7]*(DP[1]*(C[55]*(DP[1]+DP[3])+C[54]*DP[12]+C[24]*DP[13])+DP[12]*(C[12]*
 (-DP[12]-DP[13])+C[24]*DP[3])+DP[5]*(-C[38]-C[24]*DP[10]));
tmp[4]=+C[4]*(DP[11]*(DP[1]*(DP[0]*(DP[1]+DP[3]-DP[9]+DP[12])+DP[11]*(DP[9]-
 DP[1]-DP[3])+DP[4]*(DP[10]-DP[14])+DP[8]*(DP[6]+DP[7]))+DP[8]*(DP[11]*(
 DP[3]-DP[8]-DP[9])+DP[0]*(-DP[3]-DP[13])+DP[4]*(DP[14]-DP[10])+DP[12]*(
 DP[6]+DP[7]))+DP[5]*(DP[0]*(DP[6]-DP[10]+DP[14])+DP[7]*(DP[10]-DP[14])-
 DP[11]*DP[6])+DP[2]*(DP[3]*(DP[10]-DP[14])+DP[9]*(DP[14]-DP[10])+DP[13]*
 DP[6])+DP[12]*(DP[6]*DP[4]-DP[9]*DP[0]))+DP[0]*(DP[6]*(DP[8]*(-DP[1]-DP[4]-
 DP[12])+DP[2]*(-DP[9]-DP[13])+DP[5]*(DP[7]+DP[10])-DP[12]*DP[4])+DP[0]*(
 DP[8]*(DP[8]+DP[9]+DP[13])+DP[12]*(DP[9]-DP[1])-DP[14]*DP[5])+DP[1]*(
 DP[14]*DP[4]-DP[8]*DP[7]-DP[10]*DP[2])+DP[2]*(DP[12]*DP[10]+DP[14]*DP[3])+
 DP[7]*(DP[10]*DP[5]-DP[12]*DP[8]))+DP[2]*(DP[6]*(DP[6]*(DP[1]+DP[2]+DP[4]+
 DP[12])+DP[1]*(-DP[7]-DP[14])+DP[12]*(DP[7]-DP[14]))+DP[14]*(DP[7]*(DP[12]-
 DP[1])+DP[14]*(-DP[2]-DP[4]))+DP[10]*(DP[10]*(-DP[2]-DP[4])-DP[13]*DP[7]))+
 DP[7]*(DP[6]*(DP[1]*(-DP[1]-DP[3])+DP[12]*(DP[12]+DP[13]))-DP[12]*DP[10]*
 DP[4]));
tmp[5]=+V[50]*(V[50]*(C[10]*(DP[0]*(DP[5]*(DP[7]-DP[10]+DP[11]+DP[14])+
 DP[1]*(DP[4]+DP[13])+DP[2]*(-DP[9]-DP[13])+DP[3]*(-DP[8]-DP[12])-DP[8]*
 DP[4])+DP[11]*(DP[13]*(DP[2]-DP[1]+DP[8])+DP[4]*(DP[12]-DP[8])+DP[5]*(-
 DP[7]-DP[11])+DP[9]*(DP[1]+DP[2])+DP[12]*DP[3])+DP[4]*(DP[1]*(-DP[6]-
 DP[14])+DP[12]*(DP[6]-DP[10]))+DP[13]*(DP[2]*(DP[10]-DP[14])+DP[12]*
 DP[7]))+DP[2]*(DP[4]*(C[77]*DP[6]-C[84]-C[22]*DP[14]*DP[10])+DP[3]*(C[64]*
 DP[6]-C[70])+DP[13]*(C[36]*DP[6]-C[40]))+DP[0]*(DP[5]*(C[40]-C[36]*DP[6])+
 DP[9]*(C[36]*DP[1]-C[50]*DP[12]))+DP[7]*(DP[1]*(-C[79]*DP[3]-C[77]*DP[4])+
 DP[12]*(C[22]*DP[10]*DP[4]-C[36]*DP[3]))+DP[5]*(DP[11]*(C[70]-C[64]*
 DP[6]))+C[84]*DP[4]*DP[1]+tmp[0])+tmp[2]);
tmp[6]=+DP[11]*(DP[1]*(C[5]*(DP[11]*(DP[9]-DP[1]-DP[3])+DP[4]*(DP[10]-
 DP[14])+DP[8]*(DP[6]+DP[7]))+DP[7]*(C[44]*(-DP[1]-DP[3]-DP[12])+C[3]*DP[9]-
 C[20]*DP[13])+DP[4]*(C[20]*DP[6]-C[25])+DP[8]*(C[15]*DP[11]-C[13])+DP[9]*(
 C[3]*DP[6]-C[9]))+DP[8]*(C[5]*(DP[11]*(DP[3]-DP[8]-DP[9])+DP[4]*(DP[14]-
 DP[10])+DP[12]*(DP[6]+DP[7]))+C[3]*(DP[3]*(DP[6]+DP[7])+DP[13]*(DP[6]+
 DP[7]))+C[9]*(-DP[3]-DP[13])-C[13]*DP[12])+DP[5]*(DP[6]*(C[20]*DP[10]-
 C[30]+C[18]*DP[11])+DP[7]*(C[59]+C[28]*DP[10]-C[5]*DP[14])+C[69]-C[25]*
 DP[10]-C[59]*DP[11])+DP[12]*(DP[9]*(C[3]*(DP[6]+DP[7])-C[9])+DP[4]*(C[28]*
 DP[6]-C[30])-C[20]*DP[7]*DP[3]))+DP[7]*(DP[1]*(DP[10]*(C[44]*(-DP[1]-DP[3]-
 DP[12])-C[20]*DP[13])+DP[4]*(C[3]*(-DP[6]-DP[14])+C[13])+DP[1]*(C[56]-C[5]*
 DP[6])+DP[3]*(C[56]-C[5]*DP[6])+C[49]*DP[12]+C[25]*DP[13])+DP[12]*(DP[4]*(
 C[3]*(DP[6]+DP[14])-C[5]*DP[10])+DP[3]*(C[25]-C[20]*DP[10])+DP[6]*(C[5]*(
 DP[12]+DP[13]))+C[13]*(-DP[12]-DP[13]))+DP[5]*(C[20]*S[1]-C[39]))+DP[4]*(
 DP[6]*(DP[1]*(C[3]*(DP[6]-DP[14])+C[20]*DP[10]-C[35])+DP[12]*(C[3]*(DP[6]-
 DP[14])+C[20]*DP[10]-C[35]))+DP[1]*(C[39]-C[25]*DP[10]+C[9]*DP[14])+DP[12]*
 (C[39]-C[25]*DP[10]+C[9]*DP[14]));
tmp[7]=+DP[0]*(DP[1]*(C[5]*(DP[11]*(DP[1]+DP[3]+DP[12])+DP[8]*(-DP[6]-
 DP[7])+DP[14]*DP[4]-DP[10]*DP[2]-DP[12]*DP[0])+DP[9]*(C[20]*(DP[10]-DP[0])+
 C[3]*(-DP[6]-DP[7])+C[18]*DP[11]-C[33])+C[44]*(DP[7]*(DP[1]+DP[3]+DP[12])+
 DP[8]*(DP[10]-DP[0])-DP[6]*DP[2])+DP[4]*(C[33]-C[20]*DP[6]-C[3]*DP[10])+
 DP[13]*(C[3]*(DP[11]-DP[0])+C[20]*DP[7])+DP[2]*(C[53]+C[15]*DP[14])+DP[8]*(
 C[43]*DP[11]-C[53]))+DP[8]*(DP[3]*(C[20]*(DP[10]-DP[0])+C[3]*(-DP[6]-
 DP[7])+C[18]*DP[11]-C[33])+DP[12]*(C[43]*(DP[11]-DP[0])+C[5]*(-DP[6]-
 DP[7])+C[44]*DP[10]-C[53])+DP[13]*(C[18]*(DP[11]-DP[0])+C[3]*(-DP[6]-
 DP[7])+C[20]*DP[10]-C[33])+C[5]*(DP[0]*(DP[8]+DP[9])-DP[6]*DP[4])+DP[2]*(
 C[74]-C[15]*DP[6])+C[13]*DP[4])+DP[12]*(DP[9]*(C[18]*(DP[11]-DP[0])+C[3]*(-
 DP[6]-DP[7])+C[20]*DP[10]-C[33])+DP[2]*(C[56]-C[45]*DP[6]+C[5]*DP[10])+
 DP[3]*(C[3]*(DP[11]-DP[0])+C[20]*DP[7])+DP[4]*(C[35]-C[28]*DP[6]+C[3]*
 DP[10]))+DP[5]*(DP[10]*(C[5]*(DP[6]-DP[11])-C[30]-C[18]*DP[7]-C[20]*
 DP[14])+DP[14]*(C[18]*(DP[0]-DP[11])+C[25])+DP[6]*(C[5]*DP[7]-C[18]*
 DP[11])+C[39]+C[25]*DP[0]-C[30]*DP[7])+DP[2]*(DP[3]*(C[33]-C[20]*DP[6]-
 C[3]*DP[10]+C[5]*DP[14])+DP[13]*(C[35]-C[28]*DP[6]+C[3]*DP[10])+DP[9]*(
 C[13]-C[5]*DP[6])));
tmp[8]=+DP[2]*(DP[6]*(C[5]*(DP[6]*(DP[1]+DP[2]+DP[4]+DP[12])+DP[1]*(-DP[7]-
 DP[14])+DP[12]*(DP[7]-DP[14]))+DP[3]*(C[3]*(DP[6]-DP[7]-DP[14])+C[20]*(
 DP[10]+DP[11])-C[35])+DP[13]*(C[3]*(DP[6]+DP[7]-DP[14])+C[20]*DP[10]-C[35]+
 C[28]*DP[11])+DP[1]*(C[44]*(DP[10]+DP[11])-C[56])+DP[12]*(C[44]*DP[10]-
 C[56]+C[45]*DP[11])+C[74]*(-DP[2]-DP[4]))+DP[14]*(C[5]*(DP[7]*(DP[12]-
 DP[1])+DP[11]*(DP[9]-DP[3])+DP[14]*(-DP[2]-DP[4]))+C[15]*(DP[10]*(DP[2]+
 DP[4])+DP[11]*(DP[8]-DP[1]))+DP[3]*(C[9]-C[3]*DP[7])+DP[13]*(C[9]+C[3]*
 DP[7])+C[13]*(DP[1]+DP[12]))+DP[10]*(C[5]*(DP[10]*(-DP[2]-DP[4])+DP[11]*(
 DP[3]-DP[9])-DP[13]*DP[7])+C[15]*(DP[11]*(DP[1]-DP[8])-DP[12]*DP[7])+C[49]*
 (-DP[1]-DP[12])+C[25]*(-DP[3]-DP[13]))+DP[11]*(-C[49]*DP[1]-C[25]*DP[3]-
 C[47]*DP[12]-C[30]*DP[13])+DP[1]*(C[58]+C[74]*DP[7])+DP[3]*(C[39]+C[13]*
 DP[7])+C[83]*(DP[2]+DP[4])+C[58]*DP[12]+C[39]*DP[13])+tmp[6]+tmp[7];
S[2]=DP[8]*DP[8];
S[3]=DP[9]*DP[9];
S[4]=DP[1]*DP[1];
S[5]=DP[3]*DP[3];
S[6]=DP[13]*DP[13];
tmp[9]=+DP[2]*(DP[6]*(C[2]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[12]-DP[13])+DP[7]*(
 DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*(DP[1]+DP[3]+DP[12]+DP[13]))+C[34]*(
 DP[1]+DP[3]+DP[12]+DP[13])+DP[4]*(C[46]-C[4]*DP[6])+C[12]*DP[2])+DP[14]*(
 C[2]*(DP[7]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*DP[2])+C[8]*(-DP[1]-DP[3]-
 DP[12]-DP[13])+DP[4]*(C[4]*DP[14]-C[14]*DP[10])-C[4]*DP[10]*DP[2])+DP[7]*(
 DP[10]*(C[4]*(DP[12]+DP[13]))+C[12]*(-DP[1]-DP[3]))+C[38]*(-DP[1]-DP[3]-
 DP[12]-DP[13])+S[1]*(C[2]*DP[2]+C[4]*DP[4])-C[80]*DP[2]-C[82]*DP[4])+DP[4]*
 (C[2]*(DP[6]*(DP[6]*(-DP[1]-DP[3]-DP[4]-DP[12]-DP[13])+DP[7]*(DP[1]+DP[3]-
 DP[12]-DP[13])+DP[14]*(DP[1]+DP[3]+DP[12]+DP[13]))+DP[14]*(DP[7]*(DP[1]+
 DP[3]-DP[12]-DP[13])+DP[14]*DP[4])+S[1]*DP[4])+DP[6]*(C[34]*(DP[1]+DP[3]+
 DP[12]+DP[13])+C[12]*DP[4])+DP[14]*(C[8]*(-DP[1]-DP[3]-DP[12]-DP[13])-C[4]*
 DP[10]*DP[4])+DP[7]*(DP[10]*(C[4]*(DP[12]+DP[13]))+C[12]*(-DP[1]-DP[3]))+
 C[38]*(-DP[1]-DP[3]-DP[12]-DP[13])-C[80]*DP[4])+DP[7]*(DP[1]*(DP[1]*(C[2]*
 DP[6]-C[34])+DP[3]*(C[4]*DP[6]-C[55])+C[24]*(-DP[12]-DP[13]))+DP[12]*(
 DP[6]*(-C[2]*DP[12]-C[4]*DP[13])+C[8]*DP[12]-C[24]*DP[3]+C[12]*DP[13])+
 DP[3]*(DP[3]*(C[2]*DP[6]-C[34])-C[24]*DP[13])+S[6]*(C[8]-C[2]*DP[6])+DP[5]*
 (C[38]+C[24]*DP[10])+C[75]+C[26]*DP[10]);
tmp[10]=+DP[0]*(C[2]*(DP[1]*(DP[11]*(-DP[1]-DP[12]-DP[13])+DP[0]*(DP[12]+
 DP[13])+DP[6]*(DP[8]+DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(DP[2]+DP[4]))+
 DP[3]*(DP[11]*(-DP[3]-DP[12]-DP[13])+DP[0]*(DP[12]+DP[13])+DP[6]*(DP[8]+
 DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(DP[2]+DP[4]))+DP[12]*(DP[6]*(DP[8]+
 DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(-DP[2]-DP[4]))+DP[13]*(DP[6]*(DP[8]+
 DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(-DP[2]-DP[4]))+DP[0]*(-S[2]-S[3]))+C[4]*
 (DP[11]*(DP[8]*(DP[1]+DP[3]+DP[12]+DP[13])+DP[9]*(DP[1]+DP[3]+DP[12]+
 DP[13])+DP[5]*(DP[10]-DP[6]-DP[14])-DP[3]*DP[1])+DP[6]*(DP[2]*(DP[8]+DP[9]+
 DP[12]+DP[13])+DP[4]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[5]*(-DP[7]-DP[10]))+
 DP[0]*(DP[8]*(-DP[9]-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 DP[14]*(DP[1]*(-DP[2]-DP[4])+DP[3]*(-DP[2]-DP[4]))-DP[10]*DP[7]*DP[5])+
 C[8]*(DP[2]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[4]*(DP[1]+DP[3]-DP[12]-DP[13]))+
 C[32]*(DP[8]*(-DP[1]-DP[3]-DP[12]-DP[13])+DP[9]*(-DP[1]-DP[3]-DP[12]-
 DP[13]))+C[16]*(DP[6]*(-DP[7]-DP[10]-DP[11])+DP[10]*(DP[11]-DP[7])+DP[14]*(
 DP[0]-DP[11]))+C[12]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[5]*(
 DP[7]+DP[10]))+DP[5]*(-C[38]-C[24]*DP[14])+C[60]*(DP[7]+DP[10])-C[75]-
 C[26]*DP[14]);
tmp[11]=+DP[5]*(DP[11]*(C[4]*(DP[2]*(DP[10]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[14]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-DP[12]-DP[13]))+DP[4]*(DP[10]*(
 DP[8]-DP[1]-DP[3]+DP[9])+DP[14]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[6]*(-DP[12]-
 DP[13]))+DP[11]*(DP[1]*(DP[3]-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+DP[6]*
 DP[5]+DP[9]*DP[8])+DP[5]*(DP[7]*(DP[14]-DP[10])))+C[2]*(DP[8]*(DP[6]*(-
 DP[1]-DP[3]-DP[12]-DP[13])+DP[7]*(-DP[1]-DP[3]-DP[12]-DP[13])+DP[11]*
 DP[8])+DP[9]*(DP[6]*(-DP[1]-DP[3]-DP[12]-DP[13])+DP[7]*(-DP[1]-DP[3]-
 DP[12]-DP[13])+DP[11]*DP[9])+DP[11]*(S[4]+S[5]))+C[8]*(DP[8]*(DP[1]+DP[3]+
 DP[12]+DP[13])+DP[9]*(DP[1]+DP[3]+DP[12]+DP[13]))+C[12]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[5]*(DP[7]-DP[11]))+DP[6]*(C[66]+C[63]*
 DP[5]+C[16]*DP[11])+DP[7]*(C[16]*(DP[14]-DP[10])+C[60])-C[72]-C[68]*DP[5]-
 C[60]*DP[11])+tmp[9]+tmp[10]);
tmp[12]=+C[20]*(DP[1]*(DP[7]*(-DP[1]-DP[12]-DP[13])+DP[0]*(DP[8]+DP[9])+
 DP[6]*(DP[2]+DP[4])+DP[10]*(-DP[8]-DP[9]))+DP[3]*(DP[7]*(-DP[3]-DP[12]-
 DP[13])+DP[0]*(DP[8]+DP[9])+DP[6]*(DP[2]+DP[4])+DP[10]*(-DP[8]-DP[9]))+
 DP[10]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+C[18]*
 (DP[11]*(DP[8]*(-DP[1]-DP[3]-DP[12]-DP[13])+DP[9]*(-DP[1]-DP[3]-DP[12]-
 DP[13])+DP[5]*(DP[6]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])+DP[10]*DP[7]*DP[5])+DP[6]*(C[5]*(DP[2]*(DP[8]+DP[9])+
 DP[4]*(DP[8]+DP[9])+DP[5]*(-DP[7]-DP[10]))+C[28]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13]))+C[17]*(-DP[7]-DP[10])+C[19]*DP[11])+C[33]*(DP[1]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[3]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13]))+DP[14]*(C[5]*(DP[1]*(-DP[2]-DP[4])+DP[3]*(-
 DP[2]-DP[4]))+C[19]*(DP[11]-DP[0])+C[21]*DP[10]-C[27]-C[25]*DP[5])+DP[5]*(
 DP[10]*(C[30]+C[5]*DP[11])+C[30]*DP[7]-C[39]-C[25]*DP[0])+DP[2]*(C[13]*(-
 DP[8]-DP[9])+C[35]*(-DP[12]-DP[13]))+DP[4]*(C[13]*(-DP[8]-DP[9])+C[35]*(-
 DP[12]-DP[13]))+DP[7]*(C[67]-C[44]*DP[3]*DP[1]+C[19]*DP[10])+DP[0]*(-C[27]-
 C[5]*DP[9]*DP[8])+DP[10]*(C[67]+C[17]*DP[11])-C[76]-C[5]*DP[11]*DP[3]*
 DP[1];
tmp[13]=+DP[4]*(DP[6]*(C[3]*(DP[6]*(-DP[1]-DP[3]-DP[4]-DP[12]-DP[13])+DP[7]*
 (DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*(DP[1]+DP[3]+DP[12]+DP[13]))+DP[10]*(
 C[20]*(-DP[1]-DP[3]-DP[12]-DP[13]))+C[35]*(DP[1]+DP[3]+DP[12]+DP[13])+
 C[13]*DP[4])+DP[14]*(C[3]*(DP[7]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*DP[4])+
 C[9]*(-DP[1]-DP[3]-DP[12]-DP[13])-C[5]*DP[10]*DP[4])+DP[10]*(C[25]*(DP[1]+
 DP[3]+DP[12]+DP[13])+DP[7]*(C[5]*(DP[12]+DP[13]))+C[3]*DP[10]*DP[4])+C[39]*
 (-DP[1]-DP[3]-DP[12]-DP[13])+DP[7]*(C[13]*(-DP[1]-DP[3]))-C[81]*DP[4])+
 DP[7]*(DP[1]*(DP[10]*(C[20]*(DP[1]+DP[12]+DP[13])+C[44]*DP[3])+DP[1]*(C[3]*
 DP[6]-C[35])+DP[3]*(C[5]*DP[6]-C[56])+C[25]*(-DP[12]-DP[13]))+DP[3]*(DP[3]*
 (C[3]*DP[6]-C[35]+C[20]*DP[10])+DP[10]*(C[20]*(DP[12]+DP[13]))+C[25]*(-
 DP[12]-DP[13]))+DP[12]*(DP[6]*(-C[3]*DP[12]-C[5]*DP[13])+C[9]*DP[12]+C[13]*
 DP[13])+S[1]*(-C[21]-C[20]*DP[5])+S[6]*(C[9]-C[3]*DP[6])+C[76]+C[39]*
 DP[5]);
tmp[14]=+DP[11]*(C[5]*(DP[14]*(DP[2]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[4]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[7]*DP[5])+DP[10]*(DP[2]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[4]*(DP[8]-DP[1]-DP[3]+DP[9]))+DP[11]*(DP[1]*(DP[3]-DP[8]-DP[9])+DP[3]*(-
 DP[8]-DP[9])+DP[9]*DP[8]))+DP[6]*(C[3]*(DP[8]*(-DP[1]-DP[3]-DP[12]-DP[13])+
 DP[9]*(-DP[1]-DP[3]-DP[12]-DP[13]))+C[20]*(DP[1]*(-DP[2]-DP[4])+DP[3]*(-
 DP[2]-DP[4])-DP[10]*DP[5])+C[28]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13]))+DP[5]*(C[30]-C[18]*DP[11])+C[67]-C[21]*DP[10]-C[19]*DP[11])+DP[7]*
 (C[3]*(DP[8]*(-DP[1]-DP[3]-DP[12]-DP[13])+DP[9]*(-DP[1]-DP[3]-DP[12]-
 DP[13]))+C[20]*(DP[1]*(DP[1]+DP[12]+DP[13])+DP[3]*(DP[3]+DP[12]+DP[13]))+
 DP[5]*(-C[59]-C[28]*DP[10])+C[44]*DP[3]*DP[1]-C[61]-C[62]*DP[10]+C[17]*
 DP[14])+C[9]*(DP[8]*(DP[1]+DP[3]+DP[12]+DP[13])+DP[9]*(DP[1]+DP[3]+DP[12]+
 DP[13]))+DP[11]*(C[3]*(S[4]+S[5]+S[2]+S[3])+C[61]+C[59]*DP[5])+C[25]*(
 DP[1]*(DP[2]+DP[4])+DP[3]*(DP[2]+DP[4])+DP[10]*DP[5])+C[30]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13]))+C[27]*DP[10]-C[73]-C[69]*DP[5]);
tmp[15]=+DP[5]*(DP[0]*(C[3]*(DP[1]*(DP[11]*(-DP[1]-DP[12]-DP[13])+DP[0]*(
 DP[12]+DP[13])+DP[6]*(DP[8]+DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(DP[2]+
 DP[4]))+DP[3]*(DP[11]*(-DP[3]-DP[12]-DP[13])+DP[0]*(DP[12]+DP[13])+DP[6]*(
 DP[8]+DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(DP[2]+DP[4]))+DP[12]*(DP[6]*(
 DP[8]+DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(-DP[2]-DP[4]))+DP[13]*(DP[6]*(
 DP[8]+DP[9])+DP[7]*(DP[8]+DP[9])+DP[10]*(-DP[2]-DP[4]))+DP[0]*(-S[2]-
 S[3]))+tmp[12])+DP[2]*(DP[6]*(C[3]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[12]-
 DP[13])+DP[7]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*(DP[1]+DP[3]+DP[12]+
 DP[13]))+DP[10]*(C[20]*(-DP[1]-DP[3]-DP[12]-DP[13]))+C[35]*(DP[1]+DP[3]+
 DP[12]+DP[13])+DP[4]*(C[74]-C[5]*DP[6])+C[13]*DP[2])+DP[14]*(C[3]*(DP[7]*(
 DP[1]+DP[3]-DP[12]-DP[13])+DP[14]*DP[2])+C[9]*(-DP[1]-DP[3]-DP[12]-DP[13])+
 DP[4]*(C[5]*DP[14]-C[15]*DP[10])-C[5]*DP[10]*DP[2])+DP[10]*(C[25]*(DP[1]+
 DP[3]+DP[12]+DP[13])+C[5]*(DP[7]*(DP[12]+DP[13])+DP[10]*DP[4])+C[3]*DP[10]*
 DP[2])+C[39]*(-DP[1]-DP[3]-DP[12]-DP[13])+DP[7]*(C[13]*(-DP[1]-DP[3]))-
 C[81]*DP[2]-C[83]*DP[4])+tmp[13]+tmp[14]);
R=+V[50]*(V[50]*(V[50]*(DP[2]*(DP[6]*(C[2]*(DP[3]*(DP[6]-DP[7]-DP[14])+
 DP[13]*(DP[6]+DP[7]-DP[14]))+DP[12]*(C[14]*(DP[11]-DP[0])-C[55])+C[46]*(-
 DP[2]-DP[4])+C[34]*(-DP[3]-DP[13])-C[55]*DP[1]-C[14]*DP[8]*DP[0])+DP[14]*(
 C[14]*(DP[1]*(DP[0]-DP[11])+DP[10]*(DP[2]+DP[4])+DP[11]*DP[8])+DP[3]*(C[8]-
 C[2]*DP[7])+DP[13]*(C[8]+C[2]*DP[7])+C[12]*(DP[1]+DP[12]))+DP[0]*(C[12]*(
 DP[9]-DP[1]+DP[12])+DP[3]*(-C[8]-C[2]*DP[10])+DP[13]*(C[8]+C[2]*DP[10])+
 C[46]*DP[8])+DP[11]*(DP[10]*(C[14]*(DP[1]-DP[8]))-C[46]*DP[12]-C[12]*
 DP[13])+DP[7]*(C[46]*DP[1]+C[12]*DP[3]-C[14]*DP[12]*DP[10])+C[57]*(DP[1]+
 DP[12])+C[82]*(DP[2]+DP[4])+C[38]*(DP[3]+DP[13]))+tmp[3]+tmp[4]+tmp[5])+
 tmp[8])+tmp[11])+tmp[15];
R*=(N/D)*Q1[7]*Q1[1]*Q2[2]*Q1[10]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
