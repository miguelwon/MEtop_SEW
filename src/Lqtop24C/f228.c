/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F228_out;
static void C228(REAL * C)
{
REAL* V=va_out;
REAL S[19];                                                                 
     
S[0]=V[17]*V[17];
S[1]=V[11]*V[11];
S[2]=V[9]*V[9]*V[9]*V[9];
S[3]=V[2]*V[2];
S[4]=V[1]*V[1];
C[193]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[2]*S[3]*S[4];
S[5]=V[9]*V[9];
S[6]=V[36]*V[36];
S[7]=V[20]*V[20];
S[8]=V[12]*V[12];
S[9]=V[2]*V[2]*V[2]*V[2];
C[192]=+S[5]*(S[1]*(S[4]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-64*V[26]*
 S[5]*S[3]))))-512*S[7]*S[8]*S[5]*S[9]));
C[191]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[4]-512*
 V[26]*S[5]*S[3]))))));
S[10]=V[26]*V[26];
C[190]=+S[3]*(S[5]*(S[1]*(S[3]*(1024*S[7]*S[8]-128*S[6]*S[10]*S[5])+128*
 V[47]*S[6]*V[26]*S[0]*S[4])));
S[11]=V[47]*V[47];
S[12]=V[17]*V[17]*V[17]*V[17];
S[13]=V[1]*V[1]*V[1]*V[1];
C[189]=+8*S[11]*S[6]*S[12]*S[2]*S[13];
C[188]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[2]*S[3]*S[4];
C[187]=+S[5]*(S[4]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-64*V[26]*S[5]*
 S[3]))))-512*S[7]*S[8]*S[5]*S[9]);
C[186]=+S[3]*(S[5]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[4]-512*V[26]*S[5]*
 S[3])))));
C[185]=+S[3]*(S[5]*(S[3]*(1024*S[7]*S[8]-128*S[6]*S[10]*S[5])+128*V[47]*
 S[6]*V[26]*S[0]*S[4]));
S[14]=V[11]*V[11]*V[11]*V[11];
C[184]=+S[14]*(S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(4*V[47]*S[0]*S[4]-16*V[26]*
 S[5]*S[3]))))));
C[183]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(S[4]*(S[0]*(V[47]*(32*S[1]-
 16*S[5])))-64*V[26]*S[1]*S[5]*S[3]))))));
C[182]=+S[3]*(S[5]*(S[1]*(S[3]*(S[5]*(-32*S[6]*S[10]*S[1]-128*S[7]*S[8]))+
 32*V[47]*S[6]*V[26]*S[0]*S[1]*S[4])));
C[181]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(128*S[1]-64*
 S[5]))+32*V[47]*S[0]*S[4]))))));
C[180]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(8*(S[1]+
 S[5]))))-32*V[26]*S[1]*S[5]*S[3]))))));
C[179]=+S[5]*(S[1]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(64*(-S[1]-S[5])))+
 16*V[47]*S[0]*S[4])))+64*S[10]*S[1]*S[5]*S[9])));
C[178]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(128*(S[3]*(V[26]*(-S[1]-S[5]))+V[47]*
 S[0]*S[4]))))));
S[15]=V[11]*V[11]*V[11]*V[11]*V[11]*V[11];
C[177]=+S[11]*S[6]*S[12]*S[15]*S[2]*S[13];
C[176]=+S[14]*(S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(2*(S[1]+
 S[5]))))-8*V[26]*S[1]*S[5]*S[3]))))));
C[175]=+S[14]*(S[5]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(16*(-S[1]-
 S[5])))+4*V[47]*S[0]*S[4])))+16*S[10]*S[1]*S[5]*S[9])));
C[174]=+16*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[2]*S[3]*S[4];
C[173]=+S[3]*(S[5]*(S[1]*(S[3]*(S[5]*(-32*S[6]*S[10]*S[1]-64*S[7]*S[8])-32*
 S[6]*S[10]*S[14])+32*V[47]*S[6]*V[26]*S[0]*S[1]*S[4])));
C[172]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(32*V[47]*S[0]*S[4]-64*V[26]*
 S[5]*S[3]))))));
C[171]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(8*S[1]+12*
 S[5])))-32*V[26]*S[1]*S[5]*S[3]))))));
C[170]=+S[5]*(S[6]*(S[4]*(S[0]*(V[47]*(S[1]*(S[3]*(V[26]*(-64*S[1]-96*
 S[5]))+24*V[47]*S[0]*S[4])+8*V[47]*S[0]*S[5]*S[4])))+64*S[10]*S[14]*S[5]*
 S[9]));
C[169]=+64*V[47]*V[36]*V[20]*S[0]*V[12]*S[2]*S[3]*S[4];
C[168]=+S[5]*(S[6]*(S[3]*(V[26]*(S[1]*(S[3]*(V[26]*(128*S[1]+192*S[5]))-192*
 V[47]*S[0]*S[4])-64*V[47]*S[0]*S[5]*S[4]))+16*S[11]*S[12]*S[13]));
C[167]=+S[3]*(S[5]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[0]*S[4]-256*V[26]*S[5]*
 S[3])))));
C[166]=+S[3]*(S[5]*(S[6]*(V[26]*(S[3]*(V[26]*(-384*S[1]-128*S[5]))+128*
 V[47]*S[0]*S[4]))));
C[165]=+S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(16*S[1]+8*S[5])))-
 64*V[26]*S[1]*S[5]*S[3])))));
C[164]=+S[5]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(-128*S[1]-64*S[5]))+16*
 V[47]*S[0]*S[4])))+128*S[10]*S[1]*S[5]*S[9]));
C[163]=+S[3]*(S[5]*(S[6]*(V[26]*(S[3]*(V[26]*(-256*S[1]-128*S[5]))+128*
 V[47]*S[0]*S[4]))));
C[162]=+4*S[11]*S[6]*S[12]*S[14]*S[2]*S[13];
C[161]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(8*S[1]+4*
 S[5])))-32*V[26]*S[1]*S[5]*S[3]))))));
C[160]=+S[5]*(S[1]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(-64*S[1]-32*
 S[5]))+8*V[47]*S[0]*S[4])))+64*S[10]*S[1]*S[5]*S[9])));
C[159]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(S[3]*(V[26]*(-128*S[1]-64*S[5]))+64*
 V[47]*S[0]*S[4])))));
C[158]=+8*S[11]*S[6]*S[12]*S[1]*S[2]*S[13];
C[157]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-64*V[26]*
 S[5]*S[3]))))));
C[156]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(128*(V[47]*S[0]*S[4]-V[26]*S[5]*
 S[3]))))));
C[155]=+512*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[5]*S[3]*S[4];
C[154]=+S[3]*(S[5]*(S[1]*(256*V[47]*S[6]*V[26]*S[0]*S[4]+2048*S[7]*S[8]*
 S[3])));
