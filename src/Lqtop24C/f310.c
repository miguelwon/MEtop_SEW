/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F310_out;
static void C310(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[37]*V[37];
S[1]=V[22]*V[22];
S[2]=V[12]*V[12];
S[3]=V[9]*V[9];
S[4]=V[14]*V[14]*V[14]*V[14];
C[95]=+S[4]*(S[3]*(S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*
 S[1])));
S[5]=V[23]*V[23];
S[6]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[94]=+S[6]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]);
C[93]=+S[4]*(S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]));
C[92]=+S[4]*(V[2]*(V[21]*(20*V[37]*V[23]+10*V[21]*V[2]))+10*S[0]*S[5]);
C[91]=+S[4]*(S[2]*(V[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+8*S[0]*S[1]));
S[7]=V[14]*V[14];
S[8]=V[9]*V[9]*V[9]*V[9];
C[90]=+S[8]*(S[4]*(V[2]*(S[2]*(V[20]*(10*V[37]*V[22]+5*V[20]*V[2]))+S[7]*(
 V[21]*(16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+5*S[1]*S[2])));
C[89]=+S[4]*(V[2]*(S[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+S[7]*(V[21]*(
 32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]+8*S[1]*S[2]));
C[88]=+S[8]*(S[4]*(V[2]*(V[21]*(10*V[37]*V[23]+5*V[21]*V[2]))+5*S[0]*S[5]));
C[87]=+S[4]*(V[2]*(V[21]*(44*V[37]*V[23]+22*V[21]*V[2]))+22*S[0]*S[5]);
C[86]=+S[6]*(S[3]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]));
C[85]=+S[6]*(S[3]*(V[2]*(V[21]*(6*V[37]*V[23]+3*V[21]*V[2]))+3*S[0]*S[5]));
C[84]=+S[4]*(S[3]*(S[2]*(V[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+2*S[0]*
 S[1])));
C[83]=+S[4]*(S[3]*(V[2]*(S[2]*(V[20]*(20*V[37]*V[22]+10*V[20]*V[2]))+S[7]*(
 V[21]*(32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]+10*S[1]*S[2])));
C[82]=+S[4]*(S[3]*(V[2]*(V[21]*(20*V[37]*V[23]+10*V[21]*V[2]))+10*S[0]*
 S[5]));
C[81]=+S[8]*(S[4]*(V[2]*(S[2]*(V[20]*(2*V[37]*V[22]+V[20]*V[2]))+S[7]*(
 V[21]*(8*V[37]*V[23]+4*V[21]*V[2])))+S[0]*(4*S[5]*S[7]+S[1]*S[2])));
C[80]=+S[4]*(V[2]*(S[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+S[7]*(V[21]*(
 16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+4*S[1]*S[2]));
C[79]=+S[8]*(S[4]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]));
C[78]=+S[4]*(S[3]*(V[2]*(S[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+S[7]*(
 V[21]*(16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+2*S[1]*S[2])));
C[77]=+S[8]*(S[4]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*
 S[5]));
C[76]=+S[8]*(S[4]*(V[2]*(V[21]*(2*V[37]*V[23]+V[21]*V[2]))+S[0]*S[5]));
C[75]=+S[4]*(S[3]*(V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[5]));
C[74]=+S[8]*(S[7]*(V[2]*(S[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+S[7]*(
 V[21]*(16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+4*S[1]*S[2])));
C[73]=+S[7]*(V[2]*(S[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+S[7]*(V[21]*(
 32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]+4*S[1]*S[2]));
C[72]=+S[3]*(S[7]*(V[2]*(S[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+S[7]*(
 V[21]*(32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]+8*S[1]*S[2])));
C[71]=+S[8]*(S[7]*(V[2]*(S[2]*(V[20]*(2*V[37]*V[22]+V[20]*V[2]))+S[7]*(
 V[21]*(16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+S[1]*S[2])));
C[70]=+S[7]*(V[2]*(S[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+S[7]*(V[21]*(
 16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+4*S[1]*S[2]));
C[69]=+S[3]*(S[7]*(V[2]*(S[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+S[7]*(
 V[21]*(32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]+2*S[1]*S[2])));
C[68]=+S[8]*(V[2]*(S[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+S[7]*(V[21]*(
 16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+4*S[1]*S[2]));
C[67]=+S[3]*(V[2]*(S[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+S[7]*(V[21]*(
 32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]+8*S[1]*S[2]));
C[66]=+S[8]*(S[4]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5]));
C[65]=+S[7]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5]);
C[64]=+S[4]*(S[3]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]));
C[63]=+S[8]*(S[7]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*
 S[5]));
C[62]=+S[8]*(S[7]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]));
C[61]=+S[8]*(V[2]*(V[21]*(20*V[37]*V[23]+10*V[21]*V[2]))+10*S[0]*S[5]);
C[60]=+S[3]*(S[2]*(S[7]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*
 S[1])));
C[59]=+S[2]*(S[7]*(V[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+8*S[0]*S[1]));
C[58]=+S[7]*(V[2]*(V[21]*(48*V[37]*V[23]+24*V[21]*V[2]))+24*S[0]*S[5]);
C[57]=+S[4]*(S[3]*(V[2]*(V[21]*(24*V[37]*V[23]+12*V[21]*V[2]))+12*S[0]*
 S[5]));
C[56]=+S[4]*(V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[5]);
C[55]=+S[7]*(V[2]*(V[21]*(28*V[37]*V[23]+14*V[21]*V[2]))+14*S[0]*S[5]);
C[54]=+V[2]*(V[21]*(36*V[37]*V[23]+18*V[21]*V[2]))+18*S[0]*S[5];
C[53]=+S[4]*(V[2]*(S[2]*(V[20]*(-8*V[37]*V[22]-4*V[20]*V[2]))+S[7]*(V[21]*(
 16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]-4*S[1]*S[2]));
C[52]=+S[4]*(V[2]*(V[21]*(48*V[37]*V[23]+24*V[21]*V[2]))+24*S[0]*S[5]);
C[51]=+S[3]*(S[2]*(S[7]*(V[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+2*S[0]*
 S[1])));
C[50]=+S[7]*(V[2]*(S[2]*(V[20]*(-8*V[37]*V[22]-4*V[20]*V[2]))+S[7]*(V[21]*(
 16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]-4*S[1]*S[2]));
C[49]=+S[4]*(V[2]*(V[21]*(28*V[37]*V[23]+14*V[21]*V[2]))+14*S[0]*S[5]);
C[48]=+S[4]*(S[3]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]));
C[47]=+S[4]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]);
C[46]=+S[7]*(V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[5]);
C[45]=+S[3]*(S[7]*(V[2]*(S[2]*(V[20]*(-8*V[37]*V[22]-4*V[20]*V[2]))+S[7]*(
 V[21]*(32*V[37]*V[23]+16*V[21]*V[2])))+S[0]*(16*S[5]*S[7]-4*S[1]*S[2])));
C[44]=+S[4]*(V[2]*(V[21]*(64*V[37]*V[23]+32*V[21]*V[2]))+32*S[0]*S[5]);
C[43]=+S[2]*(S[7]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]));
C[42]=+S[4]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*S[5]);
C[41]=+S[2]*(V[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+8*S[0]*S[1]);
C[40]=+S[8]*(S[7]*(V[2]*(S[2]*(V[20]*(2*V[37]*V[22]+V[20]*V[2]))+S[7]*(
 V[21]*(8*V[37]*V[23]+4*V[21]*V[2])))+S[0]*(4*S[5]*S[7]+S[1]*S[2])));
C[39]=+S[4]*(S[3]*(V[2]*(V[21]*(64*V[37]*V[23]+32*V[21]*V[2]))+32*S[0]*
 S[5]));
C[38]=+S[4]*(S[3]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*
 S[5]));
C[37]=+S[3]*(S[2]*(V[2]*(V[20]*(16*V[37]*V[22]+8*V[20]*V[2]))+8*S[0]*S[1]));
C[36]=+S[3]*(S[7]*(V[2]*(S[2]*(V[20]*(-4*V[37]*V[22]-2*V[20]*V[2]))+S[7]*(
 V[21]*(16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]-2*S[1]*S[2])));
C[35]=+S[3]*(S[2]*(V[2]*(V[20]*(8*V[37]*V[22]+4*V[20]*V[2]))+4*S[0]*S[1]));
C[34]=+S[3]*(S[7]*(V[2]*(S[2]*(V[20]*(4*V[37]*V[22]+2*V[20]*V[2]))+S[7]*(
 V[21]*(16*V[37]*V[23]+8*V[21]*V[2])))+S[0]*(8*S[5]*S[7]+2*S[1]*S[2])));
C[33]=+S[7]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]);
C[32]=+V[2]*(V[21]*(24*V[37]*V[23]+12*V[21]*V[2]))+12*S[0]*S[5];
C[31]=+S[8]*(S[7]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]));
C[30]=+S[7]*(V[2]*(V[21]*(24*V[37]*V[23]+12*V[21]*V[2]))+12*S[0]*S[5]);
C[29]=+S[7]*(V[2]*(V[21]*(64*V[37]*V[23]+32*V[21]*V[2]))+32*S[0]*S[5]);
C[28]=+S[8]*(S[7]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5]));
C[27]=+S[3]*(S[7]*(V[2]*(V[21]*(64*V[37]*V[23]+32*V[21]*V[2]))+32*S[0]*
 S[5]));
C[26]=+V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[5];
C[25]=+V[2]*(V[21]*(28*V[37]*V[23]+14*V[21]*V[2]))+14*S[0]*S[5];
C[24]=+S[8]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]);
C[23]=+V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5];
C[22]=+V[2]*(V[21]*(40*V[37]*V[23]+20*V[21]*V[2]))+20*S[0]*S[5];
C[21]=+S[8]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5]);
C[20]=+S[3]*(V[2]*(V[21]*(40*V[37]*V[23]+20*V[21]*V[2]))+20*S[0]*S[5]);
C[19]=+S[3]*(V[2]*(V[21]*(20*V[37]*V[23]+10*V[21]*V[2]))+10*S[0]*S[5]);
C[18]=+S[3]*(S[7]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*
 S[5]));
C[17]=+S[3]*(S[7]*(V[2]*(V[21]*(24*V[37]*V[23]+12*V[21]*V[2]))+12*S[0]*
 S[5]));
C[16]=+S[3]*(V[2]*(V[21]*(8*V[37]*V[23]+4*V[21]*V[2]))+4*S[0]*S[5]);
C[15]=+S[7]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*S[5]);
C[14]=+S[3]*(S[7]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]));
C[13]=+V[2]*(V[21]*(20*V[37]*V[23]+10*V[21]*V[2]))+10*S[0]*S[5];
C[12]=+S[3]*(V[2]*(V[21]*(4*V[37]*V[23]+2*V[21]*V[2]))+2*S[0]*S[5]);
C[11]=+S[3]*(V[2]*(V[21]*(24*V[37]*V[23]+12*V[21]*V[2]))+12*S[0]*S[5]);
C[10]=+S[7]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]);
C[9]=+V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*S[5];
C[8]=+S[8]*(V[2]*(V[21]*(6*V[37]*V[23]+3*V[21]*V[2]))+3*S[0]*S[5]);
C[7]=+V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5];
C[6]=+S[3]*(S[7]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]));
C[5]=+S[3]*(V[2]*(V[21]*(32*V[37]*V[23]+16*V[21]*V[2]))+16*S[0]*S[5]);
C[4]=+S[3]*(S[7]*(V[2]*(V[21]*(6*V[37]*V[23]+3*V[21]*V[2]))+3*S[0]*S[5]));
C[3]=+S[3]*(V[2]*(V[21]*(16*V[37]*V[23]+8*V[21]*V[2]))+8*S[0]*S[5]);
C[2]=+S[3]*(V[2]*(V[21]*(12*V[37]*V[23]+6*V[21]*V[2]))+6*S[0]*S[5]);
S[9]=V[17]*V[17]*V[17]*V[17];
S[10]=V[2]*V[2];
C[1]=+27*S[9]*S[10];
S[11]=V[49]*V[49];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[11]*S[12];
}
REAL F310_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  N2                              
                           N2 /===!==<==\                            
                        /==<==/   !  P3 |                            
                        |  P3     !     |                            
                        |         !  e2 |  W+    t     U             
         U     t     W+ |  e2  /==!==>==@--<4-@==<==@==<==           
       ==<==@==<==@-2<--@==>===/  !  P4   -PC | -PB |  P1            
         P1 |  P8 |  P9    P4     !           |     |                
            |     |               !  B        |     |                
            |     |        B     /!==<========/    A|-PA             
           A|P7   \========<====\|!  P5             3                
            1              P6   ||!                 |                
            |                   ||!  B              |  B             
         B  |              B    \+!==<==============@==<==           
       ==<==@==============<=====/!  P6                P2            
         P2                P5     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[96];REAL S[10];REAL tmp[14];                                  
     
