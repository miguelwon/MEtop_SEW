/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F770_out;
static void C770(REAL * C)
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
C[198]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(256*S[7]-64*S[5]*S[6]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[197]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*S[0]+4*S[1])))-
 32*V[27]*S[0]*S[1]*S[3])))));
S[11]=V[2]*V[2]*V[2]*V[2];
C[196]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-64*S[0]-32*S[1]))+8*
 V[43]*S[2]*S[4])))+64*S[6]*S[0]*S[1]*S[11]));
C[195]=+S[3]*(S[1]*(S[5]*(V[27]*(S[3]*(V[27]*(-128*S[0]-64*S[1]))+64*V[43]*
 S[2]*S[4]))));
C[194]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*S[0]+6*
 S[1])))-16*V[27]*S[0]*S[1]*S[3]))))));
S[12]=V[14]*V[14]*V[14]*V[14];
C[193]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(S[0]*(S[3]*(V[27]*(-32*S[0]-48*
 S[1]))+12*V[43]*S[2]*S[4])+4*V[43]*S[2]*S[1]*S[4])))+32*S[6]*S[12]*S[1]*
 S[11]));
C[192]=+S[1]*(S[5]*(S[3]*(V[27]*(S[0]*(S[3]*(V[27]*(64*S[0]+96*S[1]))-96*
 V[43]*S[2]*S[4])-32*V[43]*S[2]*S[1]*S[4]))+8*S[8]*S[9]*S[10]));
C[191]=+S[3]*(S[1]*(S[5]*(V[27]*(S[3]*(V[27]*(-192*S[0]-64*S[1]))+64*V[43]*
 S[2]*S[4]))));
C[190]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*S[0]+2*
 S[1])))-16*V[27]*S[0]*S[1]*S[3]))))));
C[189]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-32*S[0]-16*
 S[1]))+4*V[43]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[11])));
C[188]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(256*S[7]-32*S[5]*S[6])-64*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
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
C[179]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]-
 S[1]))))-16*V[27]*S[0]*S[1]*S[3]))))));
C[178]=+S[1]*(S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(384*S[7]-32*S[5]*S[6]))-32*
 V[43]*S[5]*V[27]*S[2]*S[4])+32*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+8*S[8]*
 S[5]*S[9]*S[10]));
C[177]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7])-64*S[5]*S[6]*
 S[1])+64*V[43]*S[5]*V[27]*S[2]*S[4])));
C[176]=+S[12]*(S[3]*(S[1]*(S[3]*(S[1]*(128*S[7]-32*S[5]*S[6]))+32*V[43]*
 S[5]*V[27]*S[2]*S[4])));
C[175]=+S[1]*(S[5]*(S[12]*(S[3]*(V[27]*(16*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))+4*S[8]*S[9]*S[1]*S[10]));
C[174]=+S[1]*(S[3]*(S[3]*(S[0]*(320*S[7]*S[1]-32*S[5]*S[6]*S[0]))-32*V[43]*
 S[5]*V[27]*S[2]*S[1]*S[4])+8*S[8]*S[5]*S[9]*S[10]);
C[173]=+S[3]*(S[1]*(S[3]*(-64*S[5]*S[6]*S[1]-640*S[7]*S[0])+64*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[172]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(2*(S[0]+
 S[1]))))-8*V[27]*S[0]*S[1]*S[3]))))));
C[171]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(16*(-S[0]-S[1])))+
 4*V[43]*S[2]*S[4])))+16*S[6]*S[0]*S[1]*S[11])));
C[170]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(-32*S[5]*S[6]-320*S[7])-32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[169]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]-64*V[27]*
 S[0]*S[3]))))));
C[168]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(-128*S[5]*S[6]-512*S[7]))+128*V[43]*
 S[5]*V[27]*S[2]*S[4])));
C[167]=+S[11]*(S[1]*(S[0]*(256*S[5]*S[6]-1024*S[7])));
C[166]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]+64*V[27]*
 S[0]*S[3]))))));
C[165]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7]))+128*V[43]*
 S[5]*V[27]*S[2]*S[4])));
C[164]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*(S[0]+S[1]))))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[163]=+S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(64*S[5]*S[6]+256*S[7]))-64*V[43]*S[5]*
 V[27]*S[2]*S[4])-64*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+16*S[8]*S[5]*S[9]*
 S[10]);
C[162]=+S[3]*(S[0]*(S[3]*(S[0]*(-128*S[5]*S[6]-512*S[7])-128*S[5]*S[6]*
 S[1])+128*V[43]*S[5]*V[27]*S[2]*S[4]));
C[161]=+S[3]*(S[0]*(S[3]*(S[1]*(512*S[7]-128*S[5]*S[6]))+128*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[160]=+S[11]*(S[0]*(256*S[5]*S[6]-1024*S[7]));
C[159]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*(S[0]-S[1]))))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[158]=+S[0]*(S[3]*(S[1]*(S[3]*(S[0]*(768*S[7]-64*S[5]*S[6]))-64*V[43]*S[5]*
 V[27]*S[2]*S[4])+64*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+16*S[8]*S[5]*S[9]*
 S[10]);
C[157]=+S[3]*(S[0]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7])-128*S[5]*S[6]*
 S[1])+128*V[43]*S[5]*V[27]*S[2]*S[4]));
C[156]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]-128*V[27]*S[0]*
 S[3])))));
C[155]=+S[3]*(S[1]*(S[5]*(V[27]*(128*V[43]*S[2]*S[4]-256*V[27]*S[0]*
 S[3]))));
C[154]=+S[11]*(S[12]*(S[1]*(128*S[5]*S[6]-512*S[7])));
C[153]=+S[4]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(16*S[0]+8*S[1])))-64*
 V[27]*S[0]*S[1]*S[3]))));
C[152]=+S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-128*S[0]-64*S[1]))+16*V[43]*
 S[2]*S[4])))+128*S[6]*S[0]*S[1]*S[11]);