C[153]=+2048*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[152]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(32*V[47]*S[0]*S[4]-128*V[26]*
 S[1]*S[3]))))));
C[151]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(256*(V[47]*S[0]*S[4]-V[26]*S[1]*
 S[3]))))));
C[150]=+S[1]*(S[4]*(S[0]*(S[6]*(V[47]*(32*V[47]*S[0]*S[4]-128*V[26]*S[5]*
 S[3]))))-1024*S[7]*S[8]*S[5]*S[9]);
C[149]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(512*V[47]*S[0]*S[4]-1024*V[26]*
 S[5]*S[3])))));
C[148]=+S[3]*(S[1]*(S[3]*(2048*S[7]*S[8]-256*S[6]*S[10]*S[5])+256*V[47]*
 S[6]*V[26]*S[0]*S[4]));
C[147]=+2048*V[36]*V[26]*V[20]*V[12]*S[1]*S[9];
C[146]=+S[4]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(16*(S[1]+S[5]))))-
 64*V[26]*S[1]*S[5]*S[3])))));
C[145]=+S[1]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(128*(-S[1]-S[5])))+32*
 V[47]*S[0]*S[4])))+128*S[10]*S[1]*S[5]*S[9]));
C[144]=+S[3]*(S[1]*(S[6]*(V[26]*(256*(S[3]*(V[26]*(-S[1]-S[5]))+V[47]*S[0]*
 S[4])))));
C[143]=+32*S[11]*S[6]*S[12]*S[5]*S[13];
C[142]=+512*V[47]*V[36]*V[20]*S[0]*V[12]*S[5]*S[3]*S[4];
C[141]=+S[3]*(S[5]*(256*V[47]*S[6]*V[26]*S[0]*S[4]+2048*S[7]*S[8]*S[3]));
C[140]=+2048*V[36]*V[26]*V[20]*V[12]*S[5]*S[9];
C[139]=+4*S[11]*S[6]*S[12]*S[15]*S[5]*S[13];
C[138]=+S[14]*(S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(8*V[47]*S[0]*S[4]-32*V[26]*
 S[1]*S[3]))))));
C[137]=+S[14]*(S[3]*(S[5]*(S[6]*(V[26]*(64*(V[47]*S[0]*S[4]-V[26]*S[1]*
 S[3]))))));
C[136]=+S[9]*(S[5]*(S[1]*(128*S[6]*S[10]*S[1]+256*S[7]*S[8])));
C[135]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(48*V[47]*S[0]*S[4]-128*V[26]*
 S[1]*S[3]))))));
C[134]=+S[5]*(S[6]*(S[4]*(S[0]*(V[47]*(32*V[47]*S[0]*S[4]-384*V[26]*S[1]*
 S[3])))+256*S[10]*S[14]*S[9]));
C[133]=+S[3]*(S[5]*(S[6]*(V[26]*(256*V[47]*S[0]*S[4]-768*V[26]*S[1]*
 S[3]))));
C[132]=+S[4]*(S[0]*(S[6]*(V[47]*(32*V[47]*S[0]*S[4]-128*V[26]*S[5]*S[3]))))-
 1024*S[7]*S[8]*S[5]*S[9];
C[131]=+S[3]*(V[12]*(V[20]*(V[36]*(512*V[47]*S[0]*S[4]-1024*V[26]*S[5]*
 S[3]))));
C[130]=+S[3]*(S[3]*(2048*S[7]*S[8]-256*S[6]*S[10]*S[5])+256*V[47]*S[6]*
 V[26]*S[0]*S[4]);
C[129]=+2048*V[36]*V[26]*V[20]*V[12]*S[9];
C[128]=+S[14]*(S[4]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(4*(S[1]+S[5]))))-
 16*V[26]*S[1]*S[5]*S[3])))));
C[127]=+S[14]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(32*(-S[1]-S[5])))+8*
 V[47]*S[0]*S[4])))+32*S[10]*S[1]*S[5]*S[9]));
C[126]=+S[3]*(S[1]*(S[3]*(S[5]*(-64*S[6]*S[10]*S[1]-128*S[7]*S[8])-64*S[6]*
 S[10]*S[14])+64*V[47]*S[6]*V[26]*S[0]*S[1]*S[4]));
C[125]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[0]*S[4]-128*V[26]*S[5]*
 S[3])))));
C[124]=+S[9]*(S[1]*(128*S[6]*S[10]*S[1]+256*S[7]*S[8]));
C[123]=+S[4]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(16*S[1]+24*
 S[5])))-64*V[26]*S[1]*S[5]*S[3])))));
C[122]=+S[6]*(S[4]*(S[0]*(V[47]*(S[1]*(S[3]*(V[26]*(-128*S[1]-192*S[5]))+48*
 V[47]*S[0]*S[4])+16*V[47]*S[0]*S[5]*S[4])))+128*S[10]*S[14]*S[5]*S[9]);
C[121]=+S[6]*(S[3]*(V[26]*(S[1]*(S[3]*(V[26]*(256*S[1]+384*S[5]))-384*V[47]*
 S[0]*S[4])-128*V[47]*S[0]*S[5]*S[4]))+32*S[11]*S[12]*S[13]);
C[120]=+S[3]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[4]-512*V[26]*S[5]*
 S[3]))));
C[119]=+S[3]*(S[6]*(V[26]*(S[3]*(V[26]*(-768*S[1]-256*S[5]))+256*V[47]*S[0]*
 S[4])));
C[118]=+64*V[47]*S[6]*V[26]*S[0]*S[14]*S[5]*S[3]*S[4];
C[117]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[0]*S[4]+256*V[26]*
 S[1]*S[3]))))));
C[116]=+S[9]*(S[5]*(S[1]*(128*S[6]*S[10]*S[1]+512*S[7]*S[8])));
C[115]=+S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(32*V[47]*S[0]*S[4]-256*V[26]*S[1]*
 S[3])))));
C[114]=+S[3]*(S[5]*(S[6]*(V[26]*(256*V[47]*S[0]*S[4]-512*V[26]*S[1]*
 S[3]))));
C[113]=+S[14]*(S[4]*(S[0]*(S[6]*(V[47]*(8*V[47]*S[0]*S[4]-32*V[26]*S[5]*
 S[3])))));
C[112]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(S[4]*(S[0]*(V[47]*(64*S[1]-32*
 S[5])))-128*V[26]*S[1]*S[5]*S[3])))));
C[111]=+S[3]*(S[1]*(S[3]*(S[5]*(-64*S[6]*S[10]*S[1]-256*S[7]*S[8]))+64*
 V[47]*S[6]*V[26]*S[0]*S[1]*S[4]));
C[110]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(256*S[1]-128*S[5]))+
 64*V[47]*S[0]*S[4])))));
