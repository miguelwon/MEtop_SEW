/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F109_out;
static void C109(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[6]*V[6];
S[1]=V[11]*V[11];
S[2]=V[2]*V[2];
S[3]=V[11]*V[11]*V[11]*V[11];
S[4]=V[9]*V[9]*V[9]*V[9];
C[171]=+S[4]*(S[3]*(S[2]*(S[0]*(4*(V[27]-V[29]-V[28]+V[26])))+S[1]*(6*(
 V[29]+V[28]-V[27]-V[26]))));
C[170]=+S[4]*(S[3]*(S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+6*V[22])-6*V[37]*V[20]))))));
S[5]=V[9]*V[9];
C[169]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(S[1]*(V[2]*(V[2]*(16*(V[37]*
 V[20]-V[22]*V[2]))+12*V[22])-12*V[37]*V[20])+S[5]*(6*(V[22]*V[2]-V[37]*
 V[20]))))))));
C[168]=+S[3]*(S[5]*(S[0]*(S[2]*(4*(V[27]-V[29]-V[28]+V[26]))+6*(V[29]+V[28]-
 V[27]-V[26]))+S[5]*(12*(V[29]+V[28]-V[27]-V[26]))));
C[167]=+S[5]*(S[1]*(S[2]*(S[0]*(8*(V[29]+V[28]-V[27]-V[26])))+S[5]*(6*(
 V[29]+V[28]-V[27]-V[26]))));
C[166]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(S[5]*(V[22]*
 V[2]-V[37]*V[20])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(12*S[1]-6*S[5]))+
 V[20]*(V[37]*(6*S[5]-12*S[1]))))))));
C[165]=+S[5]*(S[1]*(S[0]*(S[2]*(S[5]*(8*(V[29]+V[28]-V[27]-V[26]))+S[1]*(4*(
 V[27]-V[29]-V[28]+V[26])))+S[5]*(12*(V[27]-V[29]-V[28]+V[26]))+S[1]*(6*(
 V[29]+V[28]-V[27]-V[26])))+S[5]*(S[1]*(12*(V[29]+V[28]-V[27]-V[26])))));
C[164]=+S[4]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(12*(V[29]+V[28]-V[27]-V[26])));
C[163]=+S[4]*(S[3]*(S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(4*(V[37]*V[20]-
 V[22]*V[2]))+3*V[22])-3*V[37]*V[20]))))));
C[162]=+S[4]*(S[3]*(S[0]*(S[2]*(2*(V[29]+V[28]-V[27]-V[26]))+3*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(3*(V[29]+V[28]-V[27]-V[26]))));
C[161]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(S[5]*(V[37]*
 V[20]-V[22]*V[2])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(6*(S[1]+S[5])))+
 V[20]*(V[37]*(6*(-S[1]-S[5])))))))));
C[160]=+S[5]*(S[1]*(S[1]*(S[0]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-
 V[29]-V[28]+V[26]))+S[5]*(12*(V[27]-V[29]-V[28]+V[26]))+S[1]*(6*(V[29]+
 V[28]-V[27]-V[26])))+S[2]*(S[0]*(S[5]*(4*(V[29]+V[28]-V[27]-V[26]))))));
C[159]=+S[5]*(S[1]*(S[0]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-V[29]-
 V[28]+V[26]))+12*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[29]+V[28]-V[27]-
 V[26]))));
C[158]=+S[5]*(S[0]*(S[2]*(S[5]*(8*(V[27]-V[29]-V[28]+V[26]))+S[1]*(4*(V[29]+
 V[28]-V[27]-V[26])))+S[5]*(12*(V[29]+V[28]-V[27]-V[26]))+S[1]*(6*(V[27]-
 V[29]-V[28]+V[26])))+S[1]*(12*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[29]+
 V[28]-V[27]-V[26]))));
C[157]=+S[5]*(S[1]*(S[0]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-V[29]-
 V[28]+V[26]))+S[5]*(6*(V[27]-V[29]-V[28]+V[26]))+S[1]*(12*(V[29]+V[28]-
 V[27]-V[26]))));
C[156]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(S[5]*(V[22]*
 V[2]-V[37]*V[20])+S[1]*(V[37]*V[20]-V[22]*V[2])))+12*V[22]*S[1])-12*V[37]*
 V[20]*S[1]))))));
C[155]=+S[0]*(S[5]*(S[1]*(S[2]*(4*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(
 V[29]+V[28]-V[27]-V[26])))+S[1]*(6*(V[27]-V[29]-V[28]+V[26])))));
C[154]=+S[4]*(S[2]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(8*(V[37]*V[20]-V[22]*
 V[2]))))))));
C[153]=+S[4]*(S[2]*(S[0]*(S[1]*(4*(V[29]+V[28]-V[27]-V[26])))));
C[152]=+S[4]*(S[3]*(S[0]*(V[12]*(V[36]*(V[37]*(3*(V[37]*V[20]-V[22]*
 V[2])))))));
S[6]=V[11]*V[11]*V[11]*V[11]*V[11]*V[11];
C[151]=+S[6]*(S[4]*(3*(V[29]+V[28]-V[27]-V[26])));
C[150]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(S[5]*(V[2]*(8*(V[37]*
 V[20]-V[22]*V[2])))-6*V[22]*S[1])+6*V[37]*V[20]*S[1]))))));
C[149]=+S[5]*(S[1]*(S[3]*(6*(V[29]+V[28]-V[27]-V[26]))+S[2]*(S[0]*(S[5]*(4*(
 V[29]+V[28]-V[27]-V[26]))))));
C[148]=+S[4]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+3*V[22])-3*V[37]*V[20]))))));
C[147]=+S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(S[5]*(V[22]*V[2]-
 V[37]*V[20])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(6*S[1]-12*S[5]))+V[20]*
 (V[37]*(12*S[5]-6*S[1])))))));
C[146]=+S[5]*(S[0]*(S[2]*(S[5]*(8*(V[27]-V[29]-V[28]+V[26]))+S[1]*(4*(V[29]+
 V[28]-V[27]-V[26])))+S[5]*(12*(V[29]+V[28]-V[27]-V[26]))+S[1]*(6*(V[27]-
 V[29]-V[28]+V[26])))+S[3]*(12*(V[29]+V[28]-V[27]-V[26])));
C[145]=+S[4]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(4*(V[37]*V[20]-
 V[22]*V[2]))+3*V[22])-3*V[37]*V[20]))))));
C[144]=+S[4]*(S[1]*(S[0]*(S[2]*(2*(V[29]+V[28]-V[27]-V[26]))+3*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(6*(V[29]+V[28]-V[27]-V[26]))));
C[143]=+S[3]*(S[5]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26])))+S[1]*(24*(
 V[29]+V[28]-V[27]-V[26]))));
