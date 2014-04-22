/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F105_out;
static void C105(REAL * C)
{
REAL* V=va_out;
REAL S[9];                                                                  
     
S[0]=V[16]*V[16];
S[1]=V[9]*V[9];
S[2]=V[7]*V[7]*V[7]*V[7];
C[87]=+S[2]*(S[1]*(V[15]*(12*V[16]+10*V[15])+10*S[0]));
C[86]=+S[2]*(S[1]*(V[15]*(9*V[15]-58*V[16])+9*S[0]));
C[85]=+S[2]*(V[15]*(14*V[15]-28*V[16])+14*S[0]);
C[84]=+S[2]*(S[1]*(V[15]*(20*V[15]-8*V[16])+20*S[0]));
C[83]=+S[2]*(S[1]*(8*(V[15]*(V[15]-V[16])+S[0])));
C[82]=+S[2]*(S[1]*(V[15]*(14*V[16]+V[15])+S[0]));
C[81]=+16*V[16]*V[15]*S[1]*S[2];
C[80]=+S[2]*(V[15]*(20*V[15]-40*V[16])+20*S[0]);
C[79]=+S[2]*(V[15]*(48*V[15]-96*V[16])+48*S[0]);
C[78]=+S[2]*(V[15]*(56*V[15]-112*V[16])+56*S[0]);
C[77]=+S[2]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
C[76]=+S[2]*(S[1]*(V[15]*(2*V[15]-4*V[16])+2*S[0]));
C[75]=+S[2]*(S[1]*(V[15]*(2*V[16]+11*V[15])+11*S[0]));
C[74]=+S[2]*(V[15]*(6*V[15]-12*V[16])+6*S[0]);
C[73]=+S[2]*(V[15]*(2*V[15]-4*V[16])+2*S[0]);
C[72]=+S[2]*(S[1]*(V[15]*(56*V[16]+4*V[15])+4*S[0]));
C[71]=+S[2]*(V[15]*(12*V[15]-24*V[16])+12*S[0]);
C[70]=+S[2]*(S[1]*(V[15]*(24*V[16]+4*V[15])+4*S[0]));
C[69]=+S[2]*(V[15]*(10*V[15]-20*V[16])+10*S[0]);
C[68]=+S[2]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[67]=+S[2]*(S[1]*(V[15]*(32*V[16]+16*V[15])+16*S[0]));
C[66]=+S[2]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[65]=+S[2]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
S[3]=V[7]*V[7];
C[64]=+S[3]*(S[1]*(V[15]*(48*V[16]+40*V[15])+40*S[0]));
C[63]=+S[3]*(S[1]*(V[15]*(36*V[15]-232*V[16])+36*S[0]));
C[62]=+S[3]*(V[15]*(56*V[15]-112*V[16])+56*S[0]);
C[61]=+S[3]*(S[1]*(V[15]*(80*V[15]-32*V[16])+80*S[0]));
C[60]=+S[3]*(S[1]*(32*(V[15]*(V[15]-V[16])+S[0])));
C[59]=+S[3]*(S[1]*(V[15]*(56*V[16]+4*V[15])+4*S[0]));
C[58]=+64*V[16]*V[15]*S[1]*S[3];
C[57]=+S[3]*(V[15]*(80*V[15]-160*V[16])+80*S[0]);
C[56]=+S[3]*(V[15]*(192*V[15]-384*V[16])+192*S[0]);
C[55]=+S[3]*(V[15]*(224*V[15]-448*V[16])+224*S[0]);
C[54]=+S[3]*(V[15]*(128*V[15]-256*V[16])+128*S[0]);
C[53]=+S[3]*(S[1]*(V[15]*(8*V[15]-16*V[16])+8*S[0]));
C[52]=+S[3]*(S[1]*(V[15]*(8*V[16]+44*V[15])+44*S[0]));
C[51]=+S[3]*(S[1]*(V[15]*(224*V[16]+16*V[15])+16*S[0]));
C[50]=+S[3]*(V[15]*(48*V[15]-96*V[16])+48*S[0]);
C[49]=+S[3]*(S[1]*(V[15]*(96*V[16]+16*V[15])+16*S[0]));
C[48]=+S[3]*(S[1]*(V[15]*(128*V[16]+64*V[15])+64*S[0]));
C[47]=+S[1]*(V[15]*(48*V[16]+40*V[15])+40*S[0]);
C[46]=+S[1]*(V[15]*(36*V[15]-232*V[16])+36*S[0]);
C[45]=+V[15]*(56*V[15]-112*V[16])+56*S[0];
C[44]=+S[1]*(V[15]*(80*V[15]-32*V[16])+80*S[0]);
C[43]=+S[1]*(32*(V[15]*(V[15]-V[16])+S[0]));
C[42]=+S[1]*(V[15]*(56*V[16]+4*V[15])+4*S[0]);
C[41]=+64*V[16]*V[15]*S[1];
C[40]=+V[15]*(80*V[15]-160*V[16])+80*S[0];
C[39]=+V[15]*(192*V[15]-384*V[16])+192*S[0];
C[38]=+V[15]*(224*V[15]-448*V[16])+224*S[0];
C[37]=+V[15]*(128*V[15]-256*V[16])+128*S[0];
C[36]=+S[1]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[35]=+S[1]*(V[15]*(8*V[16]+44*V[15])+44*S[0]);
C[34]=+V[15]*(24*V[15]-48*V[16])+24*S[0];
C[33]=+V[15]*(8*V[15]-16*V[16])+8*S[0];
C[32]=+S[1]*(V[15]*(224*V[16]+16*V[15])+16*S[0]);
C[31]=+V[15]*(48*V[15]-96*V[16])+48*S[0];
C[30]=+S[1]*(V[15]*(96*V[16]+16*V[15])+16*S[0]);
C[29]=+V[15]*(40*V[15]-80*V[16])+40*S[0];
C[28]=+V[15]*(16*V[15]-32*V[16])+16*S[0];
C[27]=+S[1]*(V[15]*(128*V[16]+64*V[15])+64*S[0]);
C[26]=+V[15]*(32*V[15]-64*V[16])+32*S[0];
C[25]=+V[15]*(64*V[15]-128*V[16])+64*S[0];
C[24]=+S[3]*(S[1]*(V[15]*(24*V[16]+20*V[15])+20*S[0]));
C[23]=+S[3]*(S[1]*(V[15]*(18*V[15]-116*V[16])+18*S[0]));
C[22]=+S[3]*(V[15]*(28*V[15]-56*V[16])+28*S[0]);
C[21]=+S[3]*(S[1]*(V[15]*(40*V[15]-16*V[16])+40*S[0]));
C[20]=+S[3]*(S[1]*(16*(V[15]*(V[15]-V[16])+S[0])));
C[19]=+S[3]*(S[1]*(V[15]*(28*V[16]+2*V[15])+2*S[0]));
C[18]=+32*V[16]*V[15]*S[1]*S[3];
C[17]=+S[3]*(V[15]*(40*V[15]-80*V[16])+40*S[0]);
C[16]=+S[3]*(V[15]*(96*V[15]-192*V[16])+96*S[0]);
C[15]=+S[3]*(V[15]*(112*V[15]-224*V[16])+112*S[0]);
C[14]=+S[3]*(V[15]*(64*V[15]-128*V[16])+64*S[0]);
C[13]=+S[3]*(S[1]*(V[15]*(4*V[15]-8*V[16])+4*S[0]));
C[12]=+S[3]*(S[1]*(V[15]*(4*V[16]+22*V[15])+22*S[0]));
C[11]=+S[3]*(V[15]*(12*V[15]-24*V[16])+12*S[0]);
C[10]=+S[3]*(V[15]*(4*V[15]-8*V[16])+4*S[0]);
C[9]=+S[3]*(S[1]*(V[15]*(112*V[16]+8*V[15])+8*S[0]));
C[8]=+S[3]*(V[15]*(24*V[15]-48*V[16])+24*S[0]);
C[7]=+S[3]*(S[1]*(V[15]*(48*V[16]+8*V[15])+8*S[0]));
C[6]=+S[3]*(V[15]*(20*V[15]-40*V[16])+20*S[0]);
C[5]=+S[3]*(V[15]*(8*V[15]-16*V[16])+8*S[0]);
C[4]=+S[3]*(S[1]*(V[15]*(64*V[16]+32*V[15])+32*S[0]));
C[3]=+S[3]*(V[15]*(16*V[15]-32*V[16])+16*S[0]);
C[2]=+S[3]*(V[15]*(32*V[15]-64*V[16])+32*S[0]);
S[4]=V[12]*V[12];
S[5]=V[2]*V[2]*V[2]*V[2];
C[1]=+2*S[4]*S[5];
S[6]=V[22]*V[22];
S[7]=V[13]*V[13];
S[8]=V[1]*V[1]*V[1]*V[1];
C[0]=+S[6]*S[7]*S[8];
}
REAL F105_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
                  \========<==+===!==<========/    t|-PA             
                           P6 |   !  P6             |                
                              |   !                 |                
                              |   !  G              |  U             
                              \---!---3-------------@==<==           
                                  !  P3                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[88];REAL S[4];REAL tmp[4];                                    
     
