/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F838_out;
static void C838(REAL * C)
{
REAL* V=va_out;
REAL S[17];                                                                 
     
S[0]=V[14]*V[14];
S[1]=V[9]*V[9];
S[2]=V[17]*V[17];
S[3]=V[2]*V[2];
S[4]=V[1]*V[1];
S[5]=V[36]*V[36];
C[201]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]+
 S[1]))))-16*V[27]*S[0]*S[1]*S[3]))))));
S[6]=V[27]*V[27];
S[7]=V[21]*V[21];
S[8]=V[43]*V[43];
S[9]=V[17]*V[17]*V[17]*V[17];
S[10]=V[1]*V[1]*V[1]*V[1];
C[200]=+S[1]*(S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(32*S[5]*S[6]+128*S[7]))-32*
 V[43]*S[5]*V[27]*S[2]*S[4])-32*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+8*S[8]*
 S[5]*S[9]*S[10]));
C[199]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(-64*S[5]*S[6]-256*S[7])-64*S[5]*S[6]*
 S[1])+64*V[43]*S[5]*V[27]*S[2]*S[4])));
C[198]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*S[0]+4*S[1])))-
 32*V[27]*S[0]*S[1]*S[3])))));
S[11]=V[2]*V[2]*V[2]*V[2];
C[197]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-64*S[0]-32*S[1]))+8*
 V[43]*S[2]*S[4])))+64*S[6]*S[0]*S[1]*S[11]));
C[196]=+S[3]*(S[1]*(S[5]*(V[27]*(S[3]*(V[27]*(-128*S[0]-64*S[1]))+64*V[43]*
 S[2]*S[4]))));
C[195]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(256*S[7]-64*S[5]*S[6]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[194]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*S[0]+2*
 S[1])))-16*V[27]*S[0]*S[1]*S[3]))))));
C[193]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-32*S[0]-16*
 S[1]))+4*V[43]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[11])));
C[192]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(256*S[7]-32*S[5]*S[6])-64*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[191]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*S[0]+6*
 S[1])))-16*V[27]*S[0]*S[1]*S[3]))))));
S[12]=V[14]*V[14]*V[14]*V[14];
C[190]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(S[0]*(S[3]*(V[27]*(-32*S[0]-48*
 S[1]))+12*V[43]*S[2]*S[4])+4*V[43]*S[2]*S[1]*S[4])))+32*S[6]*S[12]*S[1]*
 S[11]));
C[189]=+S[1]*(S[5]*(S[3]*(V[27]*(S[0]*(S[3]*(V[27]*(64*S[0]+96*S[1]))-96*
 V[43]*S[2]*S[4])-32*V[43]*S[2]*S[1]*S[4]))+8*S[8]*S[9]*S[10]));
C[188]=+S[3]*(S[1]*(S[5]*(V[27]*(S[3]*(V[27]*(-192*S[0]-64*S[1]))+64*V[43]*
 S[2]*S[4]))));
C[187]=+S[11]*(S[1]*(128*S[5]*S[6]*S[0]+256*S[7]*S[1]));
C[186]=+S[11]*(S[1]*(64*S[5]*S[6]*S[0]-128*S[7]*S[1]));
C[185]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(-32*S[5]*S[6]-64*S[7])-32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
S[13]=V[9]*V[9]*V[9]*V[9];
C[184]=+4*S[8]*S[5]*S[9]*S[0]*S[13]*S[10];
C[183]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*
 S[1]*S[3]))))));
C[182]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))));
C[181]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))));
C[180]=+S[11]*(S[1]*(64*S[5]*S[6]*S[0]+128*S[7]*S[1]));
C[179]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(16*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))));
C[178]=+S[11]*(S[1]*(S[0]*(32*S[5]*S[6]*S[0]+192*S[7]*S[1])));
C[177]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(2*(S[0]-
 S[1]))))-8*V[27]*S[0]*S[1]*S[3]))))));
C[176]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(16*(S[0]-S[1])))+
 4*V[43]*S[2]*S[4])))-16*S[6]*S[0]*S[1]*S[11])));
C[175]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(320*S[7]-32*S[5]*S[6])+32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[174]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]-64*V[27]*
 S[0]*S[3]))))));
C[173]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(-128*S[5]*S[6]-512*S[7]))+128*V[43]*
 S[5]*V[27]*S[2]*S[4])));
C[172]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]-128*V[27]*S[0]*
 S[3])))));
C[171]=+S[3]*(S[1]*(S[5]*(V[27]*(128*V[43]*S[2]*S[4]-256*V[27]*S[0]*
 S[3]))));
C[170]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*(S[0]+S[1]))))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[169]=+S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(64*S[5]*S[6]+256*S[7]))-64*V[43]*S[5]*
 V[27]*S[2]*S[4])-64*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+16*S[8]*S[5]*S[9]*
 S[10]);
C[168]=+S[3]*(S[0]*(S[3]*(S[0]*(-128*S[5]*S[6]-512*S[7])-128*S[5]*S[6]*
 S[1])+128*V[43]*S[5]*V[27]*S[2]*S[4]));
C[167]=+S[4]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(16*S[0]+8*S[1])))-64*
 V[27]*S[0]*S[1]*S[3]))));
C[166]=+S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-128*S[0]-64*S[1]))+16*V[43]*
 S[2]*S[4])))+128*S[6]*S[0]*S[1]*S[11]);
C[165]=+S[3]*(S[5]*(V[27]*(S[3]*(V[27]*(-256*S[0]-128*S[1]))+128*V[43]*S[2]*
 S[4])));
C[164]=+S[11]*(S[1]*(S[0]*(256*S[5]*S[6]-1024*S[7])));
C[163]=+S[3]*(S[0]*(S[3]*(S[1]*(512*S[7]-128*S[5]*S[6]))+128*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[162]=+S[11]*(S[0]*(256*S[5]*S[6]-1024*S[7]));
C[161]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-64*V[27]*
 S[0]*S[3]))))));