C[142]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+24*V[22])-24*V[37]*V[20]))))));
C[141]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(24*(V[37]*V[20]-V[22]*
 V[2])))))));
C[140]=+S[3]*(S[5]*(48*(V[29]+V[28]-V[27]-V[26])));
C[139]=+S[3]*(S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-V[22]*
 V[2]))+24*V[22])-24*V[37]*V[20])))));
C[138]=+S[3]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26])))+S[1]*(24*(V[29]+
 V[28]-V[27]-V[26])));
C[137]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(S[1]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+24*V[22])-24*V[37]*V[20])+S[5]*(12*(V[22]*V[2]-V[37]*
 V[20])))))));
C[136]=+S[3]*(S[0]*(S[2]*(8*(V[27]-V[29]-V[28]+V[26]))+12*(V[29]+V[28]-
 V[27]-V[26]))+S[5]*(24*(V[29]+V[28]-V[27]-V[26])));
C[135]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(24*(V[37]*V[20]-V[22]*V[2]))))));
C[134]=+S[3]*(48*(V[29]+V[28]-V[27]-V[26]));
C[133]=+S[1]*(S[2]*(S[0]*(16*(V[29]+V[28]-V[27]-V[26])))+S[5]*(12*(V[29]+
 V[28]-V[27]-V[26])));
C[132]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(S[5]*(V[22]*V[2]-
 V[37]*V[20])+S[1]*(V[37]*V[20]-V[22]*V[2])))+24*V[22]*S[1])-24*V[37]*V[20]*
 S[1])))));
C[131]=+S[0]*(S[1]*(S[2]*(8*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[29]+
 V[28]-V[27]-V[26])))+S[1]*(12*(V[27]-V[29]-V[28]+V[26]))));
C[130]=+S[5]*(S[1]*(S[0]*(S[2]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-
 V[29]-V[28]+V[26]))+S[1]*(48*(V[29]+V[28]-V[27]-V[26]))));
C[129]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(12*(V[37]*V[20]-V[22]*
 V[2])))))));
C[128]=+S[6]*(S[5]*(12*(V[29]+V[28]-V[27]-V[26])));
C[127]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(S[5]*(V[22]*V[2]-
 V[37]*V[20])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(24*S[1]-12*S[5]))+
 V[20]*(V[37]*(12*S[5]-24*S[1])))))));
C[126]=+S[1]*(S[0]*(S[2]*(S[5]*(16*(V[29]+V[28]-V[27]-V[26]))+S[1]*(8*(
 V[27]-V[29]-V[28]+V[26])))+S[5]*(24*(V[27]-V[29]-V[28]+V[26]))+S[1]*(12*(
 V[29]+V[28]-V[27]-V[26])))+S[5]*(S[1]*(24*(V[29]+V[28]-V[27]-V[26]))));
C[125]=+S[1]*(S[0]*(S[2]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(48*(V[29]+V[28]-V[27]-V[26])));
C[124]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(S[5]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2])))-12*V[22]*S[1])+12*V[37]*V[20]*S[1])))));
C[123]=+S[1]*(S[3]*(12*(V[29]+V[28]-V[27]-V[26]))+S[2]*(S[0]*(S[5]*(8*(
 V[29]+V[28]-V[27]-V[26])))));
C[122]=+S[0]*(S[2]*(S[5]*(16*(V[27]-V[29]-V[28]+V[26]))+S[1]*(8*(V[29]+
 V[28]-V[27]-V[26])))+S[5]*(24*(V[29]+V[28]-V[27]-V[26]))+S[1]*(12*(V[27]-
 V[29]-V[28]+V[26])))+S[3]*(24*(V[29]+V[28]-V[27]-V[26]));
C[121]=+S[3]*(S[5]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-
 V[29]-V[28]+V[26]))+S[1]*(12*(V[29]+V[28]-V[27]-V[26]))));
C[120]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+24*V[22])-24*V[37]*V[20]))))));
C[119]=+S[5]*(S[1]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26])))+S[1]*(48*(
 V[29]+V[28]-V[27]-V[26]))));
C[118]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+12*V[22])-12*V[37]*V[20]))))));
C[117]=+S[5]*(S[1]*(48*(V[29]+V[28]-V[27]-V[26])));
C[116]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(S[5]*(V[37]*V[20]-
 V[22]*V[2])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(12*(S[1]+S[5])))+V[20]*(
 V[37]*(12*(-S[1]-S[5]))))))));
C[115]=+S[1]*(S[1]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-
 V[29]-V[28]+V[26]))+S[5]*(24*(V[27]-V[29]-V[28]+V[26]))+S[1]*(12*(V[29]+
 V[28]-V[27]-V[26])))+S[2]*(S[0]*(S[5]*(8*(V[29]+V[28]-V[27]-V[26])))));
C[114]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-V[22]*
 V[2]))+24*V[22])-24*V[37]*V[20])))));
C[113]=+S[1]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26])))+S[1]*(48*(V[29]+
 V[28]-V[27]-V[26])));
C[112]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-V[22]*
 V[2]))+12*V[22])-12*V[37]*V[20])))));
C[111]=+S[1]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-V[29]-
 V[28]+V[26]))+24*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[29]+V[28]-V[27]-
 V[26])));
C[110]=+S[1]*(48*(V[29]+V[28]-V[27]-V[26]));
C[109]=+S[5]*(S[0]*(S[2]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(48*(V[29]+V[28]-V[27]-V[26])));
C[108]=+S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(S[5]*(V[22]*V[2]-V[37]*
 V[20])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(12*S[1]-24*S[5]))+V[20]*(
 V[37]*(24*S[5]-12*S[1]))))));
C[107]=+S[0]*(S[2]*(S[5]*(16*(V[27]-V[29]-V[28]+V[26]))+S[1]*(8*(V[29]+
 V[28]-V[27]-V[26])))+S[5]*(24*(V[29]+V[28]-V[27]-V[26]))+S[1]*(12*(V[27]-
 V[29]-V[28]+V[26])))+S[1]*(24*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[29]+
 V[28]-V[27]-V[26])));
C[106]=+S[0]*(S[2]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-V[29]-V[28]+
 V[26]))+S[1]*(48*(V[29]+V[28]-V[27]-V[26]));
C[105]=+S[1]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26])));
C[104]=+S[5]*(S[1]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-
 V[29]-V[28]+V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26]))));
C[103]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-V[22]*
 V[2]))+12*V[22])-12*V[37]*V[20])))));
