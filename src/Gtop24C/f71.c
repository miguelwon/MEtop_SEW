/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F71_out;
static void C71(REAL * C)
{
REAL* V=va_out;
REAL S[11];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[9]*V[9];
S[3]=V[7]*V[7]*V[7]*V[7];
C[88]=+S[3]*(V[8]*(V[8]*(V[17]*(2*V[17]-4*V[18])+2*S[0])+V[9]*(12*(S[1]-
 S[0])))+S[2]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[87]=+S[3]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
C[86]=+S[3]*(V[8]*(V[8]*(V[17]*(5*V[17]-10*V[18])+5*S[0])+V[9]*(2*(S[1]-
 S[0])))+S[2]*(V[17]*(2*V[18]+V[17])+S[0]));
C[85]=+S[3]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[84]=+S[3]*(V[8]*(V[8]*(V[17]*(7*V[17]-14*V[18])+7*S[0])+V[9]*(18*(S[1]-
 S[0])))+S[2]*(V[17]*(6*V[18]+3*V[17])+3*S[0]));
C[83]=+S[3]*(V[17]*(30*V[17]-60*V[18])+30*S[0]);
C[82]=+S[3]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[81]=+S[3]*(V[17]*(6*V[17]-12*V[18])+6*S[0]);
S[4]=V[8]*V[8];
C[80]=+S[3]*(V[17]*(S[4]*(16*V[18]-8*V[17])+S[2]*(16*V[18]+8*V[17]))+S[0]*(
 8*(S[2]-S[4])));
C[79]=+S[3]*(V[8]*(12*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+24*V[18]*V[17]*
 V[8])+S[2]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[78]=+S[3]*(V[8]*(V[8]*(V[17]*(26*V[18]-13*V[17])-13*S[0])+V[9]*(2*(S[0]-
 S[1])))+S[2]*(V[17]*(14*V[18]+7*V[17])+7*S[0]));
C[77]=+S[3]*(V[8]*(V[8]*(V[17]*(20*V[18]-10*V[17])-10*S[0])+V[9]*(18*(S[0]-
 S[1]))));
C[76]=+S[3]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[75]=+S[3]*(V[17]*(S[4]*(8*V[18]-4*V[17])+S[2]*(8*V[18]+4*V[17]))+S[0]*(4*(
 S[2]-S[4])));
C[74]=+S[3]*(S[4]*(V[17]*(S[4]*(4*V[18]-2*V[17])+S[2]*(4*V[18]+2*V[17]))+
 S[0]*(2*(S[2]-S[4]))));
C[73]=+S[3]*(V[8]*(V[8]*(V[17]*(10*V[18]-5*V[17])-5*S[0])+V[9]*(12*(S[0]-
 S[1])))+S[2]*(V[17]*(10*V[18]+5*V[17])+5*S[0]));
C[72]=+S[3]*(V[17]*(18*V[17]-36*V[18])+18*S[0]);
C[71]=+S[3]*(V[8]*(V[8]*(V[17]*(12*V[18]-6*V[17])-6*S[0])+V[9]*(2*(S[0]-
 S[1])))+S[2]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[70]=+S[3]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[69]=+S[3]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[68]=+S[3]*(V[8]*(V[8]*(V[17]*(12*V[18]-6*V[17])-6*S[0])+V[9]*(18*(S[0]-
 S[1]))));
C[67]=+S[3]*(V[17]*(10*V[17]-20*V[18])+10*S[0]);
C[66]=+S[3]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
S[5]=V[7]*V[7];
C[65]=+S[5]*(V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(48*(S[1]-
 S[0])))+S[2]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[64]=+S[5]*(V[17]*(160*V[17]-320*V[18])+160*S[0]);
C[63]=+S[5]*(V[8]*(V[8]*(V[17]*(20*V[17]-40*V[18])+20*S[0])+V[9]*(8*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[62]=+S[5]*(V[17]*(192*V[17]-384*V[18])+192*S[0]);
C[61]=+S[5]*(V[8]*(V[8]*(V[17]*(28*V[17]-56*V[18])+28*S[0])+V[9]*(72*(S[1]-
 S[0])))+S[2]*(V[17]*(24*V[18]+12*V[17])+12*S[0]));
C[60]=+S[5]*(V[17]*(120*V[17]-240*V[18])+120*S[0]);
C[59]=+S[5]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[58]=+S[5]*(V[17]*(S[4]*(64*V[18]-32*V[17])+S[2]*(64*V[18]+32*V[17]))+S[0]*
 (32*(S[2]-S[4])));
C[57]=+S[5]*(V[8]*(48*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+96*V[18]*V[17]*
 V[8])+S[2]*(V[17]*(64*V[18]+32*V[17])+32*S[0]));
C[56]=+S[5]*(V[8]*(V[8]*(V[17]*(104*V[18]-52*V[17])-52*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(56*V[18]+28*V[17])+28*S[0]));
C[55]=+S[5]*(V[8]*(V[8]*(V[17]*(80*V[18]-40*V[17])-40*S[0])+V[9]*(72*(S[0]-
 S[1]))));
C[54]=+S[5]*(S[4]*(V[17]*(S[4]*(16*V[18]-8*V[17])+S[2]*(16*V[18]+8*V[17]))+
 S[0]*(8*(S[2]-S[4]))));
C[53]=+S[5]*(V[8]*(V[8]*(V[17]*(40*V[18]-20*V[17])-20*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[2]*(V[17]*(40*V[18]+20*V[17])+20*S[0]));
C[52]=+S[5]*(V[17]*(72*V[17]-144*V[18])+72*S[0]);
C[51]=+S[5]*(V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(32*V[18]+16*V[17])+16*S[0]));
C[50]=+S[5]*(V[17]*(64*V[17]-128*V[18])+64*S[0]);
C[49]=+S[5]*(V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(72*(S[0]-
 S[1]))));
C[48]=+S[5]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
C[47]=+V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(48*(S[1]-S[0])))+
 S[2]*(V[17]*(16*V[18]+8*V[17])+8*S[0]);
C[46]=+V[17]*(160*V[17]-320*V[18])+160*S[0];
C[45]=+V[8]*(V[8]*(V[17]*(20*V[17]-40*V[18])+20*S[0])+V[9]*(8*(S[1]-S[0])))+
 S[2]*(V[17]*(8*V[18]+4*V[17])+4*S[0]);
C[44]=+V[17]*(192*V[17]-384*V[18])+192*S[0];
C[43]=+V[8]*(V[8]*(V[17]*(28*V[17]-56*V[18])+28*S[0])+V[9]*(72*(S[1]-
 S[0])))+S[2]*(V[17]*(24*V[18]+12*V[17])+12*S[0]);
C[42]=+V[17]*(120*V[17]-240*V[18])+120*S[0];
C[41]=+V[17]*(96*V[17]-192*V[18])+96*S[0];
C[40]=+V[17]*(24*V[17]-48*V[18])+24*S[0];
C[39]=+V[17]*(S[4]*(64*V[18]-32*V[17])+S[2]*(64*V[18]+32*V[17]))+S[0]*(32*(
 S[2]-S[4]));
C[38]=+V[8]*(48*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+96*V[18]*V[17]*V[8])+
 S[2]*(V[17]*(64*V[18]+32*V[17])+32*S[0]);
C[37]=+V[8]*(V[8]*(V[17]*(104*V[18]-52*V[17])-52*S[0])+V[9]*(8*(S[0]-
 S[1])))+S[2]*(V[17]*(56*V[18]+28*V[17])+28*S[0]);
C[36]=+V[8]*(V[8]*(V[17]*(80*V[18]-40*V[17])-40*S[0])+V[9]*(72*(S[0]-
 S[1])));
C[35]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[34]=+V[17]*(S[4]*(32*V[18]-16*V[17])+S[2]*(32*V[18]+16*V[17]))+S[0]*(16*(
 S[2]-S[4]));
C[33]=+S[4]*(V[17]*(S[4]*(16*V[18]-8*V[17])+S[2]*(16*V[18]+8*V[17]))+S[0]*(
 8*(S[2]-S[4])));
C[32]=+V[8]*(V[8]*(V[17]*(40*V[18]-20*V[17])-20*S[0])+V[9]*(48*(S[0]-
 S[1])))+S[2]*(V[17]*(40*V[18]+20*V[17])+20*S[0]);
C[31]=+V[17]*(72*V[17]-144*V[18])+72*S[0];
C[30]=+V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(8*(S[0]-S[1])))+
 S[2]*(V[17]*(32*V[18]+16*V[17])+16*S[0]);
C[29]=+V[17]*(64*V[17]-128*V[18])+64*S[0];
C[28]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[27]=+V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(72*(S[0]-
 S[1])));
C[26]=+V[17]*(40*V[17]-80*V[18])+40*S[0];
C[25]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[24]=+S[5]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(24*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[18]+4*V[17])+4*S[0]));
C[23]=+S[5]*(V[17]*(80*V[17]-160*V[18])+80*S[0]);
C[22]=+S[5]*(V[8]*(V[8]*(V[17]*(10*V[17]-20*V[18])+10*S[0])+V[9]*(4*(S[1]-
 S[0])))+S[2]*(V[17]*(4*V[18]+2*V[17])+2*S[0]));
C[21]=+S[5]*(V[17]*(96*V[17]-192*V[18])+96*S[0]);
C[20]=+S[5]*(V[8]*(V[8]*(V[17]*(14*V[17]-28*V[18])+14*S[0])+V[9]*(36*(S[1]-
 S[0])))+S[2]*(V[17]*(12*V[18]+6*V[17])+6*S[0]));
C[19]=+S[5]*(V[17]*(60*V[17]-120*V[18])+60*S[0]);
C[18]=+S[5]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[17]=+S[5]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[16]=+S[5]*(V[17]*(S[4]*(32*V[18]-16*V[17])+S[2]*(32*V[18]+16*V[17]))+S[0]*
 (16*(S[2]-S[4])));
C[15]=+S[5]*(V[8]*(24*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+48*V[18]*V[17]*
 V[8])+S[2]*(V[17]*(32*V[18]+16*V[17])+16*S[0]));
C[14]=+S[5]*(V[8]*(V[8]*(V[17]*(52*V[18]-26*V[17])-26*S[0])+V[9]*(4*(S[0]-
 S[1])))+S[2]*(V[17]*(28*V[18]+14*V[17])+14*S[0]));
C[13]=+S[5]*(V[8]*(V[8]*(V[17]*(40*V[18]-20*V[17])-20*S[0])+V[9]*(36*(S[0]-
 S[1]))));
C[12]=+S[5]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[11]=+S[5]*(V[17]*(S[4]*(16*V[18]-8*V[17])+S[2]*(16*V[18]+8*V[17]))+S[0]*(
 8*(S[2]-S[4])));
C[10]=+S[5]*(S[4]*(V[17]*(S[4]*(8*V[18]-4*V[17])+S[2]*(8*V[18]+4*V[17]))+
 S[0]*(4*(S[2]-S[4]))));
C[9]=+S[5]*(V[8]*(V[8]*(V[17]*(20*V[18]-10*V[17])-10*S[0])+V[9]*(24*(S[0]-
 S[1])))+S[2]*(V[17]*(20*V[18]+10*V[17])+10*S[0]));
C[8]=+S[5]*(V[17]*(36*V[17]-72*V[18])+36*S[0]);
C[7]=+S[5]*(V[8]*(V[8]*(V[17]*(24*V[18]-12*V[17])-12*S[0])+V[9]*(4*(S[0]-
 S[1])))+S[2]*(V[17]*(16*V[18]+8*V[17])+8*S[0]));
C[6]=+S[5]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[5]=+S[5]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[4]=+S[5]*(V[8]*(V[8]*(V[17]*(24*V[18]-12*V[17])-12*S[0])+V[9]*(36*(S[0]-
 S[1]))));
C[3]=+S[5]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
C[2]=+S[5]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
S[6]=V[12]*V[12];
S[7]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[6]*S[7];
S[8]=V[22]*V[22];
S[9]=V[14]*V[14];
S[10]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[8]*S[9]*S[10];
}
REAL F71_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         C                 G      !                                  
       ==<==@-------------1---\   !                                  
         P1 |              P3 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           c|P7         /==<==+===!==<==\                            
            |           |  P4 |   !  P4 |                            
            |           |     |   !     |                            
         G  |  t     W+ |  e2 |   !  e2 |  W+    t     C             
       -2---@==<==@-3<--@==>==+===!==>==@--<5-@==<==@==<==           
         P2    P8 |  P9    P5 |   !  P5   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/    G|-PA             
                           P6 |   !  P6             4                
                              |   !                 |                
                              |   !  G              |  G             
                              \---!---1-------------@---2-           
                                  !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[89];REAL S[3];REAL tmp[4];                                    
     
if(CalcConst) C71(C);
S[0]=GG*GG*GG*GG;
N=+C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(DP[1]*(C[2]*(DP[13]*(DP[4]-DP[3]-DP[6]+DP[7])+DP[14]*(DP[4]-
 DP[3]-DP[6]+DP[7])+S[2]*(DP[11]-DP[10])+DP[9]*(DP[10]-DP[11]))+C[5]*(DP[5]*
 (-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[66]*(DP[10]-
 DP[11])+C[69]*DP[12])+DP[2]*(DP[13]*(C[18]*(-DP[3]-DP[6])+C[5]*(-DP[4]-
 DP[7])+C[2]*(DP[5]+DP[8]))+DP[14]*(C[18]*(-DP[3]-DP[6])+C[5]*(-DP[4]-
 DP[7])+C[2]*(DP[5]+DP[8]))+S[2]*(C[2]*DP[12]-C[18]*DP[10]-C[5]*DP[11])+
 DP[9]*(C[18]*DP[10]+C[5]*DP[11]-C[2]*DP[12])+C[82]*DP[10]+C[69]*DP[11]-
 C[66]*DP[12])+DP[13]*(C[22]*(-DP[3]-DP[6])+C[14]*(DP[4]+DP[7])+C[7]*(-
 DP[5]-DP[8]))+DP[14]*(C[22]*(-DP[3]-DP[6])+C[14]*(DP[4]+DP[7])+C[7]*(-
 DP[5]-DP[8]))+S[2]*(C[14]*DP[11]-C[22]*DP[10]-C[7]*DP[12])+DP[9]*(C[22]*
 DP[10]-C[14]*DP[11]+C[7]*DP[12])+C[86]*DP[10]-C[78]*DP[11]+C[71]*DP[12])+
 DP[2]*(DP[13]*(DP[2]*(C[17]*(-DP[3]-DP[6]))+C[20]*(-DP[3]-DP[6])+C[13]*(
 DP[4]+DP[7])+C[4]*(-DP[5]-DP[8]))+DP[14]*(DP[2]*(C[17]*(-DP[3]-DP[6]))+
 C[20]*(-DP[3]-DP[6])+C[13]*(DP[4]+DP[7])+C[4]*(-DP[5]-DP[8]))+DP[10]*(
 DP[2]*(C[17]*(DP[9]-S[2])+C[81])+C[20]*(DP[9]-S[2])+C[84])+DP[11]*(C[13]*(
 S[2]-DP[9])-C[77])+DP[12]*(C[4]*(DP[9]-S[2])+C[68]))+C[10]*(DP[5]*(-DP[13]-
 DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[74]*DP[12];
tmp[1]=+DP[13]*(DP[0]*(S[2]*(DP[6]*(C[47]-C[46]*DP[0]+C[44]*DP[1]+C[42]*
 DP[2])+DP[7]*(C[35]*(DP[2]-DP[0]-DP[1])-C[38])+DP[8]*(C[32]+C[31]*DP[0]-
 C[29]*DP[1]-C[26]*DP[2]))+DP[0]*(C[64]*DP[3]+C[2]*DP[4]-C[52]*DP[5]+C[23]*
 DP[6]+C[12]*DP[7]-C[8]*DP[8])+DP[1]*(C[2]*DP[4]-C[62]*DP[3]+C[50]*DP[5]-
 C[21]*DP[6]+C[12]*DP[7]+C[6]*DP[8])+DP[2]*(C[48]*DP[5]-C[60]*DP[3]-C[2]*
 DP[4]-C[19]*DP[6]-C[12]*DP[7]+C[3]*DP[8])+C[57]*DP[4]-C[65]*DP[3]-C[53]*
 DP[5]-C[24]*DP[6]+C[15]*DP[7]-C[9]*DP[8])+DP[1]*(S[2]*(DP[1]*(C[25]*(DP[7]-
 DP[6])-C[28]*DP[8])+DP[2]*(C[25]*DP[8]-C[41]*DP[6]-C[28]*DP[7])+C[37]*
 DP[7]-C[45]*DP[6]-C[30]*DP[8])+DP[1]*(C[6]*(DP[3]-DP[4])+C[2]*(DP[6]-
 DP[7])+C[12]*DP[5]+C[5]*DP[8])+DP[2]*(C[21]*DP[3]+C[12]*DP[4]-C[6]*DP[5]+
 C[18]*DP[6]+C[5]*DP[7]-C[2]*DP[8])+C[63]*DP[3]-C[56]*DP[4]+C[51]*DP[5]+
 C[22]*DP[6]-C[14]*DP[7]+C[7]*DP[8])+DP[2]*(S[2]*(DP[6]*(-C[43]-C[40]*
 DP[2])+C[36]*DP[7]-C[27]*DP[8])+DP[2]*(C[59]*DP[3]+C[17]*DP[6])+C[61]*
 DP[3]-C[55]*DP[4]+C[49]*DP[5]+C[20]*DP[6]-C[13]*DP[7]+C[4]*DP[8])+DP[8]*(
 C[10]-C[33]*S[2])+C[54]*DP[5]);
tmp[2]=+DP[9]*(DP[0]*(DP[13]*(DP[0]*(C[23]*(-DP[3]-DP[6])+C[12]*(-DP[4]-
 DP[7])+C[8]*(DP[5]+DP[8]))+DP[1]*(C[21]*(DP[3]+DP[6])+C[12]*(-DP[4]-DP[7])+
 C[6]*(-DP[5]-DP[8]))+DP[2]*(C[19]*(DP[3]+DP[6])+C[12]*(DP[4]+DP[7])+C[3]*(-
 DP[5]-DP[8]))+C[24]*(DP[3]+DP[6])+C[15]*(-DP[4]-DP[7])+C[9]*(DP[5]+DP[8]))+
 DP[14]*(DP[0]*(C[23]*(-DP[3]-DP[6])+C[12]*(-DP[4]-DP[7])+C[8]*(DP[5]+
 DP[8]))+DP[1]*(C[21]*(DP[3]+DP[6])+C[12]*(-DP[4]-DP[7])+C[6]*(-DP[5]-
 DP[8]))+DP[2]*(C[19]*(DP[3]+DP[6])+C[12]*(DP[4]+DP[7])+C[3]*(-DP[5]-
 DP[8]))+C[24]*(DP[3]+DP[6])+C[15]*(-DP[4]-DP[7])+C[9]*(DP[5]+DP[8]))+S[2]*(
 DP[10]*(C[24]-C[23]*DP[0]+C[21]*DP[1]+C[19]*DP[2])+DP[11]*(C[12]*(DP[2]-
 DP[0]-DP[1])-C[15])+DP[12]*(C[9]+C[8]*DP[0]-C[6]*DP[1]-C[3]*DP[2]))+DP[9]*(
 DP[10]*(C[23]*DP[0]-C[24]-C[21]*DP[1]-C[19]*DP[2])+DP[11]*(C[12]*(DP[0]+
 DP[1]-DP[2])+C[15])+DP[12]*(C[6]*DP[1]-C[9]-C[8]*DP[0]+C[3]*DP[2]))+DP[10]*
 (C[87]*DP[0]-C[88]-C[85]*DP[1]-C[83]*DP[2])+DP[11]*(C[76]*(DP[0]+DP[1]-
 DP[2])+C[79])+DP[12]*(C[70]*DP[1]-C[73]-C[72]*DP[0]+C[67]*DP[2]))+tmp[0]);
tmp[3]=+DP[0]*(DP[9]*(DP[1]*(C[2]*(DP[13]*(DP[4]+DP[5]+DP[7]+DP[8])+DP[14]*(
 DP[4]+DP[5]+DP[7]+DP[8])+S[2]*(DP[11]+DP[12])+DP[9]*(-DP[11]-DP[12]))+
 C[18]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+
 C[66]*(-DP[11]-DP[12])+C[82]*DP[10])+DP[0]*(C[6]*(DP[3]*(DP[13]+DP[14])+
 DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[2]*(DP[5]*(-DP[13]-DP[14])+
 DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[66]*DP[12]-C[70]*DP[10])+
 C[16]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))+
 C[11]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+
 C[75]*DP[12]-C[80]*DP[11])+S[2]*(DP[13]*(DP[1]*(S[2]*(C[25]*(DP[7]+DP[8])-
 C[41]*DP[6])+C[6]*(-DP[4]-DP[5])+C[2]*(-DP[7]-DP[8])+C[21]*DP[3]+C[18]*
 DP[6])+DP[0]*(S[2]*(C[29]*DP[6]-C[25]*DP[8])+C[6]*(DP[5]-DP[6])+C[2]*DP[8]-
 C[50]*DP[3])+S[2]*(C[39]*DP[7]-C[34]*DP[8])+C[16]*(DP[5]-DP[7])+C[11]*
 DP[8]-C[58]*DP[4])+DP[14]*(DP[1]*(C[2]*(-DP[4]-DP[5])+C[18]*DP[3])+DP[0]*(
 C[2]*DP[5]-C[6]*DP[3])+C[11]*DP[5]-C[16]*DP[4])));
R=+DP[2]*(S[2]*(DP[14]*(DP[0]*(DP[3]*(C[23]*DP[0]-C[24]-C[21]*DP[1]-C[19]*
 DP[2])+DP[4]*(C[12]*(DP[0]+DP[1]-DP[2])+C[15])+DP[5]*(C[6]*DP[1]-C[9]-C[8]*
 DP[0]+C[3]*DP[2]))+DP[1]*(DP[1]*(C[2]*(DP[3]-DP[4])+C[5]*DP[5])+DP[2]*(
 C[18]*DP[3]+C[5]*DP[4]-C[2]*DP[5])+C[22]*DP[3]-C[14]*DP[4]+C[7]*DP[5])+
 DP[2]*(DP[3]*(C[20]+C[17]*DP[2])+C[4]*DP[5]-C[13]*DP[4])+C[10]*DP[5])+
 tmp[1])+tmp[2])+DP[0]*(DP[1]*(DP[9]*(DP[1]*(C[2]*(DP[13]*(DP[3]-DP[4]+
 DP[6]-DP[7])+DP[14]*(DP[3]-DP[4]+DP[6]-DP[7])+S[2]*(DP[10]-DP[11])+DP[9]*(
 DP[11]-DP[10]))+C[66]*(DP[11]-DP[10]))+C[16]*(DP[4]*(-DP[13]-DP[14])+DP[7]*
 (-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[11]*(DP[5]*(DP[13]+DP[14])+DP[8]*(
 DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[80]*DP[11]-C[75]*DP[12])+S[2]*(
 DP[13]*(DP[1]*(S[2]*(C[25]*(DP[6]-DP[7]))+C[6]*(DP[4]-DP[3])+C[2]*(DP[7]-
 DP[6]))+S[2]*(C[34]*DP[8]-C[39]*DP[7])+C[16]*(DP[7]-DP[5])+C[58]*DP[4]-
 C[11]*DP[8])+DP[14]*(DP[1]*(C[2]*(DP[4]-DP[3]))+C[16]*DP[4]-C[11]*DP[5])))+
 tmp[3]);
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[7];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*-9)/(-8);
 }
 return R;
}
