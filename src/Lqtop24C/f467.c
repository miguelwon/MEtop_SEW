/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F467_out;
static void C467(REAL * C)
{
REAL* V=va_out;
REAL S[19];                                                                 
     
S[0]=V[17]*V[17];
S[1]=V[1]*V[1];
S[2]=V[9]*V[9];
S[3]=V[2]*V[2];
S[4]=V[36]*V[36];
S[5]=V[10]*V[10]*V[10]*V[10];
C[183]=+S[5]*(S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(8*V[47]*S[0]*S[1]-32*V[26]*
 S[2]*S[3]))))));
C[182]=+S[5]*(S[3]*(S[2]*(S[4]*(V[26]*(64*(V[47]*S[0]*S[1]-V[26]*S[2]*
 S[3]))))));
S[6]=V[10]*V[10];
C[181]=+S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(16*S[6]+8*S[2])))-
 64*V[26]*S[6]*S[2]*S[3])))));
S[7]=V[26]*V[26];
S[8]=V[2]*V[2]*V[2]*V[2];
C[180]=+S[2]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(-128*S[6]-64*S[2]))+16*
 V[47]*S[0]*S[1])))+128*S[7]*S[6]*S[2]*S[8]));
C[179]=+S[3]*(S[2]*(S[4]*(V[26]*(S[3]*(V[26]*(-256*S[6]-128*S[2]))+128*
 V[47]*S[0]*S[1]))));
S[9]=V[47]*V[47];
S[10]=V[17]*V[17]*V[17]*V[17];
S[11]=V[10]*V[10]*V[10]*V[10]*V[10]*V[10];
S[12]=V[9]*V[9]*V[9]*V[9];
S[13]=V[1]*V[1]*V[1]*V[1];
C[178]=+S[9]*S[4]*S[10]*S[11]*S[12]*S[13];
C[177]=+S[5]*(S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(2*(S[6]+
 S[2]))))-8*V[26]*S[6]*S[2]*S[3]))))));
C[176]=+S[5]*(S[2]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(16*(-S[6]-S[2])))+
 4*V[47]*S[0]*S[1])))+16*S[7]*S[6]*S[2]*S[8])));
C[175]=+16*V[47]*V[36]*V[20]*S[0]*V[12]*S[6]*S[12]*S[3]*S[1];
S[14]=V[20]*V[20];
S[15]=V[12]*V[12];
C[174]=+S[3]*(S[2]*(S[6]*(S[3]*(S[2]*(-32*S[4]*S[7]*S[6]-64*S[14]*S[15])-32*
 S[4]*S[7]*S[5])+32*V[47]*S[4]*V[26]*S[0]*S[6]*S[1])));
C[173]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(32*V[47]*S[0]*S[1]-64*V[26]*
 S[2]*S[3]))))));
C[172]=+S[2]*(S[4]*(S[1]*(S[0]*(V[47]*(S[6]*(S[3]*(V[26]*(-64*S[6]-32*
 S[2]))+8*V[47]*S[0]*S[1])+8*V[47]*S[0]*S[2]*S[1])))+64*S[7]*S[5]*S[2]*
 S[8]));
C[171]=+64*V[47]*V[36]*V[20]*S[0]*V[12]*S[12]*S[3]*S[1];
C[170]=+S[2]*(S[4]*(S[3]*(V[26]*(S[6]*(S[3]*(V[26]*(128*S[6]+64*S[2]))-64*
 V[47]*S[0]*S[1])-64*V[47]*S[0]*S[2]*S[1]))+16*S[9]*S[10]*S[13]));
C[169]=+S[3]*(S[2]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[0]*S[1]-256*V[26]*S[2]*
 S[3])))));
C[168]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(8*S[6]+12*
 S[2])))-32*V[26]*S[6]*S[2]*S[3]))))));
C[167]=+S[2]*(S[6]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(-64*S[6]-96*
 S[2]))+24*V[47]*S[0]*S[1])))+64*S[7]*S[6]*S[2]*S[8])));
C[166]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(S[3]*(V[26]*(-128*S[6]-192*S[2]))+
 192*V[47]*S[0]*S[1])))));
C[165]=+4*S[9]*S[4]*S[10]*S[5]*S[12]*S[13];
C[164]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(8*S[6]+4*
 S[2])))-32*V[26]*S[6]*S[2]*S[3]))))));
C[163]=+S[2]*(S[6]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(-64*S[6]-32*
 S[2]))+8*V[47]*S[0]*S[1])))+64*S[7]*S[6]*S[2]*S[8])));
C[162]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(S[3]*(V[26]*(-128*S[6]-64*S[2]))+64*
 V[47]*S[0]*S[1])))));
C[161]=+8*S[9]*S[4]*S[10]*S[6]*S[12]*S[13];
C[160]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*
 S[2]*S[3]))))));
C[159]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(128*(V[47]*S[0]*S[1]-V[26]*S[2]*
 S[3]))))));
C[158]=+S[5]*(S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(4*V[47]*S[0]*S[1]-16*V[26]*
 S[2]*S[3]))))));
C[157]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(S[1]*(S[0]*(V[47]*(32*S[6]-
 16*S[2])))-64*V[26]*S[6]*S[2]*S[3]))))));
C[156]=+S[3]*(S[2]*(S[6]*(S[3]*(S[2]*(-32*S[4]*S[7]*S[6]-128*S[14]*S[15]))+
 32*V[47]*S[4]*V[26]*S[0]*S[6]*S[1])));
C[155]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(128*S[6]-64*
 S[2]))+32*V[47]*S[0]*S[1]))))));
C[154]=+8*S[9]*S[4]*S[10]*S[12]*S[13];
C[153]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[12]*S[3]*S[1];
C[152]=+S[2]*(S[1]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*S[2]*
 S[3]))))-512*S[14]*S[15]*S[2]*S[8]);
C[151]=+S[3]*(S[2]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[1]-512*V[26]*S[2]*
 S[3])))));
C[150]=+S[3]*(S[2]*(S[3]*(1024*S[14]*S[15]-128*S[4]*S[7]*S[2])+128*V[47]*
 S[4]*V[26]*S[0]*S[1]));
C[149]=+128*V[47]*S[4]*V[26]*S[0]*S[5]*S[2]*S[3]*S[1];
C[148]=+256*S[4]*S[7]*S[5]*S[2]*S[8];
C[147]=+S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(32*V[47]*S[0]*S[1]-256*V[26]*S[6]*
 S[3])))));