C[102]=+S[1]*(S[0]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-V[29]-
 V[28]+V[26]))+S[5]*(12*(V[27]-V[29]-V[28]+V[26]))+S[1]*(24*(V[29]+V[28]-
 V[27]-V[26])));
C[101]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+12*V[22])-12*V[37]*V[20]))))));
C[100]=+S[3]*(S[5]*(S[2]*(S[0]*(16*(V[27]-V[29]-V[28]+V[26])))+S[1]*(12*(
 V[29]+V[28]-V[27]-V[26]))));
C[99]=+S[2]*(S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(32*(V[37]*V[20]-V[22]*
 V[2]))))))));
C[98]=+S[2]*(S[0]*(S[5]*(S[1]*(16*(V[29]+V[28]-V[27]-V[26])))));
C[97]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-
 V[22]*V[2]))+36*V[22])-36*V[37]*V[20]))))));
C[96]=+S[5]*(S[1]*(S[0]*(S[2]*(40*(V[27]-V[29]-V[28]+V[26]))+12*(V[29]+
 V[28]-V[27]-V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26]))));
C[95]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+24*V[22])-24*V[37]*V[20]))))));
C[94]=+S[3]*(S[0]*(S[5]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-V[29]-
 V[28]+V[26]))));
C[93]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(96*(V[2]*(V[2]*(V[37]*V[20]-
 V[22]*V[2])+V[22])-V[37]*V[20])))))));
C[92]=+S[0]*(S[5]*(S[1]*(48*(S[2]*(V[29]+V[28]-V[27]-V[26])+V[27]-V[29]-
 V[28]+V[26]))));
C[91]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(80*(V[37]*V[20]-
 V[22]*V[2]))+84*V[22])-84*V[37]*V[20]))))));
C[90]=+S[5]*(S[1]*(S[0]*(S[2]*(40*(V[27]-V[29]-V[28]+V[26]))+36*(V[29]+
 V[28]-V[27]-V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26]))));
C[89]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[20]-
 V[22]*V[2]))+36*V[22])-36*V[37]*V[20]))))));
C[88]=+S[5]*(S[1]*(S[0]*(S[2]*(24*(V[27]-V[29]-V[28]+V[26]))+12*(V[29]+
 V[28]-V[27]-V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26]))));
C[87]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+48*V[22])-48*V[37]*V[20]))))));
C[86]=+S[0]*(S[5]*(S[1]*(S[2]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(V[27]-
 V[29]-V[28]+V[26]))));
C[85]=+S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-V[22]*
 V[2]))+96*V[22])-96*V[37]*V[20])))));
C[84]=+S[0]*(S[5]*(S[2]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-V[29]-
 V[28]+V[26])));
C[83]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(S[5]*(16*(V[37]*V[20]-
 V[22]*V[2]))+S[1]*(32*(V[37]*V[20]-V[22]*V[2])))+12*V[22]*S[1])-12*V[37]*
 V[20]*S[1])))));
C[82]=+S[1]*(S[2]*(S[0]*(S[5]*(8*(V[27]-V[29]-V[28]+V[26]))+S[1]*(16*(V[27]-
 V[29]-V[28]+V[26]))))+S[3]*(12*(V[29]+V[28]-V[27]-V[26])));
C[81]=+S[2]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(32*(V[37]*V[20]-V[22]*
 V[2])))))));
C[80]=+S[2]*(S[0]*(S[1]*(16*(V[29]+V[28]-V[27]-V[26]))));
C[79]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-V[22]*
 V[2]))+36*V[22])-36*V[37]*V[20])))));
C[78]=+S[1]*(S[0]*(S[2]*(40*(V[27]-V[29]-V[28]+V[26]))+12*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26])));
C[77]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(S[5]*(48*(V[37]*V[20]-
 V[22]*V[2]))+S[1]*(16*(V[37]*V[20]-V[22]*V[2])))+V[22]*(24*S[1]+48*S[5]))+
 V[20]*(V[37]*(-24*S[1]-48*S[5])))))));
C[76]=+S[0]*(S[1]*(S[2]*(S[5]*(24*(V[29]+V[28]-V[27]-V[26]))+S[1]*(8*(V[29]+
 V[28]-V[27]-V[26])))+S[5]*(24*(V[27]-V[29]-V[28]+V[26]))+S[1]*(12*(V[27]-
 V[29]-V[28]+V[26]))));
C[75]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(96*(V[2]*(V[2]*(V[37]*V[20]-V[22]*
 V[2])+V[22])-V[37]*V[20]))))));
C[74]=+S[0]*(S[1]*(48*(S[2]*(V[29]+V[28]-V[27]-V[26])+V[27]-V[29]-V[28]+
 V[26])));
C[73]=+S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(S[5]*(16*(V[37]*V[20]-V[22]*
 V[2]))+S[1]*(80*(V[37]*V[20]-V[22]*V[2])))+V[22]*(84*S[1]+24*S[5]))+V[20]*(
 V[37]*(-84*S[1]-24*S[5]))))));
C[72]=+S[0]*(S[2]*(S[5]*(16*(V[27]-V[29]-V[28]+V[26]))+S[1]*(40*(V[27]-
 V[29]-V[28]+V[26])))+S[5]*(24*(V[29]+V[28]-V[27]-V[26]))+S[1]*(36*(V[29]+
 V[28]-V[27]-V[26])))+S[3]*(24*(V[29]+V[28]-V[27]-V[26]));
C[71]=+S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-V[22]*V[2]))+
 48*V[22])-48*V[37]*V[20]))));
C[70]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-V[22]*
 V[2]))+48*V[22])-48*V[37]*V[20])))));
C[69]=+S[0]*(S[1]*(S[2]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(V[27]-V[29]-
 V[28]+V[26])));
C[68]=+S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(48*(V[37]*V[20]-V[22]*
 V[2]))+36*V[22])-36*V[37]*V[20])))));
C[67]=+S[1]*(S[0]*(S[2]*(24*(V[27]-V[29]-V[28]+V[26]))+12*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26])));
C[66]=+S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(S[5]*(V[37]*V[20]-V[22]*
 V[2])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(48*(S[1]+S[5])))+V[20]*(V[37]*
 (48*(-S[1]-S[5])))))));
C[65]=+S[0]*(S[2]*(16*(S[5]*(V[29]+V[28]-V[27]-V[26])+S[1]*(V[29]+V[28]-
 V[27]-V[26])))+24*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[27]-V[29]-V[28]+
 V[26])));
C[64]=+S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(64*(V[37]*V[20]-V[22]*V[2]))+
 96*V[22])-96*V[37]*V[20]))));
C[63]=+S[0]*(S[2]*(32*(V[29]+V[28]-V[27]-V[26]))+48*(V[27]-V[29]-V[28]+
 V[26]));
