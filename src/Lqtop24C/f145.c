/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F145_out;
static void C145(REAL * C)
{
REAL* V=va_out;
REAL S[14];                                                                 
     
S[0]=V[17]*V[17];
S[1]=V[1]*V[1]*V[1];
S[2]=V[9]*V[9]*V[9]*V[9];
S[3]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[185]=+S[3]*(S[2]*(S[1]*(S[0]*(V[36]*(V[43]*(2*(V[29]-V[28]-V[27]+
 V[26])))))));
S[4]=V[36]*V[36];
S[5]=V[17]*V[17]*V[17]*V[17];
S[6]=V[14]*V[14]*V[14]*V[14];
S[7]=V[1]*V[1];
C[184]=+3*V[43]*S[4]*V[30]*S[5]*S[6]*V[12]*S[2]*V[2]*S[7];
S[8]=V[9]*V[9];
S[9]=V[2]*V[2];
C[183]=+S[3]*(S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(8*(V[28]-V[29]+V[27]-
 V[26])))-4*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(4*(V[29]-V[28]+
 V[26]))))))));
C[182]=+S[6]*(S[8]*(V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(24*(V[25]-
 V[24])))-12*S[4]*V[30]*V[27]*S[0]*V[2]))+6*V[43]*S[4]*V[30]*S[5]*S[7]))));
S[10]=V[14]*V[14];
C[181]=+S[6]*(S[9]*(S[8]*(V[36]*(S[10]*(V[1]*(V[27]*(16*(V[29]-V[28]-V[27]+
 V[26]))))+72*V[31]*V[21]*S[0]*S[8]*V[2]))));
C[180]=+S[8]*(S[10]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(4*(S[8]*(V[29]-V[28]-
 V[27]+V[26])+S[10]*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(
 8*(V[28]-V[29]+V[27]-V[26])))))))));
S[11]=V[2]*V[2]*V[2];
C[179]=+S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(16*(S[8]*(V[28]-V[29]+V[27]-
 V[26])+S[10]*(V[28]-V[29]+V[27]-V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(
 V[43]*(8*(V[29]-V[28]+V[26])))))+72*V[31]*V[21]*S[0]*S[8]*S[11])));
C[178]=+S[2]*(S[6]*(S[1]*(S[0]*(V[36]*(V[43]*(6*(V[29]-V[28]-V[27]+
 V[26])))))));
C[177]=+6*V[43]*S[4]*V[30]*S[5]*S[10]*V[12]*S[2]*V[2]*S[7];
C[176]=+S[8]*(S[10]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(S[8]*(4*(V[28]-V[29]+
 V[27]-V[26]))+S[10]*(12*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(
 V[27]*(24*(V[28]-V[29]+V[27]-V[26])))))))));
C[175]=+S[8]*(V[2]*(V[12]*(S[8]*(S[10]*(V[2]*(24*(V[1]*(V[21]*(V[25]-
 V[24]))-S[4]*V[30]*V[27]*S[0]*V[2])))-6*V[43]*S[4]*V[30]*S[5]*S[7])+12*
 V[43]*S[4]*V[30]*S[5]*S[10]*S[7])));
C[174]=+S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26]))+S[10]*(48*(V[29]-V[28]-V[27]+V[26])))-8*V[43]*S[0]*S[7])+S[7]*(
 S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))+72*V[31]*V[21]*S[0]*S[8]*S[11])));
C[173]=+S[8]*(V[2]*(V[12]*(V[2]*(S[10]*(48*(V[1]*(V[21]*(V[24]-V[25]))+S[4]*
 V[30]*V[27]*S[0]*V[2]))-24*S[4]*V[30]*V[27]*S[0]*S[8]*V[2])+12*V[43]*S[4]*
 V[30]*S[5]*S[7])));
C[172]=+S[8]*(S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+
 V[26]))))))));
C[171]=+S[8]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(S[8]*(4*(V[28]-V[29]+V[27]-
 V[26]))+S[10]*(8*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(
 16*(V[28]-V[29]+V[27]-V[26]))))))));
C[170]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-V[26]))+
 S[10]*(32*(V[29]-V[28]-V[27]+V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*
 (8*(V[29]-V[28]+V[26])))))));
C[169]=+S[2]*(S[6]*(S[1]*(S[0]*(V[36]*(V[43]*(2*(V[29]-V[28]-V[27]+
 V[26])))))));
C[168]=+S[6]*(S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(8*(V[28]-V[29]+V[27]-
 V[26])))-4*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(4*(V[29]-V[28]+
 V[26]))))))));
C[167]=+S[8]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(4*(S[8]*(V[28]-V[29]+V[27]-
 V[26])+S[10]*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(8*(
 V[28]-V[29]+V[27]-V[26]))))))));
C[166]=+S[8]*(V[36]*(V[1]*(V[27]*(S[9]*(16*(S[8]*(V[28]-V[29]+V[27]-V[26])+
 S[10]*(V[29]-V[28]-V[27]+V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(
 V[29]-V[28]+V[26])))))+72*V[31]*V[21]*S[0]*S[8]*S[11]));
C[165]=+S[8]*(S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(8*(V[28]-V[29]+V[27]-
 V[26])))-4*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(4*(V[29]-V[28]+
 V[26]))))))));
C[164]=+S[9]*(S[8]*(V[36]*(S[10]*(V[1]*(V[27]*(16*(V[29]-V[28]-V[27]+
 V[26]))))+72*V[31]*V[21]*S[0]*S[8]*V[2])));
C[163]=+S[2]*(S[9]*(S[10]*(V[1]*(V[12]*(V[21]*(32*(V[25]-V[24])))))));
C[162]=+96*V[36]*V[31]*V[21]*S[0]*S[10]*S[2]*S[11];
C[161]=+S[2]*(V[1]*(V[2]*(V[12]*(S[10]*(V[2]*(V[21]*(24*(V[25]-V[24]))))+6*
 V[43]*S[4]*V[30]*S[5]*V[1]))));
C[160]=+S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))-
 72*V[31]*V[21]*S[0]*S[8]*S[11])));
C[159]=+S[8]*(V[2]*(V[12]*(V[1]*(S[10]*(V[2]*(V[21]*(48*(V[25]-V[24]))))+12*
 V[43]*S[4]*V[30]*S[5]*V[1])-24*S[4]*V[30]*V[27]*S[0]*S[8]*S[9])));
C[158]=+S[8]*(V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(24*(V[24]-V[25])))-12*
 S[4]*V[30]*V[27]*S[0]*V[2]))+6*V[43]*S[4]*V[30]*S[5]*S[7])));
C[157]=+S[8]*(V[36]*(V[1]*(V[27]*(S[9]*(16*(S[8]*(V[28]-V[29]+V[27]-V[26])+
 S[10]*(V[28]-V[29]+V[27]-V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(
 V[29]-V[28]+V[26])))))+72*V[31]*V[21]*S[0]*S[8]*S[11]));
C[156]=+S[3]*(S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(8*(V[29]-V[28]-V[27]+
 V[26])))))));
C[155]=+12*V[43]*S[4]*V[30]*S[5]*S[6]*V[12]*S[8]*V[2]*S[7];
C[154]=+S[3]*(S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(32*(V[29]-V[28]-V[27]+
 V[26])))))));
C[153]=+S[6]*(S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(96*(V[24]-V[25])))+48*S[4]*
 V[30]*V[27]*S[0]*V[2]))));
C[152]=+288*V[36]*V[31]*V[21]*S[0]*S[6]*S[8]*S[11];
C[151]=+S[8]*(S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(32*(V[28]-V[29]+V[27]-
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+
 V[26]))))))));