if(CalcConst) C105(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[23]*V[23]*V[23]*V[23];
D=+C[1]*S[1];
S[2]=V[23]*V[23];
tmp[0]=+DP[0]*(DP[0]*(DP[13]*(C[5]*(DP[3]+DP[6])+C[2]*(-DP[4]-DP[7])+C[8]*(
 DP[5]+DP[8]))+DP[14]*(C[5]*(DP[3]+DP[6])+C[2]*(-DP[4]-DP[7])+C[8]*(DP[5]+
 DP[8]))+S[2]*(C[5]*DP[10]-C[2]*DP[11]+C[8]*DP[12])+DP[9]*(C[2]*DP[11]-C[5]*
 DP[10]-C[8]*DP[12])+C[65]*DP[11]-C[68]*DP[10]-C[71]*DP[12])+DP[2]*(DP[13]*(
 C[8]*(-DP[3]-DP[6])+C[16]*(DP[4]+DP[7])+C[3]*(-DP[5]-DP[8]))+DP[14]*(C[8]*
 (-DP[3]-DP[6])+C[16]*(DP[4]+DP[7])+C[3]*(-DP[5]-DP[8]))+S[2]*(C[16]*DP[11]-
 C[8]*DP[10]-C[3]*DP[12])+DP[9]*(C[8]*DP[10]-C[16]*DP[11]+C[3]*DP[12])+
 C[71]*DP[10]-C[79]*DP[11]+C[66]*DP[12])+C[24]*(DP[3]*(-DP[13]-DP[14])+
 DP[6]*(-DP[13]-DP[14])+DP[10]*(DP[9]-S[2]))+C[9]*(DP[5]*(DP[13]+DP[14])+
 DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))+C[87]*DP[10]-C[72]*DP[12])+
 DP[2]*(DP[2]*(C[3]*(DP[3]*(DP[13]+DP[14])+DP[6]*(DP[13]+DP[14])+DP[10]*(
 S[2]-DP[9]))+C[14]*(DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(
 DP[9]-S[2]))+C[77]*DP[11]-C[66]*DP[10])+C[21]*(DP[3]*(DP[13]+DP[14])+DP[6]*
 (DP[13]+DP[14])+DP[10]*(S[2]-DP[9]))+C[4]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-
 DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[67]*DP[12]-C[84]*DP[10]);