C[151]=+S[3]*(S[5]*(V[27]*(S[3]*(V[27]*(-256*S[0]-128*S[1]))+128*V[43]*S[2]*
 S[4])));
C[150]=+S[12]*(S[3]*(S[3]*(S[1]*(256*S[7]-64*S[5]*S[6]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[149]=+S[11]*(S[12]*(128*S[5]*S[6]-512*S[7]));
C[148]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(24*V[43]*S[2]*S[4]-64*V[27]*
 S[0]*S[3]))))));
C[147]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(16*V[43]*S[2]*S[4]-192*V[27]*S[0]*
 S[3])))+128*S[6]*S[12]*S[11]));
C[146]=+S[3]*(S[1]*(S[5]*(V[27]*(128*V[43]*S[2]*S[4]-384*V[27]*S[0]*
 S[3]))));
C[145]=+S[1]*(S[5]*(16*S[8]*S[9]*S[10]-64*S[6]*S[12]*S[11]));
C[144]=+S[3]*(S[1]*(128*V[43]*S[5]*V[27]*S[2]*S[4]-1280*S[7]*S[0]*S[3]));
C[143]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*S[0]+12*S[1])))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[142]=+S[5]*(S[4]*(S[2]*(V[43]*(S[0]*(S[3]*(V[27]*(-64*S[0]-96*S[1]))+24*
 V[43]*S[2]*S[4])+8*V[43]*S[2]*S[1]*S[4])))+64*S[6]*S[12]*S[1]*S[11]);
C[141]=+S[5]*(S[3]*(V[27]*(S[0]*(S[3]*(V[27]*(128*S[0]+192*S[1]))-192*V[43]*
 S[2]*S[4])-64*V[43]*S[2]*S[1]*S[4]))+16*S[8]*S[9]*S[10]);
C[140]=+S[3]*(S[5]*(V[27]*(S[3]*(V[27]*(-384*S[0]-128*S[1]))+128*V[43]*S[2]*
 S[4])));
C[139]=+S[5]*(S[12]*(S[3]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3]))))+8*
 S[8]*S[9]*S[1]*S[10]);
C[138]=+S[3]*(S[3]*(S[0]*(640*S[7]*S[1]-64*S[5]*S[6]*S[0]))-64*V[43]*S[5]*
 V[27]*S[2]*S[1]*S[4])+16*S[8]*S[5]*S[9]*S[10];
C[137]=+S[3]*(S[3]*(-128*S[5]*S[6]*S[1]-1280*S[7]*S[0])+128*V[43]*S[5]*
 V[27]*S[2]*S[4]);
C[136]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-64*V[27]*
 S[0]*S[3]))))));
C[135]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*V[43]*S[2]*S[4]-128*V[27]*S[0]*
 S[3])))));
C[134]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]-1024*S[7])));
C[133]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]+1280*S[7])));
C[132]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*S[0]+4*S[1])))-
 32*V[27]*S[0]*S[1]*S[3])))));
C[131]=+S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(-64*S[0]-32*S[1]))+8*
 V[43]*S[2]*S[4])))+64*S[6]*S[0]*S[1]*S[11]));
C[130]=+S[3]*(S[0]*(S[3]*(S[1]*(512*S[7]-64*S[5]*S[6])-128*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[129]=+S[11]*(S[0]*(128*S[5]*S[6]-1024*S[7]));
C[128]=+S[11]*(256*S[5]*S[6]*S[0]+512*S[7]*S[1]);
C[127]=+S[3]*(S[0]*(S[3]*(S[1]*(-64*S[5]*S[6]-640*S[7])-64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[126]=+S[11]*(S[0]*(128*S[5]*S[6]+1280*S[7]));
C[125]=+S[11]*(128*S[5]*S[6]*S[0]-256*S[7]*S[1]);
C[124]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[123]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]+256*S[7])));
C[122]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]+S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[121]=+S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(32*(-S[0]-S[1])))+8*
 V[43]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[11]));
C[120]=+S[3]*(S[0]*(S[3]*(S[1]*(-64*S[5]*S[6]-128*S[7])-64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[119]=+S[11]*(S[0]*(128*S[5]*S[6]+256*S[7]));
C[118]=+16*S[8]*S[5]*S[9]*S[0]*S[1]*S[10];
C[117]=+128*V[43]*S[5]*V[27]*S[2]*S[0]*S[1]*S[3]*S[4];
C[116]=+256*S[5]*S[6]*S[0]*S[1]*S[11];
C[115]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]-64*V[27]*S[1]*
 S[3])))));
C[114]=+S[3]*(S[0]*(S[5]*(V[27]*(128*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[113]=+256*S[5]*S[6]*S[0]*S[11];
C[112]=+S[3]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[111]=+S[11]*(128*S[5]*S[6]*S[0]+256*S[7]*S[1]);
C[110]=+512*S[7]*S[11];
C[109]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(16*V[43]*S[2]*S[4]+64*V[27]*S[0]*
 S[3])))));
C[108]=+S[3]*(S[1]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7]))+128*V[43]*S[5]*
 V[27]*S[2]*S[4]));
C[107]=+256*S[5]*S[6]*S[1]*S[11];
S[14]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[106]=+4*S[8]*S[5]*S[9]*S[14]*S[1]*S[10];
C[105]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*
 S[0]*S[3]))))));
C[104]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[103]=+S[11]*(S[12]*(S[1]*(128*S[5]*S[6]+256*S[7])));
C[102]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]+V[27]*S[0]*
 S[3]))))));
