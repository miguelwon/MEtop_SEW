/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F127_out;
static void C127(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[18]*V[18];
S[1]=V[17]*V[17];
S[2]=V[9]*V[9];
S[3]=V[9]*V[9]*V[9];
S[4]=V[7]*V[7]*V[7]*V[7];
C[107]=+S[4]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(3*V[17]-6*V[18])+3*S[0])+V[9]*(
 7*(S[1]-S[0])))+S[2]*(V[17]*(-10*V[18]-3*V[17])-3*S[0]))+S[3]*(7*(S[0]-
 S[1]))));
C[106]=+S[4]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(10*(S[0]-
 S[1])))+S[2]*(V[17]*(12*V[18]+10*V[17])+10*S[0]));
C[105]=+S[4]*(V[8]*(V[8]*(V[17]*(12*V[18]-6*V[17])-6*S[0])+V[9]*(22*(S[0]-
 S[1]))));
S[5]=V[8]*V[8];
C[104]=+S[4]*(V[17]*(S[5]*(20*V[18]-10*V[17])+S[2]*(12*V[18]+10*V[17]))+
 S[0]*(10*(S[2]-S[5])));
C[103]=+S[4]*(V[8]*(V[8]*(V[17]*(22*V[18]-11*V[17])-11*S[0])+V[9]*(10*(S[0]-
 S[1])))+S[2]*(V[17]*(9*V[17]-58*V[18])+9*S[0]));
C[102]=+S[4]*(V[17]*(14*V[17]-28*V[18])+14*S[0]);
C[101]=+S[4]*(V[17]*(S[5]*(40*V[18]-20*V[17])+S[2]*(20*V[17]-8*V[18]))+S[0]*
 (20*(S[2]-S[5])));
C[100]=+S[4]*(V[8]*(4*(S[1]*(V[9]+V[8])+S[0]*(V[8]-V[9]))-8*V[18]*V[17]*
 V[8])+S[2]*(8*(V[17]*(V[17]-V[18])+S[0])));
C[99]=+S[4]*(V[8]*(V[8]*(V[17]*(2*V[18]-V[17])-S[0])+V[9]*(8*(S[1]-S[0])))+
 S[2]*(V[17]*(14*V[18]+V[17])+S[0]));
C[98]=+S[4]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(24*(S[0]-
 S[1])))-16*V[18]*V[17]*S[2]);
C[97]=+S[4]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
C[96]=+S[4]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[95]=+S[4]*(V[17]*(56*V[17]-112*V[18])+56*S[0]);
C[94]=+S[4]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
C[93]=+S[4]*(V[17]*(S[5]*(4*V[18]-2*V[17])+S[2]*(2*V[17]-4*V[18]))+S[0]*(2*(
 S[2]-S[5])));
C[92]=+S[4]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(2*V[17]-4*V[18])+2*S[0])+V[9]*(
 6*(S[1]-S[0])))+S[2]*(V[17]*(4*V[18]-2*V[17])-2*S[0]))+S[3]*(6*(S[0]-
 S[1]))));
C[91]=+S[4]*(V[8]*(V[8]*(V[17]*(5*V[17]-10*V[18])+5*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[2]*(V[17]*(2*V[18]+11*V[17])+11*S[0]));
C[90]=+S[4]*(V[17]*(6*V[17]-12*V[18])+6*S[0]);
C[89]=+S[4]*(V[8]*(4*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+8*V[18]*V[17]*
 V[8]));
C[88]=+S[4]*(V[17]*(2*V[17]-4*V[18])+2*S[0]);
C[87]=+S[4]*(V[17]*(S[5]*(8*V[18]-4*V[17])+S[2]*(56*V[18]+4*V[17]))+S[0]*(4*
 (S[2]-S[5])));
C[86]=+S[4]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[85]=+S[4]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(36*(S[0]-
 S[1])))+S[2]*(V[17]*(24*V[18]+4*V[17])+4*S[0]));
C[84]=+S[4]*(V[17]*(10*V[17]-20*V[18])+10*S[0]);
C[83]=+S[4]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[82]=+S[4]*(V[17]*(S[5]*(32*V[18]-16*V[17])+S[2]*(32*V[18]+16*V[17]))+S[0]*
 (16*(S[2]-S[5])));