tmp[1]=+DP[13]*(DP[1]*(S[2]*(DP[6]*(C[45]*(DP[1]-DP[0])+C[46]+C[33]*DP[2])+
 DP[7]*(C[40]*DP[0]-C[41]-C[33]*DP[1]-C[38]*DP[2])+DP[8]*(C[25]*DP[2]-C[30]-
 C[29]*DP[0]-C[28]*DP[1]))+DP[0]*(C[17]*(DP[5]-DP[7])+C[62]*DP[3]-C[57]*
 DP[4]+C[22]*DP[6]+C[6]*DP[8])+DP[1]*(C[5]*(DP[4]+DP[8])+C[3]*DP[5]-C[62]*
 DP[3]-C[22]*DP[6]+C[10]*DP[7])+DP[2]*(C[55]*DP[4]-C[5]*DP[3]-C[14]*DP[5]-
 C[10]*DP[6]+C[15]*DP[7]-C[2]*DP[8])+C[58]*DP[4]-C[63]*DP[3]+C[49]*DP[5]-
 C[23]*DP[6]+C[18]*DP[7]+C[7]*DP[8])+DP[0]*(DP[0]*(S[2]*(C[28]*DP[6]-C[25]*
 DP[7]+C[31]*DP[8])+C[14]*DP[4]-C[3]*DP[3]-C[50]*DP[5]-C[5]*DP[6]+C[2]*
 DP[7]-C[8]*DP[8])+DP[2]*(S[2]*(C[39]*DP[7]-C[31]*DP[6]-C[26]*DP[8])+C[50]*
 DP[3]-C[56]*DP[4]+C[2]*DP[5]+C[8]*DP[6]-C[16]*DP[7]+C[3]*DP[8])+S[2]*(
 C[32]*DP[8]-C[47]*DP[6])+C[64]*DP[3]-C[51]*DP[5]+C[24]*DP[6]-C[9]*DP[8])+
 DP[2]*(DP[2]*(S[2]*(C[26]*DP[6]-C[37]*DP[7])+C[54]*DP[4]-C[2]*DP[3]-C[3]*
 DP[6]+C[14]*DP[7])+S[2]*(C[44]*DP[6]-C[27]*DP[8])+C[48]*DP[5]-C[61]*DP[3]-
 C[21]*DP[6]+C[4]*DP[8]));