C[150]=+S[9]*(S[8]*(S[10]*(V[1]*(V[12]*(V[21]*(128*(V[25]-V[24])))))));
C[149]=+384*V[36]*V[31]*V[21]*S[0]*S[10]*S[8]*S[11];
C[148]=+S[3]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[147]=+S[6]*(V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(48*(V[25]-V[24])))-24*
 S[4]*V[30]*V[27]*S[0]*V[2]))+12*V[43]*S[4]*V[30]*S[5]*S[7])));
C[146]=+S[6]*(S[9]*(V[36]*(S[10]*(V[1]*(V[27]*(32*(V[29]-V[28]-V[27]+
 V[26]))))+144*V[31]*V[21]*S[0]*S[8]*V[2])));
C[145]=+S[6]*(S[9]*(V[12]*(V[1]*(V[21]*(96*(V[24]-V[25])))+48*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[144]=+288*V[36]*V[31]*V[21]*S[0]*S[6]*S[11];
C[143]=+S[10]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(8*(S[8]*(V[29]-V[28]-V[27]+
 V[26])+S[10]*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(16*(
 V[28]-V[29]+V[27]-V[26]))))))));
C[142]=+S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(32*(S[8]*(V[28]-V[29]+V[27]-V[26])+
 S[10]*(V[28]-V[29]+V[27]-V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(
 16*(V[29]-V[28]+V[26])))))+144*V[31]*V[21]*S[0]*S[8]*S[11]));
C[141]=+S[9]*(S[10]*(V[1]*(V[12]*(V[21]*(128*(V[25]-V[24]))))));
C[140]=+384*V[36]*V[31]*V[21]*S[0]*S[10]*S[11];
C[139]=+S[6]*(S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(24*(V[29]-V[28]-V[27]+
 V[26])))))));
C[138]=+24*V[43]*S[4]*V[30]*S[5]*S[10]*V[12]*S[8]*V[2]*S[7];
C[137]=+S[8]*(S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(96*(V[29]-V[28]-V[27]+
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+
 V[26]))))))));
C[136]=+S[8]*(V[2]*(V[12]*(S[10]*(V[2]*(96*(V[1]*(V[21]*(V[24]-V[25]))+S[4]*
 V[30]*V[27]*S[0]*V[2])))+24*V[43]*S[4]*V[30]*S[5]*S[7])));
C[135]=+S[9]*(S[8]*(S[10]*(V[1]*(V[27]*(V[36]*(64*(V[29]-V[28]-V[27]+
 V[26])))))));
C[134]=+S[8]*(V[1]*(V[2]*(V[12]*(S[10]*(V[2]*(V[21]*(96*(V[25]-V[24]))))+24*
 V[43]*S[4]*V[30]*S[5]*V[1]))));
C[133]=+S[9]*(S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(64*(V[29]-V[28]-V[27]+
 V[26])))+288*V[31]*V[21]*S[0]*V[2]))));
C[132]=+S[10]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(S[8]*(8*(V[28]-V[29]+V[27]-
 V[26]))+S[10]*(24*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(
 48*(V[28]-V[29]+V[27]-V[26]))))))));
C[131]=+V[2]*(V[12]*(S[8]*(S[10]*(V[2]*(48*(V[1]*(V[21]*(V[25]-V[24]))-S[4]*
 V[30]*V[27]*S[0]*V[2])))-12*V[43]*S[4]*V[30]*S[5]*S[7])+24*V[43]*S[4]*
 V[30]*S[5]*S[10]*S[7]));
C[130]=+S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(S[8]*(32*(V[28]-V[29]+V[27]-
 V[26]))+S[10]*(96*(V[29]-V[28]-V[27]+V[26])))-16*V[43]*S[0]*S[7])+S[7]*(
 S[0]*(V[43]*(16*(V[29]-V[28]+V[26])))))+144*V[31]*V[21]*S[0]*S[8]*S[11]));
C[129]=+V[2]*(V[12]*(V[2]*(S[10]*(96*(V[1]*(V[21]*(V[24]-V[25]))+S[4]*V[30]*
 V[27]*S[0]*V[2]))-48*S[4]*V[30]*V[27]*S[0]*S[8]*V[2])+24*V[43]*S[4]*V[30]*
 S[5]*S[7]));
C[128]=+S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(32*(V[28]-V[29]+V[27]-
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+
 V[26])))))));
C[127]=+S[9]*(S[10]*(V[1]*(V[27]*(V[36]*(64*(V[29]-V[28]-V[27]+V[26]))))));
C[126]=+S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(S[8]*(32*(V[28]-V[29]+V[27]-
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+V[26])))))-
 144*V[31]*V[21]*S[0]*S[8]*S[11]));
C[125]=+V[2]*(V[12]*(V[1]*(S[10]*(V[2]*(V[21]*(96*(V[25]-V[24]))))+24*V[43]*
 S[4]*V[30]*S[5]*V[1])-48*S[4]*V[30]*V[27]*S[0]*S[8]*S[9]));
C[124]=+S[9]*(S[10]*(V[36]*(V[1]*(V[27]*(64*(V[29]-V[28]-V[27]+V[26])))+288*
 V[31]*V[21]*S[0]*V[2])));
C[123]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(64*(V[29]-V[28]-V[27]+
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+
 V[26])))))));
C[122]=+V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(S[8]*(8*(V[28]-V[29]+V[27]-V[26]))+
 S[10]*(16*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(32*(
 V[28]-V[29]+V[27]-V[26])))))));
C[121]=+V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(32*(V[28]-V[29]+V[27]-V[26]))+S[10]*
 (64*(V[29]-V[28]-V[27]+V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(
 V[29]-V[28]+V[26]))))));
C[120]=+S[6]*(S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(8*(V[29]-V[28]-V[27]+
 V[26])))))));
C[119]=+S[6]*(S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(32*(V[29]-V[28]-V[27]+
 V[26])))))));
C[118]=+S[6]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[117]=+S[6]*(S[9]*(V[1]*(V[27]*(V[36]*(32*(V[29]-V[28]-V[27]+V[26]))))));
C[116]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(32*(V[29]-V[28]-V[27]+
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+
 V[26])))))));
C[115]=+S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(96*(V[25]-V[24])))+48*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[114]=+S[9]*(S[8]*(V[36]*(V[1]*(V[27]*(64*(V[28]-V[29]+V[27]-V[26])))+288*
 V[31]*V[21]*S[0]*V[2])));
C[113]=+V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(8*(S[8]*(V[28]-V[29]+V[27]-V[26])+
 S[10]*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(16*(V[28]-
 V[29]+V[27]-V[26])))))));
C[112]=+V[36]*(V[1]*(V[27]*(S[9]*(32*(S[8]*(V[28]-V[29]+V[27]-V[26])+S[10]*(
 V[29]-V[28]-V[27]+V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(
 V[29]-V[28]+V[26])))))+144*V[31]*V[21]*S[0]*S[8]*S[11]);
C[111]=+V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(48*(V[24]-V[25])))-24*S[4]*
 V[30]*V[27]*S[0]*V[2]))+12*V[43]*S[4]*V[30]*S[5]*S[7]));