C[81]=+S[4]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[80]=+S[4]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
S[6]=V[7]*V[7];
C[79]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(12*V[17]-24*V[18])+12*S[0])+
 V[9]*(28*(S[1]-S[0])))+S[2]*(V[17]*(-40*V[18]-12*V[17])-12*S[0]))+S[3]*(28*
 (S[0]-S[1]))));
C[78]=+S[6]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(40*(S[0]-
 S[1])))+S[2]*(V[17]*(48*V[18]+40*V[17])+40*S[0]));
C[77]=+S[6]*(V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(88*(S[0]-
 S[1]))));
C[76]=+S[6]*(V[17]*(S[5]*(80*V[18]-40*V[17])+S[2]*(48*V[18]+40*V[17]))+S[0]*
 (40*(S[2]-S[5])));
C[75]=+S[6]*(V[8]*(V[8]*(V[17]*(88*V[18]-44*V[17])-44*S[0])+V[9]*(40*(S[0]-
 S[1])))+S[2]*(V[17]*(36*V[17]-232*V[18])+36*S[0]));
C[74]=+S[6]*(V[17]*(56*V[17]-112*V[18])+56*S[0]);
C[73]=+S[6]*(V[17]*(S[5]*(160*V[18]-80*V[17])+S[2]*(80*V[17]-32*V[18]))+
 S[0]*(80*(S[2]-S[5])));
C[72]=+S[6]*(V[8]*(16*(S[1]*(V[9]+V[8])+S[0]*(V[8]-V[9]))-32*V[18]*V[17]*
 V[8])+S[2]*(32*(V[17]*(V[17]-V[18])+S[0])));
C[71]=+S[6]*(V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(32*(S[1]-
 S[0])))+S[2]*(V[17]*(56*V[18]+4*V[17])+4*S[0]));
C[70]=+S[6]*(V[8]*(V[8]*(V[17]*(64*V[18]-32*V[17])-32*S[0])+V[9]*(96*(S[0]-
 S[1])))-64*V[18]*V[17]*S[2]);
C[69]=+S[6]*(V[17]*(80*V[17]-160*V[18])+80*S[0]);
C[68]=+S[6]*(V[17]*(192*V[17]-384*V[18])+192*S[0]);
C[67]=+S[6]*(V[17]*(224*V[17]-448*V[18])+224*S[0]);
C[66]=+S[6]*(V[17]*(128*V[17]-256*V[18])+128*S[0]);
C[65]=+S[6]*(V[17]*(S[5]*(16*V[18]-8*V[17])+S[2]*(8*V[17]-16*V[18]))+S[0]*(
 8*(S[2]-S[5])));
C[64]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(
 24*(S[1]-S[0])))+S[2]*(V[17]*(16*V[18]-8*V[17])-8*S[0]))+S[3]*(24*(S[0]-
 S[1]))));
C[63]=+S[6]*(V[8]*(V[8]*(V[17]*(20*V[17]-40*V[18])+20*S[0])+V[9]*(64*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[18]+44*V[17])+44*S[0]));
C[62]=+S[6]*(V[8]*(16*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+32*V[18]*V[17]*
 V[8]));
C[61]=+S[6]*(V[17]*(S[5]*(32*V[18]-16*V[17])+S[2]*(224*V[18]+16*V[17]))+
 S[0]*(16*(S[2]-S[5])));
C[60]=+S[6]*(V[17]*(48*V[17]-96*V[18])+48*S[0]);
C[59]=+S[6]*(V[8]*(V[8]*(V[17]*(128*V[18]-64*V[17])-64*S[0])+V[9]*(144*(
 S[0]-S[1])))+S[2]*(V[17]*(96*V[18]+16*V[17])+16*S[0]));
C[58]=+S[6]*(V[17]*(S[5]*(128*V[18]-64*V[17])+S[2]*(128*V[18]+64*V[17]))+
 S[0]*(64*(S[2]-S[5])));
C[57]=+V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(12*V[17]-24*V[18])+12*S[0])+V[9]*(28*(
 S[1]-S[0])))+S[2]*(V[17]*(-40*V[18]-12*V[17])-12*S[0]))+S[3]*(28*(S[0]-
 S[1])));
C[56]=+V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(40*(S[0]-
 S[1])))+S[2]*(V[17]*(48*V[18]+40*V[17])+40*S[0]);
C[55]=+V[8]*(V[8]*(V[17]*(48*V[18]-24*V[17])-24*S[0])+V[9]*(88*(S[0]-
 S[1])));
