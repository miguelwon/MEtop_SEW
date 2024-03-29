/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F107_out;
static void C107(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[66]=+S[2]*(S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]));
C[65]=+S[2]*(S[1]*(V[15]*(14*V[16]+7*V[15])+7*S[0]));
C[64]=+S[2]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[63]=+S[2]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[62]=+S[2]*(V[15]*(40*V[15]-80*V[16])+40*S[0]);
C[61]=+S[2]*(S[1]*(V[15]*(6*V[16]+3*V[15])+3*S[0]));
C[60]=+S[2]*(V[15]*(30*V[15]-60*V[16])+30*S[0]);
C[59]=+S[2]*(V[15]*(6*V[15]-12*V[16])+6*S[0]);
C[58]=+S[2]*(S[1]*(V[15]*(2*V[16]+V[15])+S[0]));
C[57]=+S[2]*(V[15]*(48*V[15]-96*V[16])+48*S[0]);
C[56]=+S[2]*(V[15]*(24*V[15]-48*V[16])+24*S[0]);
C[55]=+S[2]*(S[1]*(V[15]*(10*V[16]+5*V[15])+5*S[0]));
C[54]=+S[2]*(V[15]*(18*V[15]-36*V[16])+18*S[0]);
C[53]=+S[2]*(V[15]*(10*V[15]-20*V[16])+10*S[0]);
C[52]=+S[2]*(S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]));
C[51]=+S[2]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[50]=+S[2]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[49]=+S[2]*(V[15]*(2*V[15]-4*V[16])+2*S[0]);
S[3]=V[7]*V[7];
C[48]=+S[3]*(S[1]*(V[15]*(64*V[16]+32*V[15])+32*S[0]));
C[47]=+S[3]*(S[1]*(V[15]*(56*V[16]+28*V[15])+28*S[0]));
C[46]=+S[3]*(V[15]*(160*V[15]-320*V[16])+160*S[0]);
C[45]=+S[3]*(S[1]*(V[15]*(24*V[16]+12*V[15])+12*S[0]));
C[44]=+S[3]*(V[15]*(120*V[15]-240*V[16])+120*S[0]);
C[43]=+S[3]*(V[15]*(24*V[15]-48*V[16])+24*S[0]);
C[42]=+S[3]*(V[15]*(192*V[15]-384*V[16])+192*S[0]);
C[41]=+S[3]*(S[1]*(V[15]*(40*V[16]+20*V[15])+20*S[0]));
C[40]=+S[3]*(V[15]*(72*V[15]-144*V[16])+72*S[0]);
C[39]=+S[3]*(V[15]*(40*V[15]-80*V[16])+40*S[0]);
C[38]=+S[3]*(V[15]*(64*V[15]-128*V[16])+64*S[0]);
C[37]=+S[1]*(V[15]*(64*V[16]+32*V[15])+32*S[0]);
C[36]=+S[1]*(V[15]*(56*V[16]+28*V[15])+28*S[0]);
C[35]=+V[15]*(16*V[15]-32*V[16])+16*S[0];
C[34]=+S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]);
C[33]=+V[15]*(160*V[15]-320*V[16])+160*S[0];
C[32]=+S[1]*(V[15]*(24*V[16]+12*V[15])+12*S[0]);
C[31]=+V[15]*(120*V[15]-240*V[16])+120*S[0];
C[30]=+V[15]*(24*V[15]-48*V[16])+24*S[0];
C[29]=+S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]);
C[28]=+V[15]*(192*V[15]-384*V[16])+192*S[0];
C[27]=+V[15]*(96*V[15]-192*V[16])+96*S[0];
C[26]=+S[1]*(V[15]*(40*V[16]+20*V[15])+20*S[0]);
C[25]=+V[15]*(72*V[15]-144*V[16])+72*S[0];
C[24]=+V[15]*(40*V[15]-80*V[16])+40*S[0];
C[23]=+S[1]*(V[15]*(32*V[16]+16*V[15])+16*S[0]);
C[22]=+V[15]*(64*V[15]-128*V[16])+64*S[0];
C[21]=+V[15]*(32*V[15]-64*V[16])+32*S[0];
C[20]=+V[15]*(8*V[15]-16*V[16])+8*S[0];
C[19]=+S[3]*(S[1]*(V[15]*(32*V[16]+16*V[15])+16*S[0]));
C[18]=+S[3]*(S[1]*(V[15]*(28*V[16]+14*V[15])+14*S[0]));
C[17]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[16]=+S[3]*(S[1]*(V[15]*(8*V[16]+4*V[15])+4*S[0]));
C[15]=+S[3]*(V[15]*(80*V[15]-160*V[16])+80*S[0]);
C[14]=+S[3]*(S[1]*(V[15]*(12*V[16]+6*V[15])+6*S[0]));
C[13]=+S[3]*(V[15]*(60*V[15]-120*V[16])+60*S[0]);
C[12]=+S[3]*(V[15]*(12*V[15]-24*V[16])+12*S[0]);
C[11]=+S[3]*(S[1]*(V[15]*(4*V[16]+2*V[15])+2*S[0]));
C[10]=+S[3]*(V[15]*(96*V[15]-192*V[16])+96*S[0]);
C[9]=+S[3]*(V[15]*(48*V[15]-96*V[16])+48*S[0]);
C[8]=+S[3]*(S[1]*(V[15]*(20*V[16]+10*V[15])+10*S[0]));
C[7]=+S[3]*(V[15]*(36*V[15]-72*V[16])+36*S[0]);
C[6]=+S[3]*(V[15]*(20*V[15]-40*V[16])+20*S[0]);
C[5]=+S[3]*(S[1]*(V[15]*(16*V[16]+8*V[15])+8*S[0]));
C[4]=+S[3]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[3]=+S[3]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[2]=+S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
S[4]=V[12]*V[12];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+S[4]*S[5];
S[6]=V[22]*V[22];
S[7]=V[13]*V[13];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F107_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         G                 G      !                                  
       -1---@-------------3---\   !                                  
         P1 |              P3 |   !                                  
            |                 |   !                                  
            |              N2 |   !  N2                              
           G|P7         /==<==+===!==<==\                            
            2           |  P4 |   !  P4 |                            
            |           |     |   !     |                            
         U  |  t     W+ |  e2 |   !  e2 |  W+    t     G             
       ==<==@==<==@-4<--@==>==+===!==>==@--<5-@==<==@---1-           
         P2    P8 |  P9    P5 |   !  P5   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        B  |   !  B        |     |                
                  \========<==+===!==<========/    u|-PA             
                           P6 |   !  P6             |                
                              |   !                 |                
                              |   !  G              |  U             
                              \---!---3-------------@==<==           
                                  !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[67];REAL S[3];REAL tmp[3];                                    
     