C[101]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]-1280*S[7])));
C[100]=+768*S[7]*S[0]*S[1]*S[11];
C[99]=+8*S[8]*S[5]*S[9]*S[12]*S[1]*S[10];
C[98]=+64*V[43]*S[5]*V[27]*S[2]*S[12]*S[1]*S[3]*S[4];
C[97]=+128*S[5]*S[6]*S[12]*S[1]*S[11];
C[96]=+512*S[7]*S[0]*S[1]*S[11];
C[95]=+1024*S[7]*S[1]*S[11];
C[94]=+S[4]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(8*(S[0]-S[1]))))-32*
 V[27]*S[0]*S[1]*S[3]))));
C[93]=+S[3]*(S[1]*(S[3]*(S[0]*(768*S[7]-64*S[5]*S[6]))-64*V[43]*S[5]*V[27]*
 S[2]*S[4])+64*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+16*S[8]*S[5]*S[9]*S[10];
C[92]=+S[3]*(S[3]*(S[0]*(128*S[5]*S[6]-1536*S[7])-128*S[5]*S[6]*S[1])+128*
 V[43]*S[5]*V[27]*S[2]*S[4]);
C[91]=+256*S[5]*S[6]*S[11];
C[90]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*S[1]*
 S[3])))));
C[89]=+S[3]*(S[0]*(S[3]*(S[1]*(256*S[7]-64*S[5]*S[6]))+64*V[43]*S[5]*V[27]*
 S[2]*S[4]));
C[88]=+S[11]*(S[0]*(128*S[5]*S[6]-512*S[7]));
C[87]=+S[12]*(S[4]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]+S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[86]=+S[12]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(32*(-S[0]-S[1])))+8*
 V[43]*S[2]*S[4])))+32*S[6]*S[0]*S[1]*S[11]));
C[85]=+S[12]*(S[3]*(S[3]*(S[1]*(-64*S[5]*S[6]-128*S[7])-64*S[5]*S[6]*S[0])+
 64*V[43]*S[5]*V[27]*S[2]*S[4]));
C[84]=+S[11]*(S[12]*(128*S[5]*S[6]+256*S[7]));
C[83]=+S[4]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]-S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[82]=+S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(32*(S[0]-S[1])))+8*V[43]*
 S[2]*S[4])))-32*S[6]*S[0]*S[1]*S[11]));
C[81]=+S[3]*(S[0]*(S[3]*(S[1]*(640*S[7]-64*S[5]*S[6])+64*S[5]*S[6]*S[0])+64*
 V[43]*S[5]*V[27]*S[2]*S[4]));
C[80]=+S[11]*(S[0]*(128*S[5]*S[6]-1280*S[7]));
C[79]=+S[12]*(S[4]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*S[1]*
 S[3])))));
C[78]=+S[12]*(S[3]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[77]=+S[11]*(S[0]*(64*S[5]*S[6]*S[0]+384*S[7]*S[1]));
C[76]=+768*S[7]*S[0]*S[11];
C[75]=+S[12]*(S[4]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*S[1]*
 S[3])))));
C[74]=+S[12]*(S[3]*(S[5]*(V[27]*(64*(V[43]*S[2]*S[4]-V[27]*S[1]*S[3])))));
C[73]=+S[11]*(S[0]*(128*S[5]*S[6]*S[0]+256*S[7]*S[1]));
C[72]=+512*S[7]*S[0]*S[11];
C[71]=+1024*S[7]*S[11];
C[70]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-32*V[27]*S[0]*
 S[3]))))));
C[69]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(-64*S[5]*S[6]-256*S[7]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[68]=+S[11]*(S[1]*(S[0]*(128*S[5]*S[6]-512*S[7])));
C[67]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]+32*V[27]*S[0]*
 S[3]))))));
C[66]=+S[3]*(S[1]*(S[0]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7]))+64*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[65]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]-64*V[27]*S[0]*
 S[3])))));
C[64]=+S[3]*(S[1]*(S[5]*(V[27]*(64*V[43]*S[2]*S[4]-128*V[27]*S[0]*S[3]))));
C[63]=+S[11]*(S[12]*(S[1]*(64*S[5]*S[6]-256*S[7])));
C[62]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(12*V[43]*S[2]*S[4]-32*V[27]*
 S[0]*S[3]))))));
C[61]=+S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(8*V[43]*S[2]*S[4]-96*V[27]*S[0]*
 S[3])))+64*S[6]*S[12]*S[11]));
C[60]=+S[3]*(S[1]*(S[5]*(V[27]*(64*V[43]*S[2]*S[4]-192*V[27]*S[0]*S[3]))));
C[59]=+S[1]*(S[5]*(8*S[8]*S[9]*S[10]-32*S[6]*S[12]*S[11]));
C[58]=+S[3]*(S[1]*(64*V[43]*S[5]*V[27]*S[2]*S[4]-640*S[7]*S[0]*S[3]));
C[57]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-32*V[27]*S[0]*
 S[3]))))));
C[56]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*V[43]*S[2]*S[4]-64*V[27]*S[0]*
 S[3])))));
C[55]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]-512*S[7])));
C[54]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]+640*S[7])));
C[53]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*S[0]*
 S[3]))))));
C[52]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[51]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]+128*S[7])));
C[50]=+8*S[8]*S[5]*S[9]*S[0]*S[1]*S[10];
C[49]=+64*V[43]*S[5]*V[27]*S[2]*S[0]*S[1]*S[3]*S[4];
C[48]=+128*S[5]*S[6]*S[0]*S[1]*S[11];
C[47]=+64*S[5]*S[6]*S[0]*S[1]*S[11];
C[46]=+256*S[7]*S[1]*S[11];
C[45]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(4*(S[0]-S[1]))))-
 16*V[27]*S[0]*S[1]*S[3])))));
C[44]=+S[1]*(S[3]*(S[1]*(S[3]*(S[0]*(384*S[7]-32*S[5]*S[6]))-32*V[43]*S[5]*
 V[27]*S[2]*S[4])+32*V[43]*S[5]*V[27]*S[2]*S[0]*S[4])+8*S[8]*S[5]*S[9]*
 S[10]);