C[54]=+V[17]*(S[5]*(80*V[18]-40*V[17])+S[2]*(48*V[18]+40*V[17]))+S[0]*(40*(
 S[2]-S[5]));
C[53]=+V[8]*(V[8]*(V[17]*(88*V[18]-44*V[17])-44*S[0])+V[9]*(40*(S[0]-
 S[1])))+S[2]*(V[17]*(36*V[17]-232*V[18])+36*S[0]);
C[52]=+V[17]*(56*V[17]-112*V[18])+56*S[0];
C[51]=+V[17]*(S[5]*(160*V[18]-80*V[17])+S[2]*(80*V[17]-32*V[18]))+S[0]*(80*(
 S[2]-S[5]));
C[50]=+V[8]*(16*(S[1]*(V[9]+V[8])+S[0]*(V[8]-V[9]))-32*V[18]*V[17]*V[8])+
 S[2]*(32*(V[17]*(V[17]-V[18])+S[0]));
C[49]=+V[8]*(V[8]*(V[17]*(8*V[18]-4*V[17])-4*S[0])+V[9]*(32*(S[1]-S[0])))+
 S[2]*(V[17]*(56*V[18]+4*V[17])+4*S[0]);
C[48]=+V[8]*(V[8]*(V[17]*(64*V[18]-32*V[17])-32*S[0])+V[9]*(96*(S[0]-
 S[1])))-64*V[18]*V[17]*S[2];
C[47]=+V[17]*(80*V[17]-160*V[18])+80*S[0];
C[46]=+V[17]*(192*V[17]-384*V[18])+192*S[0];
C[45]=+V[17]*(224*V[17]-448*V[18])+224*S[0];
C[44]=+V[17]*(128*V[17]-256*V[18])+128*S[0];
C[43]=+V[17]*(S[5]*(16*V[18]-8*V[17])+S[2]*(8*V[17]-16*V[18]))+S[0]*(8*(
 S[2]-S[5]));
C[42]=+V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(8*V[17]-16*V[18])+8*S[0])+V[9]*(24*(
 S[1]-S[0])))+S[2]*(V[17]*(16*V[18]-8*V[17])-8*S[0]))+S[3]*(24*(S[0]-
 S[1])));
C[41]=+V[8]*(V[8]*(V[17]*(20*V[17]-40*V[18])+20*S[0])+V[9]*(64*(S[1]-
 S[0])))+S[2]*(V[17]*(8*V[18]+44*V[17])+44*S[0]);
C[40]=+V[17]*(24*V[17]-48*V[18])+24*S[0];
C[39]=+V[8]*(16*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+32*V[18]*V[17]*V[8]);
C[38]=+V[17]*(8*V[17]-16*V[18])+8*S[0];
C[37]=+V[17]*(S[5]*(32*V[18]-16*V[17])+S[2]*(224*V[18]+16*V[17]))+S[0]*(16*(
 S[2]-S[5]));
C[36]=+V[17]*(48*V[17]-96*V[18])+48*S[0];
C[35]=+V[8]*(V[8]*(V[17]*(128*V[18]-64*V[17])-64*S[0])+V[9]*(144*(S[0]-
 S[1])))+S[2]*(V[17]*(96*V[18]+16*V[17])+16*S[0]);
C[34]=+V[17]*(40*V[17]-80*V[18])+40*S[0];
C[33]=+V[17]*(16*V[17]-32*V[18])+16*S[0];
C[32]=+V[17]*(S[5]*(128*V[18]-64*V[17])+S[2]*(128*V[18]+64*V[17]))+S[0]*(64*
 (S[2]-S[5]));
C[31]=+V[17]*(32*V[17]-64*V[18])+32*S[0];
C[30]=+V[17]*(64*V[17]-128*V[18])+64*S[0];
C[29]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(6*V[17]-12*V[18])+6*S[0])+V[9]*(
 14*(S[1]-S[0])))+S[2]*(V[17]*(-20*V[18]-6*V[17])-6*S[0]))+S[3]*(14*(S[0]-
 S[1]))));
C[28]=+S[6]*(V[8]*(V[8]*(V[17]*(16*V[18]-8*V[17])-8*S[0])+V[9]*(20*(S[0]-
 S[1])))+S[2]*(V[17]*(24*V[18]+20*V[17])+20*S[0]));