C[160]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*V[43]*S[2]*S[4]-128*V[27]*S[0]*
 S[3])))));
C[159]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]-1024*S[7])));
C[158]=+768*S[7]*S[0]*S[1]*S[11];
C[157]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*S[0]+4*S[1])))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[156]=+S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-64*S[0]-32*S[1]))+8*
 V[43]*S[2]*S[4])))+64*S[6]*S[0]*S[1]*S[11]));
C[155]=+S[3]*(S[0]*(S[3]*(S[1]*(512*S[7]-64*S[5]*S[6])-128*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[154]=+S[11]*(S[0]*(128*S[5]*S[6]-1024*S[7]));
C[153]=+S[12]*(S[3]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[152]=+S[11]*(S[0]*(64*S[5]*S[6]*S[0]+384*S[7]*S[1]));
C[151]=+768*S[7]*S[0]*S[11];
C[150]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(24*V[43]*S[2]*S[4]-64*V[27]*
 S[0]*S[3]))))));
C[149]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(16*V[43]*S[2]*S[4]-192*V[27]*S[0]*
 S[3])))+128*S[6]*S[12]*S[11]));
C[148]=+S[3]*(S[1]*(S[5]*(V[27]*(128*V[43]*S[2]*S[4]-384*V[27]*S[0]*
 S[3]))));
C[147]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]+V[27]*S[0]*
 S[3]))))));
C[146]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]-1280*S[7])));
C[145]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*S[0]+12*S[1])))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[144]=+S[5]*(S[4]*(S[2]*(V[43]*(S[0]*(S[3]*(V[27]*(-64*S[0]-96*S[1]))+24*
 V[43]*S[2]*S[4])+8*V[43]*S[2]*S[1]*S[4])))+64*S[6]*S[12]*S[1]*S[11]);
C[143]=+S[5]*(S[3]*(V[27]*(S[0]*(S[3]*(V[27]*(128*S[0]+192*S[1]))-192*V[43]*
 S[2]*S[4])-64*V[43]*S[2]*S[1]*S[4]))+16*S[8]*S[9]*S[10]);
C[142]=+S[3]*(S[5]*(V[27]*(S[3]*(V[27]*(-384*S[0]-128*S[1]))+128*V[43]*S[2]*
 S[4])));
C[141]=+S[11]*(256*S[5]*S[6]*S[0]+512*S[7]*S[1]);
C[140]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]-S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[139]=+S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(32*(S[0]-S[1])))+8*
 V[43]*S[2]*S[4])))-32*S[6]*S[0]*S[1]*S[11]));
C[138]=+S[3]*(S[0]*(S[3]*(S[1]*(640*S[7]-64*S[5]*S[6])+64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[137]=+S[11]*(S[0]*(128*S[5]*S[6]-1280*S[7]));
C[136]=+S[11]*(128*S[5]*S[6]*S[0]-256*S[7]*S[1]);
C[135]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]+256*S[7])));
C[134]=+S[3]*(S[0]*(S[3]*(S[1]*(-64*S[5]*S[6]-128*S[7])-64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[133]=+S[11]*(S[0]*(128*S[5]*S[6]+256*S[7]));
C[132]=+16*S[8]*S[5]*S[9]*S[0]*S[1]*S[10];
C[131]=+128*V[43]*S[5]*V[27]*S[2]*S[0]*S[1]*S[3]*S[4];
C[130]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]-64*V[27]*S[1]*
 S[3])))));
C[129]=+S[3]*(S[0]*(S[5]*(V[27]*(128*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[128]=+S[3]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[127]=+S[11]*(128*S[5]*S[6]*S[0]+256*S[7]*S[1]);
C[126]=+512*S[7]*S[11];
C[125]=+S[11]*(S[12]*(S[1]*(128*S[5]*S[6]-512*S[7])));
C[124]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]+64*V[27]*
 S[0]*S[3]))))));
C[123]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7]))+128*V[43]*
 S[5]*V[27]*S[2]*S[4])));
C[122]=+256*S[5]*S[6]*S[0]*S[1]*S[11];
C[121]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]+64*V[27]*S[0]*
 S[3])))));
C[120]=+S[3]*(S[1]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7]))+128*V[43]*S[5]*
 V[27]*S[2]*S[4]));
S[14]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[119]=+4*S[8]*S[5]*S[9]*S[14]*S[1]*S[10];
C[118]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*
 S[0]*S[3]))))));
C[117]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[116]=+S[11]*(S[12]*(S[1]*(128*S[5]*S[6]+256*S[7])));
C[115]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[114]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]+1280*S[7])));
C[113]=+S[1]*(S[5]*(16*S[8]*S[9]*S[10]-64*S[6]*S[12]*S[11]));
C[112]=+S[3]*(S[1]*(128*V[43]*S[5]*V[27]*S[2]*S[4]-1280*S[7]*S[0]*S[3]));
C[111]=+256*S[5]*S[6]*S[1]*S[11];
C[110]=+8*S[8]*S[5]*S[9]*S[12]*S[1]*S[10];
C[109]=+64*V[43]*S[5]*V[27]*S[2]*S[12]*S[1]*S[3]*S[4];
C[108]=+128*S[5]*S[6]*S[12]*S[1]*S[11];
C[107]=+512*S[7]*S[0]*S[1]*S[11];
C[106]=+1024*S[7]*S[1]*S[11];
C[105]=+S[12]*(S[3]*(S[3]*(S[1]*(256*S[7]-64*S[5]*S[6]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[104]=+S[11]*(S[12]*(128*S[5]*S[6]-512*S[7]));
C[103]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*S[1]*
 S[3])))));
