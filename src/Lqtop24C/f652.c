/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F652_out;
static void C652(REAL * C)
{
REAL* V=va_out;
REAL S[19];                                                                 
     
S[0]=V[11]*V[11];
S[1]=V[9]*V[9];
S[2]=V[17]*V[17];
S[3]=V[2]*V[2];
S[4]=V[1]*V[1];
S[5]=V[36]*V[36];
C[193]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(4*(S[0]+
 S[1]))))-16*V[26]*S[0]*S[1]*S[3]))))));
C[192]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(S[4]*(S[2]*(V[47]*(32*S[0]+
 48*S[1])))-64*V[26]*S[0]*S[1]*S[3]))))));
S[6]=V[26]*V[26];
S[7]=V[20]*V[20];
S[8]=V[12]*V[12];
S[9]=V[47]*V[47];
S[10]=V[17]*V[17]*V[17]*V[17];
S[11]=V[1]*V[1]*V[1]*V[1];
C[191]=+S[1]*(S[0]*(S[3]*(S[1]*(S[3]*(32*S[5]*S[6]*S[0]-128*S[7]*S[8])-32*
 V[47]*S[5]*V[26]*S[2]*S[4])-32*V[47]*S[5]*V[26]*S[2]*S[0]*S[4])+8*S[9]*
 S[5]*S[10]*S[11]));
C[190]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(-128*S[0]-192*
 S[1]))+96*V[47]*S[2]*S[4]))))));
C[189]=+S[3]*(S[1]*(S[0]*(S[3]*(S[6]*(S[5]*(64*(-S[0]-S[1])))+256*S[7]*
 S[8])+64*V[47]*S[5]*V[26]*S[2]*S[4])));
S[12]=V[11]*V[11]*V[11]*V[11]*V[11]*V[11];
S[13]=V[9]*V[9]*V[9]*V[9];
C[188]=+S[9]*S[5]*S[10]*S[12]*S[13]*S[11];
S[14]=V[11]*V[11]*V[11]*V[11];
C[187]=+S[14]*(S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(2*(S[0]+
 S[1]))))-8*V[26]*S[0]*S[1]*S[3]))))));
S[15]=V[2]*V[2]*V[2]*V[2];
C[186]=+S[14]*(S[1]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(16*(-S[0]-
 S[1])))+4*V[47]*S[2]*S[4])))+16*S[6]*S[0]*S[1]*S[15])));
C[185]=+16*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[13]*S[3]*S[4];
C[184]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(-32*S[5]*S[6]*S[0]-64*S[7]*S[8])-32*
 S[5]*S[6]*S[14])+32*V[47]*S[5]*V[26]*S[2]*S[0]*S[4])));
C[183]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(32*V[47]*S[2]*S[4]-64*V[26]*
 S[1]*S[3]))))));
C[182]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(8*S[0]+4*
 S[1])))-32*V[26]*S[0]*S[1]*S[3]))))));
C[181]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(-64*S[0]-32*
 S[1]))+8*V[47]*S[2]*S[4])))+64*S[6]*S[0]*S[1]*S[15])));
C[180]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(S[3]*(V[26]*(-128*S[0]-64*S[1]))+64*
 V[47]*S[2]*S[4])))));
C[179]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(8*(S[0]+
 S[1]))))-32*V[26]*S[0]*S[1]*S[3]))))));
C[178]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(64*(-S[0]-S[1])))+
 16*V[47]*S[2]*S[4])))+64*S[6]*S[0]*S[1]*S[15])));
C[177]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(128*(S[3]*(V[26]*(-S[0]-S[1]))+V[47]*
 S[2]*S[4]))))));
C[176]=+S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(16*S[0]+8*S[1])))-
 64*V[26]*S[0]*S[1]*S[3])))));
C[175]=+S[1]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(-128*S[0]-64*S[1]))+16*
 V[47]*S[2]*S[4])))+128*S[6]*S[0]*S[1]*S[15]));
C[174]=+S[3]*(S[1]*(S[5]*(V[26]*(S[3]*(V[26]*(-256*S[0]-128*S[1]))+128*
 V[47]*S[2]*S[4]))));
C[173]=+4*S[9]*S[5]*S[10]*S[14]*S[13]*S[11];
C[172]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(8*S[0]+12*
 S[1])))-32*V[26]*S[0]*S[1]*S[3]))))));
C[171]=+S[1]*(S[5]*(S[4]*(S[2]*(V[47]*(S[0]*(S[3]*(V[26]*(-64*S[0]-96*
 S[1]))+24*V[47]*S[2]*S[4])+8*V[47]*S[2]*S[1]*S[4])))+64*S[6]*S[14]*S[1]*
 S[15]));
C[170]=+64*V[47]*V[36]*V[20]*S[2]*V[12]*S[13]*S[3]*S[4];
C[169]=+S[1]*(S[5]*(S[3]*(V[26]*(S[0]*(S[3]*(V[26]*(128*S[0]+192*S[1]))-192*
 V[47]*S[2]*S[4])-64*V[47]*S[2]*S[1]*S[4]))+16*S[9]*S[10]*S[11]));
C[168]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[2]*S[4]-256*V[26]*S[1]*
 S[3])))));
C[167]=+S[3]*(S[1]*(S[5]*(V[26]*(S[3]*(V[26]*(-384*S[0]-128*S[1]))+128*
 V[47]*S[2]*S[4]))));
C[166]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-64*V[26]*
 S[1]*S[3]))))));
C[165]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(128*(V[47]*S[2]*S[4]-V[26]*S[1]*
 S[3]))))));
C[164]=+4*S[9]*S[5]*S[10]*S[12]*S[1]*S[11];
C[163]=+S[14]*(S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(8*V[47]*S[2]*S[4]-32*V[26]*
 S[0]*S[3]))))));
C[162]=+S[14]*(S[3]*(S[1]*(S[5]*(V[26]*(64*(V[47]*S[2]*S[4]-V[26]*S[0]*
 S[3]))))));
C[161]=+S[15]*(S[1]*(S[0]*(128*S[5]*S[6]*S[0]+256*S[7]*S[8])));
C[160]=+S[14]*(S[4]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(4*(S[0]+S[1]))))-
 16*V[26]*S[0]*S[1]*S[3])))));
C[159]=+S[14]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(32*(-S[0]-S[1])))+8*
 V[47]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[15]));
C[158]=+S[3]*(S[0]*(S[3]*(S[1]*(-64*S[5]*S[6]*S[0]-128*S[7]*S[8])-64*S[5]*
 S[6]*S[14])+64*V[47]*S[5]*V[26]*S[2]*S[0]*S[4]));
C[157]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[2]*S[4]-128*V[26]*S[1]*
 S[3])))));