C[62]=+S[1]*(24*(V[29]+V[28]-V[27]-V[26]));
C[61]=+S[1]*(12*(V[29]+V[28]-V[27]-V[26]));
C[60]=+S[3]*(S[5]*(S[2]*(S[0]*(8*(V[27]-V[29]-V[28]+V[26])))+S[1]*(12*(
 V[29]+V[28]-V[27]-V[26]))));
C[59]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+12*V[22])-12*V[37]*V[20]))))));
C[58]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(12*(V[37]*V[20]-V[22]*
 V[2])))))));
C[57]=+S[3]*(S[5]*(24*(V[29]+V[28]-V[27]-V[26])));
C[56]=+S[5]*(S[1]*(S[0]*(S[2]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(V[27]-
 V[29]-V[28]+V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26]))));
C[55]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(6*(V[37]*V[20]-V[22]*
 V[2])))))));
C[54]=+S[6]*(S[5]*(6*(V[29]+V[28]-V[27]-V[26])));
C[53]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+6*V[22])-6*V[37]*V[20]))))));
C[52]=+S[3]*(S[5]*(S[0]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(6*(V[29]+V[28]-V[27]-V[26]))));
C[51]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+12*V[22])-12*V[37]*V[20]))))));
C[50]=+S[5]*(S[1]*(S[2]*(S[0]*(8*(V[27]-V[29]-V[28]+V[26])))+S[1]*(24*(
 V[29]+V[28]-V[27]-V[26]))));
C[49]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+6*V[22])-6*V[37]*V[20]))))));
C[48]=+S[5]*(S[1]*(24*(V[29]+V[28]-V[27]-V[26])));
C[47]=+S[5]*(S[0]*(S[2]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(24*(V[29]+V[28]-V[27]-V[26])));
C[46]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+6*V[22])-6*V[37]*V[20]))))));
C[45]=+S[5]*(S[1]*(S[0]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-V[29]-
 V[28]+V[26]))+S[1]*(12*(V[29]+V[28]-V[27]-V[26]))));
C[44]=+S[4]*(S[3]*(S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+3*V[22])-3*V[37]*V[20]))))));
C[43]=+S[4]*(S[3]*(S[2]*(S[0]*(4*(V[27]-V[29]-V[28]+V[26])))+S[1]*(3*(V[29]+
 V[28]-V[27]-V[26]))));
C[42]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(S[5]*(8*(V[37]*
 V[20]-V[22]*V[2]))+S[1]*(16*(V[37]*V[20]-V[22]*V[2])))+6*V[22]*S[1])-6*
 V[37]*V[20]*S[1]))))));
C[41]=+S[5]*(S[1]*(S[2]*(S[0]*(S[5]*(4*(V[27]-V[29]-V[28]+V[26]))+S[1]*(8*(
 V[27]-V[29]-V[28]+V[26]))))+S[3]*(6*(V[29]+V[28]-V[27]-V[26]))));
C[40]=+S[4]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+9*V[22])-9*V[37]*V[20]))))));
C[39]=+S[4]*(S[1]*(S[0]*(S[2]*(10*(V[27]-V[29]-V[28]+V[26]))+3*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(6*(V[29]+V[28]-V[27]-V[26]))));
C[38]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+6*V[22])-6*V[37]*V[20]))))));
C[37]=+S[3]*(S[5]*(S[2]*(S[0]*(8*(V[27]-V[29]-V[28]+V[26])))+S[1]*(6*(V[29]+
 V[28]-V[27]-V[26]))));
C[36]=+S[2]*(S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(16*(V[37]*V[20]-V[22]*
 V[2]))))))));
C[35]=+S[2]*(S[0]*(S[5]*(S[1]*(8*(V[29]+V[28]-V[27]-V[26])))));
C[34]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-
 V[22]*V[2]))+18*V[22])-18*V[37]*V[20]))))));
C[33]=+S[5]*(S[1]*(S[0]*(S[2]*(20*(V[27]-V[29]-V[28]+V[26]))+6*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(12*(V[29]+V[28]-V[27]-V[26]))));
C[32]=+S[4]*(S[3]*(S[0]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(4*(V[37]*V[20]-
 V[22]*V[2]))+6*V[22])-6*V[37]*V[20]))))));
C[31]=+S[4]*(S[3]*(S[0]*(S[2]*(2*(V[29]+V[28]-V[27]-V[26]))+3*(V[27]-V[29]-
 V[28]+V[26]))));
C[30]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(S[5]*(24*(V[37]*
 V[20]-V[22]*V[2]))+S[1]*(8*(V[37]*V[20]-V[22]*V[2])))+V[22]*(12*S[1]+24*
 S[5]))+V[20]*(V[37]*(-12*S[1]-24*S[5]))))))));
C[29]=+S[0]*(S[5]*(S[1]*(S[2]*(S[5]*(12*(V[29]+V[28]-V[27]-V[26]))+S[1]*(4*(
 V[29]+V[28]-V[27]-V[26])))+S[5]*(12*(V[27]-V[29]-V[28]+V[26]))+S[1]*(6*(
 V[27]-V[29]-V[28]+V[26])))));
C[28]=+S[4]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(20*(V[37]*V[20]-
 V[22]*V[2]))+21*V[22])-21*V[37]*V[20]))))));
C[27]=+S[4]*(S[1]*(S[0]*(S[2]*(10*(V[27]-V[29]-V[28]+V[26]))+9*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(6*(V[29]+V[28]-V[27]-V[26]))));
C[26]=+S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(S[5]*(8*(V[37]*V[20]-
 V[22]*V[2]))+S[1]*(40*(V[37]*V[20]-V[22]*V[2])))+V[22]*(42*S[1]+12*S[5]))+
 V[20]*(V[37]*(-42*S[1]-12*S[5])))))));
C[25]=+S[5]*(S[0]*(S[2]*(S[5]*(8*(V[27]-V[29]-V[28]+V[26]))+S[1]*(20*(V[27]-
 V[29]-V[28]+V[26])))+S[5]*(12*(V[29]+V[28]-V[27]-V[26]))+S[1]*(18*(V[29]+
 V[28]-V[27]-V[26])))+S[3]*(12*(V[29]+V[28]-V[27]-V[26])));
C[24]=+S[3]*(S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+12*V[22])-12*V[37]*V[20]))))));
C[23]=+S[3]*(S[0]*(S[5]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-V[29]-
 V[28]+V[26]))));
C[22]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(48*(V[2]*(V[2]*(V[37]*V[20]-
 V[22]*V[2])+V[22])-V[37]*V[20])))))));