C[102]=+S[3]*(S[0]*(S[3]*(S[1]*(256*S[7]-64*S[5]*S[6]))+64*V[43]*S[5]*V[27]*
 S[2]*S[4]));
C[101]=+S[11]*(S[0]*(128*S[5]*S[6]-512*S[7]));
C[100]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*(S[0]-S[1]))))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[99]=+S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(768*S[7]-64*S[5]*S[6]))-64*V[43]*S[5]*
 V[27]*S[2]*S[4])+64*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+16*S[8]*S[5]*S[9]*
 S[10]);
C[98]=+S[3]*(S[0]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7])-128*S[5]*S[6]*S[1])+
 128*V[43]*S[5]*V[27]*S[2]*S[4]));
C[97]=+256*S[5]*S[6]*S[0]*S[11];
C[96]=+S[4]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*(S[0]-S[1]))))-32*
 V[27]*S[0]*S[1]*S[3]))));
C[95]=+S[3]*(S[1]*(S[3]*(S[0]*(768*S[7]-64*S[5]*S[6]))-64*V[43]*S[5]*V[27]*
 S[2]*S[4])+64*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+16*S[8]*S[5]*S[9]*S[10];
C[94]=+S[3]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7])-128*S[5]*S[6]*S[1])+128*
 V[43]*S[5]*V[27]*S[2]*S[4]);
C[93]=+S[12]*(S[4]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]+S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[92]=+S[12]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(32*(-S[0]-S[1])))+8*
 V[43]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[11]));
C[91]=+S[12]*(S[3]*(S[3]*(S[1]*(-64*S[5]*S[6]-128*S[7])-64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[90]=+S[11]*(S[12]*(128*S[5]*S[6]+256*S[7]));
C[89]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]+S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[88]=+S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(32*(-S[0]-S[1])))+8*
 V[43]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[11]));
C[87]=+S[3]*(S[0]*(S[3]*(S[1]*(-64*S[5]*S[6]-640*S[7])-64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[86]=+S[11]*(S[0]*(128*S[5]*S[6]+1280*S[7]));
C[85]=+S[12]*(S[4]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*S[1]*
 S[3])))));
C[84]=+S[5]*(S[12]*(S[3]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3]))))+8*
 S[8]*S[9]*S[1]*S[10]);
C[83]=+S[3]*(S[3]*(S[0]*(640*S[7]*S[1]-64*S[5]*S[6]*S[0]))-64*V[43]*S[5]*
 V[27]*S[2]*S[1]*S[4])+16*S[8]*S[5]*S[9]*S[10];
C[82]=+S[3]*(S[3]*(-128*S[5]*S[6]*S[1]-1280*S[7]*S[0])+128*V[43]*S[5]*V[27]*
 S[2]*S[4]);
C[81]=+256*S[5]*S[6]*S[11];
C[80]=+S[12]*(S[4]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*S[1]*
 S[3])))));
C[79]=+S[12]*(S[3]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[78]=+S[11]*(S[0]*(128*S[5]*S[6]*S[0]+256*S[7]*S[1]));
C[77]=+512*S[7]*S[0]*S[11];
C[76]=+1024*S[7]*S[11];
C[75]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*S[0]*
 S[3]))))));
C[74]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(-64*S[5]*S[6]-256*S[7]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[73]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-64*V[27]*S[0]*
 S[3])))));
C[72]=+S[3]*(S[1]*(S[5]*(V[27]*(64*V[43]*S[2]*S[4]-128*V[27]*S[0]*S[3]))));
C[71]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]-512*S[7])));
C[70]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-32*V[27]*S[0]*
 S[3]))))));
C[69]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*V[43]*S[2]*S[4]-64*V[27]*S[0]*
 S[3])))));
C[68]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]-512*S[7])));
C[67]=+32*S[5]*S[6]*S[12]*S[1]*S[11];
C[66]=+384*S[7]*S[0]*S[1]*S[11];
C[65]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(12*V[43]*S[2]*S[4]-32*V[27]*
 S[0]*S[3]))))));
C[64]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(8*V[43]*S[2]*S[4]-96*V[27]*S[0]*
 S[3])))+64*S[6]*S[12]*S[11]));
C[63]=+S[3]*(S[1]*(S[5]*(V[27]*(64*V[43]*S[2]*S[4]-192*V[27]*S[0]*S[3]))));
C[62]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]+16*V[27]*S[0]*
 S[3]))))));
C[61]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]+V[27]*S[0]*
 S[3]))))));
C[60]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]-640*S[7])));
C[59]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]+128*S[7])));
C[58]=+8*S[8]*S[5]*S[9]*S[0]*S[1]*S[10];
C[57]=+64*V[43]*S[5]*V[27]*S[2]*S[0]*S[1]*S[3]*S[4];
C[56]=+64*S[5]*S[6]*S[0]*S[1]*S[11];
C[55]=+256*S[7]*S[1]*S[11];
C[54]=+S[12]*(S[3]*(S[1]*(S[3]*(S[1]*(128*S[7]-32*S[5]*S[6]))+32*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[53]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*S[1]*
 S[3]))))));
C[52]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(128*S[7]-32*S[5]*S[6]))+32*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[51]=+S[11]*(S[12]*(S[1]*(64*S[5]*S[6]-256*S[7])));
C[50]=+32*V[43]*S[5]*V[27]*S[2]*S[0]*S[1]*S[3]*S[4];
C[49]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]-256*S[7])));
C[48]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]-
 S[1]))))-16*V[27]*S[0]*S[1]*S[3]))))));
C[47]=+S[1]*(S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(384*S[7]-32*S[5]*S[6]))-32*V[43]*
 S[5]*V[27]*S[2]*S[4])+32*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+8*S[8]*S[5]*S[9]*
 S[10]));
C[46]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7])-64*S[5]*S[6]*
 S[1])+64*V[43]*S[5]*V[27]*S[2]*S[4])));