C[146]=+S[3]*(S[2]*(S[4]*(V[26]*(256*V[47]*S[0]*S[1]-512*V[26]*S[6]*
 S[3]))));
C[145]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[0]*S[1]+256*V[26]*
 S[6]*S[3]))))));
C[144]=+S[8]*(S[2]*(S[6]*(128*S[4]*S[7]*S[6]+512*S[14]*S[15])));
C[143]=+S[5]*(S[1]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*S[2]*
 S[3])))));
C[142]=+S[5]*(S[3]*(S[4]*(V[26]*(128*(V[47]*S[0]*S[1]-V[26]*S[2]*S[3])))));
C[141]=+256*S[4]*S[7]*S[5]*S[8];
C[140]=+S[1]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(32*S[6]+16*S[2])))-128*
 V[26]*S[6]*S[2]*S[3]))));
C[139]=+S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(-256*S[6]-128*S[2]))+32*V[47]*
 S[0]*S[1])))+256*S[7]*S[6]*S[2]*S[8]);
C[138]=+S[3]*(S[4]*(V[26]*(S[3]*(V[26]*(-512*S[6]-256*S[2]))+256*V[47]*S[0]*
 S[1])));
C[137]=+S[5]*(S[1]*(S[0]*(S[4]*(V[47]*(8*V[47]*S[0]*S[1]-32*V[26]*S[2]*
 S[3])))));
C[136]=+S[3]*(S[6]*(V[12]*(V[20]*(V[36]*(S[1]*(S[0]*(V[47]*(64*S[6]-32*
 S[2])))-128*V[26]*S[6]*S[2]*S[3])))));
C[135]=+S[3]*(S[6]*(S[3]*(S[2]*(-64*S[4]*S[7]*S[6]-256*S[14]*S[15]))+64*
 V[47]*S[4]*V[26]*S[0]*S[6]*S[1]));
C[134]=+S[3]*(S[6]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(256*S[6]-128*S[2]))+
 64*V[47]*S[0]*S[1])))));
C[133]=+S[8]*(S[6]*(128*S[4]*S[7]*S[6]+512*S[14]*S[15]));
C[132]=+4*S[9]*S[4]*S[10]*S[11]*S[2]*S[13];
C[131]=+S[5]*(S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(8*V[47]*S[0]*S[1]-32*V[26]*
 S[6]*S[3]))))));
C[130]=+S[5]*(S[3]*(S[2]*(S[4]*(V[26]*(64*(V[47]*S[0]*S[1]-V[26]*S[6]*
 S[3]))))));
C[129]=+S[8]*(S[2]*(S[6]*(128*S[4]*S[7]*S[6]+256*S[14]*S[15])));
C[128]=+S[2]*(S[4]*(S[1]*(S[0]*(V[47]*(32*V[47]*S[0]*S[1]-128*V[26]*S[6]*
 S[3])))+256*S[7]*S[5]*S[8]));
C[127]=+32*S[9]*S[4]*S[10]*S[2]*S[13];
C[126]=+512*V[47]*V[36]*V[20]*S[0]*V[12]*S[2]*S[3]*S[1];
C[125]=+S[3]*(S[2]*(256*V[47]*S[4]*V[26]*S[0]*S[1]+2048*S[14]*S[15]*S[3]));
C[124]=+2048*V[36]*V[26]*V[20]*V[12]*S[2]*S[8];
C[123]=+S[5]*(S[1]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(4*(S[6]+S[2]))))-
 16*V[26]*S[6]*S[2]*S[3])))));
C[122]=+S[5]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(32*(-S[6]-S[2])))+8*
 V[47]*S[0]*S[1])))+32*S[7]*S[6]*S[2]*S[8]));
C[121]=+S[3]*(S[6]*(S[3]*(S[2]*(-64*S[4]*S[7]*S[6]-128*S[14]*S[15])-64*S[4]*
 S[7]*S[5])+64*V[47]*S[4]*V[26]*S[0]*S[6]*S[1]));
C[120]=+S[3]*(S[6]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[0]*S[1]-128*V[26]*S[2]*
 S[3])))));
C[119]=+S[8]*(S[6]*(128*S[4]*S[7]*S[6]+256*S[14]*S[15]));
C[118]=+256*V[36]*V[26]*V[20]*V[12]*S[6]*S[8];
C[117]=+S[4]*(S[1]*(S[0]*(V[47]*(S[6]*(S[3]*(V[26]*(-128*S[6]-64*S[2]))+16*
 V[47]*S[0]*S[1])+16*V[47]*S[0]*S[2]*S[1])))+128*S[7]*S[5]*S[2]*S[8]);
C[116]=+S[4]*(S[3]*(V[26]*(S[6]*(S[3]*(V[26]*(256*S[6]+128*S[2]))-128*V[47]*
 S[0]*S[1])-128*V[47]*S[0]*S[2]*S[1]))+32*S[9]*S[10]*S[13]);
C[115]=+S[3]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[1]-512*V[26]*S[2]*
 S[3]))));
C[114]=+S[1]*(S[0]*(S[4]*(V[47]*(32*V[47]*S[0]*S[1]-128*V[26]*S[2]*S[3]))))-
 1024*S[14]*S[15]*S[2]*S[8];
C[113]=+S[3]*(V[12]*(V[20]*(V[36]*(512*V[47]*S[0]*S[1]-1024*V[26]*S[2]*
 S[3]))));
C[112]=+S[3]*(S[3]*(2048*S[14]*S[15]-256*S[4]*S[7]*S[2])+256*V[47]*S[4]*
 V[26]*S[0]*S[1]);
C[111]=+2048*V[36]*V[26]*V[20]*V[12]*S[8];
C[110]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(48*V[47]*S[0]*S[1]-128*V[26]*
 S[6]*S[3]))))));
C[109]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(384*V[47]*S[0]*S[1]-256*V[26]*S[6]*
 S[3])))));
C[108]=+768*S[4]*S[7]*S[6]*S[2]*S[8];
C[107]=+S[1]*(S[6]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(16*S[6]+24*
 S[2])))-64*V[26]*S[6]*S[2]*S[3])))));
C[106]=+S[6]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(-128*S[6]-192*S[2]))+48*
 V[47]*S[0]*S[1])))+128*S[7]*S[6]*S[2]*S[8]));