C[21]=+S[0]*(S[5]*(S[1]*(24*(S[2]*(V[29]+V[28]-V[27]-V[26])+V[27]-V[29]-
 V[28]+V[26]))));
C[20]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(40*(V[37]*V[20]-
 V[22]*V[2]))+42*V[22])-42*V[37]*V[20]))))));
C[19]=+S[5]*(S[1]*(S[0]*(S[2]*(20*(V[27]-V[29]-V[28]+V[26]))+18*(V[29]+
 V[28]-V[27]-V[26]))+S[1]*(12*(V[29]+V[28]-V[27]-V[26]))));
C[18]=+S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-V[22]*
 V[2]))+24*V[22])-24*V[37]*V[20])))));
C[17]=+S[4]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(12*(V[37]*V[20]-
 V[22]*V[2]))+9*V[22])-9*V[37]*V[20]))))));
C[16]=+S[4]*(S[1]*(S[0]*(S[2]*(6*(V[27]-V[29]-V[28]+V[26]))+3*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(6*(V[29]+V[28]-V[27]-V[26]))));
C[15]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(24*(V[37]*V[20]-
 V[22]*V[2]))+18*V[22])-18*V[37]*V[20]))))));
C[14]=+S[5]*(S[1]*(S[0]*(S[2]*(12*(V[27]-V[29]-V[28]+V[26]))+6*(V[29]+V[28]-
 V[27]-V[26]))+S[1]*(12*(V[29]+V[28]-V[27]-V[26]))));
C[13]=+S[4]*(S[0]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(8*(V[37]*V[20]-
 V[22]*V[2]))+12*V[22])-12*V[37]*V[20]))))));
C[12]=+S[4]*(S[0]*(S[1]*(S[2]*(4*(V[29]+V[28]-V[27]-V[26]))+6*(V[27]-V[29]-
 V[28]+V[26]))));
C[11]=+S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(S[5]*(V[37]*V[20]-
 V[22]*V[2])+S[1]*(V[37]*V[20]-V[22]*V[2])))+V[22]*(24*(S[1]+S[5])))+V[20]*(
 V[37]*(24*(-S[1]-S[5]))))))));
C[10]=+S[0]*(S[5]*(S[2]*(8*(S[5]*(V[29]+V[28]-V[27]-V[26])+S[1]*(V[29]+
 V[28]-V[27]-V[26])))+12*(S[5]*(V[27]-V[29]-V[28]+V[26])+S[1]*(V[27]-V[29]-
 V[28]+V[26]))));
C[9]=+S[4]*(S[1]*(6*(V[29]+V[28]-V[27]-V[26])));
C[8]=+S[0]*(S[5]*(S[1]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(16*(V[37]*V[20]-
 V[22]*V[2]))+24*V[22])-24*V[37]*V[20]))))));
C[7]=+S[0]*(S[5]*(S[1]*(S[2]*(8*(V[29]+V[28]-V[27]-V[26]))+12*(V[27]-V[29]-
 V[28]+V[26]))));
C[6]=+S[0]*(S[5]*(V[12]*(V[36]*(V[37]*(V[2]*(V[2]*(32*(V[37]*V[20]-V[22]*
 V[2]))+48*V[22])-48*V[37]*V[20])))));
C[5]=+S[0]*(S[5]*(S[2]*(16*(V[29]+V[28]-V[27]-V[26]))+24*(V[27]-V[29]-V[28]+
 V[26])));
C[4]=+S[5]*(S[1]*(12*(V[29]+V[28]-V[27]-V[26])));
C[3]=+S[4]*(S[1]*(3*(V[29]+V[28]-V[27]-V[26])));
C[2]=+S[5]*(S[1]*(6*(V[29]+V[28]-V[27]-V[26])));
S[7]=V[37]*V[37];
S[8]=V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+18*S[7]*S[8]*S[0]*S[9];
S[10]=V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1]*V[1]*V[1];
C[0]=+S[10]*V[48]*V[42]*S[11];
}
REAL F109_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      u                       n2     !  n2                           
    ==>==\                 /==>======!==>==\                         
      P1 |                 |  P3     !  P3 |                         
         |                 |         !     |                         
      S  |  W+    t     W+ |  E2     !  E2 |  W+    t     u          
    ==<==@-1>--@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==        
      P2    P7 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1         
               |     |               !           |     |             
               |     |        b      !  b        |     |             
               |     \========>======!==>========/    Z|-PA          
               |              P6     !  P6             3             
               |                     !                 |             
               |              S      !  S              |  S          
               \==============<======!==<==============@==<==        
                              P5     !  P5                P2         
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[172];REAL S[2];REAL tmp[12];                                  
     