C[45]=+2*S[8]*S[5]*S[9]*S[0]*S[13]*S[10];
C[44]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]-S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[43]=+S[1]*(S[3]*(S[1]*(S[3]*(S[0]*(384*S[7]-32*S[5]*S[6]))-32*V[43]*S[5]*
 V[27]*S[2]*S[4])+32*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+8*S[8]*S[5]*S[9]*
 S[10]);
C[42]=+S[3]*(S[1]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7])-64*S[5]*S[6]*S[1])+64*
 V[43]*S[5]*V[27]*S[2]*S[4]));
C[41]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]+32*V[27]*S[0]*
 S[3]))))));
C[40]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[39]=+128*S[5]*S[6]*S[0]*S[1]*S[11];
C[38]=+4*S[8]*S[5]*S[9]*S[0]*S[1]*S[10];
C[37]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]+32*V[27]*S[0]*
 S[3])))));
C[36]=+S[3]*(S[1]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7]))+64*V[43]*S[5]*V[27]*
 S[2]*S[4]));
C[35]=+S[8]*S[5]*S[9]*S[14]*S[13]*S[10];
C[34]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(2*(S[0]+
 S[1]))))-8*V[27]*S[0]*S[1]*S[3]))))));
C[33]=+S[12]*(S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(16*(-S[0]-S[1])))+
 4*V[43]*S[2]*S[4])))+16*S[6]*S[0]*S[1]*S[11])));
C[32]=+S[12]*(S[3]*(S[1]*(S[3]*(S[1]*(-32*S[5]*S[6]-64*S[7])-32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[31]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(2*(S[0]+
 S[1]))))-8*V[27]*S[0]*S[1]*S[3]))))));
C[30]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(16*(-S[0]-S[1])))+
 4*V[43]*S[2]*S[4])))+16*S[6]*S[0]*S[1]*S[11])));
C[29]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(-32*S[5]*S[6]-320*S[7])-32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[28]=+2*S[8]*S[5]*S[9]*S[14]*S[1]*S[10];
C[27]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*
 S[0]*S[3]))))));
C[26]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[25]=+S[11]*(S[12]*(S[1]*(64*S[5]*S[6]+128*S[7])));
C[24]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*S[0]*
 S[3]))))));
C[23]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[22]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]+640*S[7])));
C[21]=+S[8]*S[5]*S[9]*S[12]*S[13]*S[10];
C[20]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(2*V[43]*S[2]*S[4]-8*V[27]*S[1]*
 S[3]))))));
C[19]=+S[1]*(S[5]*(S[12]*(S[3]*(V[27]*(16*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))+4*S[8]*S[9]*S[1]*S[10]));
C[18]=+S[1]*(S[3]*(S[3]*(S[0]*(320*S[7]*S[1]-32*S[5]*S[6]*S[0]))-32*V[43]*
 S[5]*V[27]*S[2]*S[1]*S[4])+8*S[8]*S[5]*S[9]*S[10]);
C[17]=+S[3]*(S[1]*(S[3]*(-64*S[5]*S[6]*S[1]-640*S[7]*S[0])+64*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[16]=+2*S[8]*S[5]*S[9]*S[12]*S[1]*S[10];
C[15]=+16*V[43]*S[5]*V[27]*S[2]*S[12]*S[1]*S[3]*S[4];
C[14]=+S[1]*(S[5]*(8*S[8]*S[9]*S[10]-32*S[6]*S[12]*S[11]));
C[13]=+S[3]*(S[1]*(64*V[43]*S[5]*V[27]*S[2]*S[4]-640*S[7]*S[0]*S[3]));
C[12]=+128*S[5]*S[6]*S[1]*S[11];
C[11]=+2*S[8]*S[5]*S[9]*S[12]*S[13]*S[10];
C[10]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*
 S[1]*S[3]))))));
C[9]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))));
C[8]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]*S[0]+128*S[7]*S[1])));
C[7]=+256*S[7]*S[13]*S[11];
C[6]=+4*S[8]*S[5]*S[9]*S[12]*S[1]*S[10];
C[5]=+32*V[43]*S[5]*V[27]*S[2]*S[12]*S[1]*S[3]*S[4];
C[4]=+64*S[5]*S[6]*S[12]*S[1]*S[11];
C[3]=+256*S[7]*S[0]*S[1]*S[11];
C[2]=+512*S[7]*S[1]*S[11];
S[15]=V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+8*S[9]*S[15];
S[16]=V[49]*V[49]*V[49]*V[49];
C[0]=+S[16]*S[10];
}
REAL F838_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                           n2     !  n2                              
                        /==>======!==>==\                            
                        |  P3     !  P3 |                            
                        |         !     |                            
         b     t     W+ |  E2     !  E2 |  W+    t     b             
       ==>==@==>==@-2>--@==<======!==<==@-->4-@==>==@==>==           
         P1 |  P8 |  P9    P4     !  P4   -PC | -PB |  P1            
            |     |               !           |     |                
            |     |        b      !  b        |     |                
          W+|P7   \========>======!==>========/   W+|-PA             
            1              P6     !  P6             3                
            |                     !                 |                
         B  |              U      !  U              |  B             
       ==<==@==============<======!==<==============@==<==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[202];REAL S[2];REAL tmp[12];                                  
     