if(CalcConst) C310(C);
N=+C[0];
S[0]=V[50]*V[50];
D=+C[1]*S[0];
S[1]=DP[4]*DP[4];
S[2]=DP[12]*DP[12];
S[3]=DP[13]*DP[13];
S[4]=V[50]*V[50]*V[50]*V[50];
S[5]=DP[8]*DP[8];
S[6]=DP[9]*DP[9];
tmp[0]=+DP[0]*(C[14]*(DP[1]*(DP[8]-DP[2]-DP[4]+DP[9]+DP[12]+DP[13])+DP[3]*(
 DP[8]-DP[2]-DP[4]+DP[9]+DP[12]+DP[13])+S[0]*(DP[7]-DP[0]+DP[11])+DP[5]*(
 DP[0]-DP[7]-DP[11]))+S[0]*(S[0]*(C[33]*(DP[7]+DP[11])-C[87])-C[82])+C[4]*(
 S[5]+S[6]+S[2]+S[3])+C[28]*(DP[0]-DP[7]-DP[11])+C[6]*(DP[9]*DP[8]+DP[13]*
 DP[12])+C[88]+C[82]*DP[5])+DP[7]*(S[0]*(S[0]*(C[73]-C[15]*DP[11])+C[72]-
 C[67]*DP[11])+DP[1]*(C[6]*(-DP[8]-DP[9])-C[14]*DP[1]-C[18]*DP[3])+C[35]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13]))+DP[3]*(C[6]*(-DP[8]-DP[9])-
 C[14]*DP[3])+DP[5]*(C[67]*DP[11]-C[72])+C[68]*DP[11]-C[74])+DP[11]*(DP[1]*(
 C[6]*(-DP[12]-DP[13])-C[14]*DP[1]-C[18]*DP[3])+C[35]*(DP[2]*(-DP[8]-DP[9])+
 DP[4]*(-DP[8]-DP[9]))+DP[3]*(C[6]*(-DP[12]-DP[13])-C[14]*DP[3])+S[0]*(
 C[72]+C[73]*S[0])-C[74]-C[72]*DP[5])+C[51]*(DP[2]*(DP[8]+DP[9]+DP[12]+
 DP[13])+DP[4]*(DP[8]+DP[9]+DP[12]+DP[13]))+DP[1]*(C[48]*(DP[2]+DP[4])+
 C[64]*DP[1]+C[38]*DP[3])+DP[3]*(C[48]*(DP[2]+DP[4])+C[64]*DP[3])+S[0]*(-
 C[83]-C[89]*S[0])+C[90]+C[83]*DP[5];