C[109]=+S[9]*(S[1]*(128*S[6]*S[10]*S[1]+512*S[7]*S[8]));
C[108]=+256*V[36]*V[26]*V[20]*V[12]*S[1]*S[9];
C[107]=+S[4]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(32*S[1]+16*S[5])))-128*
 V[26]*S[1]*S[5]*S[3]))));
C[106]=+S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(-256*S[1]-128*S[5]))+32*V[47]*
 S[0]*S[4])))+256*S[10]*S[1]*S[5]*S[9]);
C[105]=+S[3]*(S[6]*(V[26]*(S[3]*(V[26]*(-512*S[1]-256*S[5]))+256*V[47]*S[0]*
 S[4])));
C[104]=+16*S[11]*S[6]*S[12]*S[14]*S[5]*S[13];
C[103]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-128*V[26]*
 S[1]*S[3]))))));
C[102]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(128*V[47]*S[0]*S[4]-256*V[26]*S[1]*
 S[3])))));
C[101]=+S[4]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(16*S[1]+8*S[5])))-
 64*V[26]*S[1]*S[5]*S[3])))));
C[100]=+S[1]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(-128*S[1]-64*S[5]))+16*
 V[47]*S[0]*S[4])))+128*S[10]*S[1]*S[5]*S[9]));
C[99]=+S[3]*(S[1]*(S[6]*(V[26]*(S[3]*(V[26]*(-256*S[1]-128*S[5]))+128*V[47]*
 S[0]*S[4]))));
C[98]=+32*S[11]*S[6]*S[12]*S[1]*S[5]*S[13];
C[97]=+256*V[47]*S[6]*V[26]*S[0]*S[1]*S[5]*S[3]*S[4];
C[96]=+512*S[6]*S[10]*S[1]*S[5]*S[9];
C[95]=+S[4]*(S[1]*(S[0]*(S[6]*(V[47]*(32*V[47]*S[0]*S[4]-128*V[26]*S[5]*
 S[3])))));
C[94]=+S[3]*(S[1]*(S[6]*(V[26]*(256*(V[47]*S[0]*S[4]-V[26]*S[5]*S[3])))));
C[93]=+512*S[6]*S[10]*S[1]*S[9];
C[92]=+64*V[47]*V[36]*V[20]*S[0]*V[12]*S[14]*S[5]*S[3]*S[4];
C[91]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(192*V[47]*S[0]*S[4]-256*V[26]*
 S[1]*S[3]))))));
C[90]=+S[3]*(S[5]*(S[1]*(S[3]*(512*S[7]*S[8]-128*S[6]*S[10]*S[1])+128*V[47]*
 S[6]*V[26]*S[0]*S[4])));
C[89]=+768*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[88]=+S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(32*V[47]*S[0]*S[4]+128*V[26]*S[1]*
 S[3])))));
C[87]=+S[3]*(S[5]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[4]+512*V[26]*S[1]*
 S[3])))));
C[86]=+S[3]*(S[5]*(S[6]*(V[26]*(256*(V[47]*S[0]*S[4]+V[26]*S[1]*S[3])))));
C[85]=+512*S[6]*S[10]*S[5]*S[9];
C[84]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[5]*S[3]*S[4];
C[83]=+512*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[82]=+S[4]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(8*(S[1]+S[5]))))-
 32*V[26]*S[1]*S[5]*S[3])))));
C[81]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(S[4]*(S[0]*(V[47]*(64*S[1]+96*
 S[5])))-128*V[26]*S[1]*S[5]*S[3])))));
C[80]=+S[1]*(S[3]*(S[5]*(S[3]*(64*S[6]*S[10]*S[1]-256*S[7]*S[8])-64*V[47]*
 S[6]*V[26]*S[0]*S[4])-64*V[47]*S[6]*V[26]*S[0]*S[1]*S[4])+16*S[11]*S[6]*
 S[12]*S[13]);
C[79]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(-256*S[1]-384*S[5]))+
 192*V[47]*S[0]*S[4])))));
C[78]=+S[3]*(S[1]*(S[3]*(S[10]*(S[6]*(128*(-S[1]-S[5])))+512*S[7]*S[8])+128*
 V[47]*S[6]*V[26]*S[0]*S[4]));
C[77]=+768*V[36]*V[26]*V[20]*V[12]*S[1]*S[9];
C[76]=+S[4]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(16*(S[1]-S[5]))))-64*
 V[26]*S[1]*S[5]*S[3]))));
C[75]=+S[3]*(V[12]*(V[20]*(V[36]*(S[4]*(S[0]*(V[47]*(128*(S[1]-S[5]))))-256*
 V[26]*S[1]*S[5]*S[3]))));
C[74]=+S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(128*(S[1]-S[5])))+32*V[47]*
 S[0]*S[4])))-128*S[10]*S[1]*S[5]*S[9]);
C[73]=+S[3]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(512*(S[1]-S[5])))+256*V[47]*
 S[0]*S[4]))));
C[72]=+S[3]*(S[6]*(V[26]*(256*(S[3]*(V[26]*(S[1]-S[5]))+V[47]*S[0]*S[4]))));
C[71]=+1024*V[36]*V[26]*V[20]*V[12]*S[9];
C[70]=+512*S[6]*S[10]*S[9];
C[69]=+S[4]*(S[1]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-64*V[26]*S[5]*
 S[3])))));
C[68]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[0]*S[4]-256*V[26]*S[5]*
 S[3])))));
C[67]=+S[3]*(S[1]*(S[6]*(V[26]*(128*(V[47]*S[0]*S[4]-V[26]*S[5]*S[3])))));
C[66]=+512*V[36]*V[26]*V[20]*V[12]*S[1]*S[9];
C[65]=+256*S[6]*S[10]*S[1]*S[9];
C[64]=+256*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[5]*S[3]*S[4];
C[63]=+S[3]*(S[5]*(S[1]*(128*V[47]*S[6]*V[26]*S[0]*S[4]+1024*S[7]*S[8]*
 S[3])));
C[62]=+1024*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[61]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-64*V[26]*
 S[1]*S[3]))))));
C[60]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(128*(V[47]*S[0]*S[4]-V[26]*S[1]*
 S[3]))))));
C[59]=+16*S[11]*S[6]*S[12]*S[5]*S[13];
C[58]=+256*V[47]*V[36]*V[20]*S[0]*V[12]*S[5]*S[3]*S[4];
C[57]=+S[3]*(S[5]*(128*V[47]*S[6]*V[26]*S[0]*S[4]+1024*S[7]*S[8]*S[3]));
C[56]=+1024*V[36]*V[26]*V[20]*V[12]*S[5]*S[9];
C[55]=+2*S[11]*S[6]*S[12]*S[15]*S[5]*S[13];
C[54]=+S[14]*(S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(4*V[47]*S[0]*S[4]-16*V[26]*
 S[1]*S[3]))))));