C[156]=+S[15]*(S[0]*(128*S[5]*S[6]*S[0]+256*S[7]*S[8]));
C[155]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-128*V[26]*
 S[0]*S[3]))))));
C[154]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(128*V[47]*S[2]*S[4]-256*V[26]*S[0]*
 S[3])))));
C[153]=+S[4]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(16*S[0]+8*S[1])))-
 64*V[26]*S[0]*S[1]*S[3])))));
C[152]=+S[0]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(-128*S[0]-64*S[1]))+16*
 V[47]*S[2]*S[4])))+128*S[6]*S[0]*S[1]*S[15]));
C[151]=+S[3]*(S[0]*(S[5]*(V[26]*(S[3]*(V[26]*(-256*S[0]-128*S[1]))+128*
 V[47]*S[2]*S[4]))));
C[150]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(192*V[47]*S[2]*S[4]-256*
 V[26]*S[0]*S[3]))))));
C[149]=+S[3]*(S[1]*(S[0]*(S[3]*(512*S[7]*S[8]-128*S[5]*S[6]*S[0])+128*V[47]*
 S[5]*V[26]*S[2]*S[4])));
C[148]=+768*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[147]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(32*V[47]*S[2]*S[4]-128*V[26]*
 S[0]*S[3]))))));
C[146]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(256*(V[47]*S[2]*S[4]-V[26]*S[0]*
 S[3]))))));
C[145]=+S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(32*V[47]*S[2]*S[4]-256*V[26]*S[0]*
 S[3])))));
C[144]=+S[3]*(S[1]*(S[5]*(V[26]*(256*V[47]*S[2]*S[4]-512*V[26]*S[0]*
 S[3]))));
C[143]=+S[4]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(8*(S[0]+S[1]))))-
 32*V[26]*S[0]*S[1]*S[3])))));
C[142]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(S[4]*(S[2]*(V[47]*(64*S[0]+96*
 S[1])))-128*V[26]*S[0]*S[1]*S[3])))));
C[141]=+S[0]*(S[3]*(S[1]*(S[3]*(64*S[5]*S[6]*S[0]-256*S[7]*S[8])-64*V[47]*
 S[5]*V[26]*S[2]*S[4])-64*V[47]*S[5]*V[26]*S[2]*S[0]*S[4])+16*S[9]*S[5]*
 S[10]*S[11]);
C[140]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(-256*S[0]-384*S[1]))+
 192*V[47]*S[2]*S[4])))));
C[139]=+S[3]*(S[0]*(S[3]*(S[6]*(S[5]*(128*(-S[0]-S[1])))+512*S[7]*S[8])+128*
 V[47]*S[5]*V[26]*S[2]*S[4]));
C[138]=+768*V[36]*V[26]*V[20]*V[12]*S[0]*S[15];
C[137]=+S[4]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(16*(S[0]+S[1]))))-
 64*V[26]*S[0]*S[1]*S[3])))));
C[136]=+S[0]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(128*(-S[0]-S[1])))+32*
 V[47]*S[2]*S[4])))+128*S[6]*S[0]*S[1]*S[15]));
C[135]=+S[3]*(S[0]*(S[5]*(V[26]*(256*(S[3]*(V[26]*(-S[0]-S[1]))+V[47]*S[2]*
 S[4])))));
C[134]=+S[4]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(32*S[0]+16*S[1])))-128*
 V[26]*S[0]*S[1]*S[3]))));
C[133]=+S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(-256*S[0]-128*S[1]))+32*V[47]*
 S[2]*S[4])))+256*S[6]*S[0]*S[1]*S[15]);
C[132]=+S[3]*(S[5]*(V[26]*(S[3]*(V[26]*(-512*S[0]-256*S[1]))+256*V[47]*S[2]*
 S[4])));
C[131]=+16*S[9]*S[5]*S[10]*S[14]*S[1]*S[11];
C[130]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(48*V[47]*S[2]*S[4]-128*V[26]*
 S[0]*S[3]))))));
C[129]=+S[1]*(S[5]*(S[4]*(S[2]*(V[47]*(32*V[47]*S[2]*S[4]-384*V[26]*S[0]*
 S[3])))+256*S[6]*S[14]*S[15]));
C[128]=+S[3]*(S[1]*(S[5]*(V[26]*(256*V[47]*S[2]*S[4]-768*V[26]*S[0]*
 S[3]))));
C[127]=+S[4]*(S[0]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(16*S[0]+24*
 S[1])))-64*V[26]*S[0]*S[1]*S[3])))));
C[126]=+S[5]*(S[4]*(S[2]*(V[47]*(S[0]*(S[3]*(V[26]*(-128*S[0]-192*S[1]))+48*
 V[47]*S[2]*S[4])+16*V[47]*S[2]*S[1]*S[4])))+128*S[6]*S[14]*S[1]*S[15]);
C[125]=+S[5]*(S[3]*(V[26]*(S[0]*(S[3]*(V[26]*(256*S[0]+384*S[1]))-384*V[47]*
 S[2]*S[4])-128*V[47]*S[2]*S[1]*S[4]))+32*S[9]*S[10]*S[11]);
C[124]=+S[3]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[2]*S[4]-512*V[26]*S[1]*
 S[3]))));
C[123]=+S[3]*(S[5]*(V[26]*(S[3]*(V[26]*(-768*S[0]-256*S[1]))+256*V[47]*S[2]*
 S[4])));
C[122]=+256*V[47]*S[5]*V[26]*S[2]*S[0]*S[1]*S[3]*S[4];
C[121]=+S[4]*(S[0]*(S[2]*(S[5]*(V[47]*(32*V[47]*S[2]*S[4]-128*V[26]*S[1]*
 S[3])))));
C[120]=+S[3]*(S[0]*(S[5]*(V[26]*(256*(V[47]*S[2]*S[4]-V[26]*S[1]*S[3])))));
C[119]=+64*V[47]*V[36]*V[20]*S[2]*V[12]*S[14]*S[1]*S[3]*S[4];
C[118]=+64*V[47]*S[5]*V[26]*S[2]*S[14]*S[1]*S[3]*S[4];
C[117]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[2]*S[4]+256*V[26]*
 S[0]*S[3]))))));
C[116]=+S[15]*(S[1]*(S[0]*(128*S[5]*S[6]*S[0]+512*S[7]*S[8])));
C[115]=+512*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[114]=+32*S[9]*S[5]*S[10]*S[0]*S[1]*S[11];
C[113]=+512*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[1]*S[3]*S[4];
C[112]=+S[3]*(S[1]*(S[0]*(256*V[47]*S[5]*V[26]*S[2]*S[4]+2048*S[7]*S[8]*
 S[3])));