C[105]=+S[3]*(S[6]*(S[4]*(V[26]*(S[3]*(V[26]*(-256*S[6]-384*S[2]))+384*
 V[47]*S[0]*S[1]))));
C[104]=+768*S[4]*S[7]*S[6]*S[8];
C[103]=+16*S[9]*S[4]*S[10]*S[5]*S[2]*S[13];
C[102]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-128*V[26]*
 S[6]*S[3]))))));
C[101]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(128*V[47]*S[0]*S[1]-256*V[26]*S[6]*
 S[3])))));
C[100]=+S[1]*(S[6]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(16*S[6]+8*S[2])))-
 64*V[26]*S[6]*S[2]*S[3])))));
C[99]=+S[6]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(-128*S[6]-64*S[2]))+16*
 V[47]*S[0]*S[1])))+128*S[7]*S[6]*S[2]*S[8]));
C[98]=+S[3]*(S[6]*(S[4]*(V[26]*(S[3]*(V[26]*(-256*S[6]-128*S[2]))+128*V[47]*
 S[0]*S[1]))));
C[97]=+32*S[9]*S[4]*S[10]*S[6]*S[2]*S[13];
C[96]=+256*V[47]*S[4]*V[26]*S[0]*S[6]*S[2]*S[3]*S[1];
C[95]=+512*S[4]*S[7]*S[6]*S[2]*S[8];
C[94]=+S[1]*(S[6]*(S[0]*(S[4]*(V[47]*(32*V[47]*S[0]*S[1]-128*V[26]*S[2]*
 S[3])))));
C[93]=+S[3]*(S[6]*(S[4]*(V[26]*(256*(V[47]*S[0]*S[1]-V[26]*S[2]*S[3])))));
C[92]=+512*S[4]*S[7]*S[6]*S[8];
C[91]=+64*V[47]*V[36]*V[20]*S[0]*V[12]*S[5]*S[2]*S[3]*S[1];
C[90]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*
 S[6]*S[3]))))));
C[89]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(192*V[47]*S[0]*S[1]-256*V[26]*
 S[6]*S[3]))))));
C[88]=+S[3]*(S[2]*(S[6]*(S[3]*(512*S[14]*S[15]-128*S[4]*S[7]*S[6])+128*
 V[47]*S[4]*V[26]*S[0]*S[1])));
C[87]=+768*V[36]*V[26]*V[20]*V[12]*S[6]*S[2]*S[8];
C[86]=+S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(32*V[47]*S[0]*S[1]-128*V[26]*S[6]*
 S[3])))));
C[85]=+S[3]*(S[2]*(V[12]*(V[20]*(V[36]*(256*V[47]*S[0]*S[1]-512*V[26]*S[6]*
 S[3])))));
C[84]=+S[3]*(S[2]*(S[4]*(V[26]*(256*(V[47]*S[0]*S[1]-V[26]*S[6]*S[3])))));
C[83]=+512*S[4]*S[7]*S[2]*S[8];
C[82]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[6]*S[2]*S[3]*S[1];
C[81]=+512*V[36]*V[26]*V[20]*V[12]*S[6]*S[2]*S[8];
C[80]=+S[1]*(S[6]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(8*(S[6]+S[2]))))-
 32*V[26]*S[6]*S[2]*S[3])))));
C[79]=+S[3]*(S[6]*(V[12]*(V[20]*(V[36]*(S[1]*(S[0]*(V[47]*(64*S[6]+96*
 S[2])))-128*V[26]*S[6]*S[2]*S[3])))));
C[78]=+S[6]*(S[3]*(S[2]*(S[3]*(64*S[4]*S[7]*S[6]-256*S[14]*S[15])-64*V[47]*
 S[4]*V[26]*S[0]*S[1])-64*V[47]*S[4]*V[26]*S[0]*S[6]*S[1])+16*S[9]*S[4]*
 S[10]*S[13]);
C[77]=+S[3]*(S[6]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(-256*S[6]-384*S[2]))+
 192*V[47]*S[0]*S[1])))));
C[76]=+S[3]*(S[6]*(S[3]*(S[7]*(S[4]*(128*(-S[6]-S[2])))+512*S[14]*S[15])+
 128*V[47]*S[4]*V[26]*S[0]*S[1]));
C[75]=+768*V[36]*V[26]*V[20]*V[12]*S[6]*S[8];
C[74]=+S[1]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(16*(S[6]+S[2]))))-64*
 V[26]*S[6]*S[2]*S[3]))));
C[73]=+S[3]*(V[12]*(V[20]*(V[36]*(S[1]*(S[0]*(V[47]*(128*(S[6]+S[2]))))-256*
 V[26]*S[6]*S[2]*S[3]))));
C[72]=+S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(128*(-S[6]-S[2])))+32*V[47]*
 S[0]*S[1])))+128*S[7]*S[6]*S[2]*S[8]);
C[71]=+S[3]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(512*(-S[6]-S[2])))+256*V[47]*
 S[0]*S[1]))));
C[70]=+S[3]*(S[4]*(V[26]*(256*(S[3]*(V[26]*(-S[6]-S[2]))+V[47]*S[0]*
 S[1]))));
C[69]=+1024*V[36]*V[26]*V[20]*V[12]*S[8];
C[68]=+512*S[4]*S[7]*S[8];
C[67]=+S[1]*(S[6]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*S[2]*
 S[3])))));
C[66]=+S[3]*(S[6]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[0]*S[1]-256*V[26]*S[2]*
 S[3])))));
C[65]=+S[3]*(S[6]*(S[4]*(V[26]*(128*(V[47]*S[0]*S[1]-V[26]*S[2]*S[3])))));
C[64]=+512*V[36]*V[26]*V[20]*V[12]*S[6]*S[8];
C[63]=+256*S[4]*S[7]*S[6]*S[8];
C[62]=+64*V[47]*S[4]*V[26]*S[0]*S[5]*S[2]*S[3]*S[1];
C[61]=+128*S[4]*S[7]*S[5]*S[2]*S[8];
C[60]=+S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-128*V[26]*S[6]*
 S[3])))));
C[59]=+S[3]*(S[2]*(S[4]*(V[26]*(128*V[47]*S[0]*S[1]-256*V[26]*S[6]*S[3]))));
C[58]=+32*V[47]*S[4]*V[26]*S[0]*S[5]*S[2]*S[3]*S[1];
C[57]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(32*V[47]*S[0]*S[1]+128*V[26]*
 S[6]*S[3]))))));
