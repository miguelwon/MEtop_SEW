/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F602_out;
static void C602(REAL * C)
{
REAL* V=va_out;
REAL S[13];                                                                 
     
S[0]=V[35]*V[35];
S[1]=V[34]*V[34];
S[2]=V[12]*V[12];
S[3]=V[10]*V[10]*V[10]*V[10];
S[4]=V[9]*V[9]*V[9]*V[9];
C[66]=+S[4]*(S[3]*(V[10]*(V[10]*(V[34]*(2*V[35]-V[34])-S[0])+V[12]*(6*(S[1]-
 S[0])))+S[2]*(V[34]*(2*V[35]+V[34])+S[0])));
S[5]=V[10]*V[10];
C[65]=+S[4]*(S[5]*(V[10]*(V[10]*(V[34]*(10*V[34]-20*V[35])+10*S[0])+V[12]*(
 2*(S[1]-S[0])))+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[64]=+S[4]*(S[5]*(V[10]*(V[10]*(V[34]*(14*V[35]-7*V[34])-7*S[0])+V[12]*(6*(
 S[1]-S[0])))+S[2]*(V[34]*(2*V[35]+V[34])+S[0])));
C[63]=+S[4]*(V[34]*(S[5]*(8*V[34]-16*V[35])+S[2]*(4*V[35]+2*V[34]))+S[0]*(2*
 S[2]+8*S[5]));
C[62]=+S[4]*(S[5]*(V[34]*(6*V[34]-12*V[35])+6*S[0]));
S[6]=V[10]*V[10]*V[10];
C[61]=+S[4]*(S[6]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[0])+V[12]*(6*(S[0]-
 S[1]))));
C[60]=+S[4]*(S[5]*(V[34]*(12*V[34]-24*V[35])+12*S[0]));
C[59]=+S[4]*(V[10]*(V[10]*(V[34]*(6*V[34]-12*V[35])+6*S[0])+V[12]*(8*(S[0]-
 S[1]))));
C[58]=+S[4]*(S[5]*(V[34]*(4*V[34]-8*V[35])+4*S[0]));
S[7]=V[9]*V[9];
C[57]=+S[3]*(S[7]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(24*(
 S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[56]=+S[7]*(S[5]*(V[10]*(V[10]*(V[34]*(40*V[34]-80*V[35])+40*S[0])+V[12]*(
 8*(S[1]-S[0])))+S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0])));
C[55]=+S[3]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(24*(S[1]-
 S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[54]=+S[5]*(V[10]*(V[10]*(V[34]*(40*V[34]-80*V[35])+40*S[0])+V[12]*(8*(
 S[1]-S[0])))+S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0]));
C[53]=+S[7]*(S[5]*(V[10]*(V[10]*(V[34]*(56*V[35]-28*V[34])-28*S[0])+V[12]*(
 24*(S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[52]=+S[7]*(V[34]*(S[5]*(32*V[34]-64*V[35])+S[2]*(16*V[35]+8*V[34]))+S[0]*(
 8*S[2]+32*S[5]));
C[51]=+S[6]*(S[7]*(V[10]*(V[34]*(16*V[34]-32*V[35])+16*S[0])+V[12]*(24*(
 S[0]-S[1]))));
C[50]=+S[7]*(S[5]*(V[34]*(48*V[34]-96*V[35])+48*S[0]));
C[49]=+S[5]*(V[10]*(V[10]*(V[34]*(56*V[35]-28*V[34])-28*S[0])+V[12]*(24*(
 S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[48]=+V[34]*(S[5]*(32*V[34]-64*V[35])+S[2]*(16*V[35]+8*V[34]))+S[0]*(8*
 S[2]+32*S[5]);
C[47]=+S[6]*(V[10]*(V[34]*(16*V[34]-32*V[35])+16*S[0])+V[12]*(24*(S[0]-
 S[1])));
C[46]=+S[5]*(V[34]*(48*V[34]-96*V[35])+48*S[0]);
C[45]=+S[7]*(V[10]*(V[10]*(V[34]*(24*V[34]-48*V[35])+24*S[0])+V[12]*(32*(
 S[0]-S[1]))));
C[44]=+V[10]*(V[10]*(V[34]*(24*V[34]-48*V[35])+24*S[0])+V[12]*(32*(S[0]-
 S[1])));
C[43]=+S[7]*(S[5]*(V[34]*(16*V[34]-32*V[35])+16*S[0]));
C[42]=+S[5]*(V[34]*(24*V[34]-48*V[35])+24*S[0]);
C[41]=+S[5]*(V[34]*(16*V[34]-32*V[35])+16*S[0]);
C[40]=+S[3]*(S[7]*(V[10]*(V[10]*(V[34]*(40*V[35]-20*V[34])-20*S[0])+V[12]*(
 24*(S[0]-S[1])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[39]=+S[7]*(S[5]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[0])+V[12]*(
 8*(S[1]-S[0])))+S[2]*(V[34]*(40*V[35]+20*V[34])+20*S[0])));
C[38]=+S[7]*(S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0]));
C[37]=+S[7]*(S[5]*(V[10]*(24*(S[1]*(-V[12]-V[10])+S[0]*(V[12]-V[10]))+48*
 V[35]*V[34]*V[10])+S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0])));
C[36]=+S[7]*(V[10]*(V[10]*(V[34]*(32*V[35]-16*V[34])-16*S[0])+V[12]*(32*(
 S[0]-S[1]))));
C[35]=+S[7]*(V[34]*(32*V[34]-64*V[35])+32*S[0]);
C[34]=+S[3]*(V[10]*(V[10]*(V[34]*(40*V[35]-20*V[34])-20*S[0])+V[12]*(24*(
 S[0]-S[1])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[33]=+S[5]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[0])+V[12]*(8*(
 S[1]-S[0])))+S[2]*(V[34]*(40*V[35]+20*V[34])+20*S[0]));
C[32]=+S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0]);
C[31]=+S[5]*(V[10]*(24*(S[1]*(-V[12]-V[10])+S[0]*(V[12]-V[10]))+48*V[35]*
 V[34]*V[10])+S[2]*(V[34]*(16*V[35]+8*V[34])+8*S[0]));
C[30]=+S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
C[29]=+V[34]*(16*V[34]-32*V[35])+16*S[0];
C[28]=+V[10]*(V[10]*(V[34]*(32*V[35]-16*V[34])-16*S[0])+V[12]*(32*(S[0]-
 S[1])));
C[27]=+V[34]*(32*V[34]-64*V[35])+32*S[0];
C[26]=+S[3]*(S[7]*(V[10]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[0])+V[12]*(12*(
 S[1]-S[0])))+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[25]=+S[7]*(S[5]*(V[10]*(V[10]*(V[34]*(20*V[34]-40*V[35])+20*S[0])+V[12]*(
 4*(S[1]-S[0])))+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[24]=+S[7]*(S[5]*(V[10]*(V[10]*(V[34]*(28*V[35]-14*V[34])-14*S[0])+V[12]*(
 12*(S[1]-S[0])))+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[23]=+S[7]*(V[34]*(S[5]*(16*V[34]-32*V[35])+S[2]*(8*V[35]+4*V[34]))+S[0]*(
 4*S[2]+16*S[5]));
C[22]=+S[6]*(S[7]*(V[10]*(V[34]*(8*V[34]-16*V[35])+8*S[0])+V[12]*(12*(S[0]-
 S[1]))));
C[21]=+S[7]*(S[5]*(V[34]*(24*V[34]-48*V[35])+24*S[0]));
C[20]=+S[7]*(V[10]*(V[10]*(V[34]*(12*V[34]-24*V[35])+12*S[0])+V[12]*(16*(
 S[0]-S[1]))));
C[19]=+S[7]*(S[5]*(V[34]*(12*V[34]-24*V[35])+12*S[0]));
C[18]=+S[7]*(S[5]*(V[34]*(8*V[34]-16*V[35])+8*S[0]));
C[17]=+S[4]*(S[3]*(V[10]*(V[10]*(V[34]*(10*V[35]-5*V[34])-5*S[0])+V[12]*(6*(
 S[0]-S[1])))+S[2]*(V[34]*(2*V[35]+V[34])+S[0])));
C[16]=+S[4]*(S[5]*(V[10]*(V[10]*(V[34]*(6*V[35]-3*V[34])-3*S[0])+V[12]*(2*(
 S[1]-S[0])))+S[2]*(V[34]*(10*V[35]+5*V[34])+5*S[0])));
C[15]=+S[4]*(S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0]));
C[14]=+S[3]*(S[7]*(V[10]*(V[10]*(V[34]*(20*V[35]-10*V[34])-10*S[0])+V[12]*(
 12*(S[0]-S[1])))+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[13]=+S[7]*(S[5]*(V[10]*(V[10]*(V[34]*(12*V[35]-6*V[34])-6*S[0])+V[12]*(4*(
 S[1]-S[0])))+S[2]*(V[34]*(20*V[35]+10*V[34])+10*S[0])));
C[12]=+S[7]*(S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0]));
C[11]=+S[4]*(S[5]*(V[10]*(6*(S[1]*(-V[12]-V[10])+S[0]*(V[12]-V[10]))+12*
 V[35]*V[34]*V[10])+S[2]*(V[34]*(4*V[35]+2*V[34])+2*S[0])));
C[10]=+S[4]*(S[5]*(V[34]*(2*V[34]-4*V[35])+2*S[0]));
C[9]=+S[4]*(V[34]*(4*V[34]-8*V[35])+4*S[0]);
C[8]=+S[7]*(S[5]*(V[10]*(12*(S[1]*(-V[12]-V[10])+S[0]*(V[12]-V[10]))+24*
 V[35]*V[34]*V[10])+S[2]*(V[34]*(8*V[35]+4*V[34])+4*S[0])));
C[7]=+S[7]*(S[5]*(V[34]*(4*V[34]-8*V[35])+4*S[0]));
C[6]=+S[7]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
C[5]=+S[4]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[0])+V[12]*(8*(S[0]-
 S[1]))));
C[4]=+S[4]*(V[34]*(8*V[34]-16*V[35])+8*S[0]);
C[3]=+S[7]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[0])+V[12]*(16*(S[0]-
 S[1]))));
C[2]=+S[7]*(V[34]*(16*V[34]-32*V[35])+16*S[0]);
S[8]=V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[8]*S[9];
S[10]=V[49]*V[49];
S[11]=V[19]*V[19];
S[12]=V[1]*V[1]*V[1]*V[1];
C[0]=+16*S[10]*S[11]*S[12];
}
REAL F602_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         C                 C      !                                  
       ==<==@==============<==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           G|P7         /==<==+===!==<==\                            
            1           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         C  |  t     W+ |  e2 |   !  e2 |  W+    t     C             
       ==<==@==<==@-2<--@==>==+===!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/    G|-PA             
                           P6 |   !  P6             3                
                              |   !                 |                
                              |   !  C              |  C             
                              \===!==<==============@==<==           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[67];REAL S[3];REAL tmp[5];                                    
     
if(CalcConst) C602(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
tmp[0]=+DP[7]*(C[6]*(DP[0]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+
 DP[3]+DP[8]+DP[9])+S[2]*(DP[10]+DP[14])+DP[5]*(-DP[10]-DP[14]))+DP[7]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[2])))+DP[12]*
 (C[23]*(-DP[1]-DP[3])+C[21]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[13]*(
 C[23]*(-DP[1]-DP[3])+C[21]*(-DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[10]*(
 C[23]*(DP[5]-S[2])+C[9]*(DP[7]-DP[0])+C[63])+DP[14]*(C[7]*(S[2]-DP[5])-
 C[10]-C[9]*DP[0])+DP[11]*(C[21]*(DP[5]-S[2])+C[60]))+DP[0]*(DP[0]*(C[6]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[9]*
 DP[14])+C[12]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+DP[14]*(S[2]-
 DP[5]))-C[15]*DP[14])+C[25]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 C[13]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+
 C[65]*(-DP[10]-DP[11])+C[16]*DP[14];
tmp[1]=+DP[6]*(DP[7]*(C[20]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+
 DP[2]+DP[3]+DP[4])+S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+C[3]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[59]*(-
 DP[10]-DP[11])+C[5]*DP[14])+DP[6]*(C[18]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])+DP[10]*(S[2]-DP[5]))+C[19]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])+DP[11]*(S[2]-DP[5]))-C[58]*DP[10]-C[62]*DP[11])+DP[12]*(
 C[22]*(-DP[1]-DP[3])+C[24]*(DP[2]+DP[4])+C[8]*(DP[8]+DP[9]))+DP[13]*(C[22]*
 (-DP[1]-DP[3])+C[24]*(DP[2]+DP[4])+C[8]*(DP[8]+DP[9]))+S[2]*(C[24]*DP[11]-
 C[22]*DP[10]+C[8]*DP[14])+DP[5]*(C[22]*DP[10]-C[24]*DP[11]-C[8]*DP[14])+
 C[61]*DP[10]-C[64]*DP[11]-C[11]*DP[14]);