C[111]=+2048*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[110]=+512*S[5]*S[6]*S[0]*S[1]*S[15];
C[109]=+128*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[1]*S[3]*S[4];
C[108]=+S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(32*V[47]*S[2]*S[4]+128*V[26]*S[0]*
 S[3])))));
C[107]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[2]*S[4]+512*V[26]*S[0]*
 S[3])))));
C[106]=+S[3]*(S[1]*(S[5]*(V[26]*(256*(V[47]*S[2]*S[4]+V[26]*S[0]*S[3])))));
C[105]=+32*S[9]*S[5]*S[10]*S[1]*S[11];
C[104]=+512*V[47]*V[36]*V[20]*S[2]*V[12]*S[1]*S[3]*S[4];
C[103]=+S[3]*(S[1]*(256*V[47]*S[5]*V[26]*S[2]*S[4]+2048*S[7]*S[8]*S[3]));
C[102]=+2048*V[36]*V[26]*V[20]*V[12]*S[1]*S[15];
C[101]=+512*S[5]*S[6]*S[1]*S[15];
C[100]=+S[14]*(S[4]*(S[2]*(S[5]*(V[47]*(8*V[47]*S[2]*S[4]-32*V[26]*S[1]*
 S[3])))));
C[99]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(S[4]*(S[2]*(V[47]*(64*S[0]-32*
 S[1])))-128*V[26]*S[0]*S[1]*S[3])))));
C[98]=+S[3]*(S[0]*(S[3]*(S[1]*(-64*S[5]*S[6]*S[0]-256*S[7]*S[8]))+64*V[47]*
 S[5]*V[26]*S[2]*S[0]*S[4]));
C[97]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(256*S[0]-128*S[1]))+64*
 V[47]*S[2]*S[4])))));
C[96]=+S[15]*(S[0]*(128*S[5]*S[6]*S[0]+512*S[7]*S[8]));
C[95]=+256*V[36]*V[26]*V[20]*V[12]*S[0]*S[15];
C[94]=+S[4]*(S[0]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-64*V[26]*S[1]*
 S[3])))));
C[93]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[2]*S[4]-256*V[26]*S[1]*
 S[3])))));
C[92]=+S[3]*(S[0]*(S[5]*(V[26]*(128*(V[47]*S[2]*S[4]-V[26]*S[1]*S[3])))));
C[91]=+512*V[36]*V[26]*V[20]*V[12]*S[0]*S[15];
C[90]=+256*S[5]*S[6]*S[0]*S[15];
C[89]=+S[0]*(S[4]*(S[2]*(S[5]*(V[47]*(32*V[47]*S[2]*S[4]-128*V[26]*S[1]*
 S[3]))))-1024*S[7]*S[8]*S[1]*S[15]);
C[88]=+S[3]*(S[0]*(V[12]*(V[20]*(V[36]*(512*V[47]*S[2]*S[4]-1024*V[26]*S[1]*
 S[3])))));
C[87]=+S[3]*(S[0]*(S[3]*(2048*S[7]*S[8]-256*S[5]*S[6]*S[1])+256*V[47]*S[5]*
 V[26]*S[2]*S[4]));
C[86]=+2048*V[36]*V[26]*V[20]*V[12]*S[0]*S[15];
C[85]=+512*S[5]*S[6]*S[0]*S[15];
C[84]=+S[4]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(16*(S[0]-S[1]))))-64*
 V[26]*S[0]*S[1]*S[3]))));
C[83]=+S[3]*(V[12]*(V[20]*(V[36]*(S[4]*(S[2]*(V[47]*(128*(S[0]-S[1]))))-256*
 V[26]*S[0]*S[1]*S[3]))));
C[82]=+S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(128*(S[0]-S[1])))+32*V[47]*
 S[2]*S[4])))-128*S[6]*S[0]*S[1]*S[15]);
C[81]=+S[3]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(512*(S[0]-S[1])))+256*V[47]*
 S[2]*S[4]))));
C[80]=+S[3]*(S[5]*(V[26]*(256*(S[3]*(V[26]*(S[0]-S[1]))+V[47]*S[2]*S[4]))));
C[79]=+1024*V[36]*V[26]*V[20]*V[12]*S[15];
C[78]=+S[4]*(S[2]*(S[5]*(V[47]*(32*V[47]*S[2]*S[4]-128*V[26]*S[1]*S[3]))))-
 1024*S[7]*S[8]*S[1]*S[15];
C[77]=+S[3]*(V[12]*(V[20]*(V[36]*(512*V[47]*S[2]*S[4]-1024*V[26]*S[1]*
 S[3]))));
C[76]=+S[3]*(S[3]*(2048*S[7]*S[8]-256*S[5]*S[6]*S[1])+256*V[47]*S[5]*V[26]*
 S[2]*S[4]);
C[75]=+2048*V[36]*V[26]*V[20]*V[12]*S[15];
C[74]=+512*S[5]*S[6]*S[15];
C[73]=+2*S[9]*S[5]*S[10]*S[12]*S[1]*S[11];
C[72]=+S[14]*(S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(4*V[47]*S[2]*S[4]-16*V[26]*
 S[0]*S[3]))))));
C[71]=+S[14]*(S[3]*(S[1]*(S[5]*(V[26]*(32*(V[47]*S[2]*S[4]-V[26]*S[0]*
 S[3]))))));
C[70]=+32*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[1]*S[3]*S[4];
C[69]=+S[15]*(S[1]*(S[0]*(64*S[5]*S[6]*S[0]+128*S[7]*S[8])));
C[68]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(8*V[47]*S[2]*S[4]-64*V[26]*S[0]*
 S[3]))))));
C[67]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(64*V[47]*S[2]*S[4]-128*V[26]*S[0]*
 S[3])))));
C[66]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(8*V[47]*S[2]*S[4]-32*V[26]*S[0]*
 S[3]))))));
C[65]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(96*V[47]*S[2]*S[4]-128*V[26]*
 S[0]*S[3]))))));
C[64]=+S[3]*(S[1]*(S[0]*(S[3]*(256*S[7]*S[8]-64*S[5]*S[6]*S[0])+64*V[47]*
 S[5]*V[26]*S[2]*S[4])));
C[63]=+384*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[62]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-64*V[26]*
 S[0]*S[3]))))));
C[61]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(128*(V[47]*S[2]*S[4]-V[26]*S[0]*
 S[3]))))));
C[60]=+S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-128*V[26]*S[0]*
 S[3])))));
C[59]=+S[3]*(S[1]*(S[5]*(V[26]*(128*V[47]*S[2]*S[4]-256*V[26]*S[0]*S[3]))));
C[58]=+8*S[9]*S[5]*S[10]*S[14]*S[1]*S[11];
C[57]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(24*V[47]*S[2]*S[4]-64*V[26]*
 S[0]*S[3]))))));