C[110]=+V[36]*(V[1]*(V[27]*(S[9]*(32*(S[8]*(V[28]-V[29]+V[27]-V[26])+S[10]*(
 V[28]-V[29]+V[27]-V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(
 V[29]-V[28]+V[26])))))+144*V[31]*V[21]*S[0]*S[8]*S[11]);
C[109]=+S[9]*(V[12]*(V[1]*(V[21]*(96*(V[25]-V[24])))+48*S[4]*V[30]*V[27]*
 S[0]*V[2]));
C[108]=+S[9]*(V[36]*(V[1]*(V[27]*(64*(V[28]-V[29]+V[27]-V[26])))+288*V[31]*
 V[21]*S[0]*V[2]));
C[107]=+288*V[36]*V[31]*V[21]*S[0]*S[8]*S[11];
C[106]=+S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[105]=+S[9]*(V[36]*(S[10]*(V[1]*(V[27]*(32*(V[29]-V[28]-V[27]+V[26]))))+
 144*V[31]*V[21]*S[0]*S[8]*V[2]));
C[104]=+288*V[36]*V[31]*V[21]*S[0]*S[11];
C[103]=+S[1]*(S[8]*(S[10]*(S[0]*(V[36]*(V[43]*(16*(V[29]-V[28]-V[27]+
 V[26])))))));
C[102]=+S[8]*(V[1]*(V[2]*(V[12]*(S[10]*(V[2]*(V[21]*(96*(V[24]-V[25]))))+24*
 V[43]*S[4]*V[30]*S[5]*V[1]))));
C[101]=+S[9]*(S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(64*(V[28]-V[29]+V[27]-
 V[26])))+288*V[31]*V[21]*S[0]*V[2]))));
C[100]=+96*S[4]*V[30]*V[27]*S[0]*V[12]*S[8]*S[11];
C[99]=+S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(32*(V[24]-V[25])))+48*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[98]=+S[9]*(S[8]*(V[36]*(V[1]*(V[27]*(64*(V[29]-V[28]-V[27]+V[26])))+96*
 V[31]*V[21]*S[0]*V[2])));
C[97]=+12*V[43]*S[4]*V[30]*S[5]*V[12]*S[8]*V[2]*S[7];
C[96]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(32*(V[28]-V[29]+V[27]-
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+
 V[26])))))));
C[95]=+S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(96*(V[24]-V[25])))+48*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[94]=+S[9]*(S[8]*(V[36]*(V[1]*(V[27]*(64*(V[29]-V[28]-V[27]+V[26])))+288*
 V[31]*V[21]*S[0]*V[2])));
C[93]=+S[9]*(S[8]*(V[1]*(V[12]*(V[21]*(128*(V[25]-V[24]))))));
C[92]=+384*V[36]*V[31]*V[21]*S[0]*S[8]*S[11];
C[91]=+S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(16*(V[29]-V[28]-V[27]+V[26]))))));
C[90]=+S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(64*(V[29]-V[28]-V[27]+V[26]))))));
C[89]=+S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(S[8]*(32*(V[28]-V[29]+V[27]-
 V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+V[26])))))+
 144*V[31]*V[21]*S[0]*S[8]*S[11]));
C[88]=+V[2]*(V[12]*(V[1]*(S[10]*(V[2]*(V[21]*(96*(V[24]-V[25]))))+24*V[43]*
 S[4]*V[30]*S[5]*V[1])-48*S[4]*V[30]*V[27]*S[0]*S[8]*S[9]));
C[87]=+S[9]*(S[10]*(V[36]*(V[1]*(V[27]*(64*(V[28]-V[29]+V[27]-V[26])))+288*
 V[31]*V[21]*S[0]*V[2])));
C[86]=+96*S[4]*V[30]*V[27]*S[0]*V[12]*S[11];
C[85]=+S[9]*(S[10]*(V[1]*(V[12]*(V[21]*(64*(V[25]-V[24]))))));
C[84]=+192*V[36]*V[31]*V[21]*S[0]*S[10]*S[11];
C[83]=+V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(16*(V[25]-V[24])))-24*S[4]*
 V[30]*V[27]*S[0]*V[2]))+12*V[43]*S[4]*V[30]*S[5]*S[7]));
C[82]=+V[36]*(V[1]*(V[27]*(S[9]*(32*(S[8]*(V[28]-V[29]+V[27]-V[26])+S[10]*(
 V[28]-V[29]+V[27]-V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(
 V[29]-V[28]+V[26])))))-48*V[31]*V[21]*S[0]*S[8]*S[11]);
C[81]=+S[9]*(V[12]*(V[1]*(V[21]*(32*(V[24]-V[25])))+48*S[4]*V[30]*V[27]*
 S[0]*V[2]));
C[80]=+S[9]*(V[36]*(V[1]*(V[27]*(64*(V[29]-V[28]-V[27]+V[26])))+96*V[31]*
 V[21]*S[0]*V[2]));
C[79]=+S[9]*(V[1]*(V[12]*(V[21]*(64*(V[25]-V[24])))));
C[78]=+192*V[36]*V[31]*V[21]*S[0]*S[11];
C[77]=+V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(8*(S[8]*(V[29]-V[28]-V[27]+V[26])+
 S[10]*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(16*(V[28]-
 V[29]+V[27]-V[26])))))));
C[76]=+V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(48*(V[25]-V[24])))-24*S[4]*
 V[30]*V[27]*S[0]*V[2]))+12*V[43]*S[4]*V[30]*S[5]*S[7]));
C[75]=+V[36]*(V[1]*(V[27]*(S[9]*(32*(S[8]*(V[28]-V[29]+V[27]-V[26])+S[10]*(
 V[28]-V[29]+V[27]-V[26])))-16*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(
 V[29]-V[28]+V[26])))))-144*V[31]*V[21]*S[0]*S[8]*S[11]);
C[74]=+S[9]*(V[12]*(V[1]*(V[21]*(96*(V[24]-V[25])))+48*S[4]*V[30]*V[27]*
 S[0]*V[2]));
C[73]=+S[9]*(V[36]*(V[1]*(V[27]*(64*(V[29]-V[28]-V[27]+V[26])))+288*V[31]*
 V[21]*S[0]*V[2]));
C[72]=+S[9]*(V[1]*(V[12]*(V[21]*(128*(V[25]-V[24])))));
C[71]=+384*V[36]*V[31]*V[21]*S[0]*S[11];
C[70]=+V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(32*(V[28]-V[29]+V[27]-V[26])))-16*
 V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(16*(V[29]-V[28]+V[26]))))));
C[69]=+S[9]*(V[1]*(V[27]*(V[36]*(64*(V[29]-V[28]-V[27]+V[26])))));
C[68]=+V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-V[26])))-8*
 V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26]))))));
C[67]=+S[9]*(V[1]*(V[27]*(V[36]*(32*(V[29]-V[28]-V[27]+V[26])))));
C[66]=+S[3]*(S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(4*(V[29]-V[28]-V[27]+
 V[26])))))));
C[65]=+6*V[43]*S[4]*V[30]*S[5]*S[6]*V[12]*S[8]*V[2]*S[7];
C[64]=+S[3]*(S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(16*(V[29]-V[28]-V[27]+
 V[26])))))));
C[63]=+S[6]*(S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(48*(V[24]-V[25])))+24*S[4]*
 V[30]*V[27]*S[0]*V[2]))));
C[62]=+144*V[36]*V[31]*V[21]*S[0]*S[6]*S[8]*S[11];
C[61]=+S[8]*(S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+
 V[26]))))))));
C[60]=+S[9]*(S[8]*(S[10]*(V[1]*(V[12]*(V[21]*(64*(V[25]-V[24])))))));
C[59]=+192*V[36]*V[31]*V[21]*S[0]*S[10]*S[8]*S[11];
C[58]=+S[6]*(S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(12*(V[29]-V[28]-V[27]+
 V[26])))))));
C[57]=+12*V[43]*S[4]*V[30]*S[5]*S[10]*V[12]*S[8]*V[2]*S[7];
C[56]=+S[8]*(S[10]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(48*(V[29]-V[28]-V[27]+
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+
 V[26]))))))));