C[53]=+S[14]*(S[3]*(S[5]*(S[6]*(V[26]*(32*(V[47]*S[0]*S[4]-V[26]*S[1]*
 S[3]))))));
C[52]=+32*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[5]*S[3]*S[4];
C[51]=+S[9]*(S[5]*(S[1]*(64*S[6]*S[10]*S[1]+128*S[7]*S[8])));
C[50]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(24*V[47]*S[0]*S[4]-64*V[26]*
 S[1]*S[3]))))));
C[49]=+S[5]*(S[6]*(S[4]*(S[0]*(V[47]*(16*V[47]*S[0]*S[4]-192*V[26]*S[1]*
 S[3])))+128*S[10]*S[14]*S[9]));
C[48]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[5]*S[3]*S[4];
C[47]=+S[3]*(S[5]*(S[6]*(V[26]*(128*V[47]*S[0]*S[4]-384*V[26]*S[1]*S[3]))));
C[46]=+32*V[47]*S[6]*V[26]*S[0]*S[14]*S[5]*S[3]*S[4];
C[45]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(32*V[47]*S[0]*S[4]+128*V[26]*
 S[1]*S[3]))))));
C[44]=+S[9]*(S[5]*(S[1]*(64*S[6]*S[10]*S[1]+256*S[7]*S[8])));
C[43]=+128*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[42]=+S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]-128*V[26]*S[1]*
 S[3])))));
C[41]=+S[3]*(S[5]*(S[6]*(V[26]*(128*V[47]*S[0]*S[4]-256*V[26]*S[1]*S[3]))));
C[40]=+8*S[11]*S[6]*S[12]*S[14]*S[5]*S[13];
C[39]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(8*V[47]*S[0]*S[4]-64*V[26]*S[1]*
 S[3]))))));
C[38]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(64*V[47]*S[0]*S[4]-128*V[26]*S[1]*
 S[3])))));
C[37]=+16*S[11]*S[6]*S[12]*S[1]*S[5]*S[13];
C[36]=+128*V[47]*S[6]*V[26]*S[0]*S[1]*S[5]*S[3]*S[4];
C[35]=+256*S[6]*S[10]*S[1]*S[5]*S[9];
C[34]=+2*S[11]*S[6]*S[12]*S[14]*S[2]*S[13];
C[33]=+16*V[47]*V[36]*V[20]*S[0]*V[12]*S[14]*S[2]*S[3]*S[4];
C[32]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(4*(S[1]+
 S[5]))))-16*V[26]*S[1]*S[5]*S[3]))))));
C[31]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(S[4]*(S[0]*(V[47]*(32*S[1]+48*
 S[5])))-64*V[26]*S[1]*S[5]*S[3]))))));
C[30]=+S[5]*(S[1]*(S[3]*(S[5]*(S[3]*(32*S[6]*S[10]*S[1]-128*S[7]*S[8])-32*
 V[47]*S[6]*V[26]*S[0]*S[4])-32*V[47]*S[6]*V[26]*S[0]*S[1]*S[4])+8*S[11]*
 S[6]*S[12]*S[13]));
C[29]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(-128*S[1]-192*
 S[5]))+96*V[47]*S[0]*S[4]))))));
C[28]=+S[3]*(S[5]*(S[1]*(S[3]*(S[10]*(S[6]*(64*(-S[1]-S[5])))+256*S[7]*
 S[8])+64*V[47]*S[6]*V[26]*S[0]*S[4])));
C[27]=+S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(S[4]*(S[0]*(V[47]*(8*(S[1]-S[5]))))-
 32*V[26]*S[1]*S[5]*S[3])))));
C[26]=+S[3]*(S[5]*(V[12]*(V[20]*(V[36]*(S[4]*(S[0]*(V[47]*(64*(S[1]-
 S[5]))))-128*V[26]*S[1]*S[5]*S[3])))));
C[25]=+S[5]*(S[6]*(S[4]*(S[0]*(V[47]*(S[3]*(V[26]*(64*(S[1]-S[5])))+16*
 V[47]*S[0]*S[4])))-64*S[10]*S[1]*S[5]*S[9]));
C[24]=+S[3]*(S[5]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(256*(S[1]-S[5])))+128*
 V[47]*S[0]*S[4])))));
C[23]=+S[3]*(S[5]*(S[6]*(V[26]*(128*(S[3]*(V[26]*(S[1]-S[5]))+V[47]*S[0]*
 S[4])))));
C[22]=+4*S[11]*S[6]*S[12]*S[14]*S[5]*S[13];
C[21]=+32*V[47]*V[36]*V[20]*S[0]*V[12]*S[14]*S[5]*S[3]*S[4];
C[20]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(8*V[47]*S[0]*S[4]-32*V[26]*S[1]*
 S[3]))))));
C[19]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(96*V[47]*S[0]*S[4]-128*V[26]*
 S[1]*S[3]))))));
C[18]=+S[3]*(S[5]*(S[1]*(S[3]*(256*S[7]*S[8]-64*S[6]*S[10]*S[1])+64*V[47]*
 S[6]*V[26]*S[0]*S[4])));
C[17]=+384*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[16]=+S[4]*(S[5]*(S[0]*(S[6]*(V[47]*(16*V[47]*S[0]*S[4]+64*V[26]*S[1]*
 S[3])))));
C[15]=+S[3]*(S[5]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[0]*S[4]+256*V[26]*S[1]*
 S[3])))));
C[14]=+S[3]*(S[5]*(S[6]*(V[26]*(128*(V[47]*S[0]*S[4]+V[26]*S[1]*S[3])))));
C[13]=+512*V[36]*V[26]*V[20]*V[12]*S[5]*S[9];
C[12]=+256*S[6]*S[10]*S[5]*S[9];
C[11]=+4*S[11]*S[6]*S[12]*S[1]*S[2]*S[13];
C[10]=+32*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[2]*S[3]*S[4];
C[9]=+S[4]*(S[5]*(S[1]*(S[0]*(S[6]*(V[47]*(8*V[47]*S[0]*S[4]-32*V[26]*S[5]*
 S[3]))))));
C[8]=+S[3]*(S[5]*(S[1]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[0]*S[4]-128*V[26]*
 S[5]*S[3]))))));
C[7]=+S[3]*(S[5]*(S[1]*(S[6]*(V[26]*(64*(V[47]*S[0]*S[4]-V[26]*S[5]*
 S[3]))))));