C[56]=+S[1]*(S[5]*(S[4]*(S[2]*(V[47]*(16*V[47]*S[2]*S[4]-192*V[26]*S[0]*
 S[3])))+128*S[6]*S[14]*S[15]));
C[55]=+128*V[47]*V[36]*V[20]*S[2]*V[12]*S[1]*S[3]*S[4];
C[54]=+S[3]*(S[1]*(S[5]*(V[26]*(128*V[47]*S[2]*S[4]-384*V[26]*S[0]*S[3]))));
C[53]=+128*V[47]*S[5]*V[26]*S[2]*S[0]*S[1]*S[3]*S[4];
C[52]=+2*S[9]*S[5]*S[10]*S[14]*S[13]*S[11];
C[51]=+16*V[47]*V[36]*V[20]*S[2]*V[12]*S[14]*S[13]*S[3]*S[4];
C[50]=+S[14]*(S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(4*V[47]*S[2]*S[4]-16*V[26]*
 S[1]*S[3]))))));
C[49]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(S[4]*(S[2]*(V[47]*(32*S[0]-16*
 S[1])))-64*V[26]*S[0]*S[1]*S[3]))))));
C[48]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(-32*S[5]*S[6]*S[0]-128*S[7]*S[8]))+32*
 V[47]*S[5]*V[26]*S[2]*S[0]*S[4])));
C[47]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(128*S[0]-64*
 S[1]))+32*V[47]*S[2]*S[4]))))));
C[46]=+4*S[9]*S[5]*S[10]*S[14]*S[1]*S[11];
C[45]=+32*V[47]*V[36]*V[20]*S[2]*V[12]*S[14]*S[1]*S[3]*S[4];
C[44]=+32*V[47]*S[5]*V[26]*S[2]*S[14]*S[1]*S[3]*S[4];
C[43]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(32*V[47]*S[2]*S[4]+128*V[26]*
 S[0]*S[3]))))));
C[42]=+S[15]*(S[1]*(S[0]*(64*S[5]*S[6]*S[0]+256*S[7]*S[8])));
C[41]=+128*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[40]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[47]*(8*V[47]*S[2]*S[4]-32*V[26]*S[1]*
 S[3]))))));
C[39]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[2]*S[4]-128*V[26]*
 S[1]*S[3]))))));
C[38]=+S[3]*(S[1]*(S[0]*(S[5]*(V[26]*(64*(V[47]*S[2]*S[4]-V[26]*S[1]*
 S[3]))))));
C[37]=+64*V[47]*S[5]*V[26]*S[2]*S[0]*S[1]*S[3]*S[4];
C[36]=+256*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[35]=+128*S[5]*S[6]*S[0]*S[1]*S[15];
C[34]=+8*S[9]*S[5]*S[10]*S[0]*S[13]*S[11];
C[33]=+128*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[13]*S[3]*S[4];
C[32]=+S[1]*(S[0]*(S[4]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-64*V[26]*
 S[1]*S[3]))))-512*S[7]*S[8]*S[1]*S[15]));
C[31]=+S[3]*(S[1]*(S[0]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[2]*S[4]-512*V[26]*
 S[1]*S[3]))))));
C[30]=+S[3]*(S[1]*(S[0]*(S[3]*(1024*S[7]*S[8]-128*S[5]*S[6]*S[1])+128*V[47]*
 S[5]*V[26]*S[2]*S[4])));
C[29]=+4*S[9]*S[5]*S[10]*S[0]*S[13]*S[11];
C[28]=+32*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[13]*S[3]*S[4];
C[27]=+S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(S[4]*(S[2]*(V[47]*(8*(S[0]-S[1]))))-
 32*V[26]*S[0]*S[1]*S[3])))));
C[26]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(S[4]*(S[2]*(V[47]*(64*(S[0]-
 S[1]))))-128*V[26]*S[0]*S[1]*S[3])))));
C[25]=+S[1]*(S[5]*(S[4]*(S[2]*(V[47]*(S[3]*(V[26]*(64*(S[0]-S[1])))+16*
 V[47]*S[2]*S[4])))-64*S[6]*S[0]*S[1]*S[15]));
C[24]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(256*(S[0]-S[1])))+128*
 V[47]*S[2]*S[4])))));
C[23]=+S[3]*(S[1]*(S[5]*(V[26]*(128*(S[3]*(V[26]*(S[0]-S[1]))+V[47]*S[2]*
 S[4])))));
C[22]=+16*S[9]*S[5]*S[10]*S[0]*S[1]*S[11];
C[21]=+256*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[1]*S[3]*S[4];
C[20]=+S[3]*(S[1]*(S[0]*(128*V[47]*S[5]*V[26]*S[2]*S[4]+1024*S[7]*S[8]*
 S[3])));
C[19]=+1024*V[36]*V[26]*V[20]*V[12]*S[0]*S[1]*S[15];
C[18]=+256*S[5]*S[6]*S[0]*S[1]*S[15];
C[17]=+8*S[9]*S[5]*S[10]*S[0]*S[1]*S[11];
C[16]=+64*V[47]*V[36]*V[20]*S[2]*V[12]*S[0]*S[1]*S[3]*S[4];
C[15]=+S[4]*(S[1]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]+64*V[26]*S[0]*
 S[3])))));
C[14]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[2]*S[4]+256*V[26]*S[0]*
 S[3])))));
C[13]=+S[3]*(S[1]*(S[5]*(V[26]*(128*(V[47]*S[2]*S[4]+V[26]*S[0]*S[3])))));
C[12]=+512*V[36]*V[26]*V[20]*V[12]*S[1]*S[15];
C[11]=+8*S[9]*S[5]*S[10]*S[13]*S[11];
C[10]=+128*V[47]*V[36]*V[20]*S[2]*V[12]*S[13]*S[3]*S[4];
C[9]=+S[1]*(S[4]*(S[2]*(S[5]*(V[47]*(16*V[47]*S[2]*S[4]-64*V[26]*S[1]*
 S[3]))))-512*S[7]*S[8]*S[1]*S[15]);
C[8]=+S[3]*(S[1]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[2]*S[4]-512*V[26]*S[1]*
 S[3])))));
C[7]=+S[3]*(S[1]*(S[3]*(1024*S[7]*S[8]-128*S[5]*S[6]*S[1])+128*V[47]*S[5]*
 V[26]*S[2]*S[4]));