C[27]=+S[6]*(V[8]*(V[8]*(V[17]*(24*V[18]-12*V[17])-12*S[0])+V[9]*(44*(S[0]-
 S[1]))));
C[26]=+S[6]*(V[17]*(S[5]*(40*V[18]-20*V[17])+S[2]*(24*V[18]+20*V[17]))+S[0]*
 (20*(S[2]-S[5])));
C[25]=+S[6]*(V[8]*(V[8]*(V[17]*(44*V[18]-22*V[17])-22*S[0])+V[9]*(20*(S[0]-
 S[1])))+S[2]*(V[17]*(18*V[17]-116*V[18])+18*S[0]));
C[24]=+S[6]*(V[17]*(28*V[17]-56*V[18])+28*S[0]);
C[23]=+S[6]*(V[17]*(S[5]*(80*V[18]-40*V[17])+S[2]*(40*V[17]-16*V[18]))+S[0]*
 (40*(S[2]-S[5])));
C[22]=+S[6]*(V[8]*(8*(S[1]*(V[9]+V[8])+S[0]*(V[8]-V[9]))-16*V[18]*V[17]*
 V[8])+S[2]*(16*(V[17]*(V[17]-V[18])+S[0])));
C[21]=+S[6]*(V[8]*(V[8]*(V[17]*(4*V[18]-2*V[17])-2*S[0])+V[9]*(16*(S[1]-
 S[0])))+S[2]*(V[17]*(28*V[18]+2*V[17])+2*S[0]));
C[20]=+S[6]*(V[8]*(V[8]*(V[17]*(32*V[18]-16*V[17])-16*S[0])+V[9]*(48*(S[0]-
 S[1])))-32*V[18]*V[17]*S[2]);
C[19]=+S[6]*(V[17]*(40*V[17]-80*V[18])+40*S[0]);
C[18]=+S[6]*(V[17]*(96*V[17]-192*V[18])+96*S[0]);
C[17]=+S[6]*(V[17]*(112*V[17]-224*V[18])+112*S[0]);
C[16]=+S[6]*(V[17]*(64*V[17]-128*V[18])+64*S[0]);
C[15]=+S[6]*(V[17]*(S[5]*(8*V[18]-4*V[17])+S[2]*(4*V[17]-8*V[18]))+S[0]*(4*(
 S[2]-S[5])));
C[14]=+S[6]*(V[8]*(V[8]*(V[8]*(V[8]*(V[17]*(4*V[17]-8*V[18])+4*S[0])+V[9]*(
 12*(S[1]-S[0])))+S[2]*(V[17]*(8*V[18]-4*V[17])-4*S[0]))+S[3]*(12*(S[0]-
 S[1]))));
C[13]=+S[6]*(V[8]*(V[8]*(V[17]*(10*V[17]-20*V[18])+10*S[0])+V[9]*(32*(S[1]-
 S[0])))+S[2]*(V[17]*(4*V[18]+22*V[17])+22*S[0]));
C[12]=+S[6]*(V[17]*(12*V[17]-24*V[18])+12*S[0]);
C[11]=+S[6]*(V[8]*(8*(S[1]*(-V[9]-V[8])+S[0]*(V[9]-V[8]))+16*V[18]*V[17]*
 V[8]));
C[10]=+S[6]*(V[17]*(4*V[17]-8*V[18])+4*S[0]);
C[9]=+S[6]*(V[17]*(S[5]*(16*V[18]-8*V[17])+S[2]*(112*V[18]+8*V[17]))+S[0]*(
 8*(S[2]-S[5])));
C[8]=+S[6]*(V[17]*(24*V[17]-48*V[18])+24*S[0]);
C[7]=+S[6]*(V[8]*(V[8]*(V[17]*(64*V[18]-32*V[17])-32*S[0])+V[9]*(72*(S[0]-
 S[1])))+S[2]*(V[17]*(48*V[18]+8*V[17])+8*S[0]));
C[6]=+S[6]*(V[17]*(20*V[17]-40*V[18])+20*S[0]);
C[5]=+S[6]*(V[17]*(8*V[17]-16*V[18])+8*S[0]);
C[4]=+S[6]*(V[17]*(S[5]*(64*V[18]-32*V[17])+S[2]*(64*V[18]+32*V[17]))+S[0]*(
 32*(S[2]-S[5])));