C[55]=+S[8]*(V[2]*(V[12]*(S[10]*(V[2]*(48*(V[1]*(V[21]*(V[24]-V[25]))+S[4]*
 V[30]*V[27]*S[0]*V[2])))+12*V[43]*S[4]*V[30]*S[5]*S[7])));
C[54]=+S[9]*(S[8]*(S[10]*(V[1]*(V[27]*(V[36]*(32*(V[29]-V[28]-V[27]+
 V[26])))))));
C[53]=+S[8]*(V[1]*(V[2]*(V[12]*(S[10]*(V[2]*(V[21]*(48*(V[25]-V[24]))))+12*
 V[43]*S[4]*V[30]*S[5]*V[1]))));
C[52]=+S[9]*(S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(32*(V[29]-V[28]-V[27]+
 V[26])))+144*V[31]*V[21]*S[0]*V[2]))));
C[51]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(32*(V[29]-V[28]-V[27]+
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[50]=+S[6]*(S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(4*(V[29]-V[28]-V[27]+
 V[26])))))));
C[49]=+S[6]*(S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(16*(V[29]-V[28]-V[27]+
 V[26])))))));
C[48]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(16*(V[29]-V[28]-V[27]+
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[47]=+S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(48*(V[25]-V[24])))+24*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[46]=+S[9]*(S[8]*(V[36]*(V[1]*(V[27]*(32*(V[28]-V[29]+V[27]-V[26])))+144*
 V[31]*V[21]*S[0]*V[2])));
C[45]=+S[9]*(S[8]*(S[10]*(V[1]*(V[27]*(V[36]*(16*(V[29]-V[28]-V[27]+
 V[26])))))));
C[44]=+144*V[36]*V[31]*V[21]*S[0]*S[8]*S[11];
C[43]=+S[2]*(S[1]*(S[10]*(S[0]*(V[36]*(V[43]*(4*(V[29]-V[28]-V[27]+
 V[26])))))));
C[42]=+S[2]*(V[1]*(V[2]*(V[12]*(S[10]*(V[2]*(V[21]*(24*(V[24]-V[25]))))+6*
 V[43]*S[4]*V[30]*S[5]*V[1]))));
C[41]=+S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))+
 72*V[31]*V[21]*S[0]*S[8]*S[11])));
C[40]=+S[8]*(V[2]*(V[12]*(V[1]*(S[10]*(V[2]*(V[21]*(48*(V[24]-V[25]))))+12*
 V[43]*S[4]*V[30]*S[5]*V[1])-24*S[4]*V[30]*V[27]*S[0]*S[8]*S[9])));
C[39]=+S[1]*(S[8]*(S[10]*(S[0]*(V[36]*(V[43]*(8*(V[29]-V[28]-V[27]+
 V[26])))))));
C[38]=+S[8]*(V[1]*(V[2]*(V[12]*(S[10]*(V[2]*(V[21]*(48*(V[24]-V[25]))))+12*
 V[43]*S[4]*V[30]*S[5]*V[1]))));
C[37]=+S[9]*(S[8]*(S[10]*(V[36]*(V[1]*(V[27]*(32*(V[28]-V[29]+V[27]-
 V[26])))+144*V[31]*V[21]*S[0]*V[2]))));
C[36]=+48*S[4]*V[30]*V[27]*S[0]*V[12]*S[8]*S[11];
C[35]=+S[2]*(S[9]*(S[10]*(V[1]*(V[12]*(V[21]*(16*(V[25]-V[24])))))));
C[34]=+48*V[36]*V[31]*V[21]*S[0]*S[10]*S[2]*S[11];
C[33]=+S[8]*(V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(8*(V[25]-V[24])))-12*
 S[4]*V[30]*V[27]*S[0]*V[2]))+6*V[43]*S[4]*V[30]*S[5]*S[7])));
C[32]=+S[8]*(V[36]*(V[1]*(V[27]*(S[9]*(16*(S[8]*(V[28]-V[29]+V[27]-V[26])+
 S[10]*(V[28]-V[29]+V[27]-V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(
 V[29]-V[28]+V[26])))))-24*V[31]*V[21]*S[0]*S[8]*S[11]));
C[31]=+S[9]*(S[8]*(S[10]*(V[1]*(V[12]*(V[21]*(32*(V[25]-V[24])))))));
C[30]=+96*V[36]*V[31]*V[21]*S[0]*S[10]*S[8]*S[11];
C[29]=+S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(16*(V[24]-V[25])))+24*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[28]=+S[9]*(S[8]*(V[36]*(V[1]*(V[27]*(32*(V[29]-V[28]-V[27]+V[26])))+48*
 V[31]*V[21]*S[0]*V[2])));
C[27]=+S[2]*(S[9]*(V[1]*(V[12]*(V[21]*(16*(V[25]-V[24]))))));
C[26]=+48*V[36]*V[31]*V[21]*S[0]*S[2]*S[11];
C[25]=+S[9]*(S[8]*(V[1]*(V[12]*(V[21]*(32*(V[25]-V[24]))))));
C[24]=+96*V[36]*V[31]*V[21]*S[0]*S[8]*S[11];
C[23]=+S[2]*(S[1]*(S[10]*(S[0]*(V[36]*(V[43]*(2*(V[29]-V[28]-V[27]+
 V[26])))))));
C[22]=+3*V[43]*S[4]*V[30]*S[5]*V[12]*S[2]*V[2]*S[7];
C[21]=+S[8]*(V[1]*(V[36]*(S[7]*(S[0]*(V[43]*(4*(S[8]*(V[29]-V[28]-V[27]+
 V[26])+S[10]*(V[29]-V[28]-V[27]+V[26])))))+S[9]*(S[8]*(S[10]*(V[27]*(8*(
 V[28]-V[29]+V[27]-V[26]))))))));
C[20]=+S[8]*(V[2]*(V[12]*(S[8]*(V[2]*(V[1]*(V[21]*(24*(V[25]-V[24])))-12*
 S[4]*V[30]*V[27]*S[0]*V[2]))+6*V[43]*S[4]*V[30]*S[5]*S[7])));
C[19]=+S[8]*(V[36]*(V[1]*(V[27]*(S[9]*(16*(S[8]*(V[28]-V[29]+V[27]-V[26])+
 S[10]*(V[28]-V[29]+V[27]-V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(
 V[29]-V[28]+V[26])))))-72*V[31]*V[21]*S[0]*S[8]*S[11]));
C[18]=+S[1]*(S[8]*(S[10]*(S[0]*(V[36]*(V[43]*(4*(V[29]-V[28]-V[27]+
 V[26])))))));
C[17]=+6*V[43]*S[4]*V[30]*S[5]*V[12]*S[8]*V[2]*S[7];
C[16]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[10]*(16*(V[28]-V[29]+V[27]-
 V[26])))-8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[15]=+S[9]*(S[8]*(V[12]*(V[1]*(V[21]*(48*(V[24]-V[25])))+24*S[4]*V[30]*
 V[27]*S[0]*V[2])));
C[14]=+S[9]*(S[8]*(V[36]*(V[1]*(V[27]*(32*(V[29]-V[28]-V[27]+V[26])))+144*
 V[31]*V[21]*S[0]*V[2])));
C[13]=+S[2]*(S[9]*(V[1]*(V[12]*(V[21]*(32*(V[25]-V[24]))))));
C[12]=+96*V[36]*V[31]*V[21]*S[0]*S[2]*S[11];
C[11]=+S[2]*(S[1]*(S[0]*(V[36]*(V[43]*(4*(V[29]-V[28]-V[27]+V[26]))))));
C[10]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(16*(V[28]-V[29]+V[27]-V[26])))-
 8*V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(8*(V[29]-V[28]+V[26])))))));