if(CalcConst) C838(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[0]*(DP[0]*(C[55]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[1]))+C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])+
 DP[14]*(S[1]-DP[5]))-C[186]*DP[10]-C[7]*DP[14])+DP[7]*(C[2]*(DP[8]*(-
 DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))+C[39]*DP[10]+
 C[7]*DP[14])+DP[12]*(C[68]*(DP[1]+DP[3])+C[66]*(-DP[2]-DP[4])+C[22]*(DP[8]+
 DP[9]))+DP[13]*(C[68]*(DP[1]+DP[3])+C[66]*(-DP[2]-DP[4])+C[22]*(DP[8]+
 DP[9]))+S[1]*(C[68]*DP[10]-C[66]*DP[11]+C[22]*DP[14])+DP[5]*(C[66]*DP[11]-
 C[68]*DP[10]-C[22]*DP[14])+C[192]*DP[10]+C[178]*DP[11]+C[29]*DP[14])+DP[7]*
 (C[3]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-DP[9])+
 S[1]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[55]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))-C[180]*DP[10])+C[59]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-S[1]))+C[8]*(
 DP[14]-DP[11])-C[185]*DP[10])+C[25]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+
 DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(DP[11]-
 DP[14]))+C[32]*(DP[14]-DP[11]);
tmp[1]=+S[1]*(DP[6]*(S[1]*(C[76]*(DP[0]*(DP[9]-DP[3]-DP[4])+DP[4]*(-DP[6]-
 DP[7]))+DP[3]*(C[142]+C[81]*S[1]-C[126]*DP[6])+DP[9]*(-C[82]-C[81]*S[1])+
 C[111]*(DP[8]-DP[1])-C[137]*DP[4])+DP[0]*(C[106]*(DP[1]+DP[2]-DP[8])+C[2]*(
 DP[4]-DP[9])+C[141]*DP[3])+DP[6]*(C[2]*(DP[1]+DP[4])+C[106]*DP[2]-C[136]*
 DP[3])+DP[7]*(C[106]*DP[2]-C[97]*DP[3]+C[2]*DP[4])+C[146]*DP[2]-C[148]*
 DP[1]+C[143]*DP[3]-C[138]*DP[4]+C[112]*DP[8]-C[83]*DP[9])+DP[0]*(S[1]*(
 DP[9]*(C[76]*(DP[0]-DP[7])+C[86])+DP[3]*(C[154]-C[126]*DP[0])-C[151]*
 DP[4])+DP[0]*(C[2]*(DP[1]-DP[9])-C[136]*DP[3]-C[106]*DP[8])+DP[7]*(C[97]*
 DP[3]+C[106]*DP[8]+C[2]*DP[9])+C[158]*DP[2]-C[159]*DP[1]+C[155]*DP[3]+
 C[152]*DP[4]-C[114]*DP[8]+C[87]*DP[9])+DP[7]*(S[1]*(DP[3]*(C[126]*DP[7]-
 C[133])+C[77]*(DP[4]-DP[9]))+DP[1]*(C[135]-C[2]*DP[7])+DP[3]*(-C[134]-
 C[127]*DP[7])+C[107]*(DP[8]-DP[2])+C[78]*(DP[9]-DP[4]))+S[1]*(C[90]*(DP[9]-
 DP[4]))+C[116]*(DP[2]-DP[8])+C[91]*(DP[9]-DP[4]));
tmp[2]=+DP[12]*(DP[0]*(DP[1]*(C[122]*(-DP[6]-DP[7])+C[39]*DP[0]-C[160])+
 DP[3]*(C[129]*(DP[6]+DP[7])+C[156]-C[128]*DP[0])+C[153]*DP[4]-C[4]*DP[2]-
 C[115]*DP[8]+C[88]*DP[9])+DP[6]*(DP[1]*(C[39]*DP[6]-C[149]+C[122]*DP[7])+
 DP[3]*(-C[144]-C[128]*DP[6]-C[129]*DP[7])+C[147]*DP[2]-C[139]*DP[4]+C[113]*
 DP[8]+C[84]*DP[9])+DP[7]*(DP[1]*(C[115]+C[39]*DP[7])+DP[3]*(-C[88]-C[128]*
 DP[7])+C[108]*(DP[2]-DP[8])+C[79]*(DP[9]-DP[4]))+C[117]*(DP[2]-DP[8])+
 C[92]*(DP[9]-DP[4])+tmp[1])+DP[13]*(S[1]*(DP[6]*(C[2]*(DP[0]*(DP[1]+DP[2]-
 DP[8])+DP[2]*(DP[6]+DP[7]))+DP[1]*(C[55]*DP[6]-C[63]-C[12]*S[1])+DP[8]*(
 C[13]+C[12]*S[1])+C[60]*DP[2])+DP[0]*(DP[8]*(C[2]*(DP[7]-DP[0])-C[22])+
 DP[1]*(C[55]*DP[0]-C[68])+C[66]*DP[2])+DP[7]*(DP[1]*(C[59]-C[55]*DP[7])+
 C[3]*(DP[8]-DP[2]))+C[25]*(DP[2]-DP[8]))+DP[1]*(DP[0]*(C[39]*(-DP[6]-
 DP[7])+C[56]*DP[0]-C[69])+DP[6]*(C[56]*DP[6]-C[64]+C[39]*DP[7])+DP[7]*(
 C[23]+C[56]*DP[7]))+DP[2]*(C[26]-C[67]*DP[0]+C[61]*DP[6]+C[4]*DP[7])+DP[8]*
 (C[14]*DP[6]-C[26]-C[23]*DP[0]-C[4]*DP[7]));