if(CalcConst) C107(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[1]*(DP[13]*(DP[0]*(C[17]*(DP[3]+DP[6])+C[15]*(DP[4]+DP[7])+C[7]*
 (-DP[5]-DP[8]))+DP[1]*(C[17]*(-DP[3]-DP[6])+C[13]*(-DP[4]-DP[7])+C[6]*(
 DP[5]+DP[8]))+DP[2]*(C[17]*(DP[3]+DP[6])+C[10]*(-DP[4]-DP[7])+C[4]*(DP[5]+
 DP[8]))+C[19]*(DP[3]+DP[6])+C[16]*(-DP[4]-DP[7])+C[8]*(-DP[5]-DP[8]))+
 DP[14]*(DP[0]*(C[17]*(DP[3]+DP[6])+C[15]*(DP[4]+DP[7])+C[7]*(-DP[5]-
 DP[8]))+DP[1]*(C[17]*(-DP[3]-DP[6])+C[13]*(-DP[4]-DP[7])+C[6]*(DP[5]+
 DP[8]))+DP[2]*(C[17]*(DP[3]+DP[6])+C[10]*(-DP[4]-DP[7])+C[4]*(DP[5]+
 DP[8]))+C[19]*(DP[3]+DP[6])+C[16]*(-DP[4]-DP[7])+C[8]*(-DP[5]-DP[8]))+S[2]*
 (DP[10]*(C[17]*(DP[0]-DP[1]+DP[2])+C[19])+DP[11]*(C[15]*DP[0]-C[16]-C[13]*
 DP[1]-C[10]*DP[2])+DP[12]*(C[6]*DP[1]-C[8]-C[7]*DP[0]+C[4]*DP[2]))+DP[9]*(
 DP[10]*(C[17]*(DP[1]-DP[0]-DP[2])-C[19])+DP[11]*(C[16]-C[15]*DP[0]+C[13]*
 DP[1]+C[10]*DP[2])+DP[12]*(C[8]+C[7]*DP[0]-C[6]*DP[1]-C[4]*DP[2]))+DP[10]*(
 C[64]*(DP[1]-DP[0]-DP[2])-C[66])+DP[11]*(C[63]-C[62]*DP[0]+C[60]*DP[1]+
 C[57]*DP[2])+DP[12]*(C[55]+C[54]*DP[0]-C[53]*DP[1]-C[51]*DP[2]));
tmp[1]=+S[2]*(DP[13]*(DP[1]*(S[2]*(DP[6]*(C[35]*(DP[0]-DP[1]+DP[2])+C[37])+
 DP[7]*(C[33]*DP[0]-C[34]-C[31]*DP[1]-C[28]*DP[2])+DP[8]*(C[24]*DP[1]-C[26]-
 C[25]*DP[0]+C[22]*DP[2]))+DP[0]*(C[40]*DP[5]-C[3]*DP[3]-C[46]*DP[4]-C[17]*
 DP[6]-C[15]*DP[7]+C[7]*DP[8])+DP[1]*(C[3]*DP[3]+C[44]*DP[4]-C[39]*DP[5]+
 C[17]*DP[6]+C[13]*DP[7]-C[6]*DP[8])+DP[2]*(C[42]*DP[4]-C[3]*DP[3]-C[38]*
 DP[5]-C[17]*DP[6]+C[10]*DP[7]-C[4]*DP[8])+C[5]*DP[4]-C[48]*DP[3]+C[41]*
 DP[5]-C[19]*DP[6]+C[16]*DP[7]+C[8]*DP[8])+DP[0]*(DP[2]*(S[2]*(C[21]*(-
 DP[6]-DP[8])+C[27]*DP[7])+C[4]*(DP[3]+DP[5])+C[3]*(DP[6]+DP[8])-C[10]*
 DP[4]-C[9]*DP[7])+DP[0]*(S[2]*(C[21]*DP[8]-C[22]*DP[7])+C[4]*(DP[7]-DP[5])+
 C[38]*DP[4]-C[3]*DP[8])+S[2]*(C[23]*DP[8]-C[37]*DP[6])+C[19]*(DP[6]-DP[5])+
 C[48]*DP[3]-C[5]*DP[8])+DP[2]*(DP[2]*(S[2]*(C[21]*(DP[6]-DP[7]))+C[4]*(
 DP[4]-DP[3])+C[3]*(DP[7]-DP[6]))+S[2]*(C[37]*DP[6]-C[23]*DP[8])+C[19]*(
 DP[5]-DP[6])+C[5]*DP[8]-C[48]*DP[3]))+DP[14]*(DP[1]*(DP[3]*(C[17]*(DP[1]-
 DP[0]-DP[2])-C[19])+DP[4]*(C[16]-C[15]*DP[0]+C[13]*DP[1]+C[10]*DP[2])+
 DP[5]*(C[8]+C[7]*DP[0]-C[6]*DP[1]-C[4]*DP[2]))+DP[0]*(DP[2]*(C[3]*(DP[3]+
 DP[5])-C[9]*DP[4])+DP[0]*(C[4]*DP[4]-C[3]*DP[5])+C[19]*DP[3]-C[5]*DP[5])+
 DP[2]*(DP[2]*(C[3]*(DP[4]-DP[3]))+C[5]*DP[5]-C[19]*DP[3])));
tmp[2]=+DP[2]*(DP[9]*(DP[1]*(DP[13]*(C[2]*(DP[3]+DP[6])+C[9]*(DP[4]+DP[7])+
 C[3]*(-DP[5]-DP[8]))+DP[14]*(C[2]*(DP[3]+DP[6])+C[9]*(DP[4]+DP[7])+C[3]*(-
 DP[5]-DP[8]))+S[2]*(C[2]*DP[10]+C[9]*DP[11]-C[3]*DP[12])+DP[9]*(C[3]*
 DP[12]-C[2]*DP[10]-C[9]*DP[11])+C[50]*DP[12]-C[49]*DP[10]-C[56]*DP[11])+
 DP[2]*(C[3]*(DP[13]*(DP[4]-DP[3]-DP[6]+DP[7])+DP[14]*(DP[4]-DP[3]-DP[6]+
 DP[7])+S[2]*(DP[11]-DP[10])+DP[9]*(DP[10]-DP[11]))+C[2]*(DP[5]*(DP[13]+
 DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[50]*(DP[10]-DP[11])-
 C[49]*DP[12])+DP[13]*(C[18]*(-DP[3]-DP[6])+C[11]*(DP[4]+DP[7])+C[5]*(DP[5]+
 DP[8]))+DP[14]*(C[18]*(-DP[3]-DP[6])+C[11]*(DP[4]+DP[7])+C[5]*(DP[5]+
 DP[8]))+S[2]*(C[11]*DP[11]-C[18]*DP[10]+C[5]*DP[12])+DP[9]*(C[18]*DP[10]-
 C[11]*DP[11]-C[5]*DP[12])+C[65]*DP[10]-C[58]*DP[11]-C[52]*DP[12])+S[2]*(
 DP[13]*(S[2]*(DP[1]*(C[20]*DP[6]+C[27]*DP[7]-C[21]*DP[8])+DP[2]*(C[21]*(
 DP[7]-DP[6])+C[20]*DP[8])+C[29]*DP[7]-C[36]*DP[6]+C[23]*DP[8])+DP[1]*(C[4]*
 DP[5]-C[17]*DP[3]-C[10]*DP[4]-C[2]*DP[6]-C[9]*DP[7]+C[3]*DP[8])+DP[2]*(
 C[4]*(DP[3]-DP[4])+C[3]*(DP[6]-DP[7])-C[17]*DP[5]-C[2]*DP[8])+C[47]*DP[3]-
 C[16]*DP[4]-C[19]*DP[5]+C[18]*DP[6]-C[11]*DP[7]-C[5]*DP[8])+DP[14]*(DP[1]*(
 C[3]*DP[5]-C[2]*DP[3]-C[9]*DP[4])+DP[2]*(C[3]*(DP[3]-DP[4])-C[2]*DP[5])+
 C[18]*DP[3]-C[11]*DP[4]-C[5]*DP[5])));
R=+DP[0]*(DP[9]*(DP[0]*(DP[2]*(C[3]*(DP[13]*(-DP[3]-DP[5]-DP[6]-DP[8])+
 DP[14]*(-DP[3]-DP[5]-DP[6]-DP[8])+S[2]*(-DP[10]-DP[12])+DP[9]*(DP[10]+
 DP[12]))+C[9]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-
 DP[9]))+C[50]*(DP[10]+DP[12])-C[56]*DP[11])+DP[0]*(C[4]*(DP[4]*(-DP[13]-
 DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[3]*(DP[5]*(DP[13]+
 DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[51]*DP[11]-C[50]*
 DP[12])+C[19]*(DP[3]*(-DP[13]-DP[14])+DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-
 S[2]))+C[5]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-
 DP[9]))+C[66]*DP[10]-C[52]*DP[12])+DP[2]*(DP[2]*(C[3]*(DP[13]*(DP[3]-DP[4]+
 DP[6]-DP[7])+DP[14]*(DP[3]-DP[4]+DP[6]-DP[7])+S[2]*(DP[10]-DP[11])+DP[9]*(
 DP[11]-DP[10]))+C[50]*(DP[11]-DP[10]))+C[19]*(DP[3]*(DP[13]+DP[14])+DP[6]*(
 DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[5]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-
 DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[52]*DP[12]-C[66]*DP[10])+tmp[0])+
 tmp[1])+DP[1]*(DP[1]*(DP[9]*(DP[1]*(C[12]*(DP[4]*(DP[13]+DP[14])+DP[7]*(
 DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[59]*DP[11])+C[14]*(DP[4]*(DP[13]+
 DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-DP[9]))-C[61]*DP[11])+S[2]*(
 DP[13]*(DP[7]*(S[2]*(C[32]+C[30]*DP[1])-C[14]-C[12]*DP[1])+DP[4]*(-C[45]-
 C[43]*DP[1]))+DP[4]*(DP[14]*(-C[14]-C[12]*DP[1]))))+tmp[2]);
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[7];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*-9)/(-8);
 }
 return R;
}