tmp[2]=+DP[9]*(DP[1]*(DP[13]*(DP[0]*(C[22]*(-DP[3]-DP[6])+C[17]*(DP[4]+
 DP[7])+C[6]*(-DP[5]-DP[8]))+DP[1]*(C[22]*(DP[3]+DP[6])+C[10]*(-DP[4]-
 DP[7])+C[5]*(-DP[5]-DP[8]))+DP[2]*(C[10]*(DP[3]+DP[6])+C[15]*(-DP[4]-
 DP[7])+C[2]*(DP[5]+DP[8]))+C[23]*(DP[3]+DP[6])+C[18]*(-DP[4]-DP[7])+C[7]*(-
 DP[5]-DP[8]))+DP[14]*(DP[0]*(C[22]*(-DP[3]-DP[6])+C[17]*(DP[4]+DP[7])+C[6]*
 (-DP[5]-DP[8]))+DP[1]*(C[22]*(DP[3]+DP[6])+C[10]*(-DP[4]-DP[7])+C[5]*(-
 DP[5]-DP[8]))+DP[2]*(C[10]*(DP[3]+DP[6])+C[15]*(-DP[4]-DP[7])+C[2]*(DP[5]+
 DP[8]))+C[23]*(DP[3]+DP[6])+C[18]*(-DP[4]-DP[7])+C[7]*(-DP[5]-DP[8]))+S[2]*
 (DP[10]*(C[22]*(DP[1]-DP[0])+C[23]+C[10]*DP[2])+DP[11]*(C[17]*DP[0]-C[18]-
 C[10]*DP[1]-C[15]*DP[2])+DP[12]*(C[2]*DP[2]-C[7]-C[6]*DP[0]-C[5]*DP[1]))+
 DP[9]*(DP[10]*(C[22]*(DP[0]-DP[1])-C[23]-C[10]*DP[2])+DP[11]*(C[18]-C[17]*
 DP[0]+C[10]*DP[1]+C[15]*DP[2])+DP[12]*(C[7]+C[6]*DP[0]+C[5]*DP[1]-C[2]*
 DP[2]))+DP[10]*(C[85]*(DP[0]-DP[1])-C[86]-C[73]*DP[2])+DP[11]*(C[81]-C[80]*
 DP[0]+C[73]*DP[1]+C[78]*DP[2])+DP[12]*(C[70]+C[69]*DP[0]+C[68]*DP[1]-C[65]*
 DP[2]))+tmp[0]);