C[56]=+S[8]*(S[2]*(S[6]*(64*S[4]*S[7]*S[6]+256*S[14]*S[15])));
C[55]=+2*S[9]*S[4]*S[10]*S[11]*S[2]*S[13];
C[54]=+S[5]*(S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(4*V[47]*S[0]*S[1]-16*V[26]*S[6]*
 S[3]))))));
C[53]=+S[5]*(S[3]*(S[2]*(S[4]*(V[26]*(32*(V[47]*S[0]*S[1]-V[26]*S[6]*
 S[3]))))));
C[52]=+32*V[47]*V[36]*V[20]*S[0]*V[12]*S[6]*S[2]*S[3]*S[1];
C[51]=+S[8]*(S[2]*(S[6]*(64*S[4]*S[7]*S[6]+128*S[14]*S[15])));
C[50]=+128*V[36]*V[26]*V[20]*V[12]*S[6]*S[2]*S[8];
C[49]=+S[2]*(S[4]*(S[1]*(S[0]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*S[6]*
 S[3])))+128*S[7]*S[5]*S[8]));
C[48]=+128*V[47]*V[36]*V[20]*S[0]*V[12]*S[2]*S[3]*S[1];
C[47]=+16*S[9]*S[4]*S[10]*S[2]*S[13];
C[46]=+256*V[47]*V[36]*V[20]*S[0]*V[12]*S[2]*S[3]*S[1];
C[45]=+S[3]*(S[2]*(128*V[47]*S[4]*V[26]*S[0]*S[1]+1024*S[14]*S[15]*S[3]));
C[44]=+1024*V[36]*V[26]*V[20]*V[12]*S[2]*S[8];
C[43]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(24*V[47]*S[0]*S[1]-64*V[26]*
 S[6]*S[3]))))));
C[42]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(192*V[47]*S[0]*S[1]-128*V[26]*S[6]*
 S[3])))));
C[41]=+384*S[4]*S[7]*S[6]*S[2]*S[8];
C[40]=+8*S[9]*S[4]*S[10]*S[5]*S[2]*S[13];
C[39]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(8*V[47]*S[0]*S[1]-64*V[26]*S[6]*
 S[3]))))));
C[38]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(64*V[47]*S[0]*S[1]-128*V[26]*S[6]*
 S[3])))));
C[37]=+16*S[9]*S[4]*S[10]*S[6]*S[2]*S[13];
C[36]=+128*V[47]*S[4]*V[26]*S[0]*S[6]*S[2]*S[3]*S[1];
C[35]=+256*S[4]*S[7]*S[6]*S[2]*S[8];
C[34]=+2*S[9]*S[4]*S[10]*S[5]*S[12]*S[13];
C[33]=+16*V[47]*V[36]*V[20]*S[0]*V[12]*S[5]*S[12]*S[3]*S[1];
C[32]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(4*(S[6]+
 S[2]))))-16*V[26]*S[6]*S[2]*S[3]))))));
C[31]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(S[1]*(S[0]*(V[47]*(32*S[6]+48*
 S[2])))-64*V[26]*S[6]*S[2]*S[3]))))));
C[30]=+S[2]*(S[6]*(S[3]*(S[2]*(S[3]*(32*S[4]*S[7]*S[6]-128*S[14]*S[15])-32*
 V[47]*S[4]*V[26]*S[0]*S[1])-32*V[47]*S[4]*V[26]*S[0]*S[6]*S[1])+8*S[9]*
 S[4]*S[10]*S[13]));
C[29]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(-128*S[6]-192*
 S[2]))+96*V[47]*S[0]*S[1]))))));
C[28]=+S[3]*(S[2]*(S[6]*(S[3]*(S[7]*(S[4]*(64*(-S[6]-S[2])))+256*S[14]*
 S[15])+64*V[47]*S[4]*V[26]*S[0]*S[1])));
C[27]=+S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(S[1]*(S[0]*(V[47]*(8*(S[6]+S[2]))))-
 32*V[26]*S[6]*S[2]*S[3])))));
C[26]=+S[3]*(S[2]*(V[12]*(V[20]*(V[36]*(S[1]*(S[0]*(V[47]*(64*(S[6]+
 S[2]))))-128*V[26]*S[6]*S[2]*S[3])))));
C[25]=+S[2]*(S[4]*(S[1]*(S[0]*(V[47]*(S[3]*(V[26]*(64*(-S[6]-S[2])))+16*
 V[47]*S[0]*S[1])))+64*S[7]*S[6]*S[2]*S[8]));
C[24]=+S[3]*(S[2]*(V[12]*(V[20]*(V[36]*(S[3]*(V[26]*(256*(-S[6]-S[2])))+128*
 V[47]*S[0]*S[1])))));
C[23]=+S[3]*(S[2]*(S[4]*(V[26]*(128*(S[3]*(V[26]*(-S[6]-S[2]))+V[47]*S[0]*
 S[1])))));
C[22]=+4*S[9]*S[4]*S[10]*S[5]*S[2]*S[13];
C[21]=+32*V[47]*V[36]*V[20]*S[0]*V[12]*S[5]*S[2]*S[3]*S[1];
C[20]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(8*V[47]*S[0]*S[1]-32*V[26]*S[6]*
 S[3]))))));
C[19]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(96*V[47]*S[0]*S[1]-128*V[26]*
 S[6]*S[3]))))));
C[18]=+S[3]*(S[2]*(S[6]*(S[3]*(256*S[14]*S[15]-64*S[4]*S[7]*S[6])+64*V[47]*
 S[4]*V[26]*S[0]*S[1])));
C[17]=+384*V[36]*V[26]*V[20]*V[12]*S[6]*S[2]*S[8];
C[16]=+S[1]*(S[2]*(S[0]*(S[4]*(V[47]*(16*V[47]*S[0]*S[1]-64*V[26]*S[6]*
 S[3])))));
C[15]=+S[3]*(S[2]*(V[12]*(V[20]*(V[36]*(128*V[47]*S[0]*S[1]-256*V[26]*S[6]*
 S[3])))));