C[6]=+8*S[11]*S[6]*S[12]*S[1]*S[5]*S[13];
C[5]=+64*V[47]*V[36]*V[20]*S[0]*V[12]*S[1]*S[5]*S[3]*S[4];
C[4]=+64*V[47]*S[6]*V[26]*S[0]*S[1]*S[5]*S[3]*S[4];
C[3]=+256*V[36]*V[26]*V[20]*V[12]*S[1]*S[5]*S[9];
C[2]=+128*S[6]*S[10]*S[1]*S[5]*S[9];
S[16]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+16*S[12]*S[16];
S[17]=V[49]*V[49];
S[18]=V[42]*V[42];
C[0]=+S[17]*S[18]*S[13];
}
REAL F228_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         U                 S      !  S                 U             
       ==<==@==============<======!==<==============@==<==           
         P1 |              P5     !  P5             |  P1            
            |                     !                 |                
            |              N2     !  N2             |                
          W+|P7         /==<======!==<==\         W+|-PA             
            1           |  P3     !  P3 |           3                
            |           |         !     |           |                
         D  |  t     W+ |  e2     !  e2 |  W+    t  |  D             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P2    P8 |  P9    P4     !  P4   -PC | -PB    P2            
                  |               !           |                      
                  |        B      !  B        |                      
                  \========<======!==<========/                      
                           P6     !  P6                              
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[194];REAL S[2];REAL tmp[14];                                  
     
if(CalcConst) C228(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[70]*(DP[3]*(-DP[6]-DP[7])+
 DP[4]*(-DP[6]-DP[7])+DP[9]*DP[0])+C[93]*(DP[3]+DP[4])-C[65]*DP[9])+DP[3]*(
 C[147]-C[129]*DP[6]-C[71]*DP[7])+DP[4]*(C[66]-C[71]*DP[6])+DP[9]*(C[71]*
 DP[0]-C[77]))+DP[6]*(C[85]*(DP[1]+DP[2])-C[130]*DP[3]-C[119]*DP[4]-C[65]*
 DP[9])+DP[7]*(C[85]*(DP[1]+DP[2])-C[72]*DP[3]-C[105]*DP[4]-C[65]*DP[9])+
 DP[0]*(C[72]*DP[9]-C[93]*DP[4]-C[85]*DP[8])+C[96]*(-DP[1]-DP[2])+C[148]*
 DP[3]+C[144]*DP[4]+C[35]*DP[8]-C[78]*DP[9])+DP[6]*(C[140]*DP[1]+C[56]*
 DP[2]-C[131]*DP[3]-C[120]*DP[4]-C[66]*DP[9])+DP[7]*(C[56]*DP[1]-C[73]*
 DP[3]-C[66]*DP[9])+DP[0]*(C[73]*DP[9]-C[56]*DP[8])+C[149]*DP[3]-C[153]*
 DP[1]-C[83]*DP[2]+C[68]*DP[4]+C[89]*DP[8]-C[79]*DP[9])+DP[5]*(C[12]*(DP[6]*
 (-DP[1]-DP[2]-DP[3]-DP[4])+DP[7]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(DP[8]+
 DP[9]))+C[35]*(DP[1]+DP[2]+DP[3]+DP[4])+C[2]*(-DP[8]-DP[9]))+DP[6]*(DP[4]*(
 C[93]*(DP[6]+DP[7])-C[121]-C[65]*DP[0])+C[141]*DP[1]+C[133]*DP[2]-C[132]*
 DP[3]+C[35]*DP[8]-C[67]*DP[9])+DP[7]*(C[86]*DP[1]+C[114]*DP[2]-C[74]*DP[3]-
 C[106]*DP[4]+C[35]*DP[8]-C[67]*DP[9])+DP[0]*(C[96]*DP[2]-C[94]*DP[4]-C[86]*
 DP[8]+C[74]*DP[9])+C[150]*DP[3]-C[154]*DP[1]-C[151]*DP[2]+C[145]*DP[4]+
 C[90]*DP[8]-C[80]*DP[9]);
tmp[1]=+V[50]*(DP[5]*(C[12]*(DP[13]*(DP[6]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[7]*
 (-DP[1]-DP[2]-DP[3]-DP[4])+DP[0]*(DP[8]+DP[9]))+S[1]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0])+DP[5]*(DP[6]*(DP[10]+DP[11])+
 DP[7]*(DP[10]+DP[11])-DP[14]*DP[0]))+V[50]*(DP[10]*(C[62]+C[35]*V[50]-
 C[56]*DP[6]-C[13]*DP[7])+DP[11]*(C[3]+C[35]*V[50]-C[13]*DP[6])+DP[14]*(
 C[13]*DP[0]-C[17]-C[2]*V[50]))+C[35]*(DP[13]*(DP[1]+DP[2]+DP[3]+DP[4])+
 DP[5]*(-DP[10]-DP[11])-DP[11]*DP[0])+DP[14]*(C[2]*(DP[5]-DP[6]-DP[7])+
 C[23]*DP[0]-C[28])+DP[10]*(C[190]-C[185]*DP[6]-C[23]*DP[7])+DP[11]*(C[178]-
 C[166]*DP[6]-C[163]*DP[7])+DP[13]*(C[2]*(-DP[8]-DP[9])))+DP[13]*(V[50]*(
 V[50]*(C[12]*(DP[1]*(DP[6]+DP[7])+DP[2]*(DP[6]+DP[7])-DP[8]*DP[0])+C[35]*(-
 DP[1]-DP[2])+C[2]*DP[8])+DP[1]*(C[56]*DP[6]-C[62]+C[13]*DP[7])+DP[2]*(
 C[13]*DP[6]-C[3])+DP[8]*(C[17]-C[13]*DP[0]))+DP[2]*(C[35]*DP[0]-C[60]+
 C[47]*DP[6]+C[41]*DP[7])+DP[8]*(C[2]*(DP[6]+DP[7])+C[18]-C[14]*DP[0])+
 DP[1]*(C[57]*DP[6]-C[63]+C[14]*DP[7]))+tmp[0]);