C[9]=+S[9]*(S[8]*(V[1]*(V[12]*(V[21]*(64*(V[25]-V[24]))))));
C[8]=+192*V[36]*V[31]*V[21]*S[0]*S[8]*S[11];
C[7]=+S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(8*(V[29]-V[28]-V[27]+V[26]))))));
C[6]=+S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(32*(V[29]-V[28]-V[27]+V[26]))))));
C[5]=+S[2]*(S[1]*(S[0]*(V[36]*(V[43]*(2*(V[29]-V[28]-V[27]+V[26]))))));
C[4]=+S[8]*(V[1]*(V[36]*(V[27]*(S[9]*(S[8]*(8*(V[28]-V[29]+V[27]-V[26])))-4*
 V[43]*S[0]*S[7])+S[7]*(S[0]*(V[43]*(4*(V[29]-V[28]+V[26])))))));
C[3]=+S[1]*(S[8]*(S[0]*(V[36]*(V[43]*(4*(V[29]-V[28]-V[27]+V[26]))))));
C[2]=+S[9]*(S[8]*(V[1]*(V[27]*(V[36]*(16*(V[29]-V[28]-V[27]+V[26]))))));
S[12]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+24*S[5]*S[12];
S[13]=V[49]*V[49]*V[49];
C[0]=+S[13]*V[36]*S[10]*S[1];
}
REAL F145_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         u                 b      !                                  
       ==>==@==============>==\   !                                  
         P1 |              P5 |   !                                  
            |                 |   !                                  
            |              n2 |   !  n2                              
          W+|P7         /==>==+===!==>==\                            
            1           |  P3 |   !  P3 |                            
            |           |     |   !     |                            
         b  |  t     W+ |  E2 |   !  E2 |  W+    t     u             
       ==>==@==>==@-2>--@==<==+===!==<==@-->3-@==>==@==>==           
         P2    P8 |  P9    P4 |   !  P4   -PC | -PB |  P1            
                  |           |   !           |     |                
                  |        b  |   !  b        |     |                
                  \========>==+===!==>========/    H|-PA             
                           P6 |   !  P6             |                
                              |   !                 |                
                              |   !  b              |  b             
                              \===!==>==============@==>==           
                                  !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[186];REAL S[3];REAL tmp[16];                                  
     