C[14]=+S[3]*(S[2]*(S[4]*(V[26]*(128*(V[47]*S[0]*S[1]-V[26]*S[6]*S[3])))));
C[13]=+512*V[36]*V[26]*V[20]*V[12]*S[2]*S[8];
C[12]=+256*S[4]*S[7]*S[2]*S[8];
C[11]=+4*S[9]*S[4]*S[10]*S[6]*S[12]*S[13];
C[10]=+32*V[47]*V[36]*V[20]*S[0]*V[12]*S[6]*S[12]*S[3]*S[1];
C[9]=+S[1]*(S[2]*(S[6]*(S[0]*(S[4]*(V[47]*(8*V[47]*S[0]*S[1]-32*V[26]*S[2]*
 S[3]))))));
C[8]=+S[3]*(S[2]*(S[6]*(V[12]*(V[20]*(V[36]*(64*V[47]*S[0]*S[1]-128*V[26]*
 S[2]*S[3]))))));
C[7]=+S[3]*(S[2]*(S[6]*(S[4]*(V[26]*(64*(V[47]*S[0]*S[1]-V[26]*S[2]*
 S[3]))))));
C[6]=+8*S[9]*S[4]*S[10]*S[6]*S[2]*S[13];
C[5]=+64*V[47]*V[36]*V[20]*S[0]*V[12]*S[6]*S[2]*S[3]*S[1];
C[4]=+64*V[47]*S[4]*V[26]*S[0]*S[6]*S[2]*S[3]*S[1];
C[3]=+256*V[36]*V[26]*V[20]*V[12]*S[6]*S[2]*S[8];
C[2]=+128*S[4]*S[7]*S[6]*S[2]*S[8];
S[16]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+16*S[10]*S[16];
S[17]=V[49]*V[49];
S[18]=V[44]*V[44];
C[0]=+S[17]*S[18]*S[13];
}
REAL F467_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           N2     !  N2                              
                        /==<======!==<==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         D     t     W+ |  e2     !  e2 |  W+    t     D             
       ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@==<==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        B      !  B        |     |                
          W+|P7   \========<======!==<========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         C  |              D      !  D              |  C             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[184];REAL S[2];REAL tmp[14];                                  
     
if(CalcConst) C467(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[12]*(V[50]*(V[50]*(V[50]*(V[50]*(C[68]*(DP[3]*(DP[6]+DP[7])+
 DP[4]*(DP[6]+DP[7])-DP[9]*DP[0])-C[63]*DP[9])+C[69]*(DP[6]*DP[4]+DP[7]*
 DP[3]-DP[9]*DP[0])+C[111]*DP[7]*DP[4]-C[75]*DP[9])+DP[6]*(C[83]*(-DP[1]-
 DP[2])+C[138]*DP[3]+C[70]*DP[4]-C[63]*DP[9])+DP[7]*(C[83]*(-DP[1]-DP[2])+
 C[70]*DP[3]+C[112]*DP[4]-C[63]*DP[9])+DP[0]*(C[83]*DP[8]-C[70]*DP[9])+
 C[35]*DP[8]-C[76]*DP[9])+DP[7]*(C[115]*DP[3]-C[44]*DP[1]-C[124]*DP[2]+
 C[113]*DP[4]-C[64]*DP[9])+DP[6]*(C[71]*DP[4]-C[44]*DP[2]-C[64]*DP[9])+
 DP[0]*(C[44]*DP[8]-C[71]*DP[9])+C[87]*DP[8]-C[77]*DP[9])+DP[7]*(DP[3]*(
 C[92]*(-DP[6]-DP[7])+C[116]+C[63]*DP[0]+C[12]*DP[5])+DP[5]*(C[12]*(DP[1]+
 DP[2]+DP[4]))+C[114]*DP[4]-C[84]*DP[1]-C[125]*DP[2]+C[35]*DP[8]-C[65]*
 DP[9])+DP[6]*(DP[5]*(C[12]*(DP[1]+DP[2]+DP[3]+DP[4]))+C[139]*DP[3]-C[146]*
 DP[1]-C[84]*DP[2]+C[72]*DP[4]+C[35]*DP[8]-C[65]*DP[9])+DP[0]*(DP[5]*(C[12]*
 (-DP[8]-DP[9]))+C[84]*DP[8]-C[72]*DP[9])+DP[5]*(C[2]*(-DP[8]-DP[9]))+C[88]*
 DP[8]-C[78]*DP[9]);
tmp[1]=+DP[6]*(DP[12]*(V[50]*(V[50]*(DP[3]*(C[92]*DP[6]-C[141]-C[64]*V[50]+
 C[104]*DP[7])+DP[4]*(C[63]*(DP[6]+DP[7])-C[133]-C[118]*V[50]))+DP[4]*(
 C[64]*(DP[6]+DP[7])-C[134])+C[81]*DP[1]+C[3]*DP[2]-C[66]*DP[3])+DP[7]*(
 DP[3]*(C[105]+C[63]*DP[6]+C[92]*DP[7])+C[65]*DP[4]-C[108]*DP[1]-C[35]*
 DP[2])+DP[6]*(C[93]*DP[3]-C[95]*DP[1]-C[35]*DP[2]+C[65]*DP[4])+C[148]*
 DP[1]+C[144]*DP[2]-C[142]*DP[3]-C[135]*DP[4])+DP[5]*(DP[10]*(C[35]*DP[6]-
 C[61]-C[3]*V[50]+C[41]*DP[7])+DP[11]*(C[2]*(DP[6]+DP[7])-C[56]-C[50]*
 V[50]))+DP[13]*(DP[1]*(C[61]+C[3]*V[50]-C[35]*DP[6]-C[41]*DP[7])+DP[2]*(
 C[2]*(-DP[6]-DP[7])+C[56]+C[50]*V[50])))+DP[7]*(DP[12]*(DP[3]*(V[50]*(
 V[50]*(C[63]*DP[7]-C[119]-C[118]*V[50])-C[120])+DP[7]*(C[98]+C[63]*DP[7])-
 C[121])+DP[1]*(C[129]+C[3]*V[50]-C[35]*DP[7]))+DP[1]*(DP[13]*(C[51]+C[50]*
 V[50]-C[2]*DP[7]))+DP[5]*(DP[10]*(C[2]*DP[7]-C[51]-C[50]*V[50])));
tmp[2]=+DP[0]*(DP[5]*(C[13]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[5]*(DP[14]*DP[0]-DP[10]*DP[7]-DP[11]*
 DP[6]))+DP[7]*(C[44]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[169]*DP[10]+C[151]*DP[11]-C[3]*DP[14])+C[17]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+DP[14]*(-C[29]-C[24]*DP[0]-
 C[3]*DP[6])+C[24]*DP[11]*DP[6])+DP[12]*(DP[7]*(C[46]*(-DP[1]-DP[4])+C[81]*
 DP[8]-C[126]*DP[2]-C[48]*DP[3]-C[66]*DP[9])+DP[6]*(C[81]*DP[8]-C[85]*DP[2]-
 C[73]*DP[4]-C[66]*DP[9])+DP[0]*(C[85]*DP[8]+C[73]*DP[9])+C[89]*DP[8]+C[79]*
 DP[9])+DP[13]*(DP[8]*(C[3]*(DP[6]+DP[7])+C[19]+C[15]*DP[0])+DP[2]*(-C[15]*
 DP[6]-C[46]*DP[7])-C[48]*DP[7]*DP[1]))+DP[6]*(DP[5]*(C[3]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[11]*(DP[6]+DP[7])+DP[10]*DP[5])+C[50]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[8]*DP[10]-
 C[155]*DP[11])+DP[12]*(DP[2]*(C[81]*(-DP[6]-DP[7])+C[145])+DP[4]*(C[66]*(
 DP[6]+DP[7])-C[136])+C[82]*DP[1]+C[5]*DP[3])+DP[13]*(DP[2]*(C[3]*(-DP[6]-
 DP[7])+C[57])+C[5]*DP[1]))+DP[7]*(DP[5]*(C[50]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])-C[173]*DP[10])+DP[1]*(C[5]*DP[12]+
 C[52]*DP[13])+C[52]*DP[12]*DP[3]);