tmp[1]=+DP[14]*(DP[1]*(C[3]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9])-
 DP[14]*DP[1])+C[14]*(DP[8]+DP[9]+DP[12]+DP[13])+C[12]*(DP[7]*(-DP[12]-
 DP[13])+DP[11]*(-DP[8]-DP[9]))+DP[14]*(C[2]*(-DP[2]-DP[4])-C[5]*DP[3])+
 C[18]*DP[1]+C[27]*DP[3])+DP[3]*(C[3]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+
 DP[9])-DP[14]*DP[3])+C[14]*(DP[8]+DP[9]+DP[12]+DP[13])+C[12]*(DP[7]*(-
 DP[12]-DP[13])+DP[11]*(-DP[8]-DP[9]))+DP[14]*(C[2]*(-DP[2]-DP[4]))+C[18]*
 DP[3])+C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[0]))+DP[2]*(DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9]))+DP[4]*(
 DP[6]*(DP[12]+DP[13])+DP[10]*(DP[8]+DP[9])))+S[0]*(S[0]*(DP[6]*(-C[33]-
 C[23]*DP[11])+DP[10]*(-C[33]-C[23]*DP[7])+C[7]*DP[14]*DP[0])+DP[7]*(C[11]*
 DP[10]-C[14]+C[3]*DP[11])+DP[6]*(C[3]*DP[10]+C[11]*DP[11])+C[34]-C[14]*
 DP[11])+DP[5]*(DP[7]*(C[14]-C[11]*DP[10]-C[3]*DP[11])+DP[6]*(-C[3]*DP[10]-
 C[11]*DP[11])+C[14]*DP[11]-C[34])+DP[7]*(C[28]-C[24]*DP[10]-C[21]*DP[11])+
 DP[2]*(C[35]*DP[2]+C[37]*DP[4])+DP[6]*(-C[21]*DP[10]-C[24]*DP[11])+C[35]*
 S[1]-C[40]+C[28]*DP[11]+C[8]*DP[14]*DP[0]);