C[6]=+16*S[9]*S[5]*S[10]*S[1]*S[11];
C[5]=+256*V[47]*V[36]*V[20]*S[2]*V[12]*S[1]*S[3]*S[4];
C[4]=+S[3]*(S[1]*(128*V[47]*S[5]*V[26]*S[2]*S[4]+1024*S[7]*S[8]*S[3]));
C[3]=+1024*V[36]*V[26]*V[20]*V[12]*S[1]*S[15];
C[2]=+256*S[5]*S[6]*S[1]*S[15];
S[16]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+16*S[10]*S[16];
S[17]=V[49]*V[49];
S[18]=V[42]*V[42];
C[0]=+S[17]*S[18]*S[11];
}
REAL F652_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
         s                 u      !  u                 s             
       ==>==@==============>======!==>==============@==>==           
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
     
if(CalcConst) C652(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[74]*(DP[0]*(DP[9]-DP[4])+
 DP[6]*(DP[4]-DP[9])-DP[7]*DP[3])+C[85]*(DP[9]-DP[4])-C[90]*DP[3])+DP[9]*(
 C[86]+C[79]*DP[0]-C[75]*DP[6])+DP[3]*(-C[138]-C[79]*DP[7])+DP[4]*(C[79]*
 DP[6]-C[91]))+DP[0]*(C[101]*(DP[2]-DP[8])+C[90]*DP[3]-C[132]*DP[4]+C[80]*
 DP[9])+DP[6]*(C[101]*(DP[8]-DP[2])+C[123]*DP[4]-C[90]*DP[3]-C[76]*DP[9])+
 DP[7]*(C[101]*DP[1]-C[80]*DP[3]-C[85]*DP[4])+C[110]*(DP[2]-DP[8])+C[18]*
 DP[1]-C[139]*DP[3]-C[135]*DP[4]+C[87]*DP[9])+DP[6]*(C[124]*DP[4]-C[3]*
 DP[2]-C[91]*DP[3]+C[102]*DP[8]-C[77]*DP[9])+DP[0]*(C[91]*DP[3]-C[3]*DP[8]+
 C[81]*DP[9])+DP[1]*(C[148]+C[3]*DP[7])+DP[3]*(-C[140]-C[81]*DP[7])+C[115]*
 DP[2]-C[93]*DP[4]-C[111]*DP[8]+C[88]*DP[9])+DP[5]*(C[2]*(DP[0]*(DP[8]-
 DP[2]-DP[4]+DP[9])+DP[6]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[7]*(-DP[1]-DP[3]))+
 C[18]*(DP[8]-DP[2]-DP[4]+DP[9])+C[35]*(-DP[1]-DP[3]))+DP[6]*(DP[4]*(C[85]*(
 DP[0]-DP[6])+C[125]-C[90]*DP[7])+C[18]*DP[1]-C[128]*DP[2]-C[92]*DP[3]+
 C[103]*DP[8]-C[78]*DP[9])+DP[0]*(C[144]*DP[2]-C[18]*DP[1]+C[92]*DP[3]-
 C[133]*DP[4]-C[106]*DP[8]+C[82]*DP[9])+DP[7]*(C[106]*DP[1]+C[110]*DP[2]-
 C[82]*DP[3]-C[120]*DP[4])+C[149]*DP[1]+C[146]*DP[2]-C[141]*DP[3]-C[136]*
 DP[4]-C[112]*DP[8]+C[89]*DP[9]);
tmp[1]=+V[50]*(DP[5]*(C[2]*(DP[13]*(DP[0]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[6]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[7]*(-DP[1]-DP[3]))+S[1]*(DP[0]*(DP[14]-DP[11])+
 DP[6]*(DP[11]-DP[14])-DP[10]*DP[7])+DP[5]*(DP[0]*(DP[11]-DP[14])+DP[6]*(
 DP[14]-DP[11])+DP[10]*DP[7]))+V[50]*(DP[14]*(C[19]+C[18]*V[50]+C[12]*DP[0]-
 C[3]*DP[6])+DP[10]*(-C[63]-C[35]*V[50]-C[12]*DP[7])+DP[11]*(C[12]*DP[6]-
 C[36]-C[18]*V[50]))+C[18]*(DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14])-DP[11]*DP[7])+DP[10]*(C[35]*(DP[0]+DP[5]-DP[6])-C[189]-C[23]*
 DP[7])+DP[11]*(C[167]*DP[6]-C[177]-C[174]*DP[0])+DP[14]*(C[30]+C[23]*DP[0]-
 C[7]*DP[6])+DP[13]*(C[35]*(-DP[1]-DP[3])))+DP[13]*(V[50]*(V[50]*(C[2]*(
 DP[0]*(DP[2]-DP[8])+DP[6]*(DP[8]-DP[2])+DP[7]*DP[1])+C[18]*(DP[2]-DP[8])+
 C[35]*DP[1])+DP[8]*(C[3]*DP[6]-C[19]-C[12]*DP[0])+DP[1]*(C[63]+C[12]*
 DP[7])+DP[2]*(C[36]-C[12]*DP[6]))+DP[1]*(C[35]*(DP[6]-DP[0])+C[64]+C[13]*
 DP[7])+DP[2]*(C[61]+C[59]*DP[0]-C[54]*DP[6]+C[18]*DP[7])+DP[8]*(C[4]*DP[6]-
 C[20]-C[13]*DP[0]))+tmp[0]);