tmp[3]=+DP[6]*(DP[0]*(DP[12]*(C[59]*(DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+C[2]*
 (-DP[8]-DP[9]))+DP[13]*(C[59]*(DP[1]+DP[3])+C[14]*(DP[2]+DP[4])+C[2]*(-
 DP[8]-DP[9]))+DP[5]*(C[2]*DP[14]-C[59]*DP[10]-C[14]*DP[11])+DP[10]*(C[180]-
 C[35]*DP[7])+C[25]*DP[11]-C[7]*DP[14])+DP[7]*(C[2]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])+DP[10]*DP[6]-DP[11]*DP[5])+C[41]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+DP[10]*(C[166]+C[35]*DP[7])+
 C[7]*DP[11])+DP[6]*(C[35]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-
 DP[10]*DP[5])+C[2]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[159]*DP[10]+C[7]*DP[11])+C[61]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[56]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])-C[182]*DP[10]-C[156]*DP[11]);
tmp[4]=+DP[12]*(DP[7]*(DP[0]*(DP[1]*(C[95]*(DP[6]+DP[7])-C[128]-C[35]*
 DP[0])+DP[3]*(C[93]*(-DP[6]-DP[7])+C[65]*DP[0]-C[117])+C[36]*DP[8]-C[127]*
 DP[2]-C[47]*DP[4]-C[67]*DP[9])+DP[6]*(DP[1]*(-C[109]-C[35]*DP[6]-C[95]*
 DP[7])+DP[3]*(C[106]+C[65]*DP[6]+C[93]*DP[7])+C[67]*DP[4]-C[36]*DP[2])+
 DP[7]*(DP[1]*(-C[101]-C[35]*DP[7])+DP[3]*(C[99]+C[65]*DP[7]))+C[130]*DP[1]-
 C[122]*DP[3])+DP[6]*(DP[0]*(C[36]*DP[8]-C[147]*DP[1]-C[86]*DP[2]-C[140]*
 DP[3]-C[74]*DP[4]-C[67]*DP[9])+DP[6]*(C[94]*DP[3]-C[96]*DP[1]-C[36]*DP[2]+
 C[67]*DP[4])+C[149]*DP[1]+C[62]*DP[2]-C[143]*DP[3]-C[137]*DP[4])+DP[0]*(
 DP[0]*(C[86]*DP[8]+C[74]*DP[9])+C[90]*DP[8]+C[80]*DP[9]))+DP[13]*(DP[1]*(
 DP[7]*(DP[0]*(C[35]*(DP[6]+DP[7])-C[49]-C[2]*DP[0])+DP[6]*(-C[42]-C[2]*
 DP[6]-C[35]*DP[7])+DP[7]*(-C[38]-C[2]*DP[7])+C[53])+DP[6]*(C[62]-C[60]*
 DP[0]-C[36]*DP[6]))+DP[0]*(DP[8]*(C[4]*(DP[6]+DP[7])+C[20]+C[16]*DP[0])+
 DP[2]*(-C[16]*DP[6]-C[47]*DP[7]))+DP[2]*(DP[6]*(C[4]*(-DP[6]-DP[7])+
 C[58])));
tmp[5]=+V[50]*(V[50]*(DP[0]*(DP[5]*(C[12]*(DP[13]*(DP[6]*(DP[1]+DP[2]+DP[3]+
 DP[4])+DP[7]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[0]*(-DP[8]-DP[9]))+S[1]*(DP[6]*(
 DP[10]+DP[11])+DP[7]*(DP[10]+DP[11])-DP[14]*DP[0])+DP[5]*(DP[6]*(-DP[10]-
 DP[11])+DP[7]*(-DP[10]-DP[11])+DP[14]*DP[0]))+DP[14]*(C[2]*(DP[5]-S[1]-
 DP[6]-DP[7])+V[50]*(-C[17]-C[13]*DP[0])-C[28]-C[23]*DP[0])+DP[7]*(V[50]*(
 C[13]*DP[10]+C[44]*DP[11])+C[23]*DP[10]+C[150]*DP[11])+DP[6]*(DP[11]*(
 C[23]+C[13]*V[50])+C[179]*DP[10])+DP[13]*(C[2]*(-DP[8]-DP[9])))+DP[13]*(
 V[50]*(V[50]*(C[12]*(DP[1]*(-DP[6]-DP[7])+DP[2]*(-DP[6]-DP[7])+DP[8]*
 DP[0])+C[2]*DP[8])+C[13]*(DP[8]*DP[0]-DP[6]*DP[2]-DP[7]*DP[1])+C[17]*DP[8]-
 C[44]*DP[7]*DP[2])+DP[8]*(C[2]*(DP[6]+DP[7])+C[18]+C[14]*DP[0])+DP[1]*(-
 C[59]*DP[6]-C[14]*DP[7])+DP[2]*(-C[14]*DP[6]-C[45]*DP[7]))+tmp[0])+tmp[1])+
 tmp[2]);