tmp[2]=+DP[7]*(DP[1]*(C[6]*(-DP[2]-DP[4])+C[18]*(DP[12]+DP[13]))+DP[3]*(
 C[6]*(-DP[2]-DP[4])+C[18]*(DP[12]+DP[13]))+C[14]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13]))+S[0]*(-C[64]-C[47]*S[0])+C[66]+C[64]*DP[5])+DP[6]*(
 DP[12]*(C[14]*(DP[1]+DP[3])+C[4]*DP[12]+C[6]*DP[13])+DP[13]*(C[14]*(DP[1]+
 DP[3])+C[4]*DP[13])+S[0]*(-C[75]-C[49]*S[0])+DP[2]*(C[4]*DP[2]+C[6]*DP[4])+
 C[76]+C[4]*S[1]+C[75]*DP[5])+DP[1]*(DP[14]*(C[6]*(-DP[12]-DP[13])-C[14]*
 DP[1]-C[18]*DP[3])+C[48]*(DP[8]+DP[9])+C[38]*(-DP[12]-DP[13]))+DP[3]*(
 DP[14]*(C[6]*(-DP[12]-DP[13])-C[14]*DP[3])+C[48]*(DP[8]+DP[9])+C[38]*(-
 DP[12]-DP[13]))+DP[2]*(C[36]*(-DP[12]-DP[13])-C[51]*DP[2]-C[60]*DP[4])+
 DP[4]*(C[36]*(-DP[12]-DP[13])-C[51]*DP[4])+S[0]*(C[78]+C[80]*S[0])-C[81]-
 C[78]*DP[5];
tmp[3]=+DP[11]*(DP[6]*(C[3]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[0]))+C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[0]))+S[0]*(S[0]*(C[15]-C[26]*DP[11])+C[14])+C[21]*DP[10]-
 C[28]-C[14]*DP[5]+C[8]*DP[11])+DP[7]*(C[3]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*(DP[5]-S[0]))+S[0]*(S[0]*(C[33]+C[23]*DP[10])+C[18]-
 C[20]*DP[10])+C[19]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+DP[5]*(
 C[20]*DP[10]-C[18])+C[61]*DP[10]-C[62]+C[21]*DP[11])+DP[1]*(DP[14]*(C[2]*(
 DP[2]+DP[4])+C[3]*DP[1]+C[5]*DP[3])+DP[8]*(C[12]*DP[11]-C[14])+DP[9]*(
 C[12]*DP[11]-C[14])+C[18]*(DP[12]+DP[13]))+DP[3]*(DP[14]*(C[2]*(DP[2]+
 DP[4])+C[3]*DP[3])+DP[8]*(C[12]*DP[11]-C[14])+DP[9]*(C[12]*DP[11]-C[14])+
 C[18]*(DP[12]+DP[13]))+DP[10]*(C[12]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-
 DP[9]))+S[0]*(C[27]-C[33]*S[0])-C[63]-C[27]*DP[5])+C[14]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])+DP[11]*(S[0]-DP[5]))+S[0]*(-C[69]-C[70]*
 S[0])+C[71]+C[69]*DP[5]-C[28]*DP[11]);
tmp[4]=+DP[7]*(DP[10]*(C[2]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+
 DP[7]*(DP[5]-S[0]))+C[3]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+S[0]*(
 S[0]*(C[15]-C[26]*DP[7])+C[14])+C[8]*DP[7]-C[28]-C[14]*DP[5])+DP[11]*(C[3]*
 (DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-S[0]))+C[19]*(
 DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9]))+S[0]*(C[18]+C[33]*S[0])+C[21]*
 DP[7]-C[62]-C[18]*DP[5])+DP[1]*(DP[14]*(C[2]*(DP[2]+DP[4])+C[3]*DP[1]+C[5]*
 DP[3])+DP[7]*(C[12]*(DP[12]+DP[13]))+C[18]*(DP[8]+DP[9])+C[14]*(-DP[12]-
 DP[13]))+DP[3]*(DP[14]*(C[2]*(DP[2]+DP[4])+C[3]*DP[3])+DP[7]*(C[12]*(
 DP[12]+DP[13]))+C[18]*(DP[8]+DP[9])+C[14]*(-DP[12]-DP[13]))+C[14]*(DP[2]*(
 DP[8]+DP[9])+DP[4]*(DP[8]+DP[9])+DP[7]*(S[0]-DP[5]))+S[0]*(-C[69]-C[70]*
 S[0])+C[71]+C[69]*DP[5]-C[28]*DP[7]);