C[43]=+S[3]*(S[1]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7])-64*S[5]*S[6]*S[1])+64*
 V[43]*S[5]*V[27]*S[2]*S[4]));
C[42]=+S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(8*V[43]*S[2]*S[4]+32*V[27]*S[0]*
 S[3])))));
C[41]=+S[3]*(S[1]*(S[3]*(S[0]*(64*S[5]*S[6]-768*S[7]))+64*V[43]*S[5]*V[27]*
 S[2]*S[4]));
C[40]=+128*S[5]*S[6]*S[1]*S[11];
C[39]=+2*S[8]*S[5]*S[9]*S[0]*S[13]*S[10];
C[38]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*S[1]*
 S[3]))))));
C[37]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(128*S[7]-32*S[5]*S[6]))+32*V[43]*S[5]*
 V[27]*S[2]*S[4])));
C[36]=+4*S[8]*S[5]*S[9]*S[0]*S[1]*S[10];
C[35]=+32*V[43]*S[5]*V[27]*S[2]*S[0]*S[1]*S[3]*S[4];
C[34]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]-256*S[7])));
C[33]=+S[8]*S[5]*S[9]*S[14]*S[13]*S[10];
C[32]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(2*(S[0]+
 S[1]))))-8*V[27]*S[0]*S[1]*S[3]))))));
C[31]=+S[12]*(S[1]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(16*(-S[0]-S[1])))+
 4*V[43]*S[2]*S[4])))+16*S[6]*S[0]*S[1]*S[11])));
C[30]=+S[12]*(S[3]*(S[1]*(S[3]*(S[1]*(-32*S[5]*S[6]-64*S[7])-32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[29]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(S[4]*(S[2]*(V[43]*(2*(S[0]-
 S[1]))))-8*V[27]*S[0]*S[1]*S[3]))))));
C[28]=+S[1]*(S[0]*(S[5]*(S[4]*(S[2]*(V[43]*(S[3]*(V[27]*(16*(S[0]-S[1])))+4*
 V[43]*S[2]*S[4])))-16*S[6]*S[0]*S[1]*S[11])));
C[27]=+S[3]*(S[1]*(S[0]*(S[3]*(S[1]*(320*S[7]-32*S[5]*S[6])+32*S[5]*S[6]*
 S[0])+32*V[43]*S[5]*V[27]*S[2]*S[4])));
C[26]=+2*S[8]*S[5]*S[9]*S[14]*S[1]*S[10];
C[25]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]-16*V[27]*
 S[0]*S[3]))))));
C[24]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]-V[27]*S[0]*
 S[3]))))));
C[23]=+S[11]*(S[12]*(S[1]*(64*S[5]*S[6]+128*S[7])));
C[22]=+S[4]*(S[1]*(S[0]*(S[2]*(S[5]*(V[43]*(4*V[43]*S[2]*S[4]+16*V[27]*S[0]*
 S[3]))))));
C[21]=+S[3]*(S[1]*(S[0]*(S[5]*(V[27]*(32*(V[43]*S[2]*S[4]+V[27]*S[0]*
 S[3]))))));
C[20]=+S[11]*(S[1]*(S[0]*(64*S[5]*S[6]-640*S[7])));
C[19]=+S[8]*S[5]*S[9]*S[12]*S[13]*S[10];
C[18]=+S[12]*(S[4]*(S[1]*(S[2]*(S[5]*(V[43]*(2*V[43]*S[2]*S[4]-8*V[27]*S[1]*
 S[3]))))));
C[17]=+S[12]*(S[3]*(S[1]*(S[5]*(V[27]*(16*(V[43]*S[2]*S[4]-V[27]*S[1]*
 S[3]))))));
C[16]=+S[11]*(S[1]*(S[0]*(32*S[5]*S[6]*S[0]+192*S[7]*S[1])));
C[15]=+2*S[8]*S[5]*S[9]*S[12]*S[1]*S[10];
C[14]=+16*V[43]*S[5]*V[27]*S[2]*S[12]*S[1]*S[3]*S[4];
C[13]=+32*S[5]*S[6]*S[12]*S[1]*S[11];
C[12]=+384*S[7]*S[0]*S[1]*S[11];
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
REAL F770_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
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
         u  |              b      !  b              |  u             
       ==>==@==============>======!==>==============@==>==           
         P2                P5     !  P5                P2            
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[202];REAL S[2];REAL tmp[12];                                  
     