if(CalcConst) C109(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+V[50]*(V[50]*(V[50]*(V[50]*(DP[3]*(C[106]*(DP[7]-DP[0])+C[62]*DP[6]-
 C[125])+DP[9]*(C[63]*(DP[0]-DP[7])+C[74])+DP[4]*(-C[80]-C[63]*DP[6]))+
 DP[9]*(C[64]*DP[7]-C[75]-C[71]*DP[0])+DP[3]*(C[114]-C[71]*DP[7])+DP[4]*(
 C[81]+C[71]*DP[6]))+DP[0]*(C[62]*(DP[7]*(DP[3]-DP[4]-DP[9])+DP[9]*DP[0]-
 DP[6]*DP[4])+DP[4]*(C[105]+C[61]*DP[0])+DP[9]*(C[72]-C[61]*DP[6])+C[109]*
 DP[1]+C[47]*DP[3]-C[84]*DP[8])+DP[7]*(DP[3]*(C[107]-C[61]*DP[6]-C[62]*
 DP[7])+DP[4]*(C[62]*DP[6]-C[105]+C[61]*DP[7])+C[84]*DP[8]-C[109]*DP[1]+
 C[65]*DP[9])+DP[6]*(DP[4]*(C[61]*DP[6]-C[122])+C[84]*DP[2]-C[48]*DP[1]-
 C[4]*DP[3]+C[69]*DP[9])+C[130]*DP[1]+C[98]*DP[2]+C[126]*DP[3]+C[123]*DP[4]-
 C[92]*DP[8]-C[76]*DP[9])+DP[7]*(C[6]*DP[1]-C[108]*DP[3]+C[103]*DP[4]-C[85]*
 DP[8]-C[66]*DP[9])+DP[0]*(C[6]*DP[8]-C[112]*DP[4]+C[73]*DP[9])+DP[6]*(
 C[108]*DP[4]-C[6]*DP[2]-C[70]*DP[9])+C[127]*DP[3]-C[120]*DP[1]-C[99]*DP[2]-
 C[124]*DP[4]+C[93]*DP[8]+C[77]*DP[9]);
S[1]=V[50]*V[50];
tmp[1]=+DP[5]*(DP[7]*(DP[10]*(V[50]*(C[47]*V[50]-C[18])+C[4]*(DP[0]-DP[7])+
 C[158]-C[47]*DP[5]-C[2]*DP[6])+DP[14]*(V[50]*(C[6]-C[5]*V[50])+C[10]-C[4]*
 DP[0]+C[5]*DP[5])+DP[11]*(C[4]*(DP[6]-DP[0])+C[2]*DP[7]-C[45])+DP[13]*(
 C[47]*(DP[1]+DP[3])+C[5]*(-DP[8]-DP[9])))+DP[0]*(DP[14]*(V[50]*(C[5]*V[50]-
 C[18])+C[25]+C[4]*DP[0]-C[5]*DP[5]-C[2]*DP[6])+DP[13]*(C[47]*(-DP[1]-
 DP[3])+C[5]*(DP[8]+DP[9]))+DP[10]*(C[47]*(DP[5]-S[1])+C[164])+DP[11]*(
 C[45]+C[2]*DP[0]-C[4]*DP[6]))+DP[6]*(DP[11]*(V[50]*(C[18]-C[5]*V[50])+C[5]*
 DP[5]-C[146]+C[2]*DP[6])+DP[13]*(C[4]*(DP[1]+DP[3])+C[5]*(-DP[2]-DP[4]))+
 DP[10]*(C[4]*(S[1]-DP[5])-C[9])+C[7]*DP[14])+V[50]*(V[50]*(C[21]*DP[14]-
 C[56]*DP[10]-C[35]*DP[11])+C[51]*DP[10]+C[36]*DP[11]-C[22]*DP[14])+DP[13]*(
 C[56]*(-DP[1]-DP[3])+C[35]*(-DP[2]-DP[4])+C[21]*(DP[8]+DP[9]))+DP[5]*(
 C[56]*DP[10]+C[35]*DP[11]-C[21]*DP[14])+C[165]*DP[10]+C[149]*DP[11]-C[29]*
 DP[14]);
tmp[2]=+DP[12]*(V[50]*(V[50]*(DP[3]*(V[50]*(V[50]*(C[134]+C[62]*DP[0]-
 C[110]*DP[7])-C[135])+DP[7]*(C[62]*DP[7]-C[111]-C[61]*DP[0])-C[136]-C[133]*
 DP[0])+DP[9]*(DP[0]*(C[62]*DP[7]-C[78]-C[61]*DP[0])+V[50]*(C[81]-C[80]*
 V[50])+DP[7]*(C[67]-C[61]*DP[7])-C[82])+DP[4]*(V[50]*(C[80]*V[50]-C[81])+
 C[131]-C[80]*DP[0])+DP[1]*(C[117]*DP[7]-C[140]-C[48]*DP[0])+C[98]*(DP[8]-
 DP[2]))+DP[9]*(C[68]*DP[7]-C[83]-C[79]*DP[0])+DP[3]*(C[112]*DP[7]-C[137])+
 DP[4]*(C[81]*DP[0]-C[132])+C[99]*(DP[2]-DP[8])+C[141]*DP[1])+DP[0]*(C[4]*(
 DP[1]*(DP[5]+DP[7])+DP[5]*DP[3]+DP[8]*DP[0]-DP[9]*DP[7])+DP[3]*(C[35]+C[2]*
 DP[7])+DP[8]*(C[96]-C[48]*DP[7])+DP[9]*(C[33]+C[2]*DP[0])+C[98]*(DP[1]+
 DP[2])+C[35]*DP[4])+DP[7]*(DP[7]*(C[4]*(DP[8]-DP[3])+C[2]*DP[9]-C[48]*
 DP[1])+DP[1]*(C[104]-C[48]*DP[5])+DP[3]*(C[45]-C[48]*DP[5])-C[88]*DP[8]-
 C[14]*DP[9])+DP[5]*(C[35]*(DP[2]+DP[4]-DP[8]-DP[9])+C[57]*(DP[1]+DP[3]))+
 C[94]*(-DP[1]-DP[2])+C[23]*(-DP[3]-DP[4])+C[100]*DP[8]+C[37]*DP[9]);
tmp[3]=+DP[7]*(DP[12]*(DP[3]*(V[50]*(V[50]*(V[50]*(V[50]*(C[62]*DP[7]-
 C[113])-C[114])+DP[7]*(C[102]-C[61]*DP[7])-C[115])+C[116]-C[103]*DP[7])+
 DP[7]*(C[4]*DP[5]-C[45]+C[2]*DP[7])+C[52]-C[50]*DP[5])+DP[1]*(DP[7]*(C[4]*(
 DP[5]+DP[7])-C[104]-C[48]*S[1])+V[50]*(C[120]+C[119]*V[50])+C[121]-C[50]*
 DP[5]))+DP[5]*(DP[10]*(DP[7]*(C[4]*(S[1]-DP[5])+C[157]-C[2]*DP[7])+V[50]*(-
 C[51]-C[50]*V[50])+C[50]*DP[5]-C[160])+DP[13]*(DP[1]*(C[4]*DP[7]-C[50])+
 DP[3]*(C[4]*DP[7]-C[50])))+DP[1]*(DP[13]*(V[50]*(V[50]*(C[50]-C[4]*DP[7])+
 C[51])+DP[7]*(C[2]*DP[7]-C[45])+C[52])))+V[50]*(V[50]*(DP[12]*(DP[3]*(
 V[50]*(C[139]+C[138]*V[50])-C[60])-C[143]*DP[1])+C[60]*(DP[10]*DP[5]-
 DP[13]*DP[1]))+C[59]*(DP[10]*DP[5]-DP[12]*DP[3]-DP[13]*DP[1])-C[142]*
 DP[12]*DP[1])+DP[5]*(C[60]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[171]*DP[10]);
tmp[4]=+DP[6]*(DP[12]*(DP[7]*(C[4]*(DP[0]*(DP[4]-DP[3]+DP[9])+DP[6]*(DP[1]-
 DP[4])+DP[7]*(DP[3]-DP[2]))+C[48]*(DP[0]*(DP[2]-DP[1]+DP[8])+DP[7]*DP[1]-
 DP[6]*DP[2])+DP[5]*(C[47]*(DP[1]+DP[3])+C[5]*(-DP[8]-DP[9]))+DP[3]*(C[2]*
 DP[6]-C[45])+DP[4]*(C[45]-C[2]*DP[7])+C[104]*(DP[2]-DP[1])-C[86]*DP[8]-
 C[7]*DP[9])+DP[0]*(DP[0]*(C[4]*(-DP[2]-DP[9])-C[2]*DP[4]-C[48]*DP[8])+
 DP[5]*(C[47]*(-DP[1]-DP[3])+C[5]*(DP[8]+DP[9]))+DP[6]*(C[4]*(DP[4]+DP[8])+
 C[48]*DP[2]+C[2]*DP[9])-C[104]*DP[2]-C[45]*DP[4]-C[90]*DP[8]-C[19]*DP[9])+
 DP[5]*(DP[6]*(C[4]*(DP[1]+DP[3])+C[5]*(-DP[2]-DP[4]))+C[56]*(-DP[1]-DP[3])+
 C[35]*(-DP[2]-DP[4])+C[21]*(DP[8]+DP[9]))+DP[6]*(DP[2]*(C[104]-C[4]*DP[6])+
 DP[4]*(C[45]-C[2]*DP[6])-C[86]*DP[8]-C[7]*DP[9])+C[94]*(DP[1]+DP[8])+C[23]*
 (DP[3]+DP[9])-C[128]*DP[2]-C[54]*DP[4]+tmp[0])+DP[13]*(V[50]*(V[50]*(DP[1]*
 (C[47]*(DP[0]-DP[7])+C[56]-C[4]*DP[6])+DP[8]*(C[5]*(DP[7]-DP[0])-C[21])+
 DP[2]*(C[35]+C[5]*DP[6]))+DP[8]*(C[22]+C[18]*DP[0]-C[6]*DP[7])+DP[1]*(
 C[18]*DP[7]-C[51])+DP[2]*(-C[36]-C[18]*DP[6]))+DP[2]*(DP[0]*(C[4]*(DP[6]+
 DP[7])-C[45]-C[2]*DP[0])+DP[6]*(C[45]-C[2]*DP[6]-C[4]*DP[7])+DP[7]*(C[45]-
 C[2]*DP[7])-C[54])+DP[8]*(DP[0]*(C[4]*(DP[7]-DP[0])+C[2]*DP[6]-C[19])+C[7]*
 (-DP[6]-DP[7])+C[23])+DP[1]*(DP[7]*(C[4]*(DP[7]-DP[0])+C[2]*DP[6]-C[45])+
 C[23]))+tmp[1]);
tmp[5]=+DP[5]*(DP[6]*(C[18]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*
 DP[0]))+DP[7]*(C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[46]*DP[11]-C[147]*DP[10]-C[11]*DP[14])+DP[12]*(C[51]*(DP[1]+
 DP[3])+C[36]*(DP[2]+DP[4])+C[22]*(-DP[8]-DP[9]))+DP[13]*(C[51]*(DP[1]+
 DP[3])+C[36]*(DP[2]+DP[4])+C[22]*(-DP[8]-DP[9]))+DP[11]*(C[147]*DP[6]-
 C[150]-C[49]*DP[0]-C[36]*DP[5])+DP[14]*(C[30]+C[26]*DP[0]+C[22]*DP[5]-C[8]*
 DP[6])+DP[10]*(C[166]-C[51]*DP[5]))+DP[0]*(C[36]*(DP[12]*(DP[8]-DP[2]-
 DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14])+DP[11]*
 DP[0])+C[58]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+
 DP[14]*(C[15]*DP[7]-C[42]-C[34]*DP[0])+DP[10]*(C[49]*DP[7]-C[169])-C[156]*
 DP[11])+DP[7]*(C[51]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+DP[10]*(C[161]-C[46]*DP[7]))+C[59]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])-C[170]*DP[10]);