S[7]=DP[7]*DP[7];
S[8]=DP[11]*DP[11];
tmp[5]=+DP[10]*(DP[11]*(DP[1]*(C[6]*(-DP[2]-DP[4])+C[18]*(DP[8]+DP[9]))+
 DP[3]*(C[6]*(-DP[2]-DP[4])+C[18]*(DP[8]+DP[9]))+C[14]*(DP[2]*(DP[8]+DP[9])+
 DP[4]*(DP[8]+DP[9]))+S[0]*(-C[64]-C[47]*S[0])+C[66]+C[64]*DP[5])+DP[10]*(
 DP[8]*(C[14]*(DP[1]+DP[3])+C[4]*DP[8]+C[6]*DP[9])+DP[9]*(C[14]*(DP[1]+
 DP[3])+C[4]*DP[9])+S[0]*(-C[75]-C[49]*S[0])+DP[2]*(C[4]*DP[2]+C[6]*DP[4])+
 C[76]+C[4]*S[1]+C[75]*DP[5])+DP[1]*(DP[14]*(C[6]*(-DP[8]-DP[9])-C[14]*
 DP[1]-C[18]*DP[3])+C[38]*(-DP[8]-DP[9])+C[48]*(DP[12]+DP[13]))+DP[3]*(
 DP[14]*(C[6]*(-DP[8]-DP[9])-C[14]*DP[3])+C[38]*(-DP[8]-DP[9])+C[48]*(
 DP[12]+DP[13]))+DP[2]*(C[36]*(-DP[8]-DP[9])-C[51]*DP[2]-C[60]*DP[4])+DP[4]*
 (C[36]*(-DP[8]-DP[9])-C[51]*DP[4])+S[0]*(C[78]+C[80]*S[0])-C[81]-C[78]*
 DP[5]+tmp[4]);
tmp[6]=+DP[14]*(DP[1]*(DP[7]*(DP[11]*(C[3]*(DP[2]+DP[4])+C[19]*DP[1]+C[20]*
 DP[3])+C[14]*(-DP[2]-DP[4])-C[18]*DP[1]-C[27]*DP[3])+DP[11]*(C[14]*(-DP[2]-
 DP[4])-C[18]*DP[1]-C[27]*DP[3])+DP[1]*(C[38]+C[4]*DP[14])+DP[3]*(C[39]+
 C[6]*DP[14])+C[36]*(DP[2]+DP[4]))+DP[3]*(DP[7]*(DP[11]*(C[3]*(DP[2]+DP[4])+
 C[19]*DP[3])+C[14]*(-DP[2]-DP[4])-C[18]*DP[3])+DP[3]*(C[38]-C[18]*DP[11]+
 C[4]*DP[14])+DP[2]*(C[36]-C[14]*DP[11])+DP[4]*(C[36]-C[14]*DP[11])))+DP[1]*
 (DP[7]*(DP[7]*(C[4]*DP[1]+C[6]*DP[3])+C[51]*(DP[2]+DP[4]))+DP[11]*(DP[11]*(
 C[4]*DP[1]+C[6]*DP[3])+C[51]*(DP[2]+DP[4]))+C[84]*(-DP[2]-DP[4])-C[85]*
 DP[1]-C[86]*DP[3])+DP[3]*(C[51]*(DP[2]*(DP[7]+DP[11])+DP[4]*(DP[7]+
 DP[11]))+DP[3]*(C[4]*(S[7]+S[8])-C[85])+C[84]*(-DP[2]-DP[4]))+tmp[5];
tmp[7]=+DP[0]*(DP[6]*(C[14]*(DP[1]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[3]*(DP[2]+
 DP[4]-DP[8]-DP[9])+DP[6]*(DP[5]-S[0])-S[2]-S[3])+C[18]*(DP[12]*(-DP[1]-
 DP[3]-DP[13])+S[0]*(DP[0]-DP[11])+DP[5]*(DP[11]-DP[0])+DP[13]*(-DP[1]-
 DP[3]))+DP[7]*(S[0]*(C[65]*S[0]-C[17])+DP[12]*(C[12]*DP[12]+C[16]*DP[13])+
 C[31]+C[17]*DP[5]+C[12]*S[3])+DP[11]*(C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13]))+C[62]-C[15]*S[4])+C[6]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-
 DP[9]))+S[0]*(C[38]+C[52]*S[0]-C[27]*DP[10])+DP[5]*(C[27]*DP[10]-C[38])+
 C[28]*DP[6]-C[79]-C[62]*DP[0]+C[63]*DP[10])+DP[10]*(C[14]*(DP[1]*(DP[2]+
 DP[4]-DP[12]-DP[13])+DP[3]*(DP[2]+DP[4]-DP[12]-DP[13])+DP[10]*(DP[5]-S[0])-
 S[5]-S[6])+C[18]*(DP[8]*(-DP[1]-DP[3]-DP[9])+S[0]*(DP[0]-DP[7])+DP[5]*(
 DP[7]-DP[0])+DP[9]*(-DP[1]-DP[3]))+DP[11]*(S[0]*(C[65]*S[0]-C[17])+DP[8]*(
 C[12]*DP[8]+C[16]*DP[9])+C[31]+C[17]*DP[5]+C[12]*S[6])+DP[7]*(C[2]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[62]-C[15]*S[4])+C[6]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13]))+S[0]*(C[38]+C[52]*S[0])+C[28]*
 DP[10]-C[79]-C[62]*DP[0]-C[38]*DP[5])+tmp[0]+tmp[1]);