tmp[2]=+DP[5]*(DP[12]*(DP[0]*(C[35]*(DP[1]+DP[3])+C[59]*(-DP[2]-DP[4])+
 C[13]*(DP[8]+DP[9]))+DP[6]*(C[35]*(-DP[1]-DP[3])+C[54]*(DP[2]+DP[4])+C[4]*
 (-DP[8]-DP[9]))+DP[7]*(C[13]*(-DP[1]-DP[3])+C[18]*(-DP[2]-DP[4]))+C[64]*(-
 DP[1]-DP[3])+C[61]*(-DP[2]-DP[4])+C[20]*(DP[8]+DP[9]))+DP[13]*(DP[0]*(
 C[35]*(DP[1]+DP[3])+C[59]*(-DP[2]-DP[4])+C[13]*(DP[8]+DP[9]))+DP[6]*(C[35]*
 (-DP[1]-DP[3])+C[54]*(DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+DP[7]*(C[13]*(-
 DP[1]-DP[3])+C[18]*(-DP[2]-DP[4]))+C[64]*(-DP[1]-DP[3])+C[61]*(-DP[2]-
 DP[4])+C[20]*(DP[8]+DP[9]))+DP[5]*(DP[10]*(C[35]*(DP[6]-DP[0])+C[64]+C[13]*
 DP[7])+DP[11]*(C[61]+C[59]*DP[0]-C[54]*DP[6]+C[18]*DP[7])+DP[14]*(C[4]*
 DP[6]-C[20]-C[13]*DP[0]))+DP[11]*(DP[6]*(C[18]*(DP[0]-DP[6])+C[169]-C[35]*
 DP[7])-C[178]-C[175]*DP[0]-C[165]*DP[7])+DP[10]*(C[38]*(DP[0]-DP[6])-
 C[191]-C[25]*DP[7])+DP[14]*(C[32]+C[25]*DP[0]-C[9]*DP[6]));
tmp[3]=+V[50]*(DP[5]*(C[12]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]-DP[14]*
 DP[0]))+DP[6]*(C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[168]*DP[11]-C[36]*DP[10]-C[8]*DP[14])+DP[12]*(C[63]*(-DP[1]-
 DP[3])+C[36]*(-DP[2]-DP[4])+C[19]*(DP[8]+DP[9]))+DP[13]*(C[63]*(-DP[1]-
 DP[3])+C[36]*(-DP[2]-DP[4])+C[19]*(DP[8]+DP[9]))+DP[10]*(C[36]*DP[0]-
 C[190]+C[63]*DP[5]-C[24]*DP[7])+DP[14]*(C[31]+C[24]*DP[0]-C[19]*DP[5])+
 DP[11]*(C[36]*DP[5]-C[39]))+DP[12]*(DP[6]*(C[5]*(DP[9]-DP[2])+C[115]*DP[1]-
 C[93]*DP[3]-C[55]*DP[4]+C[104]*DP[8])+DP[0]*(C[93]*DP[3]-C[115]*DP[1]-
 C[107]*DP[8]+C[83]*DP[9])+DP[1]*(C[150]+C[107]*DP[7])+DP[3]*(C[142]-C[83]*
 DP[7])+C[109]*DP[2]+C[16]*DP[4]-C[113]*DP[8]-C[21]*DP[9])+DP[13]*(DP[1]*(
 C[36]*(DP[6]-DP[0])+C[65]+C[14]*DP[7])+DP[8]*(C[5]*DP[6]-C[21]-C[14]*
 DP[0])+DP[2]*(C[16]-C[55]*DP[6]))+tmp[1]);
tmp[4]=+DP[0]*(DP[12]*(V[50]*(V[50]*(DP[9]*(V[50]*(V[50]*(C[90]*(DP[6]-
 DP[0])-C[96]-C[95]*V[50])+C[91]*(DP[6]-DP[0])-C[97])+C[92]*(DP[6]-DP[0])-
 C[98])+DP[6]*(DP[4]*(C[90]*(S[1]-DP[0])+C[151]+C[85]*DP[6])+C[18]*(-DP[2]-
 DP[8]))+DP[8]*(C[116]+C[36]*V[50]+C[18]*DP[0]))+DP[8]*(C[115]*(DP[0]-
 DP[6])+C[117]-C[41]*DP[5])+DP[9]*(C[93]*(DP[6]-DP[0])-C[99]-C[41]*DP[5]))+
 DP[6]*(DP[2]*(C[18]*DP[0]-C[154]+C[35]*DP[5]-C[110]*DP[6])+DP[4]*(C[152]-
 C[92]*DP[0]+C[35]*DP[5]+C[120]*DP[6])+DP[5]*(C[35]*(DP[8]+DP[9]))+C[94]*
 DP[9]-C[53]*DP[8])+DP[0]*(DP[5]*(C[35]*(-DP[8]-DP[9]))+C[53]*DP[8]-C[94]*
 DP[9])+DP[5]*(C[42]*(-DP[8]-DP[9]))+C[118]*DP[8]-C[100]*DP[9])+DP[5]*(
 DP[14]*(V[50]*(V[50]*(C[35]*(DP[6]-DP[0])-C[42]-C[41]*V[50])+C[36]*(DP[6]-
 DP[0])+C[41]*DP[5]-C[47])+DP[5]*(C[35]*(DP[0]-DP[6])+C[42])+C[38]*(DP[6]-
 DP[0])-C[48])+DP[13]*(C[35]*(DP[6]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[0]*(-DP[8]-
 DP[9]))+V[50]*(C[41]*(-DP[8]-DP[9]))+C[42]*(-DP[8]-DP[9]))+DP[6]*(DP[11]*(
 C[35]*(S[1]-DP[0]-DP[5])+C[180]+C[18]*DP[6])))+DP[13]*(DP[8]*(V[50]*(V[50]*
 (C[35]*(DP[0]-DP[6])+C[42]+C[41]*V[50])+C[36]*(DP[0]-DP[6])+C[43])+C[37]*(
 DP[0]-DP[6])+C[44])+DP[2]*(DP[6]*(C[35]*(DP[0]-S[1])-C[67]-C[18]*DP[6]))));
tmp[5]=+DP[6]*(V[50]*(V[50]*(DP[12]*(DP[4]*(V[50]*(V[50]*(C[156]+C[95]*
 V[50]-C[90]*DP[6])+C[157])+DP[6]*(-C[151]-C[90]*DP[6])+C[158])+DP[2]*(
 C[18]*DP[6]-C[161]-C[36]*V[50]))+DP[2]*(DP[13]*(C[35]*DP[6]-C[69]-C[41]*
 V[50]))+DP[5]*(DP[11]*(C[69]+C[41]*V[50]-C[35]*DP[6])))+DP[5]*(C[41]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[183]*DP[11])+
 DP[2]*(-C[16]*DP[12]-C[70]*DP[13])-C[70]*DP[12]*DP[4])+DP[5]*(DP[6]*(C[35]*
 (DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-DP[6]))-
 C[180]*DP[11])+C[69]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[184]*DP[11])+DP[2]*(DP[6]*(DP[6]*(C[18]*DP[12]+C[35]*DP[13])+
 C[154]*DP[12]+C[67]*DP[13])-C[162]*DP[12]-C[71]*DP[13])+DP[4]*(DP[12]*(
 DP[6]*(-C[152]-C[92]*DP[6])+C[159])))+tmp[4];