tmp[6]=+DP[12]*(DP[6]*(DP[7]*(C[51]*(DP[1]-DP[2])+C[46]*(DP[3]-DP[4])+C[87]*
 DP[8]+C[8]*DP[9])+DP[0]*(C[118]*DP[2]+C[49]*DP[4]-C[91]*DP[8]-C[20]*DP[9])+
 DP[6]*(C[87]*DP[8]-C[51]*DP[2]-C[46]*DP[4]+C[8]*DP[9])+C[95]*(-DP[1]-
 DP[8])+C[24]*(-DP[3]-DP[9])+C[129]*DP[2]+C[55]*DP[4])+DP[0]*(DP[0]*(C[97]*
 DP[8]-C[99]*DP[2]-C[36]*DP[4]+C[34]*DP[9])+DP[7]*(-C[118]*DP[1]-C[49]*
 DP[3]-C[89]*DP[8]-C[15]*DP[9])+C[142]*DP[1]+C[95]*DP[2]+C[59]*DP[3]+C[24]*
 DP[4]+C[101]*DP[8]+C[38]*DP[9])+DP[7]*(DP[1]*(C[51]*DP[7]-C[59])+DP[3]*(
 C[46]*DP[7]-C[53])))+DP[13]*(DP[6]*(DP[2]*(C[46]*(-DP[6]-DP[7])+C[55]+
 C[49]*DP[0])+DP[8]*(C[8]*(DP[6]+DP[7])-C[24]-C[20]*DP[0])+DP[1]*(C[46]*
 DP[7]-C[24]))+DP[0]*(DP[8]*(C[38]+C[34]*DP[0]-C[15]*DP[7])+DP[1]*(C[59]-
 C[49]*DP[7])+DP[2]*(C[24]-C[36]*DP[0]))+DP[1]*(DP[7]*(C[46]*DP[7]-C[53])))+
 tmp[5];
tmp[7]=+DP[0]*(DP[7]*(C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[3]*DP[10]-C[9]*DP[14])+C[35]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+
 DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11]))+DP[0]*(C[2]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[3]*DP[14])+
 C[33]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[153]*(
 DP[10]+DP[11])+C[39]*DP[14])+DP[7]*(DP[7]*(C[4]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[2]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])+C[3]*DP[14]-C[9]*DP[10])+C[45]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[14]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[144]*DP[10]-C[16]*DP[14])+
 C[23]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[5]*(-DP[10]-DP[11]))+C[37]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+C[31]*(-DP[10]-DP[11])+C[43]*DP[14];