if(CalcConst) C145(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(V[50]*(V[50]*(V[50]*(DP[9]*(C[73]*(DP[0]-DP[7])+C[86]*V[50]-
 C[87]-C[80]*DP[6])+DP[3]*(C[87]-C[86]*V[50]-C[69]*DP[0]-C[108]*DP[7])+
 DP[4]*(C[78]*(DP[7]-DP[0])+C[140]-C[80]*DP[6]))+DP[4]*(C[79]*(DP[7]-DP[0])+
 C[141]+C[81]*DP[6])+DP[9]*(C[74]*(DP[7]-DP[0])+C[88]+C[81]*DP[6])+DP[3]*(
 C[74]*DP[7]-C[88])+C[100]*(DP[1]-DP[8]))+DP[7]*(C[69]*(DP[6]*(-DP[3]-DP[4]-
 DP[9])+DP[9]*DP[0]-DP[7]*DP[3])+DP[3]*(C[112]+C[67]*DP[0])+DP[9]*(-C[75]-
 C[67]*DP[7])+C[114]*DP[1]-C[8]*DP[2]-C[24]*DP[4]+C[94]*DP[8])+DP[0]*(DP[9]*
 (C[75]-C[67]*DP[0]+C[69]*DP[6])+DP[4]*(C[24]+C[67]*DP[6])+C[90]*DP[1]+C[8]*
 DP[2]-C[70]*DP[3]-C[94]*DP[8])+DP[6]*(DP[4]*(-C[82]-C[69]*DP[6])+DP[9]*(-
 C[82]-C[67]*DP[6])+C[98]*(DP[2]+DP[8])-C[127]*DP[3])+C[101]*(DP[8]-DP[1])+
 C[89]*DP[9]-C[149]*DP[2]-C[142]*DP[3]-C[59]*DP[4])+DP[7]*(C[95]*(-DP[1]-
 DP[8])+C[76]*(DP[3]+DP[9])-C[9]*DP[2]-C[25]*DP[4])+DP[0]*(C[9]*DP[2]+C[25]*
 DP[4]+C[95]*DP[8]-C[76]*DP[9])+DP[5]*(C[36]*(DP[8]-DP[1]-DP[3]+DP[9]))+
 DP[6]*(C[99]*(-DP[2]-DP[8])+C[83]*(DP[4]+DP[9]))+C[102]*(DP[1]-DP[8])+
 C[38]*(DP[3]-DP[9])-C[150]*DP[2]-C[60]*DP[4]);
tmp[1]=+DP[5]*(V[50]*(V[50]*(DP[14]*(C[14]*(DP[0]-DP[7])+C[36]*V[50]-C[37]-
 C[28]*DP[6])+DP[10]*(C[37]-C[36]*V[50]-C[6]*DP[0]-C[46]*DP[7])+DP[11]*(
 C[24]*(DP[7]-DP[0])+C[59]-C[28]*DP[6]))+C[36]*(DP[13]*(DP[8]-DP[1]-DP[3]+
 DP[9])+DP[5]*(DP[10]-DP[14]))+DP[11]*(C[25]*(DP[7]-DP[0])+C[60]+C[29]*
 DP[6])+DP[14]*(C[15]*(DP[7]-DP[0])+C[40]+C[29]*DP[6])+DP[10]*(C[15]*DP[7]-
 C[40]))+DP[13]*(DP[0]*(C[6]*(-DP[1]-DP[3])+C[24]*(-DP[2]-DP[4])+C[14]*(
 DP[8]+DP[9]))+DP[7]*(C[46]*(-DP[1]-DP[3])+C[24]*(DP[2]+DP[4])+C[14]*(-
 DP[8]-DP[9]))+DP[6]*(C[28]*(-DP[2]-DP[4]-DP[8]-DP[9]))+C[37]*(DP[1]+DP[3]-
 DP[8]-DP[9])+C[59]*(DP[2]+DP[4]))+DP[14]*(DP[0]*(C[6]*(DP[6]+DP[7])+C[19]-
 C[2]*DP[0]-C[14]*DP[5])+DP[6]*(C[28]*DP[5]-C[32]-C[2]*DP[6]-C[6]*DP[7])+
 DP[7]*(C[14]*DP[5]-C[19]-C[2]*DP[7])+C[41]+C[37]*DP[5])+DP[11]*(DP[6]*(
 C[6]*(-DP[6]-DP[7])+C[2]*DP[0]-C[32]+C[28]*DP[5])+DP[5]*(C[24]*(DP[0]-
 DP[7])-C[59])+C[26]*(DP[0]-DP[7])-C[162])+DP[10]*(DP[7]*(C[6]*(-DP[6]-
 DP[7])+C[166]+C[2]*DP[0]+C[46]*DP[5])+DP[0]*(C[6]*DP[5]-C[10])-C[179]-
 C[37]*DP[5]-C[54]*DP[6]));
tmp[2]=+DP[12]*(DP[6]*(DP[7]*(C[90]*(DP[1]+DP[2]+DP[8])+C[70]*(-DP[3]-DP[4]-
 DP[9]))+DP[0]*(C[68]*DP[4]-C[6]*DP[2]-C[90]*DP[8]+C[70]*DP[9])+DP[5]*(
 C[28]*(-DP[2]-DP[4]-DP[8]-DP[9]))+DP[6]*(C[90]*DP[2]-C[70]*DP[4]+C[6]*
 DP[8]-C[68]*DP[9])+C[96]*(DP[2]+DP[8])+C[77]*(DP[4]+DP[9])+C[135]*DP[1]-
 C[128]*DP[3])+DP[5]*(DP[0]*(C[6]*(-DP[1]-DP[3])+C[24]*(-DP[2]-DP[4])+C[14]*
 (DP[8]+DP[9]))+DP[7]*(C[46]*(-DP[1]-DP[3])+C[24]*(DP[2]+DP[4])+C[14]*(-
 DP[8]-DP[9]))+C[37]*(DP[1]+DP[3]-DP[8]-DP[9])+C[59]*(DP[2]+DP[4]))+DP[7]*(
 DP[0]*(C[68]*DP[3]-C[6]*DP[1]-C[90]*DP[8]+C[70]*DP[9])+DP[7]*(C[90]*DP[1]-
 C[70]*DP[3]+C[6]*DP[8]-C[68]*DP[9])+C[113]*DP[3]-C[116]*DP[1]+C[96]*DP[8]+
 C[77]*DP[9])+DP[0]*(DP[0]*(C[6]*DP[8]-C[68]*DP[9])+C[91]*DP[1]+C[7]*DP[3]-
 C[96]*DP[8]-C[77]*DP[9])+C[151]*DP[1]+C[143]*DP[3]-C[103]*DP[8]-C[39]*
 DP[9]+tmp[0]);
tmp[3]=+V[50]*(DP[12]*(V[50]*(V[50]*(DP[3]*(C[87]-C[86]*V[50]+C[69]*DP[6]-
 C[108]*DP[7])+DP[4]*(C[73]*DP[6]-C[124]-C[86]*V[50]-C[108]*DP[7])+DP[9]*(
 C[84]-C[78]*DP[6]+C[71]*DP[7]))+DP[4]*(-C[125]-C[74]*DP[6]-C[109]*DP[7])+
 DP[9]*(C[85]-C[79]*DP[6]+C[72]*DP[7])+DP[3]*(-C[129]-C[109]*DP[7])+C[100]*(
 DP[1]+DP[2]))+DP[7]*(DP[3]*(C[112]+C[67]*DP[6]+C[69]*DP[7])+DP[4]*(C[110]+
 C[69]*DP[6]+C[67]*DP[7])+C[114]*(DP[1]+DP[2])-C[92]*DP[8]-C[8]*DP[9])+
 DP[6]*(DP[4]*(C[75]+C[67]*DP[6])+C[121]*DP[3]-C[90]*DP[1]-C[94]*DP[2]+C[8]*
 DP[8]+C[24]*DP[9])+C[133]*DP[2]-C[101]*DP[1]-C[130]*DP[3]-C[126]*DP[4]-
 C[59]*DP[8]-C[30]*DP[9])+DP[5]*(DP[10]*(C[37]-C[36]*V[50]+C[6]*DP[6]-C[46]*
 DP[7])+DP[11]*(C[14]*DP[6]-C[52]-C[36]*V[50]-C[46]*DP[7])+DP[14]*(C[30]-
 C[24]*DP[6]+C[8]*DP[7]))+DP[13]*(DP[1]*(C[36]*V[50]-C[37]-C[6]*DP[6]+C[46]*
 DP[7])+DP[2]*(C[52]+C[36]*V[50]-C[14]*DP[6]+C[46]*DP[7])+DP[8]*(C[24]*
 DP[6]-C[30]-C[8]*DP[7])));
tmp[4]=+DP[5]*(DP[7]*(C[46]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+C[8]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[10]*(C[166]+C[2]*DP[6]+C[6]*
 DP[7])+DP[11]*(C[157]+C[6]*DP[6]+C[2]*DP[7])-C[12]*DP[14])+DP[6]*(DP[12]*(
 C[6]*(DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+C[24]*(-DP[8]-DP[9]))+DP[13]*(C[6]*(
 DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+C[24]*(-DP[8]-DP[9]))+DP[5]*(C[24]*DP[14]-
 C[6]*DP[10]-C[14]*DP[11])+DP[11]*(C[19]+C[2]*DP[6])+C[170]*DP[10]+C[26]*
 DP[14])+DP[12]*(C[37]*(DP[1]+DP[3])+C[52]*(-DP[2]-DP[4])+C[30]*(DP[8]+
 DP[9]))+DP[13]*(C[37]*(DP[1]+DP[3])+C[52]*(-DP[2]-DP[4])+C[30]*(DP[8]+
 DP[9]))+DP[5]*(C[52]*DP[11]-C[37]*DP[10]-C[30]*DP[14])-C[174]*DP[10]-
 C[160]*DP[11]-C[34]*DP[14])+DP[12]*(DP[7]*(DP[6]*(C[68]*DP[3]-C[6]*DP[1]-
 C[90]*DP[2]+C[70]*DP[4])+DP[7]*(C[70]*DP[3]-C[90]*DP[1]-C[6]*DP[2]+C[68]*
 DP[4])+C[113]*DP[3]-C[116]*DP[1]-C[96]*DP[2]-C[77]*DP[4])+DP[6]*(DP[2]*(-
 C[96]-C[6]*DP[6])+DP[4]*(C[68]*DP[6]-C[77])+C[122]*DP[3]-C[123]*DP[1])+
 C[137]*DP[1]+C[103]*DP[2]-C[132]*DP[3]+C[39]*DP[4])+DP[13]*(DP[2]*(DP[6]*(-
 C[16]-C[2]*DP[6]-C[6]*DP[7])+DP[7]*(-C[16]-C[2]*DP[7])+C[39])+DP[1]*(DP[7]*
 (-C[48]-C[2]*DP[6]-C[6]*DP[7])+C[56]-C[51]*DP[6]));
S[1]=V[50]*V[50];
tmp[5]=+DP[7]*(DP[7]*(DP[12]*(DP[3]*(V[50]*(V[50]*(V[50]*(C[104]*V[50]-
 C[74])+C[67]*DP[7]-C[105])-C[76])+C[44]*DP[5]-C[106]+C[68]*DP[7])+DP[1]*(
 V[50]*(C[95]-C[107]*V[50])+C[54]+C[44]*DP[5]-C[6]*DP[7]))+DP[5]*(DP[10]*(
 V[50]*(C[44]*V[50]-C[15])+C[2]*DP[7]-C[164]-C[44]*DP[5])+DP[13]*(C[44]*(
 DP[1]+DP[3])))+DP[1]*(DP[13]*(V[50]*(C[15]-C[44]*V[50])+C[45]-C[2]*
 DP[7])))+DP[12]*(DP[3]*(-C[118]-C[117]*S[1])+C[119]*DP[1])+C[49]*(DP[13]*
 DP[1]-DP[10]*DP[5]))+V[50]*(V[50]*(DP[12]*(DP[3]*(V[50]*(C[145]-C[144]*
 V[50])+C[146])+C[152]*DP[1])+C[62]*(DP[13]*DP[1]-DP[10]*DP[5]))+DP[1]*(-
 C[153]*DP[12]-C[63]*DP[13])+C[63]*DP[10]*DP[5]+C[147]*DP[12]*DP[3])+DP[5]*(
 C[62]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[181]*
 DP[10])+DP[1]*(-C[154]*DP[12]-C[64]*DP[13])+C[148]*DP[12]*DP[3];
S[2]=DP[7]*DP[7];
tmp[6]=+DP[6]*(DP[7]*(C[47]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+C[9]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[158]*(-DP[10]-DP[11])-C[13]*
 DP[14])+DP[6]*(C[15]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[25]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[27]*DP[14]-C[20]*DP[11])+DP[12]*(C[55]*(-DP[1]-DP[3])+C[53]*(-DP[2]-
 DP[4])+C[31]*(DP[8]+DP[9]))+DP[13]*(C[55]*(-DP[1]-DP[3])+C[53]*(-DP[2]-
 DP[4])+C[31]*(DP[8]+DP[9]))+DP[5]*(C[55]*DP[10]+C[53]*DP[11]-C[31]*DP[14])+
 C[161]*DP[11]-C[175]*DP[10]-C[35]*DP[14])+S[2]*(C[15]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])-C[20]*DP[10])+C[63]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[182]*DP[10];
tmp[7]=+V[50]*(DP[0]*(DP[13]*(V[50]*(V[50]*(DP[8]*(C[14]*(DP[7]-DP[0])+
 C[37]-C[36]*V[50]+C[28]*DP[6])+DP[1]*(C[36]*V[50]-C[37]+C[6]*DP[0]+C[46]*
 DP[7])+DP[2]*(C[24]*(DP[0]-DP[7])+C[28]*DP[6]-C[59]))+DP[2]*(C[25]*(DP[0]-
 DP[7])-C[60]-C[29]*DP[6])+DP[8]*(C[15]*(DP[0]-DP[7])-C[38]-C[29]*DP[6])+
 DP[1]*(C[38]-C[15]*DP[7]))+DP[6]*(C[6]*(DP[7]*(DP[1]+DP[2]+DP[8])+DP[6]*
 DP[2]-DP[8]*DP[0])+DP[2]*(C[16]-C[2]*DP[0])+DP[8]*(C[16]+C[2]*DP[6])+C[54]*
 DP[1])+DP[7]*(DP[1]*(C[6]*DP[7]-C[48]-C[2]*DP[0])+DP[8]*(C[16]-C[6]*DP[0]+
 C[2]*DP[7]))+DP[0]*(DP[8]*(C[2]*DP[0]-C[16])+C[7]*DP[1])+C[61]*DP[1]-C[39]*
 DP[8])+tmp[1]+tmp[2])+DP[6]*(V[50]*(DP[12]*(DP[7]*(C[115]*(DP[1]+DP[2])+
 C[111]*(-DP[3]-DP[4])-C[93]*DP[8]-C[9]*DP[9])+DP[5]*(C[36]*(-DP[1]-DP[2]-
 DP[3]-DP[4]))+DP[6]*(C[95]*DP[2]-C[76]*DP[4]+C[9]*DP[8]+C[25]*DP[9])+
 C[136]*DP[1]+C[134]*DP[2]-C[131]*DP[3]+C[53]*DP[4]-C[60]*DP[8]-C[31]*
 DP[9])+DP[5]*(C[36]*(DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+
 DP[11]))+DP[7]*(C[47]*(-DP[10]-DP[11])+C[9]*DP[14])+DP[6]*(-C[15]*DP[11]-
 C[25]*DP[14])+C[31]*DP[14]-C[173]*DP[10]-C[159]*DP[11])+DP[13]*(DP[2]*(
 C[53]+C[15]*DP[6]+C[47]*DP[7])+DP[8]*(C[25]*DP[6]-C[31]-C[9]*DP[7])+DP[1]*(
 C[55]+C[47]*DP[7]))+tmp[3])+tmp[4])+tmp[5]);