tmp[2]=+DP[0]*(DP[6]*(C[6]*(DP[0]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(
 DP[2]+DP[4]+DP[8]+DP[9])+S[2]*(DP[11]+DP[14])+DP[5]*(-DP[11]-DP[14]))+
 DP[7]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 S[2]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[2])))+DP[7]*(C[2]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[2]))+C[9]*(-DP[10]-DP[11])+
 C[4]*DP[14])+DP[12]*(C[21]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[7]*(DP[8]+
 DP[9]))+DP[13]*(C[21]*(-DP[1]-DP[3])+C[23]*(-DP[2]-DP[4])+C[7]*(DP[8]+
 DP[9]))+DP[11]*(C[23]*(DP[5]-S[2])+C[9]*(DP[6]-DP[0])+C[63])+DP[14]*(C[7]*(
 S[2]-DP[5])-C[10]-C[9]*DP[0])+DP[10]*(C[21]*(DP[5]-S[2])+C[60]))+tmp[0]);
tmp[3]=+DP[0]*(DP[6]*(S[2]*(C[29]*(DP[4]*(DP[0]-DP[6]+DP[7])+DP[7]*DP[3]+
 DP[9]*DP[0])+DP[9]*(C[30]-C[27]*DP[7])-C[46]*DP[3]-C[48]*DP[4])+DP[7]*(
 C[2]*(DP[9]-DP[1]-DP[2])+C[6]*(-DP[3]-DP[4])+C[35]*DP[8])+DP[0]*(C[2]*(-
 DP[2]-DP[8])+C[6]*(-DP[4]-DP[9]))+DP[2]*(C[52]+C[2]*DP[6])+DP[4]*(C[23]+
 C[6]*DP[6])+C[50]*DP[1]+C[21]*DP[3]-C[18]*DP[8]-C[7]*DP[9])+DP[7]*(S[2]*(
 DP[3]*(C[29]*(DP[0]-DP[7])-C[48])+DP[9]*(C[30]+C[29]*DP[0])-C[46]*DP[4])+
 DP[0]*(C[2]*(-DP[1]-DP[8])+C[6]*(-DP[3]-DP[9]))+DP[1]*(C[52]+C[2]*DP[7])+
 DP[3]*(C[23]+C[6]*DP[7])+C[50]*DP[2]+C[21]*DP[4]-C[18]*DP[8]-C[7]*DP[9])+
 DP[0]*(DP[9]*(S[2]*(C[32]-C[29]*DP[0])+C[6]*DP[0]-C[12])+DP[8]*(C[2]*DP[0]-
 C[38]))+S[2]*(C[54]*(DP[3]+DP[4])-C[33]*DP[9])+C[56]*(-DP[1]-DP[2])+C[25]*
 (-DP[3]-DP[4])+C[39]*DP[8]+C[13]*DP[9]);