tmp[2]=+DP[5]*(DP[12]*(DP[6]*(C[57]*(-DP[1]-DP[3])+C[47]*(-DP[2]-DP[4])+
 C[2]*(-DP[8]-DP[9]))+DP[7]*(C[14]*(-DP[1]-DP[3])+C[41]*(-DP[2]-DP[4])+C[2]*
 (-DP[8]-DP[9]))+DP[0]*(C[35]*(-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+C[63]*(
 DP[1]+DP[3])+C[60]*(DP[2]+DP[4])+C[18]*(-DP[8]-DP[9]))+DP[13]*(DP[6]*(
 C[57]*(-DP[1]-DP[3])+C[47]*(-DP[2]-DP[4])+C[2]*(-DP[8]-DP[9]))+DP[7]*(
 C[14]*(-DP[1]-DP[3])+C[41]*(-DP[2]-DP[4])+C[2]*(-DP[8]-DP[9]))+DP[0]*(
 C[35]*(-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+C[63]*(DP[1]+DP[3])+C[60]*(DP[2]+
 DP[4])+C[18]*(-DP[8]-DP[9]))+DP[5]*(DP[11]*(C[35]*DP[0]-C[60]+C[47]*DP[6]+
 C[41]*DP[7])+DP[14]*(C[2]*(DP[6]+DP[7])+C[18]-C[14]*DP[0])+DP[10]*(C[57]*
 DP[6]-C[63]+C[14]*DP[7]))+DP[11]*(DP[6]*(C[35]*(DP[6]+DP[7])-C[168]-C[2]*
 DP[0])+C[179]-C[156]*DP[0]-C[164]*DP[7])+DP[14]*(C[7]*(-DP[6]-DP[7])+C[25]*
 DP[0]-C[30])+DP[10]*(C[192]-C[187]*DP[6]-C[25]*DP[7]));
tmp[3]=+V[50]*(DP[5]*(C[13]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]+DP[11]*DP[6]-DP[14]*
 DP[0]))+DP[6]*(C[56]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])-C[186]*DP[10]-C[167]*DP[11]-C[3]*DP[14])+DP[12]*(C[62]*(DP[1]+
 DP[3])+C[3]*(DP[2]+DP[4])+C[17]*(-DP[8]-DP[9]))+DP[13]*(C[62]*(DP[1]+
 DP[3])+C[3]*(DP[2]+DP[4])+C[17]*(-DP[8]-DP[9]))+DP[14]*(C[24]*DP[0]-C[29]+
 C[17]*DP[5]-C[3]*DP[7])+DP[10]*(C[191]-C[62]*DP[5]-C[24]*DP[7])+DP[11]*(
 C[8]-C[3]*DP[5]))+DP[12]*(DP[6]*(C[58]*(DP[2]+DP[3])+C[142]*DP[1]+C[48]*
 DP[4]+C[83]*DP[8]-C[68]*DP[9])+DP[7]*(C[87]*DP[1]-C[75]*DP[3]+C[83]*DP[8]-
 C[68]*DP[9])+DP[0]*(C[75]*DP[9]-C[87]*DP[8])+C[91]*DP[8]-C[155]*DP[1]-
 C[84]*DP[2]-C[64]*DP[3]-C[5]*DP[4]+C[81]*DP[9])+DP[13]*(DP[8]*(C[3]*(DP[6]+
 DP[7])+C[19]-C[15]*DP[0])+DP[1]*(C[58]*DP[6]-C[64]+C[15]*DP[7])+DP[2]*(
 C[48]*DP[6]-C[5]))+tmp[1]);
tmp[4]=+DP[6]*(DP[12]*(V[50]*(V[50]*(DP[4]*(V[50]*(V[50]*(C[65]*(-DP[6]-
 DP[7])+C[124]+C[108]*V[50])+C[125])+DP[6]*(-C[99]-C[65]*DP[6]-C[93]*DP[7])+
 DP[7]*(-C[99]-C[65]*DP[7])+C[126])+DP[7]*(DP[3]*(V[50]*(C[66]+C[65]*V[50])+
 C[67])+C[35]*(DP[2]-DP[1]))+DP[2]*(C[35]*DP[6]-C[136]-C[3]*V[50]))+DP[2]*(
 C[43]*DP[5]-C[5])+DP[4]*(C[43]*DP[5]-C[52])+DP[7]*(C[68]*DP[3]-C[83]*
 DP[1]))+DP[7]*(DP[2]*(C[102]-C[2]*DP[5]+C[96]*DP[6]+C[35]*DP[7])+DP[4]*(-
 C[100]-C[2]*DP[5]-C[94]*DP[6]-C[67]*DP[7])+DP[1]*(C[2]*DP[5]-C[36])+DP[3]*(
 C[69]+C[2]*DP[5]))+DP[6]*(DP[2]*(C[102]-C[2]*DP[5]+C[35]*DP[6])+DP[4]*(-
 C[100]-C[2]*DP[5]-C[67]*DP[6]))+DP[2]*(C[51]*DP[5]-C[137])+DP[4]*(C[127]+
 C[51]*DP[5]))+DP[5]*(DP[11]*(V[50]*(V[50]*(C[2]*(-DP[6]-DP[7])+C[51]+C[43]*
 V[50])+C[172]-C[43]*DP[5])+DP[6]*(C[2]*(DP[5]-DP[6])-C[159]-C[35]*DP[7])+
 DP[7]*(C[2]*(DP[5]-DP[7])-C[159])+C[173]-C[51]*DP[5])+DP[13]*(C[2]*(DP[7]*(
 DP[1]-DP[2]+DP[3]-DP[4])+DP[6]*(-DP[2]-DP[4]))+V[50]*(C[43]*(DP[2]+DP[4]))+
 C[51]*(DP[2]+DP[4]))+DP[7]*(DP[10]*(V[50]*(C[3]+C[2]*V[50])+C[7]-C[2]*
 DP[5])))+DP[13]*(DP[2]*(V[50]*(V[50]*(C[2]*(DP[6]+DP[7])-C[51]-C[43]*
 V[50])-C[52])+DP[6]*(C[38]+C[2]*DP[6]+C[35]*DP[7])+DP[7]*(C[38]+C[2]*
 DP[7])-C[53])+DP[1]*(DP[7]*(V[50]*(-C[3]-C[2]*V[50])-C[4]))));
tmp[5]=+DP[7]*(V[50]*(V[50]*(DP[12]*(DP[3]*(V[50]*(V[50]*(C[65]*DP[7]-
 C[109]-C[108]*V[50])+C[66]*DP[7]-C[110])+C[67]*DP[7]-C[111])+DP[1]*(C[116]+
 C[3]*V[50]-C[35]*DP[7]))+DP[1]*(DP[13]*(C[44]+C[43]*V[50]-C[2]*DP[7]))+
 DP[5]*(DP[10]*(C[2]*DP[7]-C[44]-C[43]*V[50])))+DP[5]*(C[43]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+DP[10]*(C[3]*DP[7]-
 C[181]))+DP[1]*(DP[7]*(-C[83]*DP[12]-C[3]*DP[13])+C[117]*DP[12]+C[45]*
 DP[13])+DP[3]*(DP[12]*(C[68]*DP[7]-C[112])))+DP[5]*(DP[7]*(C[2]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[7]*DP[10])+C[44]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])-C[182]*DP[10])+
 DP[1]*(DP[7]*(-C[36]*DP[12]-C[4]*DP[13])+C[118]*DP[12]+C[46]*DP[13])+DP[3]*
 (DP[12]*(C[69]*DP[7]-C[113])))+tmp[4];