tmp[3]=+DP[1]*(DP[9]*(DP[0]*(C[5]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+
 DP[14])+DP[11]*(S[2]-DP[9]))+C[11]*(DP[5]*(DP[13]+DP[14])+DP[8]*(DP[13]+
 DP[14])+DP[12]*(S[2]-DP[9]))-C[68]*DP[11]-C[74]*DP[12])+DP[1]*(C[11]*(
 DP[4]*(-DP[13]-DP[14])+DP[7]*(-DP[13]-DP[14])+DP[11]*(DP[9]-S[2]))+C[10]*(
 DP[5]*(-DP[13]-DP[14])+DP[8]*(-DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[74]*
 DP[11]+C[73]*DP[12])+DP[13]*(C[24]*(DP[3]+DP[6])+C[20]*(DP[4]+DP[7])+C[12]*
 (-DP[5]-DP[8]))+DP[14]*(C[24]*(DP[3]+DP[6])+C[20]*(DP[4]+DP[7])+C[12]*(-
 DP[5]-DP[8]))+S[2]*(C[24]*DP[10]+C[20]*DP[11]-C[12]*DP[12])+DP[9]*(C[12]*
 DP[12]-C[24]*DP[10]-C[20]*DP[11])+C[75]*DP[12]-C[87]*DP[10]-C[83]*DP[11])+
 S[2]*(DP[13]*(S[2]*(DP[7]*(C[43]+C[28]*DP[0]-C[34]*DP[1])+DP[8]*(C[34]*
 DP[0]-C[35]-C[33]*DP[1])+C[47]*DP[6])+DP[0]*(-C[3]*DP[4]-C[8]*DP[5]-C[5]*
 DP[7]-C[11]*DP[8])+DP[1]*(C[8]*DP[4]+C[5]*DP[5]+C[11]*DP[7]+C[10]*DP[8])+
 C[52]*DP[5]-C[64]*DP[3]-C[60]*DP[4]-C[24]*DP[6]-C[20]*DP[7]+C[12]*DP[8])+
 DP[14]*(DP[4]*(C[11]*DP[1]-C[20]-C[5]*DP[0])+DP[5]*(C[12]-C[11]*DP[0]+
 C[10]*DP[1])-C[24]*DP[3])));
S[3]=DP[1]*DP[1];
R=+DP[2]*(S[2]*(DP[14]*(DP[1]*(DP[3]*(C[22]*(DP[0]-DP[1])-C[23]-C[10]*
 DP[2])+DP[4]*(C[18]-C[17]*DP[0]+C[10]*DP[1]+C[15]*DP[2])+DP[5]*(C[7]+C[6]*
 DP[0]+C[5]*DP[1]-C[2]*DP[2]))+DP[0]*(DP[0]*(C[2]*DP[4]-C[5]*DP[3]-C[8]*
 DP[5])+DP[2]*(C[8]*DP[3]-C[16]*DP[4]+C[3]*DP[5])+C[24]*DP[3]-C[9]*DP[5])+
 DP[2]*(DP[2]*(C[14]*DP[4]-C[3]*DP[3])+C[4]*DP[5]-C[21]*DP[3]))+tmp[1])+
 tmp[2])+DP[0]*(DP[0]*(DP[9]*(DP[0]*(C[5]*(DP[5]*(-DP[13]-DP[14])+DP[8]*(-
 DP[13]-DP[14])+DP[12]*(DP[9]-S[2]))+C[68]*DP[12])+C[13]*(DP[5]*(DP[13]+
 DP[14])+DP[8]*(DP[13]+DP[14])+DP[12]*(S[2]-DP[9]))-C[76]*DP[12])+S[2]*(
 DP[13]*(DP[8]*(S[2]*(C[36]-C[28]*DP[0])+C[5]*DP[0]-C[13])+DP[5]*(C[3]*
 DP[0]-C[53]))+DP[5]*(DP[14]*(C[5]*DP[0]-C[13]))))+tmp[3])+S[3]*(DP[9]*(
 DP[1]*(C[10]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+DP[11]*(S[2]-
 DP[9]))-C[73]*DP[11])+C[19]*(DP[4]*(DP[13]+DP[14])+DP[7]*(DP[13]+DP[14])+
 DP[11]*(S[2]-DP[9]))-C[82]*DP[11])+S[2]*(DP[13]*(DP[7]*(S[2]*(C[42]+C[33]*
 DP[1])-C[19]-C[10]*DP[1])+DP[4]*(-C[59]-C[5]*DP[1]))+DP[4]*(DP[14]*(-C[19]-
 C[10]*DP[1]))));
R*=(N/D)*Q1[4]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[2] += (R*-9)/(-8);
 }
 return R;
}