if(CalcConst) C770(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
S[1]=V[50]*V[50];
tmp[0]=+DP[6]*(DP[6]*(C[46]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*(DP[5]-S[1]))+C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*(DP[5]-S[1]))+C[7]*DP[11]-C[186]*DP[10])+DP[7]*(C[2]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))+C[7]*DP[11]-
 C[48]*DP[10])+DP[12]*(C[55]*(-DP[1]-DP[3])+C[54]*(DP[2]+DP[4])+C[12]*(-
 DP[8]-DP[9]))+DP[13]*(C[55]*(-DP[1]-DP[3])+C[54]*(DP[2]+DP[4])+C[12]*(-
 DP[8]-DP[9]))+S[1]*(C[54]*DP[11]-C[55]*DP[10]-C[12]*DP[14])+DP[5]*(C[55]*
 DP[10]-C[54]*DP[11]+C[12]*DP[14])+C[170]*DP[11]-C[188]*DP[10]+C[16]*
 DP[14])+DP[7]*(C[3]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-
 DP[8]-DP[9])+S[1]*(DP[11]-DP[14])+DP[5]*(DP[14]-DP[11]))+DP[7]*(C[46]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])+DP[10]*(S[1]-DP[5]))-C[180]*
 DP[10])+C[51]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*(DP[5]-
 S[1]))+C[8]*(DP[14]-DP[11])-C[185]*DP[10])+C[23]*(DP[12]*(DP[8]-DP[2]-
 DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+S[1]*(DP[14]-DP[11])+DP[5]*(
 DP[11]-DP[14]))+C[30]*(DP[14]-DP[11]);
tmp[1]=+S[1]*(DP[0]*(S[1]*(C[71]*(DP[6]*(DP[9]-DP[3]-DP[4])+DP[9]*(DP[0]-
 DP[7]))+DP[3]*(-C[140]-C[91]*S[1]-C[110]*DP[0])+DP[4]*(-C[137]-C[91]*S[1])+
 C[107]*(DP[1]+DP[2])-C[80]*DP[9])+DP[6]*(C[95]*(DP[1]+DP[2]-DP[8])+C[2]*(
 DP[4]-DP[9])+C[128]*DP[3])+DP[0]*(C[2]*(DP[1]-DP[9])-C[125]*DP[3]-C[95]*
 DP[8])+DP[7]*(C[113]*DP[3]+C[95]*DP[8]+C[2]*DP[9])+C[146]*DP[1]+C[144]*
 DP[2]-C[141]*DP[3]-C[138]*DP[4]+C[101]*DP[8]-C[81]*DP[9])+DP[6]*(S[1]*(
 DP[4]*(C[71]*(-DP[6]-DP[7])+C[126])+DP[3]*(-C[129]-C[110]*DP[6])-C[76]*
 DP[9])+DP[6]*(C[2]*(DP[1]+DP[4])+C[95]*DP[2]-C[125]*DP[3])+DP[7]*(C[95]*
 DP[2]-C[113]*DP[3]+C[2]*DP[4])+C[134]*DP[1]-C[133]*DP[2]-C[130]*DP[3]+
 C[127]*DP[4]+C[100]*DP[8]+C[77]*DP[9])+DP[7]*(S[1]*(DP[3]*(C[110]*DP[7]-
 C[119])+C[72]*(DP[4]-DP[9]))+DP[1]*(C[123]-C[2]*DP[7])+DP[3]*(-C[120]-
 C[111]*DP[7])+C[96]*(DP[8]-DP[2])+C[73]*(DP[9]-DP[4]))+S[1]*(C[84]*(DP[9]-
 DP[4]))+C[103]*(DP[2]-DP[8])+C[85]*(DP[9]-DP[4]));
tmp[2]=+DP[12]*(DP[0]*(DP[1]*(C[116]*(-DP[6]-DP[7])+C[147]+C[48]*DP[0])+
 DP[3]*(C[114]*(DP[6]+DP[7])+C[142]-C[112]*DP[0])+C[145]*DP[2]+C[139]*DP[4]+
 C[102]*DP[8]-C[82]*DP[9])+DP[6]*(DP[1]*(C[135]+C[48]*DP[6]+C[116]*DP[7])+
 DP[3]*(-C[131]-C[112]*DP[6]-C[114]*DP[7])+C[121]*DP[4]-C[124]*DP[2]-C[4]*
 DP[8]+C[78]*DP[9])+DP[7]*(DP[1]*(C[124]+C[48]*DP[7])+DP[3]*(-C[121]-C[112]*
 DP[7])+C[97]*(DP[2]-DP[8])+C[74]*(DP[9]-DP[4]))+C[104]*(DP[2]-DP[8])+C[86]*
 (DP[9]-DP[4])+tmp[1])+DP[13]*(S[1]*(DP[0]*(C[2]*(DP[6]*(DP[1]+DP[2]-DP[8])+
 DP[8]*(DP[7]-DP[0]))+DP[1]*(C[60]+C[40]*S[1]+C[46]*DP[0])+DP[2]*(C[58]+
 C[40]*S[1])+C[20]*DP[8])+DP[6]*(DP[2]*(C[2]*(DP[6]+DP[7])-C[54])+DP[1]*(
 C[55]+C[46]*DP[6])+C[12]*DP[8])+DP[7]*(DP[1]*(C[51]-C[46]*DP[7])+C[3]*(
 DP[8]-DP[2]))+C[23]*(DP[2]-DP[8]))+DP[1]*(DP[0]*(C[48]*(-DP[6]-DP[7])+
 C[61]+C[47]*DP[0])+DP[6]*(C[56]+C[47]*DP[6]+C[48]*DP[7])+DP[7]*(C[52]+
 C[47]*DP[7]))+DP[2]*(C[24]+C[59]*DP[0]-C[52]*DP[6]+C[4]*DP[7])+DP[8]*(
 C[21]*DP[0]-C[24]-C[13]*DP[6]-C[4]*DP[7]));
tmp[3]=+S[1]*(DP[12]*(S[1]*(DP[6]*(S[1]*(C[91]*(-DP[3]-DP[4]))+C[107]*(
 DP[1]+DP[2])-C[151]*DP[3]-C[92]*DP[4]-C[88]*DP[9])+DP[0]*(DP[9]*(C[92]+
 C[91]*S[1])-C[160]*DP[3]-C[107]*DP[8])+S[1]*(C[113]*(DP[3]+DP[4]))+C[116]*
 (-DP[1]-DP[2])+C[162]*DP[3]+C[157]*DP[4])+DP[5]*(C[40]*(DP[6]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+DP[0]*(DP[8]+DP[9]))+C[48]*(DP[1]+DP[2]+DP[3]+DP[4]))+
 DP[6]*(C[155]*DP[1]+C[108]*DP[2]-C[152]*DP[3]-C[93]*DP[4]+C[68]*DP[8]-
 C[89]*DP[9])+DP[0]*(C[167]*DP[1]-C[161]*DP[3]-C[108]*DP[8]+C[93]*DP[9])+
 C[163]*DP[3]-C[168]*DP[1]-C[165]*DP[2]+C[158]*DP[4])+DP[5]*(C[40]*(DP[6]*(
 DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[1]*(-DP[10]-DP[11])+DP[5]*(DP[10]+
 DP[11]))+DP[0]*(DP[13]*(DP[8]+DP[9])+DP[14]*(S[1]-DP[5])))+C[48]*(DP[13]*(
 DP[1]+DP[2]+DP[3]+DP[4])+S[1]*(DP[10]+DP[11])+DP[5]*(-DP[10]-DP[11]))+
 DP[6]*(-C[195]*DP[10]-C[43]*DP[11]-C[34]*DP[14])+DP[0]*(C[43]*DP[14]-C[68]*
 DP[10])+C[199]*DP[10]+C[177]*DP[11])+DP[13]*(S[1]*(C[40]*(DP[6]*(DP[1]+
 DP[2])-DP[8]*DP[0])+C[48]*(-DP[1]-DP[2]))+DP[1]*(C[68]*DP[0]-C[69]+C[64]*
 DP[6])+DP[2]*(C[41]*DP[6]-C[66])+DP[8]*(C[34]*DP[6]-C[41]*DP[0])));
tmp[4]=+DP[0]*(DP[5]*(DP[6]*(DP[12]*(C[64]*(-DP[1]-DP[3])+C[41]*(-DP[2]-
 DP[4])+C[34]*(-DP[8]-DP[9]))+DP[13]*(C[64]*(-DP[1]-DP[3])+C[41]*(-DP[2]-
 DP[4])+C[34]*(-DP[8]-DP[9]))+DP[5]*(C[64]*DP[10]+C[41]*DP[11]+C[34]*
 DP[14])-C[196]*DP[10]-C[44]*DP[11]-C[37]*DP[14])+DP[0]*(C[68]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[41]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[44]*DP[14]-C[198]*DP[10])+
 C[69]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[66]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[200]*DP[10]+
 C[178]*DP[11])+DP[12]*(DP[6]*(C[156]*DP[1]+C[109]*DP[2]+C[153]*DP[3]-C[94]*
 DP[4]+C[49]*DP[8]-C[90]*DP[9])+DP[0]*(C[117]*DP[1]-C[115]*DP[3]-C[109]*
 DP[8]+C[94]*DP[9])+C[159]*DP[4]-C[169]*DP[1]-C[166]*DP[2]-C[164]*DP[3])+
 DP[13]*(DP[1]*(C[49]*DP[0]-C[70]+C[65]*DP[6])+DP[2]*(C[42]*DP[6]-C[67])+
 DP[8]*(C[35]*DP[6]-C[42]*DP[0]))+tmp[3]);
tmp[5]=+DP[7]*(DP[5]*(DP[0]*(C[2]*(DP[6]*(DP[12]*(DP[8]-DP[1]-DP[2]-DP[3]-
 DP[4]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[2]-DP[3]-DP[4]+DP[9])+S[1]*(DP[14]-
 DP[10]-DP[11])+DP[5]*(DP[10]+DP[11]-DP[14]))+DP[0]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])+DP[14]*(S[1]-DP[5]))+DP[7]*(DP[8]*(-DP[12]-DP[13])+
 DP[9]*(-DP[12]-DP[13])+DP[14]*(DP[5]-S[1])))+S[1]*(C[40]*(DP[12]*(-DP[1]-
 DP[2]-DP[3]-DP[4])+DP[13]*(-DP[1]-DP[2]-DP[3]-DP[4])+S[1]*(-DP[10]-DP[11])+
 DP[5]*(DP[10]+DP[11]))+DP[10]*(-C[191]-C[46]*DP[0])-C[173]*DP[11]-C[20]*
 DP[14])+DP[12]*(DP[0]*(C[46]*(-DP[1]-DP[3]))+C[60]*(-DP[1]-DP[3])+C[58]*(-
 DP[2]-DP[4])+C[20]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[46]*(-DP[1]-DP[3]))+
 C[60]*(-DP[1]-DP[3])+C[58]*(-DP[2]-DP[4])+C[20]*(-DP[8]-DP[9]))+DP[10]*(
 DP[0]*(C[46]*DP[5]-C[186])+C[60]*DP[5]-C[192]+C[187]*DP[6]+C[48]*DP[7])+
 DP[14]*(C[7]*(DP[7]-DP[0]-DP[6])+C[20]*DP[5]-C[27])+DP[11]*(C[58]*DP[5]-
 C[174]+C[7]*DP[6]))+tmp[0])+tmp[2]);