tmp[6]=+DP[5]*(DP[0]*(DP[7]*(DP[12]*(C[48]*(DP[1]+DP[3])+C[46]*(DP[2]+
 DP[4])+C[3]*(-DP[8]-DP[9]))+DP[13]*(C[48]*(DP[1]+DP[3])+C[46]*(DP[2]+
 DP[4])+C[3]*(-DP[8]-DP[9]))+DP[5]*(C[3]*DP[14]-C[48]*DP[10]-C[46]*DP[11])-
 C[171]*DP[10]-C[153]*DP[11]-C[8]*DP[14])+DP[6]*(C[15]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[3]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[26]*DP[11]-C[8]*DP[14])+DP[0]*(
 C[15]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[26]*
 DP[14])+C[19]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[31]*DP[14])+DP[6]*(C[3]*(DP[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5]))+C[5]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[57]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 DP[11]*(C[8]*(DP[6]+DP[7])-C[157])+C[10]*DP[10])+DP[7]*(C[52]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[175]*DP[10]));
tmp[7]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[35]*(-DP[6]-DP[7])+C[49]+C[2]*DP[0])+
 DP[3]*(C[35]*(-DP[6]-DP[7])+C[49]+C[2]*DP[0])+C[47]*(DP[2]+DP[4])+C[4]*(-
 DP[8]-DP[9]))+DP[13]*(DP[1]*(C[35]*(-DP[6]-DP[7])+C[49]+C[2]*DP[0])+DP[3]*(
 C[35]*(-DP[6]-DP[7])+C[49]+C[2]*DP[0])+C[47]*(DP[2]+DP[4])+C[4]*(-DP[8]-
 DP[9]))+DP[10]*(DP[5]*(C[35]*(DP[6]+DP[7])-C[49]-C[2]*DP[0])+C[159]*(-
 DP[6]-DP[7])+C[7]*DP[0]-C[172])+DP[5]*(C[4]*DP[14]-C[47]*DP[11])-C[154]*
 DP[11]-C[9]*DP[14])+DP[6]*(DP[12]*(DP[1]*(C[42]+C[2]*DP[6]+C[35]*DP[7])+
 DP[3]*(C[42]+C[2]*DP[6]+C[35]*DP[7])+C[4]*(DP[2]+DP[4]))+DP[13]*(DP[1]*(
 C[42]+C[2]*DP[6]+C[35]*DP[7])+DP[3]*(C[42]+C[2]*DP[6]+C[35]*DP[7])+C[4]*(
 DP[2]+DP[4]))+DP[10]*(DP[5]*(-C[42]-C[2]*DP[6]-C[35]*DP[7])+C[167]+C[7]*
 DP[6]+C[159]*DP[7])+DP[11]*(C[9]-C[4]*DP[5]))+DP[7]*(DP[7]*(C[2]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[7]*DP[10])+C[38]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[163]*DP[10])+
 C[53]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])-C[176]*
 DP[10]);
tmp[8]=+DP[12]*(DP[6]*(DP[7]*(DP[1]*(C[96]*(DP[0]-DP[7])-C[110]-C[36]*
 DP[6])+DP[3]*(C[94]*(DP[7]-DP[0])+C[67]*DP[6]-C[107])-C[37]*DP[2]-C[6]*
 DP[4])+DP[0]*(C[37]*(DP[2]+DP[3]+DP[8])+C[6]*(DP[4]+DP[9])+C[97]*DP[1])+
 DP[6]*(C[37]*(-DP[2]-DP[3])-C[97]*DP[1]-C[6]*DP[4])+C[40]*(DP[2]+DP[3])+
 C[103]*DP[1]+C[22]*DP[4])+DP[7]*(DP[0]*(DP[1]*(C[102]-C[36]*DP[0]+C[96]*
 DP[7])+DP[3]*(C[100]+C[67]*DP[0]-C[94]*DP[7])+C[37]*DP[8]+C[6]*DP[9])+
 DP[7]*(DP[1]*(-C[102]-C[36]*DP[7])+DP[3]*(C[67]*DP[7]-C[100]))+C[131]*
 DP[1]+C[123]*DP[3])+DP[0]*(DP[0]*(-C[37]*DP[8]-C[6]*DP[9])-C[40]*DP[8]-
 C[22]*DP[9]))+DP[13]*(DP[1]*(DP[7]*(DP[0]*(C[36]*(DP[6]+DP[7])+C[39]-C[4]*
 DP[0])+DP[6]*(-C[43]-C[4]*DP[6]-C[36]*DP[7])+DP[7]*(-C[39]-C[4]*DP[7])+
 C[54])+DP[6]*(C[37]*(DP[0]-DP[6])+C[40]))+C[6]*(DP[0]*(DP[8]*(DP[6]-DP[0]+
 DP[7])+DP[6]*DP[2])+DP[2]*(DP[6]*(-DP[6]-DP[7])))+C[22]*(DP[6]*DP[2]-DP[8]*
 DP[0]));
tmp[9]=+V[50]*(V[50]*(DP[5]*(DP[7]*(DP[0]*(DP[12]*(C[14]*(DP[1]+DP[3])+
 C[45]*(DP[2]+DP[4])+C[2]*(-DP[8]-DP[9]))+DP[13]*(C[14]*(DP[1]+DP[3])+C[45]*
 (DP[2]+DP[4])+C[2]*(-DP[8]-DP[9]))+DP[10]*(C[170]+C[2]*DP[0]-C[14]*DP[5]-
 C[35]*DP[7])+DP[5]*(C[2]*DP[14]-C[45]*DP[11])+C[152]*DP[11]-C[7]*DP[14])+
 DP[7]*(C[2]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(DP[7]-
 DP[5]))+C[162]*DP[10])+C[51]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])-C[174]*DP[10])+DP[0]*(DP[0]*(C[14]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[25]*DP[14])+C[18]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[30]*DP[14])+tmp[3])+
 tmp[4]+tmp[5])+DP[12]*(DP[0]*(DP[6]*(C[82]*(DP[2]+DP[8])+C[5]*(DP[4]+
 DP[9]))+DP[8]*(C[82]*(DP[7]-DP[0])-C[91])+DP[9]*(C[5]*(DP[7]-DP[0])-
 C[21]))+DP[6]*(DP[2]*(C[82]*(-DP[6]-DP[7])+C[91])+DP[4]*(C[5]*(-DP[6]-
 DP[7])+C[21])))+DP[13]*(C[5]*(DP[0]*(DP[8]*(DP[6]-DP[0]+DP[7])+DP[6]*
 DP[2])+DP[2]*(DP[6]*(-DP[6]-DP[7])))+C[21]*(DP[6]*DP[2]-DP[8]*DP[0]))+
 tmp[6]);