tmp[8]=+DP[7]*(DP[10]*(DP[9]*(DP[11]*(C[19]-C[26]*S[0])+C[3]*DP[10]-C[18])+
 DP[13]*(S[0]*(C[26]*DP[7]-C[15])+C[14]-C[12]*DP[7])+DP[8]*(C[5]*DP[10]-
 C[27]+C[20]*DP[11])+DP[12]*(C[18]-C[16]*DP[7]))+S[0]*(DP[13]*(DP[6]*(C[33]-
 C[26]*DP[11])+C[50]-C[33]*DP[11])+DP[4]*(C[43]-C[10]*DP[6])+DP[9]*(C[47]-
 C[33]*DP[11])+C[10]*DP[7]*DP[3])+DP[6]*(DP[11]*(C[20]*DP[12]+C[19]*DP[13])+
 C[17]*DP[2]+C[6]*DP[4]-C[27]*DP[12]-C[18]*DP[13])+DP[7]*(C[6]*(-DP[1]-
 DP[3]))-C[60]*DP[2]-C[51]*DP[4])+DP[11]*(DP[6]*(DP[9]*(S[0]*(C[26]*DP[11]-
 C[15])+C[14]-C[12]*DP[11])+DP[6]*(C[5]*DP[12]+C[3]*DP[13])+DP[8]*(C[18]-
 C[16]*DP[11])-C[27]*DP[12]-C[18]*DP[13])+S[0]*(DP[4]*(C[43]-C[10]*DP[10])+
 DP[9]*(C[50]+C[33]*DP[10])+C[10]*DP[11]*DP[3]+C[47]*DP[13])+DP[10]*(C[17]*
 DP[2]+C[6]*DP[4]-C[27]*DP[8]-C[18]*DP[9])+DP[11]*(C[6]*(-DP[1]-DP[3]))-
 C[60]*DP[2]-C[51]*DP[4])+DP[6]*(DP[10]*(C[18]*(-DP[8]-DP[12])+C[14]*(-
 DP[9]-DP[13]))+DP[6]*(-C[18]*DP[12]-C[14]*DP[13])+DP[9]*(C[49]*S[0]-C[48])+
 C[39]*DP[12]-C[57]*DP[8]+C[38]*DP[13])+DP[10]*(DP[8]*(C[39]-C[18]*DP[10])+
 DP[9]*(C[38]-C[14]*DP[10])+DP[13]*(C[49]*S[0]-C[48])-C[57]*DP[12])+S[0]*(
 C[53]*(-DP[9]-DP[13])-C[94]*DP[3]-C[91]*DP[4])+C[86]*(DP[1]+DP[3])+C[95]*
 DP[2]+C[84]*DP[4];
tmp[9]=+DP[14]*(S[0]*(DP[3]*(DP[7]*(C[9]*DP[10]-C[29]+C[22]*DP[11])+DP[0]*(
 C[29]-C[9]*DP[14])+DP[6]*(C[9]*DP[11]-C[15])+C[44]-C[15]*DP[10]-C[29]*
 DP[11]+C[10]*DP[14])+DP[4]*(DP[7]*(C[25]*DP[10]-C[15]+C[9]*DP[11])+DP[6]*(
 C[25]*DP[11]-C[33])+C[42]-C[33]*DP[10]-C[15]*DP[11]-C[7]*DP[14]*DP[0])+
 DP[0]*(DP[9]*(C[15]-C[13]*DP[11])+DP[13]*(C[15]-C[13]*DP[7]))+C[10]*(-
 DP[10]*DP[9]-DP[13]*DP[6]))+DP[0]*(DP[14]*(C[5]*(DP[1]+DP[3])+C[11]*DP[2]+
 C[2]*DP[4])+DP[8]*(C[16]*DP[11]-C[18]-C[5]*DP[10])+DP[9]*(C[12]*DP[11]-
 C[14]-C[3]*DP[10])+DP[12]*(C[16]*DP[7]-C[18]-C[5]*DP[6])+DP[13]*(C[12]*
 DP[7]-C[14]-C[3]*DP[6])+C[27]*(-DP[1]-DP[3]))+DP[7]*(DP[10]*(C[5]*(-DP[1]-
 DP[3])-C[11]*DP[2]-C[2]*DP[4])+DP[11]*(C[20]*(-DP[1]-DP[3])-C[5]*DP[2]-
 C[3]*DP[4])+C[27]*(DP[1]+DP[3])+C[18]*DP[2]+C[14]*DP[4])+DP[6]*(DP[11]*(
 C[5]*(-DP[1]-DP[3])-C[11]*DP[2]-C[2]*DP[4])+DP[10]*(C[5]*DP[2]+C[3]*DP[4])+
 C[18]*(DP[1]+DP[3])+C[17]*DP[12]+C[6]*DP[13])+DP[1]*(C[18]*DP[10]-C[39]+
 C[27]*DP[11]-C[6]*DP[14])+DP[3]*(C[18]*DP[10]-C[39]+C[27]*DP[11]-C[6]*
 DP[14])+DP[2]*(C[18]*DP[11]-C[45])+DP[4]*(C[14]*DP[11]-C[36])+DP[10]*(
 C[17]*DP[8]+C[6]*DP[9]));