tmp[6]=+DP[5]*(DP[7]*(DP[6]*(DP[12]*(C[36]*(-DP[1]-DP[3])+C[55]*(DP[2]+
 DP[4])+C[5]*(-DP[8]-DP[9]))+DP[13]*(C[36]*(-DP[1]-DP[3])+C[55]*(DP[2]+
 DP[4])+C[5]*(-DP[8]-DP[9]))+DP[5]*(C[36]*DP[10]-C[55]*DP[11]+C[5]*DP[14])+
 C[10]*DP[14]-C[39]*DP[10]-C[170]*DP[11])+DP[0]*(C[36]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[14]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[39]*DP[10]+C[26]*DP[14])+DP[12]*(
 DP[1]*(-C[65]-C[14]*DP[7])+DP[3]*(-C[65]-C[14]*DP[7])+C[16]*(-DP[2]-DP[4])+
 C[21]*(DP[8]+DP[9]))+DP[13]*(DP[1]*(-C[65]-C[14]*DP[7])+DP[3]*(-C[65]-
 C[14]*DP[7])+C[16]*(-DP[2]-DP[4])+C[21]*(DP[8]+DP[9]))+DP[5]*(DP[10]*(
 C[65]+C[14]*DP[7])+C[16]*DP[11]-C[21]*DP[14])+DP[10]*(C[192]-C[26]*DP[7])+
 C[28]*DP[11]-C[33]*DP[14])+DP[0]*(C[36]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+DP[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13])-DP[14]*DP[5]))+C[43]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+DP[14]*(C[39]*(DP[6]-DP[0])-C[49]))+DP[6]*(C[70]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[185]*DP[11]));
tmp[7]=+DP[7]*(DP[6]*(DP[12]*(DP[2]*(C[18]*(DP[0]-DP[6])+C[56]-C[35]*DP[7])+
 DP[4]*(C[18]*(DP[0]-DP[6])+C[56]-C[35]*DP[7])+C[37]*(-DP[1]-DP[3])+C[6]*(-
 DP[8]-DP[9]))+DP[13]*(DP[2]*(C[18]*(DP[0]-DP[6])+C[56]-C[35]*DP[7])+DP[4]*(
 C[18]*(DP[0]-DP[6])+C[56]-C[35]*DP[7])+C[37]*(-DP[1]-DP[3])+C[6]*(-DP[8]-
 DP[9]))+DP[11]*(DP[5]*(C[18]*(DP[6]-DP[0])+C[35]*DP[7]-C[56])+C[165]*(
 DP[0]-DP[6])-C[171]-C[38]*DP[7])+DP[5]*(C[37]*DP[10]+C[6]*DP[14])+C[11]*
 DP[14]-C[40]*DP[10])+DP[0]*(DP[12]*(C[37]*(DP[1]+DP[3])+C[60]*(-DP[2]-
 DP[4])+C[15]*(DP[8]+DP[9]))+DP[13]*(C[37]*(DP[1]+DP[3])+C[60]*(-DP[2]-
 DP[4])+C[15]*(DP[8]+DP[9]))+DP[5]*(C[60]*DP[11]-C[37]*DP[10]-C[15]*DP[14])+
 C[40]*DP[10]+C[176]*DP[11]+C[27]*DP[14])+DP[7]*(C[15]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[53]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[27]*DP[10]-C[166]*DP[11])+DP[12]*(
 C[66]*(-DP[1]-DP[3])+C[62]*(-DP[2]-DP[4])+C[22]*(DP[8]+DP[9]))+DP[13]*(
 C[66]*(-DP[1]-DP[3])+C[62]*(-DP[2]-DP[4])+C[22]*(DP[8]+DP[9]))+DP[5]*(
 C[66]*DP[10]+C[62]*DP[11]-C[22]*DP[14])+C[193]*DP[10]+C[179]*DP[11]-C[34]*
 DP[14]);
tmp[8]=+DP[12]*(DP[6]*(DP[0]*(DP[2]*(C[122]*(-DP[6]-DP[7])+C[53]*DP[0]-
 C[155])+DP[4]*(C[121]*(DP[6]+DP[7])-C[153]-C[94]*DP[0])-C[22]*DP[8]-C[17]*
 DP[9])+DP[7]*(DP[2]*(C[130]+C[122]*DP[6]+C[53]*DP[7])+DP[4]*(C[127]-C[121]*
 DP[6]-C[94]*DP[7])+C[22]*DP[1]+C[17]*DP[3])+DP[6]*(DP[2]*(C[155]+C[53]*
 DP[6])+DP[4]*(C[153]-C[94]*DP[6]))-C[163]*DP[2]-C[160]*DP[4])+DP[7]*(DP[0]*
 (C[22]*(-DP[1]-DP[4]-DP[8])+C[17]*(-DP[3]-DP[9])-C[114]*DP[2])+DP[7]*(
 C[22]*(DP[1]+DP[4])+C[114]*DP[2]+C[17]*DP[3])+C[58]*(-DP[1]-DP[4])-C[131]*
 DP[2]-C[46]*DP[3])+DP[0]*(DP[0]*(C[22]*DP[8]+C[17]*DP[9])+C[58]*DP[8]+
 C[46]*DP[9]))+DP[13]*(DP[2]*(DP[6]*(DP[0]*(C[53]*(-DP[6]-DP[7])+C[37]*
 DP[0]-C[68])+DP[6]*(C[68]+C[37]*DP[6]+C[53]*DP[7])+DP[7]*(C[57]+C[37]*
 DP[7])-C[72])+DP[7]*(C[22]*(DP[7]-DP[0])-C[58]))+C[17]*(DP[0]*(DP[8]*(
 DP[0]-DP[6]-DP[7])-DP[7]*DP[1])+DP[1]*(DP[7]*(DP[6]+DP[7])))+C[46]*(DP[8]*
 DP[0]-DP[7]*DP[1]));
tmp[9]=+V[50]*(V[50]*(DP[7]*(DP[12]*(DP[6]*(DP[2]*(C[110]*(DP[6]-DP[0])+
 C[18]*DP[7]-C[129])+DP[4]*(C[120]*(DP[0]-DP[6])-C[126]-C[92]*DP[7])+C[53]*
 DP[1]-C[94]*DP[3]+C[105]*DP[8]+C[6]*DP[9])+DP[0]*(C[145]*DP[2]-C[53]*DP[1]+
 C[94]*DP[3]+C[134]*DP[4]-C[108]*DP[8]+C[84]*DP[9])+DP[7]*(C[108]*DP[1]+
 C[122]*DP[2]-C[84]*DP[3]-C[121]*DP[4])+C[62]*DP[1]+C[147]*DP[2]+C[143]*
 DP[3]+C[137]*DP[4]-C[114]*DP[8]-C[22]*DP[9])+DP[13]*(DP[2]*(DP[6]*(C[18]*(
 DP[6]-DP[0])+C[35]*DP[7]-C[56])+C[62]+C[60]*DP[0]+C[53]*DP[7])+DP[1]*(
 C[37]*(DP[6]-DP[0])+C[66]+C[15]*DP[7])+DP[8]*(C[6]*DP[6]-C[22]-C[15]*
 DP[0]))+tmp[2]+tmp[3])+tmp[5])+DP[12]*(DP[0]*(DP[7]*(C[109]*(-DP[1]-DP[8])+
 C[16]*(-DP[3]-DP[9]))+DP[8]*(C[109]*(DP[0]-DP[6])+C[119])+DP[9]*(C[16]*(
 DP[0]-DP[6])+C[45]))+DP[7]*(DP[1]*(C[109]*(DP[6]+DP[7])-C[119])+DP[3]*(
 C[16]*(DP[6]+DP[7])-C[45])))+DP[13]*(C[16]*(DP[0]*(DP[8]*(DP[0]-DP[6]-
 DP[7])-DP[7]*DP[1])+DP[1]*(DP[7]*(DP[6]+DP[7])))+C[45]*(DP[8]*DP[0]-DP[7]*
 DP[1]))+tmp[6]);