tmp[8]=+DP[7]*(DP[0]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[4]*DP[10]+C[10]*DP[14])+DP[7]*(C[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*
 (-DP[12]-DP[13])+DP[10]*DP[5])+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])-C[10]*DP[10]-C[4]*DP[14])+C[48]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[16]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[167]*DP[10]+C[21]*DP[14])+DP[0]*(
 DP[0]*(C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-
 C[4]*DP[14])+C[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[16]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+
 C[11]*DP[10]-C[21]*DP[14])+C[61]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[39]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])+C[180]*DP[10]-C[43]*DP[14];
tmp[9]=+DP[6]*(DP[7]*(DP[6]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])+C[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])+C[4]*DP[10]+C[10]*DP[11])+DP[7]*(C[6]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+C[10]*DP[10]+C[4]*DP[11])+C[48]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[16]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[167]*DP[10]-C[21]*DP[11])+
 DP[6]*(DP[6]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[4]*DP[11])+C[51]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[16]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[171]*DP[10]-C[21]*DP[11])+C[56]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[39]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[43]*DP[11]-C[176]*DP[10])+DP[7]*(DP[7]*(DP[7]*(
 C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[4]*
 DP[10])+C[45]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])-
 C[165]*DP[10])+C[49]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])-C[168]*DP[10])+C[64]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[183]*DP[10];
tmp[10]=+DP[12]*(DP[6]*(DP[0]*(C[7]*(DP[7]*(DP[3]+DP[4]+DP[9])+DP[0]*(-
 DP[2]-DP[9])+DP[6]*(DP[4]+DP[8]))+C[91]*(DP[7]*(DP[1]+DP[2]+DP[8])+DP[6]*
 DP[2]-DP[8]*DP[0])+C[39]*(DP[3]-DP[2]-DP[8])+DP[4]*(-C[18]-C[3]*DP[0])+
 DP[9]*(C[3]*DP[6]-C[18])+C[103]*DP[1])+DP[7]*(DP[6]*(C[7]*(-DP[1]-DP[4])-
 C[91]*DP[2]-C[3]*DP[3])+DP[7]*(C[7]*(-DP[2]-DP[3])-C[91]*DP[1]-C[3]*DP[4])+
 C[39]*(DP[2]-DP[1])+C[18]*(DP[4]-DP[3]))+DP[6]*(DP[2]*(C[39]-C[7]*DP[6])+
 DP[4]*(C[18]-C[3]*DP[6])-C[103]*DP[1]-C[39]*DP[3])+C[139]*DP[1]+C[58]*
 DP[3])+DP[0]*(DP[7]*(DP[0]*(C[7]*(-DP[1]-DP[9])-C[3]*DP[3]-C[91]*DP[8])+
 DP[7]*(C[7]*(DP[3]+DP[8])+C[91]*DP[1]+C[3]*DP[9])+C[39]*(-DP[1]-DP[8])+
 C[18]*(-DP[3]-DP[9]))+DP[0]*(DP[0]*(C[7]*DP[8]+C[3]*DP[9])+C[39]*DP[8]+
 C[18]*DP[9])-C[120]*DP[1]-C[50]*DP[3])+DP[7]*(DP[7]*(DP[1]*(C[39]-C[7]*
 DP[7])+DP[3]*(C[18]-C[3]*DP[7]))+C[120]*DP[1]+C[50]*DP[3])-C[156]*DP[1]-
 C[66]*DP[3]);