tmp[6]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[48]*(DP[6]+DP[7])-C[61]-C[47]*DP[0])+
 DP[3]*(C[48]*(DP[6]+DP[7])-C[61]-C[47]*DP[0])+C[59]*(-DP[2]-DP[4])+C[21]*(-
 DP[8]-DP[9]))+DP[13]*(DP[1]*(C[48]*(DP[6]+DP[7])-C[61]-C[47]*DP[0])+DP[3]*(
 C[48]*(DP[6]+DP[7])-C[61]-C[47]*DP[0])+C[59]*(-DP[2]-DP[4])+C[21]*(-DP[8]-
 DP[9]))+DP[10]*(DP[5]*(C[48]*(-DP[6]-DP[7])+C[61]+C[47]*DP[0])+C[182]*(
 DP[6]+DP[7])+C[193]-C[181]*DP[0])+DP[5]*(C[59]*DP[11]+C[21]*DP[14])+C[175]*
 DP[11]-C[28]*DP[14])+DP[6]*(DP[12]*(DP[1]*(-C[56]-C[47]*DP[6]-C[48]*DP[7])+
 DP[3]*(-C[56]-C[47]*DP[6]-C[48]*DP[7])+C[52]*(DP[2]+DP[4])+C[13]*(DP[8]+
 DP[9]))+DP[13]*(DP[1]*(-C[56]-C[47]*DP[6]-C[48]*DP[7])+DP[3]*(-C[56]-C[47]*
 DP[6]-C[48]*DP[7])+C[52]*(DP[2]+DP[4])+C[13]*(DP[8]+DP[9]))+DP[10]*(DP[5]*(
 C[56]+C[47]*DP[6]+C[48]*DP[7])-C[189]-C[181]*DP[6]-C[182]*DP[7])+DP[5]*(-
 C[52]*DP[11]-C[13]*DP[14])+C[171]*DP[11]+C[17]*DP[14])+DP[7]*(C[4]*(DP[12]*
 (DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+DP[7]*(C[47]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])-C[181]*DP[10])+C[52]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[9]*(DP[14]-DP[11])-C[171]*DP[10])+C[24]*(DP[12]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+C[31]*(DP[14]-DP[11]));