S[9]=DP[14]*DP[14];
tmp[10]=+DP[6]*(DP[4]*(DP[12]*(DP[7]*(C[15]-C[26]*DP[10]-C[9]*DP[11])+DP[6]*
 (C[33]-C[25]*DP[11])+C[33]*DP[10]-C[42]+C[15]*DP[11]+C[7]*DP[14]*DP[0])+
 DP[2]*(C[10]*DP[6]-C[43]-C[32]*DP[14]*DP[10])+DP[8]*(DP[10]*(C[33]-C[26]*
 DP[11])-C[10]*DP[0]))+DP[13]*(DP[2]*(DP[6]*(C[26]*DP[11]-C[33])+DP[10]*(
 C[33]-C[26]*DP[7])+C[43]+C[7]*DP[14]*DP[0])+DP[0]*(DP[8]*(C[33]-C[26]*
 DP[11])+DP[12]*(C[23]*DP[7]-C[15]))+C[10]*(DP[12]*DP[6]-DP[10]*DP[8]))+
 DP[9]*(DP[0]*(DP[12]*(C[25]*DP[11]-C[33])-C[10]*DP[2])+DP[10]*(DP[2]*(
 C[33]-C[26]*DP[11])-C[10]*DP[12])))+DP[10]*(DP[8]*(DP[4]*(DP[7]*(C[15]-
 C[25]*DP[10]-C[9]*DP[11])+C[33]*DP[10]-C[42]+C[15]*DP[11]+C[7]*DP[14]*
 DP[0])+DP[0]*(DP[9]*(C[23]*DP[11]-C[15])+DP[13]*(C[25]*DP[7]-C[33]))+C[10]*
 DP[10]*DP[9])+DP[2]*(DP[9]*(DP[10]*(C[26]*DP[7]-C[33])+C[43]+C[7]*DP[14]*
 DP[0])+DP[4]*(C[10]*DP[10]-C[43])-C[10]*DP[13]*DP[0])+DP[0]*(DP[12]*(DP[9]*
 (C[33]-C[26]*DP[7])-C[10]*DP[4])))+DP[0]*(DP[4]*(C[41]*(DP[14]*DP[2]-
 DP[11]*DP[8]-DP[12]*DP[7])+C[59]*(DP[8]+DP[12]))+DP[0]*(DP[8]*(C[10]*DP[9]-
 C[7]*DP[14]*DP[13])+DP[12]*(C[10]*DP[13]-C[7]*DP[14]*DP[9]))+DP[2]*(C[43]*
 (-DP[9]-DP[13])));
tmp[11]=+DP[8]*(DP[10]*(DP[3]*(DP[7]*(C[3]*DP[10]-C[18]+C[19]*DP[11])+DP[0]*
 (C[18]-C[3]*DP[14])+C[14]*(-DP[6]-DP[10])+C[38]-C[18]*DP[11]+C[6]*DP[14])+
 DP[4]*(DP[7]*(C[2]*DP[10]-C[14]+C[3]*DP[11])+DP[6]*(C[12]*DP[11]-C[14])+
 C[36]-C[14]*DP[11]-C[2]*DP[14]*DP[0])+DP[0]*(DP[7]*(-C[11]*DP[12]-C[2]*
 DP[13])+DP[8]*(C[18]-C[16]*DP[11])+DP[9]*(C[18]-C[16]*DP[11]))+C[6]*(
 DP[10]*(-DP[8]-DP[9])+DP[13]*DP[6])+C[17]*DP[12]*DP[6])+DP[0]*(DP[0]*(
 DP[14]*(C[11]*DP[12]+C[2]*DP[13])+C[6]*(-DP[8]-DP[9])-C[14]*DP[3])+DP[3]*(
 DP[14]*(C[12]*DP[11]-C[14])+C[14]*DP[6]+C[6]*DP[7])+DP[4]*(C[6]*DP[6]-
 C[51]+C[35]*DP[11])+DP[6]*(DP[11]*(-C[11]*DP[12]-C[2]*DP[13])))+DP[3]*(
 DP[6]*(DP[11]*(C[14]-C[12]*DP[11])-C[48])))+DP[12]*(DP[6]*(DP[3]*(DP[11]*(
 C[3]*DP[6]-C[18]+C[19]*DP[7])+DP[0]*(C[18]-C[3]*DP[14])+C[14]*(-DP[6]-
 DP[10])+C[38]-C[18]*DP[7]+C[6]*DP[14])+DP[4]*(DP[7]*(C[12]*DP[10]-C[14]+
 C[3]*DP[11])+DP[11]*(C[2]*DP[6]-C[14])+C[36]-C[14]*DP[10]-C[2]*DP[14]*
 DP[0])+DP[0]*(DP[7]*(C[16]*(-DP[12]-DP[13]))+C[18]*(DP[12]+DP[13])-C[2]*
 DP[11]*DP[9])+C[6]*(DP[6]*(-DP[12]-DP[13])+DP[10]*DP[9]))+DP[0]*(DP[3]*(
 C[14]*(DP[10]-DP[0]-DP[14])+C[6]*DP[11]+C[12]*DP[14]*DP[7])+DP[0]*(C[6]*(-
 DP[12]-DP[13])+C[2]*DP[14]*DP[9])+DP[4]*(C[35]*DP[7]-C[51]+C[6]*DP[10])-
 C[2]*DP[10]*DP[9]*DP[7])+DP[3]*(DP[10]*(DP[7]*(C[14]-C[12]*DP[7])-C[48])));