tmp[8]=+DP[6]*(DP[7]*(DP[12]*(DP[6]*(C[2]*(-DP[1]-DP[3])+C[4]*(DP[2]+
 DP[4]))+DP[7]*(C[4]*(-DP[1]-DP[3])+C[2]*(DP[2]+DP[4]))+C[45]*(DP[1]-DP[2]+
 DP[3]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[13]*(DP[6]*(C[2]*(-DP[1]-DP[3])+C[4]*(
 DP[2]+DP[4]))+DP[7]*(C[4]*(-DP[1]-DP[3])+C[2]*(DP[2]+DP[4]))+C[45]*(DP[1]-
 DP[2]+DP[3]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[5]*(DP[10]*(C[2]*DP[6]-C[45]+
 C[4]*DP[7])+DP[11]*(C[45]-C[4]*DP[6]-C[2]*DP[7])-C[7]*DP[14])+DP[10]*(C[3]*
 DP[6]-C[144]+C[9]*DP[7])+DP[11]*(C[144]-C[9]*DP[6]-C[3]*DP[7])-C[12]*
 DP[14])+DP[6]*(DP[6]*(C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[3]*DP[11])+C[45]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[7]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])+C[144]*DP[11]-C[12]*DP[14])+C[23]*(DP[12]*(-DP[1]-DP[3]-
 DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+
 C[54]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[31]*(
 DP[10]+DP[14])-C[151]*DP[11])+DP[7]*(DP[7]*(DP[7]*(C[2]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[3]*DP[10])+C[45]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[144]*DP[10])+C[52]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[162]*DP[10]);
tmp[9]=+V[50]*(V[50]*(DP[0]*(DP[5]*(DP[10]*(DP[7]*(C[48]*(DP[5]-S[1])+C[4]*
 DP[7]-C[159]-C[2]*DP[0])+V[50]*(V[50]*(C[57]+C[4]*DP[0])-C[58])+DP[0]*(-
 C[167]-C[4]*DP[5])-C[168]-C[57]*DP[5])+DP[13]*(C[35]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[1]*(C[57]+C[4]*DP[0]-C[48]*DP[7])+DP[3]*(C[57]+C[4]*DP[0]-C[48]*
 DP[7]))+DP[14]*(DP[0]*(C[4]*DP[7]-C[33]-C[2]*DP[0])+V[50]*(C[36]-C[35]*
 V[50])+DP[7]*(C[14]-C[2]*DP[7])+C[35]*DP[5]-C[41])+DP[11]*(C[35]*(S[1]-
 DP[0]-DP[5])+C[155]-C[36]*V[50]))+DP[13]*(DP[1]*(V[50]*(V[50]*(C[48]*DP[7]-
 C[57]-C[4]*DP[0])+C[58])+DP[7]*(C[45]+C[2]*DP[0]-C[4]*DP[7])+C[35]*DP[0]-
 C[23])+DP[8]*(DP[0]*(C[33]+C[2]*DP[0]-C[4]*DP[7])+V[50]*(C[35]*V[50]-
 C[36])+DP[7]*(C[2]*DP[7]-C[14])+C[37])+DP[2]*(V[50]*(C[36]-C[35]*V[50])+
 C[35]*DP[0]-C[23]))+tmp[2])+tmp[3]+tmp[4])+tmp[6]);
tmp[10]=+DP[0]*(DP[12]*(DP[0]*(C[36]*(DP[2]+DP[4])+C[34]*(-DP[8]-DP[9]))+
 DP[7]*(C[49]*(DP[1]+DP[3])+C[15]*(DP[8]+DP[9]))+C[59]*(-DP[1]-DP[3])+C[24]*
 (-DP[2]-DP[4])+C[38]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[36]*(DP[2]+DP[4])+
 C[34]*(-DP[8]-DP[9]))+DP[7]*(C[49]*(DP[1]+DP[3])+C[15]*(DP[8]+DP[9]))+
 C[59]*(-DP[1]-DP[3])+C[24]*(-DP[2]-DP[4])+C[38]*(-DP[8]-DP[9]))+DP[5]*(
 DP[14]*(C[38]+C[34]*DP[0]-C[15]*DP[7])+DP[10]*(C[59]-C[49]*DP[7])+DP[11]*(
 C[24]-C[36]*DP[0]))+DP[14]*(C[44]+C[40]*DP[0]-C[17]*DP[7])+DP[10]*(C[170]-
 C[148]*DP[7])+DP[11]*(C[32]-C[154]*DP[0]))+DP[7]*(DP[7]*(C[46]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[145]*DP[10])+C[53]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[163]*DP[10]);
tmp[11]=+DP[5]*(DP[6]*(DP[12]*(DP[7]*(C[46]*(DP[2]-DP[1]-DP[3]+DP[4])+C[8]*
 (-DP[8]-DP[9]))+DP[0]*(C[49]*(-DP[2]-DP[4])+C[20]*(DP[8]+DP[9]))+DP[6]*(
 C[46]*(DP[2]+DP[4])+C[8]*(-DP[8]-DP[9]))+C[24]*(DP[1]+DP[3]+DP[8]+DP[9])+
 C[55]*(-DP[2]-DP[4]))+DP[13]*(DP[7]*(C[46]*(DP[2]-DP[1]-DP[3]+DP[4])+C[8]*
 (-DP[8]-DP[9]))+DP[0]*(C[49]*(-DP[2]-DP[4])+C[20]*(DP[8]+DP[9]))+DP[6]*(
 C[46]*(DP[2]+DP[4])+C[8]*(-DP[8]-DP[9]))+C[24]*(DP[1]+DP[3]+DP[8]+DP[9])+
 C[55]*(-DP[2]-DP[4]))+DP[5]*(DP[11]*(C[46]*(-DP[6]-DP[7])+C[55]+C[49]*
 DP[0])+DP[14]*(C[8]*(DP[6]+DP[7])-C[24]-C[20]*DP[0])+DP[10]*(C[46]*DP[7]-
 C[24]))+DP[11]*(C[145]*(-DP[6]-DP[7])+C[152]+C[148]*DP[0])+DP[14]*(C[13]*(
 DP[6]+DP[7])-C[32]-C[28]*DP[0])+DP[10]*(C[145]*DP[7]-C[32]))+tmp[10]);
R=+V[50]*(DP[5]*(DP[0]*(DP[6]*(C[4]*(DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4]-
 DP[8]-DP[9])+DP[13]*(DP[1]-DP[2]+DP[3]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]-
 DP[10]+DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+DP[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+
 C[2]*(DP[0]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+
 DP[6]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+DP[11]*
 (C[9]*(DP[6]+DP[7])-C[144]-C[3]*DP[0]-C[45]*DP[5])+DP[14]*(C[9]*(DP[7]-
 DP[0])+C[3]*DP[6]-C[27]-C[19]*DP[5])+DP[12]*(C[45]*(DP[2]+DP[4])+C[19]*(
 DP[8]+DP[9]))+DP[13]*(C[45]*(DP[2]+DP[4])+C[19]*(DP[8]+DP[9]))-C[9]*DP[10]*
 DP[7])+tmp[7])+tmp[8])+tmp[9])+tmp[11];
R*=(N/D)*Q1[1]*Q2[2]*Q2[3]*Q1[5];
 if(cb_coeff_out)
 {
 }
 return R;
}