tmp[3]=+S[1]*(DP[12]*(S[1]*(DP[0]*(S[1]*(C[81]*(DP[9]-DP[3]))+C[111]*(DP[1]-
 DP[8])+C[101]*DP[4]-C[165]*DP[3]+C[94]*DP[9])+DP[6]*(DP[4]*(-C[94]-C[81]*
 S[1])+C[111]*DP[2]-C[162]*DP[3])+S[1]*(C[97]*(DP[9]-DP[3]))+C[122]*(DP[1]-
 DP[8])+C[98]*DP[9]-C[168]*DP[3])+DP[0]*(DP[5]*(C[12]*(DP[8]-DP[1]-DP[3]+
 DP[9]))+C[171]*DP[1]-C[71]*DP[2]-C[166]*DP[3]+C[102]*DP[4]-C[120]*DP[8]+
 C[95]*DP[9])+DP[5]*(C[39]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[6]*(C[12]*(-DP[2]-
 DP[4])))+DP[6]*(C[164]*DP[1]+C[120]*DP[2]-C[163]*DP[3]-C[95]*DP[4])+C[173]*
 DP[1]-C[169]*DP[3]-C[123]*DP[8]+C[99]*DP[9])+DP[5]*(C[12]*(DP[0]*(DP[13]*(
 DP[8]-DP[1]-DP[3]+DP[9])+S[1]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[6]*
 (DP[11]*(DP[5]-S[1])+DP[13]*(-DP[2]-DP[4])))+C[39]*(DP[13]*(DP[8]-DP[1]-
 DP[3]+DP[9])+S[1]*(DP[14]-DP[10])+DP[5]*(DP[10]-DP[14]))+DP[0]*(C[49]*
 DP[11]-C[196]*DP[10]+C[42]*DP[14])+DP[6]*(-C[71]*DP[10]-C[42]*DP[11])+
 C[46]*DP[14]-C[199]*DP[10])+DP[13]*(S[1]*(C[12]*(DP[0]*(DP[1]-DP[8])+DP[6]*
 DP[2])+C[39]*(DP[1]-DP[8]))+DP[0]*(C[72]*DP[1]-C[49]*DP[2]-C[36]*DP[8])+
 DP[1]*(C[74]+C[71]*DP[6])+C[36]*DP[6]*DP[2]-C[40]*DP[8]));
tmp[4]=+DP[6]*(DP[5]*(DP[0]*(DP[12]*(C[72]*(-DP[1]-DP[3])+C[49]*(DP[2]+
 DP[4])+C[36]*(DP[8]+DP[9]))+DP[13]*(C[72]*(-DP[1]-DP[3])+C[49]*(DP[2]+
 DP[4])+C[36]*(DP[8]+DP[9]))+DP[5]*(C[72]*DP[10]-C[49]*DP[11]-C[36]*DP[14])+
 C[52]*DP[11]-C[197]*DP[10]+C[43]*DP[14])+DP[6]*(C[71]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[36]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[195]*DP[10]-C[43]*DP[11])+C[74]*(
 DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[40]*(DP[8]*(
 DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[47]*DP[14]-C[200]*
 DP[10])+DP[12]*(DP[0]*(C[172]*DP[1]-C[57]*DP[2]+C[167]*DP[3]+C[103]*DP[4]-
 C[121]*DP[8]+C[96]*DP[9])+DP[6]*(C[131]*DP[1]+C[121]*DP[2]-C[130]*DP[3]-
 C[96]*DP[4])+C[174]*DP[1]+C[170]*DP[3]-C[124]*DP[8]+C[100]*DP[9])+DP[13]*(
 DP[0]*(C[73]*DP[1]-C[50]*DP[2]-C[37]*DP[8])+DP[1]*(C[75]+C[57]*DP[6])+
 C[37]*DP[6]*DP[2]-C[41]*DP[8])+tmp[3]);
tmp[5]=+DP[7]*(DP[5]*(DP[6]*(C[2]*(DP[0]*(DP[12]*(DP[8]-DP[1]-DP[2]-DP[3]-
 DP[4]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[2]-DP[3]-DP[4]+DP[9])+S[1]*(DP[14]-
 DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]-DP[14]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+DP[7]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1])))+S[1]*(C[12]*(DP[12]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[13]*(DP[1]+DP[3]-DP[8]-DP[9])+S[1]*(DP[10]-DP[14])+
 DP[5]*(DP[14]-DP[10]))+DP[10]*(C[188]-C[55]*DP[6])-C[60]*DP[11]-C[17]*
 DP[14])+DP[12]*(DP[1]*(C[63]-C[55]*DP[6])+DP[3]*(C[63]-C[55]*DP[6])+C[60]*
 (-DP[2]-DP[4])+C[13]*(-DP[8]-DP[9]))+DP[13]*(DP[1]*(C[63]-C[55]*DP[6])+
 DP[3]*(C[63]-C[55]*DP[6])+C[60]*(-DP[2]-DP[4])+C[13]*(-DP[8]-DP[9]))+
 DP[10]*(DP[5]*(C[55]*DP[6]-C[63])+C[189]+C[187]*DP[0]-C[186]*DP[6]-C[39]*
 DP[7])+DP[11]*(C[7]*(DP[0]+DP[6]+DP[7])+C[60]*DP[5]-C[175])+DP[14]*(C[13]*
 DP[5]-C[18]-C[7]*DP[0]))+tmp[0])+tmp[2]);
tmp[6]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[39]*(DP[6]+DP[7])+C[69]-C[56]*DP[0])+
 DP[3]*(C[39]*(DP[6]+DP[7])+C[69]-C[56]*DP[0])+C[67]*(DP[2]+DP[4])+C[23]*(
 DP[8]+DP[9]))+DP[13]*(DP[1]*(C[39]*(DP[6]+DP[7])+C[69]-C[56]*DP[0])+DP[3]*(
 C[39]*(DP[6]+DP[7])+C[69]-C[56]*DP[0])+C[67]*(DP[2]+DP[4])+C[23]*(DP[8]+
 DP[9]))+DP[10]*(DP[5]*(C[39]*(-DP[6]-DP[7])+C[56]*DP[0]-C[69])+C[182]*(
 DP[6]+DP[7])+C[193]-C[181]*DP[0])+DP[5]*(-C[67]*DP[11]-C[23]*DP[14])+
 C[179]*DP[11]+C[30]*DP[14])+DP[6]*(DP[12]*(DP[1]*(C[64]-C[56]*DP[6]-C[39]*
 DP[7])+DP[3]*(C[64]-C[56]*DP[6]-C[39]*DP[7])+C[61]*(-DP[2]-DP[4])+C[14]*(-
 DP[8]-DP[9]))+DP[13]*(DP[1]*(C[64]-C[56]*DP[6]-C[39]*DP[7])+DP[3]*(C[64]-
 C[56]*DP[6]-C[39]*DP[7])+C[61]*(-DP[2]-DP[4])+C[14]*(-DP[8]-DP[9]))+DP[10]*
 (DP[5]*(C[56]*DP[6]-C[64]+C[39]*DP[7])-C[190]-C[181]*DP[6]-C[182]*DP[7])+
 DP[5]*(C[61]*DP[11]+C[14]*DP[14])+C[19]*DP[14]-C[176]*DP[11])+DP[7]*(C[4]*(
 DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(
 DP[11]-DP[14]))+DP[7]*(C[56]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])-C[181]*DP[10])+C[23]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-
 DP[12]-DP[13])+DP[10]*DP[5])+C[9]*(DP[14]-DP[11])-C[30]*DP[10])+C[26]*(
 DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(
 DP[11]-DP[14]))+C[33]*(DP[14]-DP[11]));