tmp[7]=+DP[12]*(DP[7]*(DP[0]*(DP[1]*(C[117]*(-DP[6]-DP[7])+C[49]*DP[0]-
 C[148])+DP[3]*(C[115]*(DP[6]+DP[7])-C[143]-C[90]*DP[0])+C[79]*DP[4]-C[5]*
 DP[2]+C[67]*DP[8]-C[83]*DP[9])+DP[6]*(DP[1]*(C[136]+C[49]*DP[6]+C[117]*
 DP[7])+DP[3]*(C[132]-C[90]*DP[6]-C[115]*DP[7])+C[79]*DP[9]-C[70]*DP[2]-
 C[122]*DP[4]-C[5]*DP[8])+DP[7]*(DP[1]*(C[70]+C[49]*DP[7])+DP[3]*(C[122]-
 C[90]*DP[7])+C[98]*(DP[2]-DP[8])+C[75]*(DP[9]-DP[4]))+C[105]*(DP[2]-DP[8])+
 C[87]*(DP[4]-DP[9]))+DP[0]*(DP[6]*(C[50]*(DP[2]-DP[3]+DP[8])+C[36]*(DP[4]+
 DP[9])-C[118]*DP[1])+DP[0]*(C[50]*(DP[3]-DP[8])+C[118]*DP[1]-C[36]*DP[9])+
 C[99]*(DP[1]-DP[2])+C[6]*(DP[3]-DP[4]))+DP[6]*(DP[2]*(C[99]-C[50]*DP[6])+
 DP[4]*(C[6]-C[36]*DP[6])))+DP[13]*(DP[7]*(DP[1]*(DP[0]*(C[49]*(-DP[6]-
 DP[7])+C[35]*DP[0]-C[62])+DP[6]*(C[57]+C[35]*DP[6]+C[49]*DP[7])+DP[7]*(
 C[53]+C[35]*DP[7]))+DP[2]*(C[25]-C[14]*DP[0]-C[53]*DP[6]+C[5]*DP[7])+DP[8]*
 (C[22]*DP[0]-C[25]-C[14]*DP[6]-C[5]*DP[7]))+DP[0]*(DP[1]*(C[50]*(DP[0]-
 DP[6])+C[6])+C[36]*(DP[6]*(DP[2]+DP[8])-DP[8]*DP[0])-C[6]*DP[2])+DP[2]*(
 DP[6]*(C[6]-C[36]*DP[6])));
tmp[8]=+DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[49]*(DP[6]+DP[7])+C[62]-C[35]*DP[0])+
 DP[3]*(C[49]*(DP[6]+DP[7])+C[62]-C[35]*DP[0])+C[14]*(DP[2]+DP[4])+C[22]*(-
 DP[8]-DP[9]))+DP[13]*(DP[1]*(C[49]*(DP[6]+DP[7])+C[62]-C[35]*DP[0])+DP[3]*(
 C[49]*(DP[6]+DP[7])+C[62]-C[35]*DP[0])+C[14]*(DP[2]+DP[4])+C[22]*(-DP[8]-
 DP[9]))+DP[10]*(DP[5]*(C[49]*(-DP[6]-DP[7])+C[35]*DP[0]-C[62])+C[183]*(
 DP[6]+DP[7])-C[194]-C[38]*DP[0])+DP[5]*(C[22]*DP[14]-C[14]*DP[11])+C[18]*
 DP[11]-C[29]*DP[14])+DP[6]*(DP[12]*(DP[1]*(-C[57]-C[35]*DP[6]-C[49]*DP[7])+
 DP[3]*(-C[57]-C[35]*DP[6]-C[49]*DP[7])+C[53]*(DP[2]+DP[4])+C[14]*(DP[8]+
 DP[9]))+DP[13]*(DP[1]*(-C[57]-C[35]*DP[6]-C[49]*DP[7])+DP[3]*(-C[57]-C[35]*
 DP[6]-C[49]*DP[7])+C[53]*(DP[2]+DP[4])+C[14]*(DP[8]+DP[9]))+DP[10]*(DP[5]*(
 C[57]+C[35]*DP[6]+C[49]*DP[7])+C[190]-C[38]*DP[6]-C[183]*DP[7])+DP[5]*(-
 C[53]*DP[11]-C[14]*DP[14])+C[18]*DP[14]-C[172]*DP[11])+DP[7]*(C[5]*(DP[12]*
 (DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+DP[7]*(C[35]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])-C[38]*DP[10])+C[53]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*DP[5])+C[10]*(DP[14]-DP[11])+C[172]*DP[10])+C[25]*(DP[12]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-
 DP[14]))+C[32]*(DP[11]-DP[14]));
tmp[9]=+DP[5]*(DP[0]*(DP[6]*(C[36]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+
 DP[13]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14]))+C[50]*(DP[1]*(
 DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[39]*(DP[11]+DP[14])-
 C[184]*DP[10])+DP[0]*(C[50]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+C[36]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])+C[184]*DP[10]-C[39]*DP[14])+C[6]*(DP[12]*(DP[2]-DP[1]-DP[3]+DP[4])+
 DP[13]*(DP[2]-DP[1]-DP[3]+DP[4])+DP[5]*(DP[10]-DP[11]))+C[11]*(DP[10]-
 DP[11]))+DP[6]*(DP[6]*(C[36]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[39]*DP[11])+C[6]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])+C[11]*DP[11])+tmp[8]);