tmp[10]=+V[50]*(DP[5]*(DP[6]*(DP[0]*(DP[12]*(C[60]*(DP[1]+DP[3])+C[16]*(
 DP[2]+DP[4])+C[4]*(-DP[8]-DP[9]))+DP[13]*(C[60]*(DP[1]+DP[3])+C[16]*(DP[2]+
 DP[4])+C[4]*(-DP[8]-DP[9]))+DP[5]*(C[4]*DP[14]-C[60]*DP[10]-C[16]*DP[11])-
 C[181]*DP[10]-C[27]*DP[11]-C[9]*DP[14])+DP[6]*(C[36]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[4]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[160]*DP[10]+C[9]*DP[11])+C[62]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[58]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[183]*DP[10]-C[158]*
 DP[11])+DP[0]*(DP[0]*(C[16]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[27]*DP[14])+C[20]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+C[32]*DP[14])+tmp[7])+tmp[8]+tmp[9]);
tmp[11]=+DP[6]*(DP[7]*(DP[12]*(DP[1]*(C[36]*(DP[7]-DP[0])+C[43]+C[4]*DP[6])+
 DP[3]*(C[36]*(DP[7]-DP[0])+C[43]+C[4]*DP[6])+C[6]*(DP[2]+DP[4]))+DP[13]*(
 DP[1]*(C[36]*(DP[7]-DP[0])+C[43]+C[4]*DP[6])+DP[3]*(C[36]*(DP[7]-DP[0])+
 C[43]+C[4]*DP[6])+C[6]*(DP[2]+DP[4]))+DP[10]*(DP[5]*(C[36]*(DP[0]-DP[7])-
 C[43]-C[4]*DP[6])+C[160]*(DP[7]-DP[0])+C[9]*DP[6]-C[168])+DP[11]*(-C[11]-
 C[6]*DP[5]))+DP[0]*(C[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*(-DP[2]-
 DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14]))+C[37]*(DP[1]*(-DP[12]-DP[13])+
 DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[11]*(DP[11]+DP[14])+C[161]*DP[10])+
 DP[6]*(C[37]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+
 C[6]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[161]*
 DP[10]-C[11]*DP[11])+C[40]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+C[22]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[165]*DP[10]+C[34]*DP[11]);
tmp[12]=+DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[4]*DP[0]-C[39]-C[36]*DP[7])+
 DP[3]*(C[4]*DP[0]-C[39]-C[36]*DP[7])+C[6]*(-DP[8]-DP[9]))+DP[13]*(DP[1]*(
 C[4]*DP[0]-C[39]-C[36]*DP[7])+DP[3]*(C[4]*DP[0]-C[39]-C[36]*DP[7])+C[6]*(-
 DP[8]-DP[9]))+DP[10]*(DP[5]*(C[39]-C[4]*DP[0]+C[36]*DP[7])+C[164]+C[9]*
 DP[0]-C[160]*DP[7])+DP[14]*(C[11]+C[6]*DP[5]))+DP[7]*(DP[7]*(C[4]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[9]*DP[10])+C[39]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[164]*DP[10])+
 C[54]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[177]*
 DP[10])+DP[0]*(DP[0]*(C[6]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])-C[11]*DP[14])+C[22]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])-C[34]*DP[14])+tmp[11])+DP[7]*(DP[1]*(DP[12]*(DP[0]*(
 C[97]*(DP[6]+DP[7])-C[103]-C[37]*DP[0])+DP[6]*(C[103]-C[37]*DP[6]-C[97]*
 DP[7])+DP[7]*(C[103]-C[37]*DP[7])-C[132])+DP[13]*(DP[0]*(C[37]*(DP[6]+
 DP[7])-C[40]-C[6]*DP[0])+DP[6]*(C[40]-C[6]*DP[6]-C[37]*DP[7])+DP[7]*(C[40]-
 C[6]*DP[7])-C[55]))+DP[3]*(DP[12]*(DP[0]*(C[37]*(DP[6]+DP[7])-C[40]-C[6]*
 DP[0])+DP[6]*(C[40]-C[6]*DP[6]-C[37]*DP[7])+DP[7]*(C[40]-C[6]*DP[7])-
 C[55])));
tmp[13]=+DP[5]*(DP[7]*(DP[0]*(C[37]*(DP[6]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+DP[7]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5]))+DP[0]*(C[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])-C[11]*DP[10])+C[40]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+DP[10]*(C[161]*(DP[6]+DP[7])-C[165]))+DP[6]*(
 DP[1]*(DP[12]*(C[6]*DP[6]-C[40]+C[37]*DP[7])+DP[13]*(C[6]*DP[6]-C[40]+
 C[37]*DP[7]))+DP[3]*(DP[12]*(C[6]*DP[6]-C[40]+C[37]*DP[7])+DP[13]*(C[6]*
 DP[6]-C[40]+C[37]*DP[7]))+DP[10]*(DP[5]*(C[40]-C[6]*DP[6]-C[37]*DP[7])+
 C[165]-C[11]*DP[6]-C[161]*DP[7]))+DP[7]*(DP[7]*(C[6]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[11]*DP[10])+C[40]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[165]*DP[10])+C[55]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])-C[178]*DP[10]));
R=+S[1]*(V[50]*(DP[5]*(DP[0]*(C[5]*(DP[6]*(DP[12]*(-DP[2]-DP[4]-DP[8]-
 DP[9])+DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14]))+DP[0]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[7]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5]))+DP[14]*(C[10]*(DP[6]-
 DP[0]+DP[7])-C[33]-C[21]*DP[5])+C[21]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13]))+C[10]*DP[11]*DP[6])+DP[6]*(C[5]*(DP[6]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+DP[7]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5]))+C[21]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+DP[11]*(C[10]*(-DP[6]-DP[7])+C[33])))+tmp[10])+
 tmp[12])+tmp[13];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