tmp[6]=+DP[5]*(DP[0]*(DP[6]*(DP[12]*(C[58]*(-DP[1]-DP[3])+C[48]*(-DP[2]-
 DP[4])+C[3]*(-DP[8]-DP[9]))+DP[13]*(C[58]*(-DP[1]-DP[3])+C[48]*(-DP[2]-
 DP[4])+C[3]*(-DP[8]-DP[9]))+DP[5]*(C[58]*DP[10]+C[48]*DP[11]+C[3]*DP[14])+
 C[188]*DP[10]+C[169]*DP[11]-C[8]*DP[14])+DP[7]*(C[15]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[3]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[26]*DP[10]-C[8]*DP[14])+DP[12]*(
 DP[0]*(C[15]*(DP[8]+DP[9]))+C[64]*(DP[1]+DP[3])+C[5]*(DP[2]+DP[4])+C[19]*(-
 DP[8]-DP[9]))+DP[13]*(DP[0]*(C[15]*(DP[8]+DP[9]))+C[64]*(DP[1]+DP[3])+C[5]*
 (DP[2]+DP[4])+C[19]*(-DP[8]-DP[9]))+DP[5]*(DP[14]*(C[19]-C[15]*DP[0])-
 C[64]*DP[10]-C[5]*DP[11])+DP[14]*(C[31]+C[26]*DP[0])-C[193]*DP[10]-C[10]*
 DP[11])+DP[7]*(C[3]*(DP[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5]))+C[45]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+
 DP[10]*(C[8]*(DP[6]+DP[7])-C[183]))+DP[6]*(C[52]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[174]*DP[11]));
tmp[7]=+DP[0]*(DP[6]*(DP[12]*(DP[2]*(C[35]*(DP[6]+DP[7])-C[49]-C[2]*DP[0])+
 DP[4]*(C[35]*(DP[6]+DP[7])-C[49]-C[2]*DP[0])+C[59]*(-DP[1]-DP[3])+C[4]*(-
 DP[8]-DP[9]))+DP[13]*(DP[2]*(C[35]*(DP[6]+DP[7])-C[49]-C[2]*DP[0])+DP[4]*(
 C[35]*(DP[6]+DP[7])-C[49]-C[2]*DP[0])+C[59]*(-DP[1]-DP[3])+C[4]*(-DP[8]-
 DP[9]))+DP[11]*(DP[5]*(C[35]*(-DP[6]-DP[7])+C[49]+C[2]*DP[0])+C[156]*(
 DP[6]+DP[7])+C[170]-C[7]*DP[0])+DP[5]*(C[59]*DP[10]+C[4]*DP[14])+C[189]*
 DP[10]-C[9]*DP[14])+DP[7]*(DP[12]*(C[16]*(-DP[1]-DP[3])+C[42]*(-DP[2]-
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[16]*(-DP[1]-DP[3])+C[42]*(-DP[2]-
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[5]*(C[16]*DP[10]+C[42]*DP[11]+C[4]*DP[14])+
 C[165]*DP[11]-C[27]*DP[10]-C[9]*DP[14])+DP[0]*(C[36]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[16]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[27]*DP[14]-C[157]*DP[11])+DP[12]*(
 C[37]*(DP[1]+DP[3])+C[61]*(DP[2]+DP[4])+C[20]*(-DP[8]-DP[9]))+DP[13]*(
 C[37]*(DP[1]+DP[3])+C[61]*(DP[2]+DP[4])+C[20]*(-DP[8]-DP[9]))+DP[5]*(C[20]*
 DP[14]-C[37]*DP[10]-C[61]*DP[11])+C[32]*DP[14]-C[158]*DP[10]-C[180]*
 DP[11]);
tmp[8]=+DP[12]*(DP[0]*(DP[6]*(DP[2]*(C[97]*(-DP[6]-DP[7])+C[36]*DP[0]-
 C[135])+DP[4]*(C[95]*(DP[6]+DP[7])-C[123]-C[69]*DP[0])+C[37]*DP[8]+C[6]*
 DP[9])+DP[7]*(C[37]*(DP[1]-DP[4]+DP[8])+C[6]*(DP[3]+DP[9])-C[98]*DP[2])+
 DP[0]*(C[37]*(DP[4]-DP[8])+C[98]*DP[2]-C[6]*DP[9])+C[40]*(DP[4]-DP[8])+
 C[104]*DP[2]-C[22]*DP[9])+DP[6]*(DP[7]*(DP[2]*(C[103]+C[97]*DP[6]+C[36]*
 DP[7])+DP[4]*(C[101]-C[95]*DP[6]-C[69]*DP[7])-C[37]*DP[1]-C[6]*DP[3])+
 DP[6]*(DP[2]*(C[103]+C[36]*DP[6])+DP[4]*(C[101]-C[69]*DP[6]))-C[138]*DP[2]-
 C[128]*DP[4])+DP[7]*(DP[1]*(C[40]-C[37]*DP[7])+DP[3]*(C[22]-C[6]*DP[7])))+
 DP[13]*(DP[2]*(DP[6]*(DP[0]*(C[36]*(-DP[6]-DP[7])+C[4]*DP[0]-C[50])+DP[6]*(
 C[39]+C[4]*DP[6]+C[36]*DP[7])+DP[7]*(C[39]+C[4]*DP[7])-C[54])+DP[0]*(C[37]*
 (DP[0]-DP[7])+C[40]))+C[6]*(DP[0]*(DP[8]*(DP[6]-DP[0]+DP[7])+DP[7]*DP[1])+
 DP[1]*(DP[7]*(-DP[6]-DP[7])))+C[22]*(DP[7]*DP[1]-DP[8]*DP[0]));
tmp[9]=+V[50]*(V[50]*(DP[0]*(DP[12]*(DP[6]*(DP[2]*(C[96]*(-DP[6]-DP[7])+
 C[134]+C[35]*DP[0])+DP[4]*(C[94]*(DP[6]+DP[7])+C[122]-C[67]*DP[0])+C[143]*
 DP[1]+C[59]*DP[3]+C[36]*DP[8]-C[69]*DP[9])+DP[7]*(C[88]*DP[1]+C[115]*DP[2]-
 C[76]*DP[3]+C[107]*DP[4]+C[36]*DP[8]-C[69]*DP[9])+DP[0]*(C[97]*DP[2]-C[95]*
 DP[4]-C[88]*DP[8]+C[76]*DP[9])+C[61]*DP[8]-C[98]*DP[1]-C[152]*DP[2]-C[37]*
 DP[3]-C[146]*DP[4]+C[82]*DP[9])+DP[13]*(DP[2]*(DP[6]*(C[35]*(-DP[6]-DP[7])+
 C[49]+C[2]*DP[0])+C[36]*DP[0]-C[61]+C[42]*DP[7])+DP[8]*(C[4]*(DP[6]+DP[7])+
 C[20]-C[16]*DP[0])+DP[1]*(C[59]*DP[6]-C[37]+C[16]*DP[7]))+tmp[2]+tmp[3])+
 tmp[5])+DP[12]*(DP[0]*(DP[7]*(C[84]*(DP[1]+DP[8])+C[5]*(DP[3]+DP[9]))+
 DP[8]*(C[84]*(DP[6]-DP[0])-C[92])+DP[9]*(C[5]*(DP[6]-DP[0])-C[21]))+DP[7]*(
 DP[1]*(C[84]*(-DP[6]-DP[7])+C[92])+DP[3]*(C[5]*(-DP[6]-DP[7])+C[21])))+
 DP[13]*(C[5]*(DP[0]*(DP[8]*(DP[6]-DP[0]+DP[7])+DP[7]*DP[1])+DP[1]*(DP[7]*(-
 DP[6]-DP[7])))+C[21]*(DP[7]*DP[1]-DP[8]*DP[0]))+tmp[6]);
tmp[10]=+V[50]*(DP[5]*(DP[6]*(DP[7]*(DP[12]*(DP[2]*(-C[38]-C[35]*DP[6]-C[2]*
 DP[7])+DP[4]*(-C[38]-C[35]*DP[6]-C[2]*DP[7])+C[4]*(DP[1]+DP[3]))+DP[13]*(
 DP[2]*(-C[38]-C[35]*DP[6]-C[2]*DP[7])+DP[4]*(-C[38]-C[35]*DP[6]-C[2]*
 DP[7])+C[4]*(DP[1]+DP[3]))+DP[11]*(DP[5]*(C[38]+C[35]*DP[6]+C[2]*DP[7])-
 C[160]-C[156]*DP[6]-C[7]*DP[7])+DP[10]*(C[9]-C[4]*DP[5]))+DP[6]*(DP[6]*(
 C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[7]*
 DP[11])+C[38]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-
 C[160]*DP[11])+C[53]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[175]*DP[11])+DP[7]*(DP[7]*(C[4]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[9]*DP[10])+C[46]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])-C[184]*DP[10])+tmp[7])+tmp[8]+tmp[9]);
tmp[11]=+DP[0]*(DP[6]*(DP[12]*(DP[2]*(C[36]*(DP[6]+DP[7])+C[50]-C[4]*DP[0])+
 DP[4]*(C[36]*(DP[6]+DP[7])+C[50]-C[4]*DP[0])+C[6]*(-DP[8]-DP[9]))+DP[13]*(
 DP[2]*(C[36]*(DP[6]+DP[7])+C[50]-C[4]*DP[0])+DP[4]*(C[36]*(DP[6]+DP[7])+
 C[50]-C[4]*DP[0])+C[6]*(-DP[8]-DP[9]))+DP[11]*(DP[5]*(C[36]*(-DP[6]-DP[7])+
 C[4]*DP[0]-C[50])+C[157]*(DP[6]+DP[7])-C[171]-C[9]*DP[0])+DP[14]*(C[11]+
 C[6]*DP[5]))+DP[7]*(C[6]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-
 DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+C[37]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[11]*(DP[10]+DP[14])-C[158]*DP[11])+
 DP[0]*(C[37]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[158]*
 DP[11]-C[11]*DP[14])+C[40]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+C[22]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[162]*DP[11]-C[34]*DP[14]);
tmp[12]=+DP[5]*(DP[6]*(DP[7]*(DP[12]*(DP[2]*(-C[39]-C[36]*DP[6]-C[4]*DP[7])+
 DP[4]*(-C[39]-C[36]*DP[6]-C[4]*DP[7])+C[6]*(DP[1]+DP[3]))+DP[13]*(DP[2]*(-
 C[39]-C[36]*DP[6]-C[4]*DP[7])+DP[4]*(-C[39]-C[36]*DP[6]-C[4]*DP[7])+C[6]*(
 DP[1]+DP[3]))+DP[11]*(DP[5]*(C[39]+C[36]*DP[6]+C[4]*DP[7])+C[161]-C[157]*
 DP[6]-C[9]*DP[7])+DP[10]*(-C[11]-C[6]*DP[5]))+DP[6]*(DP[6]*(C[4]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[9]*DP[11])+C[39]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[161]*DP[11])+
 C[54]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[176]*
 DP[11])+DP[7]*(DP[7]*(C[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])-C[11]*DP[10])+C[22]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[34]*DP[10])+tmp[11])+DP[6]*(DP[2]*(DP[12]*(DP[0]*(
 C[98]*(-DP[6]-DP[7])+C[104]+C[37]*DP[0])+DP[6]*(C[37]*DP[6]-C[104]+C[98]*
 DP[7])+DP[7]*(C[37]*DP[7]-C[104])+C[139])+DP[13]*(DP[0]*(C[37]*(-DP[6]-
 DP[7])+C[40]+C[6]*DP[0])+DP[6]*(C[6]*DP[6]-C[40]+C[37]*DP[7])+DP[7]*(C[6]*
 DP[7]-C[40])+C[55]))+DP[4]*(DP[12]*(DP[0]*(C[37]*(-DP[6]-DP[7])+C[40]+C[6]*
 DP[0])+DP[6]*(C[6]*DP[6]-C[40]+C[37]*DP[7])+DP[7]*(C[6]*DP[7]-C[40])+
 C[55])));