tmp[7]=+DP[12]*(DP[7]*(DP[0]*(DP[1]*(C[131]*(-DP[6]-DP[7])+C[57]*DP[0]-
 C[161])+DP[3]*(C[130]*(DP[6]+DP[7])-C[157]-C[103]*DP[0])+C[85]*DP[4]-C[5]*
 DP[2]-C[75]*DP[8]-C[89]*DP[9])+DP[6]*(DP[1]*(C[150]+C[57]*DP[6]+C[131]*
 DP[7])+DP[3]*(C[145]-C[103]*DP[6]-C[130]*DP[7])+C[41]*DP[2]-C[140]*DP[4]-
 C[5]*DP[8]+C[85]*DP[9])+DP[7]*(DP[1]*(C[75]+C[57]*DP[7])+DP[3]*(C[89]-
 C[103]*DP[7])+C[109]*(DP[2]-DP[8])+C[80]*(DP[9]-DP[4]))+C[118]*(DP[2]-
 DP[8])+C[93]*(DP[4]-DP[9]))+DP[6]*(DP[0]*(C[58]*(-DP[2]-DP[3]-DP[8])+C[38]*
 (-DP[4]-DP[9])-C[132]*DP[1])+DP[6]*(C[58]*(DP[2]+DP[3])+C[132]*DP[1]+C[38]*
 DP[4])+C[110]*(-DP[1]-DP[8])+C[6]*(-DP[3]-DP[9]))+DP[0]*(DP[0]*(C[58]*
 DP[8]+C[38]*DP[9])+C[110]*DP[8]+C[6]*DP[9]))+DP[13]*(DP[7]*(DP[1]*(DP[0]*(
 C[57]*(-DP[6]-DP[7])+C[50]*DP[0]-C[70])+DP[6]*(C[65]+C[50]*DP[6]+C[57]*
 DP[7])+DP[7]*(C[24]+C[50]*DP[7]))+DP[2]*(C[27]-C[15]*DP[0]+C[62]*DP[6]+
 C[5]*DP[7])+DP[8]*(-C[27]-C[24]*DP[0]-C[15]*DP[6]-C[5]*DP[7]))+DP[6]*(
 DP[0]*(C[38]*(-DP[2]-DP[8])-C[58]*DP[1])+DP[1]*(C[58]*DP[6]-C[6])+C[38]*
 DP[6]*DP[2]-C[6]*DP[8])+DP[0]*(DP[8]*(C[6]+C[38]*DP[0])));
tmp[8]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[57]*(DP[6]+DP[7])+C[70]-C[50]*DP[0])+
 DP[3]*(C[57]*(DP[6]+DP[7])+C[70]-C[50]*DP[0])+C[15]*(DP[2]+DP[4])+C[24]*(
 DP[8]+DP[9]))+DP[13]*(DP[1]*(C[57]*(DP[6]+DP[7])+C[70]-C[50]*DP[0])+DP[3]*(
 C[57]*(DP[6]+DP[7])+C[70]-C[50]*DP[0])+C[15]*(DP[2]+DP[4])+C[24]*(DP[8]+
 DP[9]))+DP[10]*(DP[5]*(C[57]*(-DP[6]-DP[7])+C[50]*DP[0]-C[70])+C[183]*(
 DP[6]+DP[7])-C[194]-C[53]*DP[0])+DP[5]*(-C[15]*DP[11]-C[24]*DP[14])+C[20]*
 DP[11]-C[31]*DP[14])+DP[6]*(DP[12]*(DP[1]*(-C[65]-C[50]*DP[6]-C[57]*DP[7])+
 DP[3]*(-C[65]-C[50]*DP[6]-C[57]*DP[7])+C[62]*(-DP[2]-DP[4])+C[15]*(DP[8]+
 DP[9]))+DP[13]*(DP[1]*(-C[65]-C[50]*DP[6]-C[57]*DP[7])+DP[3]*(-C[65]-C[50]*
 DP[6]-C[57]*DP[7])+C[62]*(-DP[2]-DP[4])+C[15]*(DP[8]+DP[9]))+DP[10]*(DP[5]*
 (C[65]+C[50]*DP[6]+C[57]*DP[7])+C[191]-C[53]*DP[6]-C[183]*DP[7])+DP[5]*(
 C[62]*DP[11]-C[15]*DP[14])+C[20]*DP[14]-C[177]*DP[11])+DP[7]*(C[5]*(DP[12]*
 (DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+DP[7]*(C[50]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])-C[53]*DP[10])+C[24]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[10]*(DP[14]-DP[11])+C[31]*DP[10])+C[27]*(DP[12]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+C[34]*(DP[11]-DP[14]));