tmp[12]=+DP[2]*(DP[6]*(DP[10]*(DP[14]*(C[11]*(DP[2]+DP[4])+C[3]*DP[3])+
 DP[7]*(C[16]*DP[12]+C[12]*DP[13])+DP[8]*(C[16]*DP[11]-C[18])+DP[9]*(C[12]*
 DP[11]-C[14])-C[18]*DP[12]-C[14]*DP[13])+DP[11]*(DP[12]*(C[11]*DP[6]-C[18]+
 C[5]*DP[7])+DP[13]*(C[2]*DP[6]-C[14]+C[3]*DP[7])-C[2]*DP[14]*DP[3])+DP[0]*(
 DP[14]*(-C[11]*DP[12]-C[2]*DP[13])+C[17]*DP[8]-C[14]*DP[3]+C[6]*DP[9])+
 DP[7]*(C[6]*DP[3]-C[18]*DP[12]-C[14]*DP[13])+DP[2]*(C[60]-C[6]*DP[6])+
 DP[4]*(C[60]-C[6]*DP[6])+C[45]*DP[12]+C[36]*DP[13])+DP[10]*(DP[7]*(DP[8]*(
 C[11]*DP[10]-C[18]+C[5]*DP[11])+DP[9]*(C[2]*DP[10]-C[14]+C[3]*DP[11])-C[2]*
 DP[14]*DP[3])+DP[0]*(DP[14]*(-C[11]*DP[8]-C[2]*DP[9])+C[17]*DP[12]-C[14]*
 DP[3]+C[6]*DP[13])+DP[11]*(C[6]*DP[3]-C[18]*DP[8]-C[14]*DP[9])+DP[2]*(
 C[60]-C[6]*DP[10])+DP[4]*(C[60]-C[6]*DP[10])+C[45]*DP[8]+C[36]*DP[9])+
 DP[0]*(C[37]*(DP[14]*(-DP[2]-DP[4])+DP[11]*DP[8]+DP[12]*DP[7])+DP[3]*(
 C[14]*DP[0]-C[48]+C[2]*S[9])+DP[9]*(C[35]*DP[11]-C[51])+DP[13]*(C[35]*
 DP[7]-C[51])+C[60]*(-DP[8]-DP[12]))+DP[3]*(DP[14]*(DP[7]*(C[14]-C[3]*
 DP[11])+C[14]*DP[11]-C[36])+C[51]*(-DP[7]-DP[11])+C[84]))+tmp[11];
tmp[13]=+S[0]*(DP[3]*(DP[0]*(C[15]*(DP[0]*(DP[8]-DP[2]+DP[12])+DP[2]*(DP[6]+
 DP[10])+DP[8]*(-DP[6]-DP[11])+DP[12]*(-DP[7]-DP[10]))+DP[8]*(DP[10]*(C[9]*
 DP[14]-C[29])+C[52]-C[55]*DP[7]+C[7]*DP[14]*DP[11])+DP[12]*(DP[6]*(C[9]*
 DP[14]-C[29])+C[52]-C[55]*DP[11]+C[7]*DP[14]*DP[7])+DP[2]*(C[33]*(DP[7]+
 DP[11])-C[92]-C[7]*S[9]))+DP[6]*(DP[12]*(DP[11]*(C[29]-C[9]*DP[6]-C[54]*
 DP[7])+C[15]*(DP[6]+DP[10])+C[58]*DP[7]-C[44]-C[10]*DP[14])+DP[2]*(DP[14]*(
 C[33]-C[9]*DP[10]-C[26]*DP[11])-C[10]*DP[7])+DP[8]*(C[15]*DP[10]-C[56]+
 C[26]*S[8]))+DP[10]*(DP[8]*(DP[7]*(C[29]-C[9]*DP[10]-C[54]*DP[11])+C[15]*
 DP[10]-C[44]+C[58]*DP[11]-C[10]*DP[14])+DP[2]*(DP[14]*(C[33]-C[26]*DP[7])-
 C[10]*DP[11])+DP[12]*(C[26]*S[7]-C[56]))+DP[7]*(DP[8]*(C[33]*DP[11]-C[47])+
 DP[12]*(C[33]*DP[11]-C[50]))+DP[2]*(C[93]-C[43]*DP[14])+DP[8]*(C[53]-C[50]*
 DP[11])+DP[12]*(C[53]-C[47]*DP[11]))+tmp[10])+tmp[12];
R=+DP[5]*(DP[6]*(DP[10]*(C[14]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[2]*(
 DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(DP[8]+
 DP[9]+DP[12]+DP[13]))+DP[7]*(C[12]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13]))+S[0]*(C[27]-C[33]*S[0]-C[3]*DP[10])+DP[5]*(C[3]*DP[10]-C[27])+
 C[21]*DP[10]-C[63])+DP[14]*(DP[2]*(C[3]*(-DP[1]-DP[3])-C[2]*DP[2]-C[11]*
 DP[4])+DP[4]*(C[3]*(-DP[1]-DP[3])-C[2]*DP[4])+S[0]*(C[30]*S[0]-C[17])+
 C[31]+C[17]*DP[5])+C[18]*(S[0]*(DP[6]+DP[10])+DP[5]*(-DP[6]-DP[10]))+C[6]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13]))+C[39]*(DP[5]-S[0])+C[62]*(-
 DP[6]-DP[10])+C[77])+tmp[2]+tmp[3])+tmp[6]+tmp[7])+S[0]*(DP[1]*(DP[0]*(
 C[18]*(DP[0]*(DP[2]-DP[8]-DP[12])+DP[6]*(DP[8]-DP[2]+DP[13])+DP[10]*(DP[9]-
 DP[2]+DP[12])+DP[1]*(DP[7]+DP[11])+DP[3]*(DP[7]+DP[11]))+S[0]*(DP[7]*(
 C[15]*(DP[13]-DP[3])+C[46]*DP[9]-C[33]*DP[4])+DP[11]*(C[15]*(DP[9]-DP[3])+
 C[46]*DP[13]-C[33]*DP[4])+C[52]*(-DP[9]-DP[13])+C[42]*DP[3]+C[87]*DP[4])+
 C[14]*(DP[0]*(DP[4]-DP[9]-DP[13])+DP[4]*(-DP[6]-DP[10])+DP[9]*DP[6]+DP[13]*
 DP[10])+DP[7]*(C[17]*DP[8]+C[6]*DP[9])+DP[11]*(C[17]*DP[12]+C[6]*DP[13])+
 C[38]*(-DP[1]-DP[3])+C[27]*(DP[10]*DP[8]+DP[12]*DP[6])-C[57]*DP[2]-C[48]*
 DP[4])+tmp[8]+tmp[9])+tmp[13]);
R*=(N/D)*Q1[4]*Q1[1]*Q2[2]*Q1[5]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