tmp[13]=+DP[5]*(DP[6]*(DP[0]*(C[37]*(DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5]))+DP[0]*(C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[11]*DP[11])+C[40]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(C[158]*(-DP[6]-DP[7])+C[162]))+DP[6]*(
 DP[2]*(DP[12]*(C[40]-C[6]*DP[6]-C[37]*DP[7])+DP[13]*(C[40]-C[6]*DP[6]-
 C[37]*DP[7]))+DP[4]*(DP[12]*(C[40]-C[6]*DP[6]-C[37]*DP[7])+DP[13]*(C[40]-
 C[6]*DP[6]-C[37]*DP[7]))+DP[11]*(DP[5]*(C[6]*DP[6]-C[40]+C[37]*DP[7])+
 C[11]*DP[6]-C[162]+C[158]*DP[7]))+DP[7]*(DP[7]*(C[6]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[11]*DP[11])+C[40]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[162]*DP[11])+C[55]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[177]*
 DP[11]));
R=+S[1]*(V[50]*(DP[5]*(DP[0]*(C[5]*(DP[7]*(DP[12]*(-DP[1]-DP[3]-DP[8]-
 DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+DP[0]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[6]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+DP[14]*(C[10]*(DP[6]-
 DP[0]+DP[7])-C[33]-C[21]*DP[5])+C[21]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13]))+C[10]*DP[10]*DP[7])+DP[7]*(C[5]*(DP[6]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+DP[7]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5]))+C[21]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+DP[10]*(C[10]*(-DP[6]-DP[7])+C[33])))+tmp[10])+
 tmp[12])+tmp[13];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[0] += (R*1)/(1);
 }
 return R;
}