tmp[10]=+S[1]*(S[1]*(DP[6]*(DP[5]*(DP[6]*(C[34]*(DP[2]*(DP[12]+DP[13])+
 DP[4]*(DP[12]+DP[13])+DP[11]*(S[1]-DP[5]))+C[37]*DP[11])+C[63]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*(DP[5]-S[1]))-C[176]*DP[11])+
 DP[12]*(S[1]*(DP[4]*(S[1]*(C[88]*DP[6]-C[149])+C[89]*DP[6]-C[150])+DP[2]*(
 C[154]-C[68]*DP[6]))+DP[2]*(C[98]-C[49]*DP[6])+DP[4]*(C[90]*DP[6]-C[75]))+
 DP[2]*(DP[13]*(S[1]*(C[63]-C[34]*DP[6])+C[5]-C[35]*DP[6])))+tmp[4]+tmp[5])+
 DP[5]*(DP[0]*(DP[6]*(DP[12]*(C[65]*(-DP[1]-DP[3])+C[42]*(-DP[2]-DP[4])+
 C[35]*(-DP[8]-DP[9]))+DP[13]*(C[65]*(-DP[1]-DP[3])+C[42]*(-DP[2]-DP[4])+
 C[35]*(-DP[8]-DP[9]))+DP[5]*(C[65]*DP[10]+C[42]*DP[11]+C[35]*DP[14])+
 C[197]*DP[10]-C[45]*DP[11]-C[38]*DP[14])+DP[0]*(C[49]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[42]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[45]*DP[14]-C[183]*DP[10])+C[70]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[67]*(DP[2]*(
 DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[179]*DP[11]-C[201]*
 DP[10])+DP[6]*(DP[6]*(C[35]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])+C[38]*DP[11])+C[5]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*DP[5])-C[10]*DP[11])+tmp[6])+tmp[7]);
tmp[11]=+DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[1]*(C[50]*(DP[6]+DP[7])-C[6]-C[36]*
 DP[0])+DP[3]*(C[50]*(DP[6]+DP[7])-C[6]-C[36]*DP[0])+C[15]*(DP[2]+DP[4]-
 DP[8]-DP[9]))+DP[13]*(DP[1]*(C[50]*(DP[6]+DP[7])-C[6]-C[36]*DP[0])+DP[3]*(
 C[50]*(DP[6]+DP[7])-C[6]-C[36]*DP[0])+C[15]*(DP[2]+DP[4]-DP[8]-DP[9]))+
 DP[10]*(DP[5]*(C[50]*(-DP[6]-DP[7])+C[6]+C[36]*DP[0])+C[184]*(-DP[6]-
 DP[7])+C[11]+C[39]*DP[0])+DP[5]*(C[15]*(DP[14]-DP[11]))+C[19]*(DP[14]-
 DP[11]))+DP[6]*(DP[12]*(C[15]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[1]*(C[6]-C[36]*
 DP[6]-C[50]*DP[7])+DP[3]*(C[6]-C[36]*DP[6]-C[50]*DP[7]))+DP[13]*(C[15]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[1]*(C[6]-C[36]*DP[6]-C[50]*DP[7])+DP[3]*(C[6]-
 C[36]*DP[6]-C[50]*DP[7]))+DP[10]*(DP[5]*(C[36]*DP[6]-C[6]+C[50]*DP[7])+
 C[39]*DP[6]-C[11]+C[184]*DP[7])+DP[5]*(C[15]*(DP[11]-DP[14]))+C[19]*(
 DP[11]-DP[14]))+DP[7]*(C[6]*(DP[12]*(DP[8]-DP[2]-DP[4]+DP[9])+DP[13]*(
 DP[8]-DP[2]-DP[4]+DP[9])+DP[5]*(DP[11]-DP[14]))+DP[7]*(C[36]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[39]*DP[10])+C[15]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[11]*(DP[11]-
 DP[14])-C[19]*DP[10])+C[26]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(
 DP[2]+DP[4]-DP[8]-DP[9])+DP[5]*(DP[14]-DP[11]))+C[33]*(DP[14]-DP[11])));
R=+S[1]*(DP[7]*(DP[12]*(DP[0]*(DP[1]*(C[118]*(-DP[6]-DP[7])+C[99]+C[50]*
 DP[0])+DP[3]*(C[50]*(-DP[6]-DP[7])+C[6]+C[36]*DP[0])+C[6]*(DP[8]-DP[2])+
 C[15]*(DP[9]-DP[4]))+DP[6]*(DP[1]*(C[50]*DP[6]-C[99]+C[118]*DP[7])+DP[3]*(
 C[36]*DP[6]-C[6]+C[50]*DP[7])+C[6]*(DP[2]-DP[8])+C[15]*(DP[4]-DP[9]))+
 DP[7]*(C[6]*(DP[4]-DP[1]-DP[9])+DP[3]*(C[36]*DP[7]-C[15])+C[99]*(DP[2]-
 DP[8])+C[50]*DP[7]*DP[1])+C[106]*(DP[8]-DP[2])+C[26]*(DP[9]-DP[4]))+DP[13]*
 (DP[1]*(DP[0]*(C[50]*(-DP[6]-DP[7])+C[6]+C[36]*DP[0])+DP[6]*(C[36]*DP[6]-
 C[6]+C[50]*DP[7])+DP[7]*(C[36]*DP[7]-C[15]))+DP[2]*(C[15]*(DP[6]-DP[0])+
 C[6]*DP[7]-C[26])+DP[8]*(C[15]*(DP[0]-DP[6])+C[26]-C[6]*DP[7])))+tmp[9]+
 tmp[10])+tmp[11];
R*=(N/D)*Q2[4]*Q2[1]*Q2[2];
if(gswidth_out ) R=R*Q0[3];
 if(cb_coeff_out)
 {
  cb_coeff_out[1] += (R*1)/(1);
 }
 return R;
}