tmp[10]=+V[50]*(DP[5]*(DP[6]*(DP[0]*(DP[12]*(DP[2]*(C[67]-C[35]*DP[0]+C[18]*
 DP[6])+DP[4]*(C[67]-C[35]*DP[0]+C[18]*DP[6])+C[37]*(DP[8]+DP[9]))+DP[13]*(
 DP[2]*(C[67]-C[35]*DP[0]+C[18]*DP[6])+DP[4]*(C[67]-C[35]*DP[0]+C[18]*
 DP[6])+C[37]*(DP[8]+DP[9]))+DP[11]*(DP[5]*(C[35]*DP[0]-C[67]-C[18]*DP[6])+
 C[181]-C[38]*DP[0]+C[165]*DP[6])+DP[14]*(C[40]-C[37]*DP[5]))+DP[6]*(DP[6]*(
 C[35]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[38]*
 DP[11])+C[67]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-
 C[181]*DP[11])+C[71]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[186]*DP[11])+DP[0]*(DP[0]*(C[37]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*DP[5])-C[40]*DP[14])+C[44]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[50]*DP[14])+tmp[7])+tmp[8]+tmp[9]);
tmp[11]=+DP[6]*(DP[0]*(DP[12]*(DP[2]*(C[53]*(DP[6]+DP[7])+C[68]-C[37]*
 DP[0])+DP[4]*(C[53]*(DP[6]+DP[7])+C[68]-C[37]*DP[0])+C[17]*(DP[8]+DP[9]))+
 DP[13]*(DP[2]*(C[53]*(DP[6]+DP[7])+C[68]-C[37]*DP[0])+DP[4]*(C[53]*(DP[6]+
 DP[7])+C[68]-C[37]*DP[0])+C[17]*(DP[8]+DP[9]))+DP[11]*(DP[5]*(C[53]*(-
 DP[6]-DP[7])+C[37]*DP[0]-C[68])+C[166]*(DP[6]+DP[7])-C[182]-C[40]*DP[0])+
 DP[14]*(-C[29]-C[17]*DP[5]))+DP[7]*(DP[12]*(DP[2]*(-C[57]-C[53]*DP[6]-
 C[37]*DP[7])+DP[4]*(-C[57]-C[53]*DP[6]-C[37]*DP[7])+C[17]*(-DP[1]-DP[3]))+
 DP[13]*(DP[2]*(-C[57]-C[53]*DP[6]-C[37]*DP[7])+DP[4]*(-C[57]-C[53]*DP[6]-
 C[37]*DP[7])+C[17]*(-DP[1]-DP[3]))+DP[11]*(DP[5]*(C[57]+C[53]*DP[6]+C[37]*
 DP[7])+C[172]-C[166]*DP[6]-C[40]*DP[7])+DP[10]*(C[29]+C[17]*DP[5]))+DP[6]*(
 DP[6]*(C[37]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-
 C[40]*DP[11])+C[68]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[182]*DP[11])+C[72]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[187]*DP[11]);
tmp[12]=+DP[5]*(DP[7]*(DP[0]*(C[17]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+
 DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-DP[14]))+C[22]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[29]*(-DP[10]-DP[14])-
 C[34]*DP[11])+DP[7]*(C[17]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+C[22]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[29]*DP[10]+C[34]*DP[11])+C[46]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[58]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])-C[52]*DP[10]-C[173]*DP[11])+DP[0]*(DP[0]*(C[17]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[29]*DP[14])+
 C[46]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[52]*
 DP[14])+tmp[11])+DP[6]*(DP[2]*(DP[12]*(DP[0]*(C[114]*(-DP[6]-DP[7])+C[131]+
 C[22]*DP[0])+DP[6]*(C[22]*DP[6]-C[131]+C[114]*DP[7])+DP[7]*(C[22]*DP[7]-
 C[131])+C[164])+DP[13]*(DP[0]*(C[22]*(-DP[6]-DP[7])+C[58]+C[17]*DP[0])+
 DP[6]*(C[17]*DP[6]-C[58]+C[22]*DP[7])+DP[7]*(C[17]*DP[7]-C[58])+C[73]))+
 DP[4]*(DP[12]*(DP[0]*(C[22]*(-DP[6]-DP[7])+C[58]+C[17]*DP[0])+DP[6]*(C[17]*
 DP[6]-C[58]+C[22]*DP[7])+DP[7]*(C[17]*DP[7]-C[58])+C[73])));
tmp[13]=+DP[5]*(DP[6]*(DP[0]*(C[22]*(DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5]))+DP[0]*(C[17]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[29]*DP[11])+C[58]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-
 DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(C[34]*(-DP[6]-DP[7])+C[173]))+DP[6]*(
 DP[2]*(DP[12]*(C[58]-C[17]*DP[6]-C[22]*DP[7])+DP[13]*(C[58]-C[17]*DP[6]-
 C[22]*DP[7]))+DP[4]*(DP[12]*(C[58]-C[17]*DP[6]-C[22]*DP[7])+DP[13]*(C[58]-
 C[17]*DP[6]-C[22]*DP[7]))+DP[11]*(DP[5]*(C[17]*DP[6]-C[58]+C[22]*DP[7])+
 C[29]*DP[6]-C[173]+C[34]*DP[7]))+DP[7]*(DP[7]*(C[17]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[29]*DP[11])+C[58]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[173]*DP[11])+C[73]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[188]*
 DP[11]));
R=+S[1]*(V[50]*(DP[5]*(DP[0]*(C[16]*(DP[7]*(DP[12]*(DP[1]+DP[3]+DP[8]+
 DP[9])+DP[13]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-DP[14]))+DP[0]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+DP[6]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5]))+DP[14]*(C[28]*(DP[0]-
 DP[6]-DP[7])+C[51]+C[45]*DP[5])+C[45]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13]))-C[28]*DP[10]*DP[7])+DP[7]*(C[16]*(DP[6]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+DP[7]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5]))+C[45]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+DP[10]*(C[28]*(DP[6]+DP[7])-C[51])))+tmp[10])+
 tmp[12])+tmp[13];
R*=(N/D)*Q2[3]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