tmp[11]=+DP[5]*(DP[0]*(DP[6]*(C[6]*(DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4]-
 DP[8]-DP[9])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[10]+
 DP[11]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+
 DP[12]*(C[16]*(-DP[2]-DP[4]-DP[8]-DP[9])+C[2]*(DP[0]*(DP[2]+DP[4])+DP[6]*(-
 DP[8]-DP[9]))+C[54]*(-DP[1]-DP[3]))+DP[13]*(C[16]*(-DP[2]-DP[4]-DP[8]-
 DP[9])+C[2]*(DP[0]*(DP[2]+DP[4])+DP[6]*(-DP[8]-DP[9]))+C[54]*(-DP[1]-
 DP[3]))+DP[11]*(DP[0]*(C[4]-C[2]*DP[5])+C[10]*(-DP[6]-DP[7])+C[21]+C[16]*
 DP[5])+DP[14]*(DP[5]*(C[16]+C[2]*DP[6])+C[10]*(DP[0]-DP[7])+C[21]-C[4]*
 DP[6])+DP[10]*(C[54]*DP[5]-C[172]-C[10]*DP[7]))+tmp[8])+tmp[9])+DP[13]*(
 DP[6]*(DP[0]*(C[7]*(DP[7]*(DP[1]+DP[2]+DP[8])+DP[6]*DP[2]-DP[8]*DP[0])+
 DP[2]*(-C[18]-C[3]*DP[0])+DP[8]*(C[3]*DP[6]-C[18])+C[39]*DP[1])+DP[7]*(
 DP[1]*(-C[18]-C[3]*DP[6]-C[7]*DP[7])+DP[2]*(C[18]-C[7]*DP[6]-C[3]*DP[7]))+
 DP[6]*(DP[2]*(C[18]-C[3]*DP[6])-C[39]*DP[1])+C[58]*DP[1])+DP[0]*(DP[7]*(
 DP[1]*(C[7]*DP[7]-C[18]-C[3]*DP[0])+DP[8]*(C[3]*DP[7]-C[18]-C[7]*DP[0]))+
 DP[0]*(DP[8]*(C[18]+C[3]*DP[0]))-C[50]*DP[1])+DP[1]*(DP[7]*(DP[7]*(C[18]-
 C[3]*DP[7])+C[50])-C[66]))+tmp[10];
tmp[12]=+V[50]*(V[50]*(DP[5]*(DP[0]*(DP[12]*(DP[7]*(C[15]*(DP[1]+DP[3]+
 DP[8]+DP[9])+C[25]*(DP[2]+DP[4]))+DP[0]*(C[25]*(-DP[2]-DP[4])+C[15]*(-
 DP[8]-DP[9]))+DP[6]*(C[29]*(DP[2]+DP[4]+DP[8]+DP[9]))+C[38]*(DP[8]-DP[1]-
 DP[3]+DP[9])+C[60]*(DP[2]+DP[4]))+DP[13]*(DP[7]*(C[15]*(DP[1]+DP[3]+DP[8]+
 DP[9])+C[25]*(DP[2]+DP[4]))+DP[0]*(C[25]*(-DP[2]-DP[4])+C[15]*(-DP[8]-
 DP[9]))+DP[6]*(C[29]*(DP[2]+DP[4]+DP[8]+DP[9]))+C[38]*(DP[8]-DP[1]-DP[3]+
 DP[9])+C[60]*(DP[2]+DP[4]))+DP[5]*(DP[11]*(C[25]*(DP[0]-DP[7])-C[60]-C[29]*
 DP[6])+DP[14]*(C[15]*(DP[0]-DP[7])-C[38]-C[29]*DP[6])+DP[10]*(C[38]-C[15]*
 DP[7]))+DP[11]*(C[27]*(DP[0]-DP[7])+C[33]*DP[6]-C[163])+DP[14]*(C[20]*(
 DP[7]-DP[0])+C[33]*DP[6]-C[42])+DP[10]*(C[42]+C[20]*DP[7]))+tmp[6])+DP[12]*
 (DP[6]*(C[97]*(DP[2]*(DP[6]-DP[0]+DP[7])+DP[7]*DP[1]-DP[8]*DP[0])+C[17]*(
 DP[4]*(DP[6]-DP[0]+DP[7])+DP[7]*DP[3]-DP[9]*DP[0])+C[138]*DP[1]+C[57]*
 DP[3])+DP[0]*(DP[7]*(C[97]*(-DP[1]-DP[8])+C[17]*(-DP[3]-DP[9]))+DP[0]*(
 C[97]*DP[8]+C[17]*DP[9]))+S[2]*(C[97]*DP[1]+C[17]*DP[3])-C[155]*DP[1]-
 C[65]*DP[3])+DP[13]*(C[17]*(DP[0]*(DP[8]*(DP[0]-DP[6]-DP[7])-DP[6]*DP[2]-
 DP[7]*DP[1])+DP[6]*(DP[2]*(DP[6]+DP[7])+DP[7]*DP[1])+S[2]*DP[1])+DP[1]*(
 C[57]*DP[6]-C[65]))+tmp[7])+tmp[11]);
tmp[13]=+DP[7]*(DP[6]*(C[3]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])-C[5]*DP[10]-C[11]*DP[11])+DP[7]*(C[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[3]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])-C[11]*DP[10]-C[5]*DP[11])+C[18]*(DP[12]*(DP[1]-DP[2]+
 DP[3]-DP[4])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+C[23]*
 (DP[11]-DP[10]))+DP[6]*(DP[6]*(C[3]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])-C[5]*DP[11])+C[39]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[18]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[23]*DP[11]-C[43]*DP[10])+C[58]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[178]*DP[10];
tmp[14]=+DP[0]*(DP[7]*(DP[0]*(C[3]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])+C[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])-C[5]*DP[10]-C[11]*DP[14])+DP[7]*(C[7]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[3]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[11]*DP[10]+C[5]*DP[14])+C[18]*(
 DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-
 DP[10]-DP[14]))+C[23]*(-DP[10]-DP[14]))+DP[0]*(DP[0]*(C[3]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[5]*DP[14])+C[18]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[23]*DP[14])+C[50]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[169]*DP[10])+
 DP[7]*(DP[7]*(DP[7]*(C[3]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[5]*DP[10])+C[18]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[23]*DP[10])+C[50]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[169]*DP[10])+C[66]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[185]*DP[10];
tmp[15]=+V[50]*(DP[5]*(C[17]*(DP[0]*(DP[6]*(DP[12]*(DP[2]+DP[4]+DP[8]+
 DP[9])+DP[13]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+DP[7]*(
 DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-
 DP[10]-DP[14]))+DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5]))+DP[6]*(DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+DP[6]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+S[2]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5]))+DP[6]*(C[57]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[22]*(DP[11]*(DP[6]-DP[0]+DP[7])+
 DP[10]*DP[7]-DP[14]*DP[0])+C[177]*DP[10])+C[65]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[22]*(DP[0]*(DP[7]*(-DP[10]-DP[14])+
 DP[14]*DP[0])+DP[10]*S[2])-C[184]*DP[10])+tmp[12]);
R=+DP[5]*(DP[6]*(DP[0]*(C[7]*(DP[7]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4]-DP[8]-
 DP[9])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[11]+
 DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+
 DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+DP[12]*
 (C[18]*(DP[2]+DP[4]+DP[8]+DP[9])+C[3]*(DP[0]*(DP[2]+DP[4])+DP[6]*(-DP[8]-
 DP[9]))+C[39]*(-DP[1]-DP[3]))+DP[13]*(C[18]*(DP[2]+DP[4]+DP[8]+DP[9])+C[3]*
 (DP[0]*(DP[2]+DP[4])+DP[6]*(-DP[8]-DP[9]))+C[39]*(-DP[1]-DP[3]))+DP[11]*(
 DP[0]*(-C[5]-C[3]*DP[5])+C[11]*(DP[6]+DP[7])-C[23]-C[18]*DP[5])+DP[14]*(
 DP[5]*(C[3]*DP[6]-C[18])+C[11]*(DP[7]-DP[0])+C[5]*DP[6]-C[23])+DP[10]*(
 C[43]+C[39]*DP[5]+C[11]*DP[7]))+tmp[13])+tmp[14])+tmp[15];
R*=(N/D)*Q1[9]*Q2[1]*Q2[2]*Q1[10];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