tmp[4]=+S[2]*(DP[12]*(DP[6]*(DP[7]*(S[2]*(C[44]*(DP[3]+DP[4])-C[28]*DP[9])+
 C[45]*(-DP[1]-DP[2])+C[20]*(-DP[3]-DP[4])+C[36]*DP[8]+C[3]*DP[9])+DP[6]*(
 S[2]*(C[41]*DP[3]+C[42]*DP[4])-C[43]*DP[1]-C[21]*DP[2]-C[18]*DP[3]-C[19]*
 DP[4])+S[2]*(C[49]*DP[4]-C[47]*DP[3]+C[31]*DP[9])+C[51]*DP[1]-C[53]*DP[2]+
 C[22]*DP[3]-C[24]*DP[4]-C[37]*DP[8]-C[8]*DP[9])+DP[7]*(DP[7]*(S[2]*(C[42]*
 DP[3]+C[41]*DP[4])-C[21]*DP[1]-C[43]*DP[2]-C[19]*DP[3]-C[18]*DP[4])+S[2]*(
 C[49]*DP[3]-C[47]*DP[4]+C[31]*DP[9])+C[51]*DP[2]-C[53]*DP[1]-C[24]*DP[3]+
 C[22]*DP[4]-C[37]*DP[8]-C[8]*DP[9])+S[2]*(C[55]*(-DP[3]-DP[4])-C[34]*
 DP[9])+C[57]*(DP[1]+DP[2])+C[26]*(DP[3]+DP[4])+C[40]*DP[8]+C[14]*DP[9]+
 tmp[3])+DP[13]*(DP[0]*(DP[6]*(C[6]*(DP[2]*(DP[6]-DP[0]-DP[7])-DP[7]*DP[1]-
 DP[8]*DP[0])+DP[8]*(C[2]*DP[7]-C[7])+C[21]*DP[1]+C[23]*DP[2])+DP[7]*(DP[1]*
 (C[6]*(DP[7]-DP[0])+C[23])+DP[8]*(-C[7]-C[6]*DP[0])+C[21]*DP[2])+DP[8]*(
 DP[0]*(C[6]*DP[0]-C[12])+C[13])+C[25]*(-DP[1]-DP[2]))+DP[6]*(DP[1]*(C[22]-
 C[18]*DP[6]-C[20]*DP[7])+DP[2]*(-C[24]-C[19]*DP[6]-C[20]*DP[7])+DP[8]*(
 C[3]*DP[7]-C[8]))+DP[7]*(DP[1]*(-C[24]-C[19]*DP[7])+DP[2]*(C[22]-C[18]*
 DP[7])-C[8]*DP[8])+C[26]*(DP[1]+DP[2])+C[14]*DP[8]));
R=+DP[5]*(DP[7]*(DP[7]*(C[19]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+
 DP[10]*(S[2]-DP[5]))+C[18]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])+
 DP[11]*(S[2]-DP[5]))-C[62]*DP[10]-C[58]*DP[11])+DP[12]*(C[24]*(DP[1]+
 DP[3])+C[22]*(-DP[2]-DP[4])+C[8]*(DP[8]+DP[9]))+DP[13]*(C[24]*(DP[1]+
 DP[3])+C[22]*(-DP[2]-DP[4])+C[8]*(DP[8]+DP[9]))+S[2]*(C[24]*DP[10]-C[22]*
 DP[11]+C[8]*DP[14])+DP[5]*(C[22]*DP[11]-C[24]*DP[10]-C[8]*DP[14])+C[61]*
 DP[11]-C[64]*DP[10]-C[11]*DP[14])+C[26]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[2]*(-DP[10]-DP[11])+DP[5]*(DP[10]+
 DP[11]))+C[14]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(
 DP[5]-S[2]))+C[66]*(DP[10]+DP[11])+C[17]*DP[14]+tmp[1]+tmp[2])+tmp[4];
R*=(N/D)*Q1[3]*Q2[1]*Q2[2]*Q1[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