C[3]=+S[6]*(V[17]*(16*V[17]-32*V[18])+16*S[0]);
C[2]=+S[6]*(V[17]*(32*V[17]-64*V[18])+32*S[0]);
S[7]=V[12]*V[12];
S[8]=V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[7]*S[8];
S[9]=V[22]*V[22];
S[10]=V[14]*V[14];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[9]*S[10]*S[11];
}
REAL F127_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 G      !                                  
       -1---@-------------3---\   !                                  
         P1 |              P3 |   !                                  
            |                 |   !                                  
            |              n2 |   !  n2                              
           G|P7         /==>==+===!==>==\                            
            2           |  P4 |   !  P4 |                            
            |           |     |   !     |                            
         c  |  t     W+ |  E2 |   !  E2 |  W+    t     G             
       ==>==@==>==@-4>--@==<==+===!==<==@-->5-@==>==@---1-           
         P2    P8 |  P9    P5 |   !  P5   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        b  |   !  b        |     |                
                  \========>==+===!==>========/    t|-PA             
                           P6 |   !  P6             |                
                              |   !                 |                
                              |   !  G              |  c             
                              \---!---3-------------@==>==           
                                  !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[108];REAL S[4];REAL tmp[5];                                   
     
if(CalcConst) C127(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[0]*(DP[0]*(C[5]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))+C[12]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+
 DP[12]*(S[2]-DP[9]))-C[83]*DP[11]-C[90]*DP[12])+DP[1]*(C[12]*(DP[4]*(-
 DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[10]*(DP[5]*(-
 DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[90]*DP[11]+
 C[88]*DP[12])+DP[13]*(C[28]*(DP[3]+DP[6])+C[22]*(DP[4]+DP[7])+C[13]*(-
 DP[5]-DP[8]))+DP[14]*(C[28]*(DP[3]+DP[6])+C[22]*(DP[4]+DP[7])+C[13]*(-
 DP[5]-DP[8]))+S[2]*(C[28]*DP[10]+C[22]*DP[11]-C[13]*DP[12])+DP[9]*(C[13]*
 DP[12]-C[28]*DP[10]-C[22]*DP[11])+C[91]*DP[12]-C[106]*DP[10]-C[100]*
 DP[11])+DP[1]*(DP[13]*(DP[1]*(C[10]*(DP[4]+DP[7]))+C[27]*(-DP[3]-DP[6])+
 C[21]*(DP[4]+DP[7])+C[11]*(-DP[5]-DP[8]))+DP[14]*(DP[1]*(C[10]*(DP[4]+
 DP[7]))+C[27]*(-DP[3]-DP[6])+C[21]*(DP[4]+DP[7])+C[11]*(-DP[5]-DP[8]))+
 DP[11]*(DP[1]*(C[10]*(S[2]-DP[9])-C[88])+C[21]*(S[2]-DP[9])-C[99])+DP[10]*(
 C[27]*(DP[9]-S[2])+C[105])+DP[12]*(C[11]*(DP[9]-S[2])+C[89]))+C[29]*(DP[3]*
 (-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[14]*(DP[5]*
 (-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[107]*DP[10]+
 C[92]*DP[12];
tmp[1]=+DP[13]*(DP[2]*(S[2]*(DP[6]*(C[52]*(DP[1]-DP[0])+C[53]+C[38]*DP[2])+
 DP[7]*(C[48]+C[47]*DP[0]-C[38]*DP[1]-C[45]*DP[2])+DP[8]*(C[30]*DP[2]-C[35]-
 C[34]*DP[0]-C[33]*DP[1]))+DP[0]*(C[19]*(DP[5]-DP[7])+C[74]*DP[3]-C[69]*
 DP[4]+C[24]*DP[6]+C[6]*DP[8])+DP[1]*(C[5]*(DP[4]+DP[8])+C[3]*DP[5]-C[74]*
 DP[3]-C[24]*DP[6]+C[10]*DP[7])+DP[2]*(C[67]*DP[4]-C[5]*DP[3]-C[16]*DP[5]-
 C[10]*DP[6]+C[17]*DP[7]-C[2]*DP[8])+C[59]*DP[5]-C[75]*DP[3]-C[70]*DP[4]-
 C[25]*DP[6]-C[20]*DP[7]+C[7]*DP[8])+DP[0]*(S[2]*(DP[7]*(C[50]+C[33]*DP[0]-
 C[40]*DP[1])+DP[8]*(C[40]*DP[0]-C[41]-C[38]*DP[1])+C[56]*DP[6])+DP[0]*(-
 C[3]*DP[4]-C[8]*DP[5]-C[5]*DP[7]-C[12]*DP[8])+DP[1]*(C[8]*DP[4]+C[5]*DP[5]+
 C[12]*DP[7]+C[10]*DP[8])+C[63]*DP[5]-C[78]*DP[3]-C[72]*DP[4]-C[28]*DP[6]-
 C[22]*DP[7]+C[13]*DP[8])+DP[1]*(S[2]*(DP[7]*(C[49]+C[38]*DP[1])-C[55]*
 DP[6]-C[39]*DP[8])+DP[1]*(-C[5]*DP[4]-C[10]*DP[7])+C[77]*DP[3]-C[71]*DP[4]+
 C[62]*DP[5]+C[27]*DP[6]-C[21]*DP[7]+C[11]*DP[8])+S[2]*(-C[57]*DP[6]-C[42]*
 DP[8])+C[79]*DP[3]+C[64]*DP[5]+C[29]*DP[6]+C[14]*DP[8]);
tmp[2]=+DP[9]*(DP[2]*(DP[13]*(DP[0]*(C[24]*(-DP[3]-DP[6])+C[19]*(DP[4]+
 DP[7])+C[6]*(-DP[5]-DP[8]))+DP[1]*(C[24]*(DP[3]+DP[6])+C[10]*(-DP[4]-
 DP[7])+C[5]*(-DP[5]-DP[8]))+DP[2]*(C[10]*(DP[3]+DP[6])+C[17]*(-DP[4]-
 DP[7])+C[2]*(DP[5]+DP[8]))+C[25]*(DP[3]+DP[6])+C[20]*(DP[4]+DP[7])+C[7]*(-
 DP[5]-DP[8]))+DP[14]*(DP[0]*(C[24]*(-DP[3]-DP[6])+C[19]*(DP[4]+DP[7])+C[6]*
 (-DP[5]-DP[8]))+DP[1]*(C[24]*(DP[3]+DP[6])+C[10]*(-DP[4]-DP[7])+C[5]*(-
 DP[5]-DP[8]))+DP[2]*(C[10]*(DP[3]+DP[6])+C[17]*(-DP[4]-DP[7])+C[2]*(DP[5]+
 DP[8]))+C[25]*(DP[3]+DP[6])+C[20]*(DP[4]+DP[7])+C[7]*(-DP[5]-DP[8]))+S[2]*(
 DP[10]*(C[24]*(DP[1]-DP[0])+C[25]+C[10]*DP[2])+DP[11]*(C[20]+C[19]*DP[0]-
 C[10]*DP[1]-C[17]*DP[2])+DP[12]*(C[2]*DP[2]-C[7]-C[6]*DP[0]-C[5]*DP[1]))+
 DP[9]*(DP[10]*(C[24]*(DP[0]-DP[1])-C[25]-C[10]*DP[2])+DP[11]*(C[10]*DP[1]-
 C[20]-C[19]*DP[0]+C[17]*DP[2])+DP[12]*(C[7]+C[6]*DP[0]+C[5]*DP[1]-C[2]*
 DP[2]))+DP[10]*(C[102]*(DP[0]-DP[1])-C[103]-C[88]*DP[2])+DP[11]*(C[88]*
 DP[1]-C[98]-C[97]*DP[0]+C[95]*DP[2])+DP[12]*(C[85]+C[84]*DP[0]+C[83]*DP[1]-
 C[80]*DP[2]))+tmp[0]);
tmp[3]=+DP[0]*(DP[9]*(DP[0]*(DP[13]*(C[5]*(DP[3]+DP[6])+C[2]*(-DP[4]-DP[7])+
 C[8]*(DP[5]+DP[8]))+DP[14]*(C[5]*(DP[3]+DP[6])+C[2]*(-DP[4]-DP[7])+C[8]*(
 DP[5]+DP[8]))+S[2]*(C[5]*DP[10]-C[2]*DP[11]+C[8]*DP[12])+DP[9]*(C[2]*
 DP[11]-C[5]*DP[10]-C[8]*DP[12])+C[80]*DP[11]-C[83]*DP[10]-C[86]*DP[12])+
 DP[2]*(DP[13]*(C[8]*(-DP[3]-DP[6])+C[18]*(DP[4]+DP[7])+C[3]*(-DP[5]-
 DP[8]))+DP[14]*(C[8]*(-DP[3]-DP[6])+C[18]*(DP[4]+DP[7])+C[3]*(-DP[5]-
 DP[8]))+S[2]*(C[18]*DP[11]-C[8]*DP[10]-C[3]*DP[12])+DP[9]*(C[8]*DP[10]-
 C[18]*DP[11]+C[3]*DP[12])+C[86]*DP[10]-C[96]*DP[11]+C[81]*DP[12])+C[26]*(
 DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[9]*(
 DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[104]*
 DP[10]-C[87]*DP[12])+S[2]*(DP[13]*(DP[0]*(S[2]*(C[33]*DP[6]-C[30]*DP[7]+
 C[36]*DP[8])+C[16]*DP[4]-C[3]*DP[3]-C[60]*DP[5]-C[5]*DP[6]+C[2]*DP[7]-C[8]*
 DP[8])+DP[2]*(S[2]*(C[46]*DP[7]-C[36]*DP[6]-C[31]*DP[8])+C[60]*DP[3]-C[68]*
 DP[4]+C[2]*DP[5]+C[8]*DP[6]-C[18]*DP[7]+C[3]*DP[8])+S[2]*(C[37]*DP[8]-
 C[54]*DP[6])+C[76]*DP[3]-C[61]*DP[5]+C[26]*DP[6]-C[9]*DP[8])+DP[14]*(DP[0]*
 (C[2]*DP[4]-C[5]*DP[3]-C[8]*DP[5])+DP[2]*(C[8]*DP[3]-C[18]*DP[4]+C[3]*
 DP[5])+C[26]*DP[3]-C[9]*DP[5])));
S[3]=DP[0]*DP[0];
tmp[4]=+DP[2]*(DP[2]*(DP[9]*(DP[2]*(C[3]*(DP[3]*(DP[13]+DP[14])+DP[6]*(
 DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[16]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-
 DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[94]*DP[11]-C[81]*DP[10])+C[23]*(
 DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[4]*(
 DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[82]*
 DP[12]-C[101]*DP[10])+S[2]*(DP[13]*(DP[2]*(S[2]*(C[31]*DP[6]-C[44]*DP[7])+
 C[66]*DP[4]-C[2]*DP[3]-C[3]*DP[6]+C[16]*DP[7])+S[2]*(C[51]*DP[6]-C[32]*
 DP[8])+C[58]*DP[5]-C[73]*DP[3]-C[23]*DP[6]+C[4]*DP[8])+DP[14]*(DP[2]*(
 C[16]*DP[4]-C[3]*DP[3])+C[4]*DP[5]-C[23]*DP[3])))+tmp[3])+S[3]*(DP[9]*(
 DP[0]*(C[5]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-
 S[2]))+C[83]*DP[12])+C[15]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+
 DP[12]*(S[2]-DP[9]))-C[93]*DP[12])+S[2]*(DP[13]*(DP[8]*(S[2]*(C[43]-C[33]*
 DP[0])+C[5]*DP[0]-C[15])+DP[5]*(C[3]*DP[0]-C[65]))+DP[5]*(DP[14]*(C[5]*
 DP[0]-C[15]))));
R=+DP[1]*(S[2]*(DP[14]*(DP[2]*(DP[3]*(C[24]*(DP[0]-DP[1])-C[25]-C[10]*
 DP[2])+DP[4]*(C[10]*DP[1]-C[20]-C[19]*DP[0]+C[17]*DP[2])+DP[5]*(C[7]+C[6]*
 DP[0]+C[5]*DP[1]-C[2]*DP[2]))+DP[0]*(DP[4]*(C[12]*DP[1]-C[22]-C[5]*DP[0])+
 DP[5]*(C[13]-C[12]*DP[0]+C[10]*DP[1])-C[28]*DP[3])+DP[1]*(DP[4]*(-C[21]-
 C[10]*DP[1])+C[27]*DP[3]+C[11]*DP[5])+C[29]*DP[3]+C[14]*DP[5])+tmp[1])+
 tmp[2])+tmp[4];
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[7];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*9)/(8);
 }
 return R;
}