tmp[9]=+DP[5]*(DP[6]*(DP[0]*(C[38]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*
 (DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+C[58]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[45]*(-DP[11]-DP[14])-C[184]*
 DP[10])+DP[6]*(C[58]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[38]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[184]*DP[10]+C[45]*DP[11])+C[6]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(
 DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-DP[14]))+C[11]*(-DP[10]-DP[14]))+
 DP[0]*(DP[0]*(C[38]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[45]*DP[14])+C[6]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[11]*DP[14])+tmp[8]);
tmp[10]=+S[1]*(S[1]*(DP[0]*(DP[0]*(DP[5]*(C[49]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))-C[52]*DP[14])+DP[12]*(S[1]*(
 DP[9]*(-C[102]-C[101]*S[1])+C[71]*DP[8])+C[57]*DP[8]-C[103]*DP[9])+DP[8]*(
 DP[13]*(C[50]+C[49]*S[1])))+DP[5]*(C[51]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-
 DP[12]-DP[13])+DP[14]*(DP[5]-S[1]))-C[54]*DP[14])+DP[12]*(S[1]*(DP[9]*(-
 C[105]-C[104]*S[1])+C[125]*DP[8])+C[109]*DP[8]-C[80]*DP[9])+DP[8]*(DP[13]*(
 C[5]+C[51]*S[1])))+tmp[4]+tmp[5])+DP[5]*(DP[6]*(DP[0]*(DP[12]*(C[73]*(-
 DP[1]-DP[3])+C[50]*(DP[2]+DP[4])+C[37]*(DP[8]+DP[9]))+DP[13]*(C[73]*(-
 DP[1]-DP[3])+C[50]*(DP[2]+DP[4])+C[37]*(DP[8]+DP[9]))+DP[5]*(C[73]*DP[10]-
 C[50]*DP[11]-C[37]*DP[14])+C[198]*DP[10]+C[53]*DP[11]+C[44]*DP[14])+DP[6]*(
 C[57]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[37]*(
 DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[183]*DP[10]-
 C[44]*DP[11])+C[75]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[41]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+
 C[201]*DP[10]+C[48]*DP[14])+DP[0]*(DP[0]*(C[50]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[53]*DP[14])+C[5]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[10]*DP[14])+tmp[6])+tmp[7]);
tmp[11]=+DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[58]*(DP[6]+DP[7])-C[6]-C[38]*
 DP[0])+DP[3]*(C[58]*(DP[6]+DP[7])-C[6]-C[38]*DP[0])+C[16]*(DP[2]+DP[4]-
 DP[8]-DP[9]))+DP[13]*(DP[1]*(C[58]*(DP[6]+DP[7])-C[6]-C[38]*DP[0])+DP[3]*(
 C[58]*(DP[6]+DP[7])-C[6]-C[38]*DP[0])+C[16]*(DP[2]+DP[4]-DP[8]-DP[9]))+
 DP[10]*(DP[5]*(C[58]*(-DP[6]-DP[7])+C[6]+C[38]*DP[0])+C[184]*(-DP[6]-
 DP[7])+C[11]+C[45]*DP[0])+DP[5]*(C[16]*(DP[14]-DP[11]))+C[21]*(DP[14]-
 DP[11]))+DP[6]*(DP[12]*(C[16]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[1]*(C[6]-C[38]*
 DP[6]-C[58]*DP[7])+DP[3]*(C[6]-C[38]*DP[6]-C[58]*DP[7]))+DP[13]*(C[16]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[1]*(C[6]-C[38]*DP[6]-C[58]*DP[7])+DP[3]*(C[6]-
 C[38]*DP[6]-C[58]*DP[7]))+DP[10]*(DP[5]*(C[38]*DP[6]-C[6]+C[58]*DP[7])+
 C[45]*DP[6]-C[11]+C[184]*DP[7])+DP[5]*(C[16]*(DP[11]-DP[14]))+C[21]*(
 DP[11]-DP[14]))+DP[7]*(C[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[7]*(C[38]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[45]*DP[10])+C[16]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[11]*(DP[11]-
 DP[14])-C[21]*DP[10])+C[28]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+C[35]*(DP[14]-DP[11])));
R=+S[1]*(DP[7]*(DP[12]*(DP[0]*(DP[1]*(C[132]*(-DP[6]-DP[7])+C[110]+C[58]*
 DP[0])+DP[3]*(C[58]*(-DP[6]-DP[7])+C[6]+C[38]*DP[0])+C[6]*(DP[8]-DP[2])+
 C[16]*(DP[9]-DP[4]))+DP[6]*(DP[1]*(C[58]*DP[6]-C[110]+C[132]*DP[7])+DP[3]*(
 C[38]*DP[6]-C[6]+C[58]*DP[7])+C[6]*(DP[2]-DP[8])+C[16]*(DP[4]-DP[9]))+
 DP[7]*(C[6]*(DP[4]-DP[1]-DP[9])+DP[3]*(C[38]*DP[7]-C[16])+C[110]*(DP[2]-
 DP[8])+C[58]*DP[7]*DP[1])+C[119]*(DP[8]-DP[2])+C[28]*(DP[9]-DP[4]))+DP[13]*
 (DP[1]*(DP[0]*(C[58]*(-DP[6]-DP[7])+C[6]+C[38]*DP[0])+DP[6]*(C[38]*DP[6]-
 C[6]+C[58]*DP[7])+DP[7]*(C[38]*DP[7]-C[16]))+DP[2]*(C[16]*(DP[6]-DP[0])+
 C[6]*DP[7]-C[28])+DP[8]*(C[16]*(DP[0]-DP[6])+C[28]-C[6]*DP[7])))+tmp[9]+
 tmp[10])+tmp[11];
R*=(N/D)*Q2[5]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3]*Q0[4];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
