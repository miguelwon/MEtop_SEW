/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F934_out;
static void C934(REAL * C)
{
REAL* V=va_out;
REAL S[14];                                                                 
     
S[0]=V[12]*V[12];
S[1]=V[10]*V[10];
S[2]=V[35]*V[35];
S[3]=V[9]*V[9];
S[4]=V[14]*V[14]*V[14]*V[14];
C[193]=+S[4]*(S[3]*(V[34]*(S[1]*(4*V[34]-8*V[35])+S[0]*(8*V[35]+4*V[34]))+
 S[2]*(4*(S[0]+S[1]))));
S[5]=V[34]*V[34];
C[192]=+S[4]*(V[10]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[2])+V[12]*(8*(S[5]-
 S[2])))+S[0]*(V[34]*(16*V[35]+8*V[34])+8*S[2]));
C[191]=+S[4]*(V[12]*(V[12]*(V[34]*(8*V[35]+4*V[34])+4*S[2])+V[10]*(8*(S[5]-
 S[2]))));
C[190]=+S[4]*(V[34]*(10*V[34]-20*V[35])+10*S[2]);
S[6]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[189]=+S[6]*(V[34]*(6*V[34]-12*V[35])+6*S[2]);
C[188]=+S[4]*(V[34]*(16*V[34]-32*V[35])+16*S[2]);
S[7]=V[9]*V[9]*V[9]*V[9];
C[187]=+S[6]*(S[7]*(V[10]*(V[10]*(V[34]*(2*V[35]-V[34])-S[2])+V[12]*(12*(
 S[2]-S[5])))));
C[186]=+S[6]*(V[10]*(V[10]*(V[34]*(28*V[35]-14*V[34])-14*S[2])+V[12]*(24*(
 S[2]-S[5]))));
S[8]=V[14]*V[14];
C[185]=+S[7]*(S[4]*(V[34]*(V[34]*(V[10]*(-2*V[12]-5*V[10])+8*S[8]+5*S[0])+
 V[35]*(10*(S[0]+S[1])-16*S[8]))+S[2]*(V[10]*(2*V[12]-5*V[10])+8*S[8]+5*
 S[0])));
C[184]=+S[4]*(V[34]*(V[34]*(V[10]*(4*V[10]-8*V[12])+16*S[8]+8*S[0])+V[35]*(
 16*S[0]-32*S[8]-8*S[1]))+S[2]*(V[10]*(8*V[12]+4*V[10])+16*S[8]+8*S[0]));
C[183]=+S[7]*(S[4]*(V[34]*(5*V[34]-10*V[35])+5*S[2]));
C[182]=+S[4]*(V[34]*(22*V[34]-44*V[35])+22*S[2]);
C[181]=+S[6]*(S[3]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[180]=+S[4]*(S[3]*(V[34]*(S[1]*(2*V[34]-4*V[35])+S[0]*(4*V[35]+2*V[34]))+
 S[2]*(2*(S[0]+S[1]))));
C[179]=+S[6]*(S[3]*(V[34]*(3*V[34]-6*V[35])+3*S[2]));
C[178]=+S[4]*(S[3]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[177]=+S[6]*(S[3]*(V[10]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[2])+V[12]*(24*
 (S[2]-S[5])))));
C[176]=+S[4]*(S[3]*(V[34]*(V[34]*(V[10]*(-4*V[12]-10*V[10])+16*S[8]+10*
 S[0])+V[35]*(20*(S[0]+S[1])-32*S[8]))+S[2]*(V[10]*(4*V[12]-10*V[10])+16*
 S[8]+10*S[0])));
C[175]=+S[4]*(S[3]*(V[34]*(10*V[34]-20*V[35])+10*S[2]));
C[174]=+S[8]*(4*(V[10]*(S[5]*(V[12]+V[10])+S[2]*(V[10]-V[12]))+S[0]*(S[2]+
 S[5]))+V[34]*(V[35]*(8*(S[0]-S[1]))));
C[173]=+S[7]*(S[4]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(16*
 (S[2]-S[5])))));
C[172]=+S[4]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[2])+V[12]*(28*(
 S[2]-S[5]))));
C[171]=+S[7]*(S[8]*(V[34]*(V[34]*(V[10]*(-2*V[12]-4*V[10])+8*S[8]+4*S[0])+
 V[35]*(8*(S[0]+S[1])-16*S[8]))+S[2]*(V[10]*(2*V[12]-4*V[10])+8*S[8]+4*
 S[0])));
C[170]=+S[8]*(V[34]*(V[34]*(4*(V[10]*(V[10]-V[12])+S[0])+16*S[8])+V[35]*(8*(
 S[0]-S[1])-32*S[8]))+S[2]*(4*(V[10]*(V[12]+V[10])+S[0])+16*S[8]));
C[169]=+S[4]*(S[3]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[2])+V[12]*(
 32*(S[2]-S[5])))));
C[168]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(-4*V[12]-8*V[10])+16*S[8]+8*S[0])+
 V[35]*(16*(S[0]+S[1])-32*S[8]))+S[2]*(V[10]*(4*V[12]-8*V[10])+16*S[8]+8*
 S[0])));
C[167]=+S[7]*(S[8]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(20*
 (S[2]-S[5])))));
C[166]=+S[8]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[2])+V[12]*(24*(
 S[2]-S[5]))));
C[165]=+S[7]*(V[34]*(S[0]*(8*V[35]+4*V[34])+S[8]*(8*V[34]-16*V[35]))+S[2]*(
 8*S[8]+4*S[0]));
C[164]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[2])+V[12]*(
 40*(S[2]-S[5])))));
C[163]=+S[3]*(V[34]*(S[0]*(16*V[35]+8*V[34])+S[8]*(16*V[34]-32*V[35]))+S[2]*
 (16*S[8]+8*S[0]));
C[162]=+S[7]*(S[8]*(V[10]*(V[10]*(V[34]*(6*V[35]-3*V[34])-3*S[2])+V[12]*(4*(
 S[2]-S[5])))));
C[161]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(12*V[35]-6*V[34])-6*S[2])+V[12]*(8*
 (S[2]-S[5])))));
C[160]=+S[7]*(V[10]*(V[12]*(4*(S[2]-S[5]))));
C[159]=+S[7]*(S[4]*(V[34]*(V[34]*(V[10]*(-4*V[12]-3*V[10])+4*S[8]+S[0])+
 V[35]*(2*S[0]-8*S[8]+6*S[1]))+S[2]*(V[10]*(4*V[12]-3*V[10])+4*S[8]+S[0])));
C[158]=+S[4]*(V[12]*(V[12]*(V[34]*(8*V[35]+4*V[34])+4*S[2])+V[10]*(8*(S[2]-
 S[5])))+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[157]=+S[7]*(S[4]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[156]=+S[3]*(S[8]*(V[34]*(S[1]*(4*V[34]-8*V[35])+S[0]*(8*V[35]+4*V[34]))+
 S[2]*(4*(S[0]+S[1]))));
C[155]=+S[3]*(S[8]*(V[34]*(S[1]*(2*V[34]-4*V[35])+S[0]*(4*V[35]+2*V[34]))+
 S[2]*(2*(S[0]+S[1]))));
C[154]=+S[4]*(S[3]*(V[34]*(V[34]*(V[10]*(-8*V[12]-6*V[10])+8*S[8]+2*S[0])+
 V[35]*(4*S[0]-16*S[8]+12*S[1]))+S[2]*(V[10]*(8*V[12]-6*V[10])+8*S[8]+2*
 S[0])));
C[153]=+S[7]*(S[8]*(V[34]*(V[34]*(V[10]*(-6*V[12]-3*V[10])+8*S[8]+S[0])+
 V[35]*(2*S[0]-16*S[8]+6*S[1]))+S[2]*(V[10]*(6*V[12]-3*V[10])+8*S[8]+
 S[0])));
C[152]=+S[8]*(V[12]*(4*(S[5]*(V[12]-V[10])+S[2]*(V[12]+V[10]))+8*V[35]*
 V[34]*V[12])+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[151]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(-12*V[12]-6*V[10])+16*S[8]+2*S[0])+
 V[35]*(4*S[0]-32*S[8]+12*S[1]))+S[2]*(V[10]*(12*V[12]-6*V[10])+16*S[8]+2*
 S[0])));
C[150]=+S[7]*(S[4]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[149]=+S[7]*(S[8]*(V[10]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[2])+V[12]*(4*(
 S[2]-S[5])))+S[8]*(V[34]*(4*V[34]-8*V[35])+4*S[2])));
C[148]=+S[8]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[147]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(8*(
 S[2]-S[5])))+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])));
C[146]=+S[7]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[10]*(V[12]*(2*(S[2]-
 S[5]))));
C[145]=+S[3]*(S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2])+V[10]*(V[12]*(4*(
 S[2]-S[5]))));
C[144]=+S[7]*(S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[143]=+S[7]*(V[34]*(10*V[34]-20*V[35])+10*S[2]);
C[142]=+S[7]*(S[4]*(V[34]*(V[34]-2*V[35])+S[2]));
C[141]=+S[4]*(S[3]*(V[34]*(2*V[34]-4*V[35])+2*S[2]));
C[140]=+S[7]*(S[8]*(V[34]*(4*V[34]-8*V[35])+4*S[2]));
C[139]=+S[7]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[138]=+S[4]*(S[3]*(V[10]*(V[12]*(8*(S[2]-S[5])))));
C[137]=+S[3]*(S[8]*(V[34]*(S[1]*(24*V[35]-12*V[34])+S[0]*(8*V[35]+4*V[34]))+
 S[2]*(4*S[0]-12*S[1])));
C[136]=+S[4]*(S[3]*(V[10]*(4*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+8*
 V[35]*V[34]*V[10])));
C[135]=+S[4]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[2])+V[12]*(16*(
 S[2]-S[5]))));
C[134]=+S[8]*(V[34]*(S[1]*(16*V[35]-8*V[34])+S[0]*(16*V[35]+8*V[34]))+S[2]*(
 8*(S[0]-S[1])));
C[133]=+S[4]*(V[34]*(V[34]*(V[10]*(-12*V[12]-4*V[10])+8*S[8]-4*S[0])+V[35]*(
 8*(S[1]-S[0])-16*S[8]))+S[2]*(V[10]*(12*V[12]-4*V[10])+8*S[8]-4*S[0]));
C[132]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(12*
 (S[2]-S[5])))));
C[131]=+S[8]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(20*(S[2]-
 S[5]))));
C[130]=+S[8]*(V[34]*(V[34]*(V[10]*(-16*V[12]-4*V[10])+8*S[8]-4*S[0])+V[35]*(
 8*(S[1]-S[0])-16*S[8]))+S[2]*(V[10]*(16*V[12]-4*V[10])+8*S[8]-4*S[0]));
C[129]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(-4*V[12]-8*V[10])+16*S[8]-4*S[0])+
 V[35]*(16*S[1]-32*S[8]-8*S[0]))+S[2]*(V[10]*(4*V[12]-8*V[10])+16*S[8]-4*
 S[0])));
C[128]=+S[8]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[2])+V[12]*(4*(S[2]-
 S[5])))+S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[127]=+S[8]*(V[34]*(24*V[34]-48*V[35])+24*S[2]);
C[126]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(16*V[34]-32*V[35])+16*S[2])+V[12]*(
 8*(S[2]-S[5])))));
C[125]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[2])+V[12]*(
 8*(S[2]-S[5])))));
C[124]=+S[8]*(V[10]*(V[10]*(V[34]*(20*V[35]-10*V[34])-10*S[2])+V[12]*(12*(
 S[2]-S[5]))));
C[123]=+S[8]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(8*(S[2]-
 S[5])))+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[122]=+S[8]*(V[34]*(14*V[34]-28*V[35])+14*S[2]);
C[121]=+V[34]*(18*V[34]-36*V[35])+18*S[2];
C[120]=+S[3]*(S[8]*(V[10]*(4*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+8*
 V[35]*V[34]*V[10])));
C[119]=+S[4]*(S[3]*(V[34]*(12*V[34]-24*V[35])+12*S[2]));
C[118]=+S[4]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[117]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[2])+V[12]*(
 4*(S[2]-S[5])))));
C[116]=+S[4]*(V[10]*(8*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+16*V[35]*
 V[34]*V[10]));
C[115]=+S[8]*(V[34]*(S[1]*(4*V[34]-8*V[35])+S[0]*(8*V[35]+4*V[34]))+S[2]*(4*
 (S[0]+S[1])));
C[114]=+S[4]*(V[12]*(V[12]*(V[34]*(-8*V[35]-4*V[34])-4*S[2])+V[10]*(8*(S[2]-
 S[5])))+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[113]=+S[4]*(V[34]*(24*V[34]-48*V[35])+24*S[2]);
C[112]=+S[4]*(S[3]*(V[10]*(V[12]*(4*(S[2]-S[5])))));
C[111]=+S[3]*(S[8]*(V[34]*(S[1]*(12*V[35]-6*V[34])+S[0]*(4*V[35]+2*V[34]))+
 S[2]*(2*S[0]-6*S[1])));
C[110]=+S[4]*(S[3]*(V[10]*(2*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+4*
 V[35]*V[34]*V[10])));
C[109]=+S[8]*(V[12]*(4*(S[5]*(-V[12]-V[10])+S[2]*(V[10]-V[12]))-8*V[35]*
 V[34]*V[12])+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[108]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(4*V[35]-2*V[34])-2*S[2])+V[12]*(6*(
 S[2]-S[5])))));
C[107]=+S[0]*(S[8]*(V[34]*(8*V[35]+4*V[34])+4*S[2]));
C[106]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(-2*V[12]-4*V[10])+8*S[8]-2*S[0])+
 V[35]*(8*S[1]-16*S[8]-4*S[0]))+S[2]*(V[10]*(2*V[12]-4*V[10])+8*S[8]-2*
 S[0])));
C[105]=+S[4]*(S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[104]=+S[8]*(V[10]*(V[10]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[12]*(4*(S[2]-
 S[5]))));
C[103]=+S[8]*(V[10]*(V[10]*(V[34]*(24*V[35]-12*V[34])-12*S[2])+V[12]*(4*(
 S[2]-S[5]))));
C[102]=+S[8]*(V[10]*(4*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+8*V[35]*
 V[34]*V[10]));
C[101]=+S[4]*(S[3]*(S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2])));
C[100]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[12]*(4*
 (S[2]-S[5])))));
C[99]=+S[8]*(V[10]*(V[10]*(V[34]*(2*V[34]-4*V[35])+2*S[2])+V[12]*(4*(S[2]-
 S[5]))));
C[98]=+S[8]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[10]*(V[12]*(4*(S[2]-
 S[5]))));
C[97]=+S[8]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[96]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(12*V[35]-6*V[34])-6*S[2])+V[12]*(4*(
 S[2]-S[5])))));
C[95]=+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[10]*(V[12]*(4*(S[2]-S[5])));
C[94]=+S[4]*(V[34]*(14*V[34]-28*V[35])+14*S[2]);
C[93]=+S[3]*(S[8]*(V[10]*(2*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+4*
 V[35]*V[34]*V[10])));
C[92]=+S[4]*(S[3]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[91]=+S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[90]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(12*V[35]-6*V[34])-6*S[2])+V[12]*(2*(
 S[2]-S[5])))));
C[89]=+S[4]*(S[1]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[88]=+S[4]*(S[3]*(S[1]*(V[34]*(6*V[34]-12*V[35])+6*S[2])));
C[87]=+S[8]*(V[10]*(4*(S[5]*(V[10]-V[12])+S[2]*(V[12]+V[10]))-8*V[35]*V[34]*
 V[10]));
C[86]=+S[4]*(S[3]*(S[1]*(V[34]*(3*V[34]-6*V[35])+3*S[2])));
C[85]=+S[3]*(S[1]*(V[34]*(V[34]-2*V[35])+S[2]));
C[84]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(-16*V[12]-12*V[10])+16*S[8]-4*S[0])+
 V[35]*(24*S[1]-32*S[8]-8*S[0]))+S[2]*(V[10]*(16*V[12]-12*V[10])+16*S[8]-4*
 S[0])));
C[83]=+S[8]*(V[10]*(V[12]*(16*(S[2]-S[5]))));
C[82]=+S[0]*(V[34]*(16*V[35]+8*V[34])+8*S[2]);
C[81]=+S[8]*(V[10]*(8*(S[5]*(-V[12]-V[10])+S[2]*(V[12]-V[10]))+16*V[35]*
 V[34]*V[10])+S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[80]=+S[8]*(V[10]*(V[10]*(V[34]*(4*V[34]-8*V[35])+4*S[2])+V[12]*(8*(S[5]-
 S[2])))+S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]));
C[79]=+S[4]*(V[34]*(32*V[34]-64*V[35])+32*S[2]);
C[78]=+S[7]*(S[4]*(S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2])));
C[77]=+S[4]*(V[10]*(8*(S[5]*(V[10]-V[12])+S[2]*(V[12]+V[10]))-16*V[35]*
 V[34]*V[10]));
C[76]=+S[7]*(S[8]*(V[34]*(V[34]*(V[10]*(5*V[10]-2*V[12])+4*S[8]+S[0])+V[35]*
 (2*S[0]-8*S[8]-10*S[1]))+S[2]*(V[10]*(2*V[12]+5*V[10])+4*S[8]+S[0])));
C[75]=+S[8]*(V[10]*(8*(S[5]*(V[10]-V[12])+S[2]*(V[12]+V[10]))-16*V[35]*
 V[34]*V[10]));
C[74]=+S[3]*(S[8]*(V[10]*(V[12]*(16*(S[2]-S[5])))));
C[73]=+S[3]*(S[0]*(V[34]*(16*V[35]+8*V[34])+8*S[2]));
C[72]=+S[3]*(S[8]*(V[10]*(V[12]*(8*(S[2]-S[5])))));
C[71]=+S[3]*(S[0]*(V[34]*(8*V[35]+4*V[34])+4*S[2]));
C[70]=+S[4]*(S[3]*(V[34]*(32*V[34]-64*V[35])+32*S[2]));
C[69]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(-8*V[12]-6*V[10])+8*S[8]-2*S[0])+
 V[35]*(12*S[1]-16*S[8]-4*S[0]))+S[2]*(V[10]*(8*V[12]-6*V[10])+8*S[8]-2*
 S[0])));
C[68]=+S[4]*(S[3]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[67]=+S[4]*(S[3]*(S[1]*(V[34]*(16*V[34]-32*V[35])+16*S[2])));
C[66]=+S[3]*(S[8]*(V[34]*(V[34]*(V[10]*(10*V[10]-4*V[12])+8*S[8]+2*S[0])+
 V[35]*(4*S[0]-16*S[8]-20*S[1]))+S[2]*(V[10]*(4*V[12]+10*V[10])+8*S[8]+2*
 S[0])));
C[65]=+S[3]*(S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2])+V[10]*(V[12]*(8*(S[2]-
 S[5]))));
C[64]=+V[10]*(V[12]*(8*(S[2]-S[5])));
C[63]=+S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2])+V[10]*(V[12]*(4*(S[2]-
 S[5])));
C[62]=+S[8]*(V[34]*(32*V[34]-64*V[35])+32*S[2]);
C[61]=+S[7]*(S[1]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])));
C[60]=+S[8]*(V[10]*(V[10]*(V[34]*(12*V[34]-24*V[35])+12*S[2])+V[12]*(4*(
 S[2]-S[5]))));
C[59]=+S[7]*(S[8]*(V[34]*(4*V[34]-8*V[35])+4*S[2])+V[10]*(V[12]*(2*(S[2]-
 S[5]))));
C[58]=+V[10]*(V[12]*(4*(S[2]-S[5])));
C[57]=+S[3]*(V[10]*(V[12]*(8*(S[2]-S[5]))));
C[56]=+S[3]*(V[10]*(V[12]*(4*(S[2]-S[5]))));
C[55]=+S[3]*(S[8]*(V[34]*(32*V[34]-64*V[35])+32*S[2]));
C[54]=+S[3]*(S[1]*(S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2])));
C[53]=+S[3]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])+V[10]*(V[12]*(4*(S[2]-
 S[5]))));
C[52]=+V[34]*(20*V[34]-40*V[35])+20*S[2];
C[51]=+S[3]*(V[34]*(20*V[34]-40*V[35])+20*S[2]);
C[50]=+S[3]*(V[34]*(10*V[34]-20*V[35])+10*S[2]);
C[49]=+S[7]*(S[8]*(V[10]*(V[10]*(V[34]*(8*V[35]-4*V[34])-4*S[2])+V[12]*(2*(
 S[2]-S[5])))));
C[48]=+S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[47]=+S[3]*(S[8]*(V[10]*(V[10]*(V[34]*(16*V[35]-8*V[34])-8*S[2])+V[12]*(4*(
 S[2]-S[5])))));
C[46]=+V[34]*(14*V[34]-28*V[35])+14*S[2];
C[45]=+V[34]*(2*V[34]-4*V[35])+2*S[2];
C[44]=+S[7]*(V[34]*(6*V[34]-12*V[35])+6*S[2]);
C[43]=+V[34]*(4*V[34]-8*V[35])+4*S[2];
C[42]=+V[34]*(12*V[34]-24*V[35])+12*S[2];
C[41]=+S[7]*(S[8]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[40]=+S[8]*(V[34]*(12*V[34]-24*V[35])+12*S[2]);
C[39]=+S[7]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[38]=+S[3]*(S[1]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2])));
C[37]=+S[3]*(S[8]*(V[10]*(4*(S[5]*(V[10]-V[12])+S[2]*(V[12]+V[10]))-8*V[35]*
 V[34]*V[10])));
C[36]=+S[3]*(S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2]));
C[35]=+S[8]*(V[10]*(V[12]*(4*(S[2]-S[5]))));
C[34]=+S[3]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[33]=+S[3]*(S[8]*(V[34]*(12*V[34]-24*V[35])+12*S[2]));
C[32]=+S[3]*(S[1]*(S[8]*(V[34]*(12*V[34]-24*V[35])+12*S[2])));
C[31]=+S[1]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[30]=+S[1]*(S[8]*(V[34]*(4*V[34]-8*V[35])+4*S[2]));
C[29]=+S[8]*(V[34]*(16*V[34]-32*V[35])+16*S[2]);
C[28]=+S[3]*(S[1]*(S[8]*(V[34]*(4*V[34]-8*V[35])+4*S[2])));
C[27]=+S[3]*(S[8]*(V[10]*(2*(S[5]*(V[10]-V[12])+S[2]*(V[12]+V[10]))-4*V[35]*
 V[34]*V[10])));
C[26]=+S[3]*(S[8]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[25]=+S[1]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[24]=+V[34]*(10*V[34]-20*V[35])+10*S[2];
C[23]=+S[3]*(S[1]*(V[34]*(2*V[34]-4*V[35])+2*S[2]));
C[22]=+S[3]*(V[34]*(2*V[34]-4*V[35])+2*S[2]);
C[21]=+S[3]*(S[1]*(V[34]*(8*V[34]-16*V[35])+8*S[2]));
C[20]=+S[3]*(V[34]*(12*V[34]-24*V[35])+12*S[2]);
C[19]=+S[1]*(V[34]*(6*V[34]-12*V[35])+6*S[2]);
C[18]=+S[8]*(V[34]*(6*V[34]-12*V[35])+6*S[2]);
C[17]=+V[34]*(16*V[34]-32*V[35])+16*S[2];
C[16]=+S[7]*(S[1]*(S[8]*(V[34]*(3*V[34]-6*V[35])+3*S[2])));
C[15]=+S[1]*(S[8]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[14]=+S[7]*(S[1]*(V[34]*(2*V[34]-4*V[35])+2*S[2]));
C[13]=+S[1]*(V[34]*(4*V[34]-8*V[35])+4*S[2]);
C[12]=+S[7]*(V[34]*(3*V[34]-6*V[35])+3*S[2]);
C[11]=+V[34]*(6*V[34]-12*V[35])+6*S[2];
C[10]=+S[3]*(S[1]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[9]=+S[3]*(S[1]*(V[34]*(3*V[34]-6*V[35])+3*S[2]));
C[8]=+S[3]*(S[8]*(V[34]*(6*V[34]-12*V[35])+6*S[2]));
C[7]=+S[3]*(V[34]*(16*V[34]-32*V[35])+16*S[2]);
C[6]=+S[3]*(S[8]*(V[34]*(3*V[34]-6*V[35])+3*S[2]));
C[5]=+S[3]*(V[34]*(8*V[34]-16*V[35])+8*S[2]);
C[4]=+S[3]*(S[1]*(S[8]*(V[34]*(6*V[34]-12*V[35])+6*S[2])));
C[3]=+S[3]*(S[1]*(V[34]*(4*V[34]-8*V[35])+4*S[2]));
C[2]=+S[3]*(V[34]*(6*V[34]-12*V[35])+6*S[2]);
S[9]=V[17]*V[17];
S[10]=V[2]*V[2]*V[2]*V[2];
C[1]=+27*S[9]*S[10];
S[11]=V[49]*V[49];
S[12]=V[19]*V[19];
S[13]=V[1]*V[1]*V[1]*V[1];
C[0]=+8*S[11]*S[12]*S[13];
}
REAL F934_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                  !  B                 B             
         B                 B     /!==<==============@==<==           
       ==<==@==============<==\  |!  P6             |  P1            
         P1 |              P5 |  |!                 |                
            |                 |  |!  N2             |                
            |              N2 |/=+!==<==\          G|-PA             
           G|P7         /==<==+/ |!  P3 |           3                
            1           |  P3 |  |!     |           |                
            |           |     |  |!  e2 |  W+    t  |  C             
         C  |  t     W+ |  e2 | /+!==>==@--<4-@==<==@==<==           
       ==<==@==<==@-2<--@==>==+=/|!  P4   -PC | -PB    P2            
         P2    P8 |  P9    P4 |  |!           |                      
                  |           |  |!  B        |                      
                  |        B  \==+!==<========/                      
                  \========<=====/!  P5                              
                           P6     !                                  
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[194];REAL S[9];REAL tmp[20];                                  
     
if(CalcConst) C934(C);
S[0]=GG*GG*GG*GG;
N=-C[0]*S[0];
S[1]=V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[1];
S[2]=V[50]*V[50];
S[3]=DP[3]*DP[3];
S[4]=DP[12]*DP[12];
S[5]=DP[13]*DP[13];
S[6]=DP[8]*DP[8];
S[7]=DP[9]*DP[9];
S[8]=DP[4]*DP[4];
tmp[0]=+DP[0]*(C[26]*(DP[2]*(DP[8]-DP[1]-DP[3]+DP[9]+DP[12]+DP[13])+DP[4]*(
 DP[8]-DP[1]-DP[3]+DP[9]+DP[12]+DP[13])+S[2]*(DP[6]-DP[0]+DP[10])+DP[5]*(
 DP[0]-DP[6]-DP[10]))+S[2]*(S[2]*(C[48]*(DP[6]+DP[10])-C[182])-C[175])+C[6]*
 (S[6]+S[7]+S[4]+S[5])+C[140]*(DP[0]-DP[6]-DP[10])+C[8]*(DP[9]*DP[8]+DP[13]*
 DP[12])+C[183]+C[175]*DP[5])+DP[6]*(S[2]*(S[2]*(C[170]-C[29]*DP[10])+
 C[168]-C[163]*DP[10])+DP[2]*(C[8]*(-DP[8]-DP[9])-C[26]*DP[2]-C[36]*DP[4])+
 DP[12]*(C[71]*(-DP[1]-DP[3])+C[56]*(-DP[8]-DP[9]))+DP[13]*(C[71]*(-DP[1]-
 DP[3])+C[56]*(-DP[8]-DP[9]))+DP[4]*(C[8]*(-DP[8]-DP[9])-C[26]*DP[4])+DP[5]*
 (C[163]*DP[10]-C[168])+C[165]*DP[10]-C[171])+DP[10]*(DP[2]*(C[8]*(-DP[12]-
 DP[13])-C[26]*DP[2]-C[36]*DP[4])+DP[8]*(C[71]*(-DP[1]-DP[3])+C[56]*(-
 DP[12]-DP[13]))+DP[9]*(C[71]*(-DP[1]-DP[3])+C[56]*(-DP[12]-DP[13]))+DP[4]*(
 C[8]*(-DP[12]-DP[13])-C[26]*DP[4])+S[2]*(C[168]+C[170]*S[2])-C[171]-C[168]*
 DP[5])+DP[1]*(C[111]*(DP[8]+DP[9]+DP[12]+DP[13])+C[92]*(DP[2]+DP[4])+C[28]*
 DP[1]+C[38]*DP[3])+DP[3]*(C[111]*(DP[8]+DP[9]+DP[12]+DP[13])+C[92]*(DP[2]+
 DP[4])+C[28]*DP[3])+DP[8]*(C[100]*(DP[12]+DP[13])+C[27]*DP[8]+C[37]*DP[9])+
 DP[9]*(C[100]*(DP[12]+DP[13])+C[27]*DP[9])+S[2]*(-C[176]-C[184]*S[2])+
 DP[2]*(C[178]*DP[2]+C[68]*DP[4])+DP[12]*(C[27]*DP[12]+C[37]*DP[13])+C[185]+
 C[178]*S[8]+C[176]*DP[5]+C[27]*S[5];
tmp[1]=+DP[14]*(S[2]*(S[2]*(DP[6]*(C[58]-C[43]*DP[11])+DP[7]*(-C[48]-C[43]*
 DP[10])+DP[14]*(C[13]+C[11]*DP[0])+C[58]*DP[10]-C[75]-C[48]*DP[11])+DP[6]*(
 C[5]*DP[10]-C[53]+C[20]*DP[11])+DP[7]*(C[20]*DP[10]+C[5]*DP[11])+DP[14]*(-
 C[3]-C[2]*DP[0])+C[66]-C[53]*DP[10])+DP[2]*(C[5]*(DP[7]*(DP[12]+DP[13])+
 DP[11]*(DP[8]+DP[9])-DP[14]*DP[2])+C[26]*(DP[8]+DP[9]+DP[12]+DP[13])+C[22]*
 (DP[6]*(-DP[12]-DP[13])+DP[10]*(-DP[8]-DP[9]))+DP[14]*(C[2]*(-DP[1]-DP[3])-
 C[7]*DP[4])+C[36]*DP[2]+C[55]*DP[4])+DP[4]*(C[5]*(DP[7]*(DP[12]+DP[13])+
 DP[11]*(DP[8]+DP[9])-DP[14]*DP[4])+C[26]*(DP[8]+DP[9]+DP[12]+DP[13])+C[22]*
 (DP[6]*(-DP[12]-DP[13])+DP[10]*(-DP[8]-DP[9]))+DP[14]*(C[2]*(-DP[1]-
 DP[3]))+C[36]*DP[4])+C[2]*(DP[0]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+DP[1]*(DP[7]*(DP[12]+DP[13])+DP[11]*(DP[8]+DP[9]))+
 DP[3]*(DP[7]*(DP[12]+DP[13])+DP[11]*(DP[8]+DP[9])))+DP[5]*(DP[6]*(C[53]-
 C[5]*DP[10]-C[20]*DP[11])+DP[7]*(-C[20]*DP[10]-C[5]*DP[11])+C[53]*DP[10]-
 C[66]+C[3]*DP[14])+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13]))+
 DP[6]*(C[59]-C[39]*DP[10]-C[44]*DP[11])+DP[1]*(C[71]*DP[1]+C[73]*DP[3])+
 DP[7]*(-C[44]*DP[10]-C[39]*DP[11])+DP[14]*(C[14]+C[12]*DP[0])+C[71]*S[3]-
 C[76]+C[59]*DP[10]);
tmp[2]=+DP[12]*(DP[6]*(C[56]*(DP[1]+DP[2]+DP[3]+DP[4])-C[85]*DP[12]-C[23]*
 DP[13])+DP[7]*(C[26]*(DP[1]+DP[3])+C[36]*(DP[2]+DP[4]))+DP[14]*(C[23]*(-
 DP[1]-DP[3])+C[3]*(-DP[2]-DP[4]))+C[38]*(DP[13]-DP[8]-DP[9])+C[72]*(-DP[1]-
 DP[3])+C[108]*(-DP[2]-DP[4])+C[28]*DP[12])+DP[13]*(DP[6]*(C[56]*(DP[1]+
 DP[2]+DP[3]+DP[4])-C[85]*DP[13])+DP[7]*(C[26]*(DP[1]+DP[3])+C[36]*(DP[2]+
 DP[4]))+DP[14]*(C[23]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4]))+C[72]*(-DP[1]-
 DP[3])+C[108]*(-DP[2]-DP[4])+C[38]*(-DP[8]-DP[9])+C[28]*DP[13])+DP[14]*(
 DP[1]*(C[53]*(-DP[2]-DP[4])-C[56]*DP[1]-C[57]*DP[3])+DP[2]*(-C[36]*DP[2]-
 C[53]*DP[3]-C[55]*DP[4])+S[2]*(C[60]*S[2]-C[54])+DP[3]*(-C[56]*DP[3]-C[53]*
 DP[4])+C[61]-C[36]*S[8]+C[54]*DP[5])+DP[2]*(C[8]*(DP[7]*(-DP[1]-DP[3])+
 DP[6]*DP[4])+C[155]*(DP[1]+DP[3])+C[93]*(-DP[8]-DP[9])+C[6]*DP[6]*DP[2])+
 DP[4]*(DP[1]*(C[155]-C[8]*DP[7])+DP[3]*(C[155]-C[8]*DP[7])+C[93]*(-DP[8]-
 DP[9])+C[6]*DP[6]*DP[4])+S[2]*(S[2]*(C[172]-C[99]*DP[6]-C[98]*DP[7])+
 C[169]-C[161]*DP[6]-C[147]*DP[7])+C[96]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-
 DP[8]-DP[9]))+DP[5]*(C[161]*DP[6]-C[169]+C[147]*DP[7])+C[162]*DP[6]-C[173]+
 C[149]*DP[7];
tmp[3]=+DP[11]*(DP[10]*(C[5]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-DP[8]-DP[9])+
 DP[6]*(DP[5]-S[2]))+S[2]*(S[2]*(C[95]+C[43]*DP[7])+C[145]-C[51]*DP[7])+
 C[50]*(DP[2]*(-DP[8]-DP[9])+DP[4]*(-DP[8]-DP[9]))+DP[5]*(C[51]*DP[7]-
 C[145])+C[39]*DP[6]-C[146]+C[143]*DP[7])+DP[11]*(C[2]*(DP[1]*(-DP[8]-
 DP[9])+DP[3]*(-DP[8]-DP[9])+DP[6]*(DP[5]-S[2]))+C[5]*(DP[2]*(-DP[8]-DP[9])+
 DP[4]*(-DP[8]-DP[9])+DP[7]*(DP[5]-S[2]))+S[2]*(S[2]*(C[29]-C[45]*DP[6])+
 C[26])+C[12]*DP[6]-C[140]-C[26]*DP[5]+C[39]*DP[7])+DP[14]*(DP[2]*(C[2]*(
 DP[1]+DP[3])+C[5]*DP[2]+C[7]*DP[4])+DP[4]*(C[2]*(DP[1]+DP[3])+C[5]*DP[4])+
 S[2]*(C[3]-C[13]*S[2])-C[14]-C[3]*DP[5])+DP[6]*(C[22]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13]))+S[2]*(C[53]-C[58]*S[2])-C[59]-C[53]*DP[5])+
 DP[7]*(C[22]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+S[2]*(C[55]-
 C[48]*S[2])-C[144]-C[55]*DP[5])+DP[8]*(C[53]*(DP[1]+DP[3])+C[36]*(DP[2]+
 DP[4])+C[3]*(DP[12]+DP[13]))+DP[9]*(C[53]*(DP[1]+DP[3])+C[36]*(DP[2]+
 DP[4])+C[3]*(DP[12]+DP[13]))+C[26]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13]))+S[2]*(-C[151]-C[152]*S[2])+C[153]+C[151]*DP[5]);
tmp[4]=+DP[11]*(C[26]*(DP[1]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[2]*(DP[8]+DP[9]+
 DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(DP[8]+DP[9]+DP[12]+
 DP[13]))+DP[14]*(DP[1]*(C[5]*(-DP[2]-DP[4])-C[2]*DP[1]-C[20]*DP[3])+DP[3]*(
 C[5]*(-DP[2]-DP[4])-C[2]*DP[3])+S[2]*(C[40]*S[2]-C[33])+C[41]+C[33]*DP[5])+
 C[36]*(S[2]*(DP[7]+DP[11])+DP[5]*(-DP[7]-DP[11]))+C[8]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13]))+C[70]*(DP[5]-S[2])+C[139]*(-DP[7]-DP[11])+
 C[150])+DP[7]*(DP[12]*(C[26]*(DP[2]+DP[4])+C[6]*DP[12]+C[8]*DP[13])+DP[13]*
 (C[26]*(DP[2]+DP[4])+C[6]*DP[13])+S[2]*(-C[141]-C[94]*S[2])+DP[1]*(C[6]*
 DP[1]+C[8]*DP[3])+C[142]+C[6]*S[3]+C[141]*DP[5])+DP[14]*(DP[2]*(C[8]*(-
 DP[12]-DP[13])-C[26]*DP[2]-C[36]*DP[4])+DP[4]*(C[8]*(-DP[12]-DP[13])-C[26]*
 DP[4])+S[2]*(C[47]+C[30]*S[2])-C[49]-C[47]*DP[5])+DP[12]*(C[106]*(-DP[1]-
 DP[3])+C[68]*(-DP[2]-DP[4])+C[90]*(DP[8]+DP[9])-C[27]*DP[12]-C[37]*DP[13])+
 DP[13]*(C[106]*(-DP[1]-DP[3])+C[68]*(-DP[2]-DP[4])+C[90]*(DP[8]+DP[9])-
 C[27]*DP[13])+DP[1]*(C[93]*(-DP[8]-DP[9])-C[155]*DP[1]-C[156]*DP[3])+C[92]*
 (DP[2]*(DP[8]+DP[9])+DP[4]*(DP[8]+DP[9]))+DP[3]*(C[93]*(-DP[8]-DP[9])-
 C[155]*DP[3])+S[2]*(C[154]+C[158]*S[2])-C[159]-C[154]*DP[5];
tmp[5]=+DP[11]*(DP[11]*(DP[8]*(C[26]*(DP[2]+DP[4])+C[6]*DP[8]+C[8]*DP[9])+
 DP[9]*(C[26]*(DP[2]+DP[4])+C[6]*DP[9])+S[2]*(-C[141]-C[94]*S[2])+DP[1]*(
 C[6]*DP[1]+C[8]*DP[3])+C[142]+C[6]*S[3]+C[141]*DP[5])+DP[8]*(C[106]*(-
 DP[1]-DP[3])+C[68]*(-DP[2]-DP[4])+C[90]*(DP[12]+DP[13])-C[27]*DP[8]-C[37]*
 DP[9])+DP[9]*(C[106]*(-DP[1]-DP[3])+C[68]*(-DP[2]-DP[4])+C[90]*(DP[12]+
 DP[13])-C[27]*DP[9])+DP[1]*(C[93]*(-DP[12]-DP[13])-C[155]*DP[1]-C[156]*
 DP[3])+C[92]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13]))+DP[3]*(C[93]*(-
 DP[12]-DP[13])-C[155]*DP[3])+S[2]*(C[154]+C[158]*S[2])-C[159]-C[154]*
 DP[5])+DP[1]*(C[112]*(DP[8]+DP[9]+DP[12]+DP[13])+C[180]*(-DP[2]-DP[4])-
 C[86]*DP[1]-C[88]*DP[3])+C[110]*(DP[2]*(DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(
 DP[8]+DP[9]+DP[12]+DP[13]))+DP[3]*(C[112]*(DP[8]+DP[9]+DP[12]+DP[13])+
 C[180]*(-DP[2]-DP[4])-C[86]*DP[3])+DP[8]*(C[101]*(DP[12]+DP[13])-C[86]*
 DP[8]-C[88]*DP[9])+DP[9]*(C[101]*(DP[12]+DP[13])-C[86]*DP[9])+S[2]*(-
 C[177]-C[186]*S[2])+DP[2]*(-C[179]*DP[2]-C[181]*DP[4])+DP[12]*(-C[86]*
 DP[12]-C[88]*DP[13])+C[187]-C[179]*S[8]+C[177]*DP[5]-C[86]*S[5];
tmp[6]=+DP[10]*(DP[8]*(DP[10]*(C[56]*(DP[1]+DP[2]+DP[3]+DP[4])-C[85]*DP[8]-
 C[23]*DP[9])+DP[11]*(C[26]*(DP[1]+DP[3])+C[36]*(DP[2]+DP[4]))+DP[14]*(
 C[23]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4]))+C[38]*(DP[9]-DP[12]-DP[13])+
 C[72]*(-DP[1]-DP[3])+C[108]*(-DP[2]-DP[4])+C[28]*DP[8])+DP[9]*(DP[10]*(
 C[56]*(DP[1]+DP[2]+DP[3]+DP[4])-C[85]*DP[9])+DP[11]*(C[26]*(DP[1]+DP[3])+
 C[36]*(DP[2]+DP[4]))+DP[14]*(C[23]*(-DP[1]-DP[3])+C[3]*(-DP[2]-DP[4]))+
 C[72]*(-DP[1]-DP[3])+C[108]*(-DP[2]-DP[4])+C[38]*(-DP[12]-DP[13])+C[28]*
 DP[9])+DP[14]*(DP[1]*(C[53]*(-DP[2]-DP[4])-C[56]*DP[1]-C[57]*DP[3])+DP[2]*
 (-C[36]*DP[2]-C[53]*DP[3]-C[55]*DP[4])+S[2]*(C[60]*S[2]-C[54])+DP[3]*(-
 C[56]*DP[3]-C[53]*DP[4])+C[61]-C[36]*S[8]+C[54]*DP[5])+DP[2]*(C[8]*(DP[11]*
 (-DP[1]-DP[3])+DP[10]*DP[4])+C[155]*(DP[1]+DP[3])+C[93]*(-DP[12]-DP[13])+
 C[6]*DP[10]*DP[2])+DP[4]*(DP[1]*(C[155]-C[8]*DP[11])+DP[3]*(C[155]-C[8]*
 DP[11])+C[93]*(-DP[12]-DP[13])+C[6]*DP[10]*DP[4])+S[2]*(S[2]*(C[172]-C[99]*
 DP[10]-C[98]*DP[11])+C[169]-C[161]*DP[10]-C[147]*DP[11])+C[96]*(DP[1]*(-
 DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+DP[5]*(C[161]*DP[10]-C[169]+C[147]*
 DP[11])+C[162]*DP[10]-C[173]+C[149]*DP[11]);
tmp[7]=+DP[7]*(DP[10]*(DP[7]*(C[2]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[2]))+C[5]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13])+DP[11]*(DP[5]-S[2]))+S[2]*(S[2]*(C[29]-C[45]*DP[10])+C[26])+C[12]*
 DP[10]-C[140]-C[26]*DP[5]+C[39]*DP[11])+DP[14]*(DP[2]*(C[2]*(DP[1]+DP[3])+
 C[5]*DP[2]+C[7]*DP[4])+DP[4]*(C[2]*(DP[1]+DP[3])+C[5]*DP[4])+S[2]*(C[3]-
 C[13]*S[2])-C[14]-C[3]*DP[5])+DP[8]*(C[22]*(DP[10]*(DP[2]+DP[4])+DP[11]*(-
 DP[1]-DP[3]))+C[26]*(-DP[2]-DP[4])+C[3]*(DP[12]+DP[13]))+DP[9]*(C[22]*(
 DP[10]*(DP[2]+DP[4])+DP[11]*(-DP[1]-DP[3]))+C[26]*(-DP[2]-DP[4])+C[3]*(
 DP[12]+DP[13]))+S[2]*(S[2]*(-C[152]-C[58]*DP[10]-C[48]*DP[11])+C[53]*
 DP[10]-C[151]+C[55]*DP[11])+C[53]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])+C[36]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13]))+
 DP[5]*(C[151]-C[55]*DP[11])+C[153]-C[59]*DP[10]-C[144]*DP[11])+tmp[4]);
tmp[8]=+DP[14]*(DP[2]*(DP[11]*(C[8]*(-DP[8]-DP[9])-C[26]*DP[2]-C[36]*DP[4])+
 DP[14]*(C[3]*(DP[1]+DP[3])+C[6]*DP[2]+C[8]*DP[4])+C[27]*(DP[8]+DP[9]+
 DP[12]+DP[13])+C[69]*(DP[1]+DP[3])+C[68]*DP[2]+C[70]*DP[4])+DP[4]*(C[27]*(
 DP[8]+DP[9]+DP[12]+DP[13])+DP[4]*(C[68]-C[26]*DP[11]+C[6]*DP[14])+DP[1]*(
 C[69]+C[3]*DP[14])+DP[3]*(C[69]+C[3]*DP[14])+DP[11]*(C[8]*(-DP[8]-DP[9])))+
 DP[1]*(C[28]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[1]*(C[72]+C[9]*DP[14])+DP[3]*(
 C[74]+C[10]*DP[14]))+S[2]*(S[2]*(C[30]*DP[11]-C[77]-C[15]*DP[14])+C[67]+
 C[47]*DP[11]+C[4]*DP[14])+DP[3]*(C[28]*(-DP[8]-DP[9]-DP[12]-DP[13])+DP[3]*(
 C[72]+C[9]*DP[14]))+C[4]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])+DP[5]*(-C[67]-C[47]*DP[11])-C[78]-C[49]*DP[11]-C[16]*DP[14])+
 tmp[5]+tmp[6]+tmp[7];
tmp[9]=+DP[0]*(DP[7]*(C[26]*(DP[2]*(DP[1]+DP[3]-DP[8]-DP[9])+DP[4]*(DP[1]+
 DP[3]-DP[8]-DP[9])+DP[7]*(DP[5]-S[2])-S[4]-S[5])+C[36]*(DP[12]*(-DP[2]-
 DP[4]-DP[13])+S[2]*(DP[0]-DP[10])+DP[5]*(DP[10]-DP[0])+DP[13]*(-DP[2]-
 DP[4]))+DP[6]*(S[2]*(C[148]*S[2]-C[33])+DP[12]*(C[22]*DP[12]+C[34]*DP[13])+
 C[41]+C[33]*DP[5]+C[22]*S[5])+DP[10]*(C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13]))+C[139]-C[29]*S[1])+C[8]*(DP[1]*(-DP[8]-DP[9])+DP[3]*(-
 DP[8]-DP[9]))+S[2]*(C[68]+C[113]*S[2]-C[55]*DP[11])+DP[5]*(C[55]*DP[11]-
 C[68])+C[140]*DP[7]-C[157]-C[139]*DP[0]+C[144]*DP[11])+DP[11]*(C[26]*(
 DP[2]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[4]*(DP[1]+DP[3]-DP[12]-DP[13])+DP[11]*
 (DP[5]-S[2])-S[6]-S[7])+C[36]*(DP[8]*(-DP[2]-DP[4]-DP[9])+S[2]*(DP[0]-
 DP[6])+DP[5]*(DP[6]-DP[0])+DP[9]*(-DP[2]-DP[4]))+DP[10]*(S[2]*(C[148]*S[2]-
 C[33])+DP[8]*(C[22]*DP[8]+C[34]*DP[9])+C[41]+C[33]*DP[5]+C[22]*S[7])+DP[6]*
 (C[2]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13]))+C[139]-C[29]*S[1])+
 C[8]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13]))+S[2]*(C[68]+C[113]*
 S[2])+C[140]*DP[11]-C[157]-C[139]*DP[0]-C[68]*DP[5])+tmp[0]+tmp[1]);
tmp[10]=+DP[13]*(DP[6]*(DP[2]*(DP[0]*(C[29]-C[24]*DP[14])+DP[6]*(C[58]+
 C[45]*DP[11])+DP[7]*(C[48]-C[45]*DP[10])+C[109]-C[95]*DP[10]-C[29]*DP[11]-
 C[13]*DP[14])+DP[8]*(DP[0]*(C[46]*DP[11]-C[58])+C[103]+C[25]*DP[10]+C[91]*
 DP[11])+DP[1]*(DP[7]*(-C[58]-C[45]*DP[11])+C[102]+C[25]*DP[14])+DP[12]*(
 C[31]-C[25]*DP[6]+C[43]*DP[7]*DP[0]))+DP[0]*(DP[8]*(DP[7]*(C[48]-C[45]*
 DP[10])+DP[14]*(-C[13]-C[11]*DP[0])+C[104]-C[58]*DP[10]-C[48]*DP[11])+
 DP[1]*(C[11]*DP[14]*DP[7]-C[115]-C[18]*DP[11])+DP[2]*(C[97]*DP[10]-C[113]+
 C[29]*DP[14])+DP[12]*(C[87]+C[18]*DP[0]-C[29]*DP[7]))+DP[7]*(DP[1]*(DP[7]*(
 C[45]*DP[10]-C[48])+C[107]+C[58]*DP[10]+C[48]*DP[11]+C[13]*DP[14])+C[18]*(
 DP[12]*DP[7]-DP[11]*DP[8]-DP[14]*DP[2])+C[102]*DP[8]-C[87]*DP[12])+DP[2]*(
 C[98]*DP[10]-C[114]+C[94]*DP[11]+C[30]*DP[14])+DP[8]*(C[105]-C[87]*DP[10]-
 C[31]*DP[11]+C[15]*DP[14])+DP[1]*(C[99]*DP[10]-C[116]-C[31]*DP[14])-C[89]*
 DP[12]);
tmp[11]=+DP[3]*(DP[14]*(DP[2]*(DP[6]*(C[17]*DP[10]-C[63]+C[46]*DP[11])+
 DP[7]*(C[46]*DP[10]-C[48])+DP[14]*(C[13]-C[11]*DP[0])+C[81]-C[63]*DP[10]-
 C[48]*DP[11])+DP[1]*(C[64]*(-DP[6]-DP[10])+C[83]+C[82]*DP[0]-C[42]*DP[11]*
 DP[7]+C[19]*DP[14])+DP[8]*(DP[11]*(C[11]*DP[0]-C[13])-C[19]*DP[10])+DP[12]*
 (DP[7]*(C[11]*DP[0]-C[13])-C[19]*DP[6]))+DP[8]*(DP[11]*(DP[6]*(C[63]-C[17]*
 DP[10]-C[46]*DP[11])+DP[7]*(C[48]-C[45]*DP[10])+C[63]*DP[10]-C[128]+C[48]*
 DP[11])+DP[10]*(C[64]*(DP[6]+DP[10])-C[131]-C[82]*DP[0])+DP[0]*(C[134]-
 C[18]*DP[7])+C[135]-C[124]*DP[6]-C[102]*DP[7])+DP[12]*(DP[7]*(DP[6]*(C[63]-
 C[17]*DP[10]-C[45]*DP[11])+DP[7]*(C[48]-C[46]*DP[10])+C[63]*DP[10]-C[128]+
 C[48]*DP[11])+DP[6]*(C[64]*(DP[6]+DP[10])-C[131]-C[82]*DP[0])+DP[0]*(
 C[134]-C[18]*DP[11])+C[135]-C[124]*DP[10]-C[102]*DP[11])+DP[2]*(DP[0]*(
 C[48]*(-DP[6]-DP[10])+C[182])+DP[6]*(C[174]-C[18]*DP[7])+DP[10]*(C[174]-
 C[18]*DP[11])-C[192])+DP[1]*(DP[7]*(C[18]*DP[7]-C[115])+DP[11]*(C[18]*
 DP[11]-C[115])+C[31]*DP[0]-C[89]));
tmp[12]=+DP[4]*(DP[14]*(DP[2]*(DP[6]*(C[52]*DP[10]-C[62]+C[17]*DP[11])+
 DP[0]*(C[62]-C[17]*DP[14])+DP[7]*(C[17]*DP[10]-C[29])+C[79]-C[62]*DP[10]-
 C[29]*DP[11]+C[18]*DP[14])+DP[1]*(DP[7]*(C[48]-C[45]*DP[10]-C[17]*DP[11])+
 DP[6]*(-C[58]-C[45]*DP[11])+DP[14]*(C[13]-C[11]*DP[0])+C[48]*DP[11]-C[80]-
 C[58]*DP[10])+DP[8]*(DP[0]*(C[11]*DP[10]+C[17]*DP[11])+C[35]-C[13]*DP[10]-
 C[18]*DP[11])+DP[12]*(DP[0]*(C[11]*DP[6]+C[17]*DP[7])+C[35]-C[13]*DP[6]-
 C[18]*DP[7]))+DP[0]*(C[29]*(DP[0]*(DP[8]-DP[1]+DP[12])+DP[1]*(DP[7]+
 DP[11])+DP[2]*(-DP[6]-DP[10])+DP[8]*(-DP[7]-DP[10])+DP[12]*(-DP[6]-
 DP[11]))+DP[1]*(C[48]*(DP[6]+DP[10])-C[190])+DP[8]*(C[113]-C[122]*DP[6]-
 C[62]*DP[11])+DP[12]*(C[113]-C[62]*DP[7]-C[122]*DP[10])+C[188]*DP[2])+
 DP[6]*(DP[12]*(DP[6]*(C[58]+C[45]*DP[11])+DP[7]*(C[127]-C[121]*DP[10])+
 C[95]*DP[10]-C[130])+DP[8]*(DP[11]*(C[62]-C[121]*DP[10]-C[17]*DP[11])+
 C[95]*DP[10]-C[123])+DP[1]*(C[35]-C[18]*DP[7])+C[18]*DP[6]*DP[2])+DP[10]*(
 DP[8]*(DP[10]*(C[58]+C[45]*DP[7])+C[127]*DP[11]-C[130])+DP[12]*(DP[7]*(
 C[62]-C[17]*DP[7])-C[123])+DP[1]*(C[35]-C[18]*DP[11])+C[18]*DP[10]*DP[2])+
 DP[7]*(DP[12]*(C[29]*(DP[7]+DP[11])-C[79])+DP[8]*(C[29]*DP[11]-C[118]))+
 DP[8]*(DP[11]*(C[29]*DP[11]-C[79])+C[133])+DP[12]*(C[133]-C[118]*DP[11])+
 C[191]*DP[1]-C[189]*DP[2]);
tmp[13]=+DP[6]*(DP[11]*(DP[8]*(C[51]*DP[10]-C[55]+C[7]*DP[11])+DP[9]*(C[50]*
 DP[10]-C[36]+C[5]*DP[11])+DP[6]*(-C[34]*DP[12]-C[22]*DP[13])+C[36]*DP[12]+
 C[26]*DP[13])+DP[7]*(DP[10]*(C[51]*DP[12]+C[50]*DP[13])+C[33]*DP[1]+C[8]*
 DP[3]-C[55]*DP[12]-C[36]*DP[13])+DP[6]*(C[8]*(-DP[2]-DP[4])-C[57]*DP[12]-
 C[56]*DP[13])+C[120]*DP[8]-C[156]*DP[1]-C[155]*DP[3]+C[93]*DP[9]+C[132]*
 DP[12]+C[108]*DP[13])+DP[10]*(DP[7]*(DP[7]*(C[7]*DP[12]+C[5]*DP[13])+DP[8]*
 (C[36]-C[34]*DP[10])+DP[9]*(C[26]-C[22]*DP[10])-C[55]*DP[12]-C[36]*DP[13])+
 DP[10]*(C[8]*(-DP[2]-DP[4])-C[57]*DP[8]-C[56]*DP[9])+DP[11]*(C[33]*DP[1]+
 C[8]*DP[3]-C[55]*DP[8]-C[36]*DP[9])+C[132]*DP[8]-C[156]*DP[1]-C[155]*DP[3]+
 C[108]*DP[9]+C[120]*DP[12]+C[93]*DP[13])+DP[7]*(DP[11]*(C[36]*(-DP[8]-
 DP[12])+C[26]*(-DP[9]-DP[13]))+DP[7]*(-C[36]*DP[12]-C[26]*DP[13])+C[70]*
 DP[12]-C[119]*DP[8]-C[92]*DP[9]+C[68]*DP[13])+DP[11]*(DP[8]*(C[70]-C[36]*
 DP[11])+DP[9]*(C[68]-C[26]*DP[11])-C[119]*DP[12]-C[92]*DP[13])+C[181]*(
 DP[2]+DP[4])+C[136]*(-DP[8]-DP[12])+C[110]*(-DP[9]-DP[13])+C[193]*DP[1]+
 C[180]*DP[3];
tmp[14]=+DP[14]*(DP[4]*(DP[6]*(C[53]-C[5]*DP[10]-C[2]*DP[11])+DP[14]*(C[2]*
 DP[0]-C[3])+C[53]*DP[10]-C[69])+DP[1]*(C[57]*(DP[6]+DP[10])-C[74]-C[73]*
 DP[0]-C[10]*DP[14])+DP[3]*(C[57]*(DP[6]+DP[10])-C[74]-C[73]*DP[0]-C[10]*
 DP[14])+DP[8]*(C[38]+C[3]*DP[10]-C[20]*DP[11]*DP[0])+DP[9]*(C[28]+C[23]*
 DP[10]-C[2]*DP[11]*DP[0])+DP[6]*(C[3]*DP[12]+C[23]*DP[13])+C[38]*DP[12]+
 C[28]*DP[13])+DP[11]*(DP[6]*(DP[8]*(C[7]*DP[10]-C[65]+C[20]*DP[11])+DP[9]*(
 C[5]*DP[10]-C[53]+C[2]*DP[11]))+C[8]*(DP[11]*(-DP[1]-DP[3])+DP[10]*DP[4]+
 DP[13]*DP[0])+DP[0]*(C[33]*DP[12]-C[26]*DP[4])+DP[8]*(C[129]-C[36]*DP[10])+
 DP[9]*(C[106]-C[26]*DP[10])+C[156]*(DP[1]+DP[3])+C[120]*DP[12]+C[93]*
 DP[13])+DP[6]*(DP[10]*(C[57]*(-DP[8]-DP[12])+C[56]*(-DP[9]-DP[13]))+DP[12]*
 (C[74]+C[73]*DP[0]-C[57]*DP[6])+DP[13]*(C[72]+C[71]*DP[0]-C[56]*DP[6])+
 C[125]*DP[8]-C[155]*DP[4]+C[96]*DP[9])+DP[0]*(DP[4]*(C[26]*DP[0]-C[92])+
 DP[8]*(C[73]*DP[10]-C[137])+DP[9]*(C[71]*DP[10]-C[111])+C[38]*(-DP[1]-
 DP[3])-C[137]*DP[12]-C[111]*DP[13])+DP[10]*(DP[8]*(C[74]-C[57]*DP[10])+
 DP[9]*(C[72]-C[56]*DP[10])+C[125]*DP[12]-C[155]*DP[4]+C[96]*DP[13])+C[88]*(
 DP[1]+DP[3])+C[138]*(-DP[8]-DP[12])+C[112]*(-DP[9]-DP[13])+C[180]*DP[4];
tmp[15]=+DP[10]*(DP[0]*(DP[7]*(-C[20]*DP[12]-C[2]*DP[13])+C[71]*DP[3]+C[57]*
 DP[12]+C[56]*DP[13]+C[22]*DP[14]*DP[4])+DP[4]*(DP[7]*(C[26]-C[22]*DP[10])+
 C[108]-C[56]*DP[10]+C[3]*DP[14])+DP[3]*(C[56]*(-DP[6]-DP[10])+C[72]+C[23]*
 DP[14])+DP[12]*(C[54]-C[3]*DP[6]-C[21]*DP[7])+DP[13]*(C[38]-C[23]*DP[6]-
 C[3]*DP[7])+DP[8]*(C[23]*DP[10]-C[38])+DP[9]*(C[23]*DP[10]-C[38]))+DP[0]*(
 DP[0]*(DP[14]*(C[20]*DP[12]+C[2]*DP[13])+C[8]*(-DP[8]-DP[9])-C[26]*DP[4])+
 DP[4]*(C[26]*(DP[7]-DP[14])+C[8]*DP[6])+DP[12]*(C[57]*DP[6]-C[126]+C[21]*
 DP[14])+DP[13]*(C[56]*DP[6]-C[100]+C[3]*DP[14])+DP[3]*(C[8]*DP[7]-C[111])+
 C[37]*(-DP[8]-DP[9]))+DP[3]*(C[96]*DP[6]-C[112]+C[93]*DP[7]+C[28]*DP[14])+
 DP[4]*(C[93]*DP[6]-C[110]-C[92]*DP[7]-C[27]*DP[14])+DP[12]*(C[54]*DP[6]-
 C[67]-C[117]*DP[7]-C[32]*DP[14])+DP[13]*(C[38]*DP[6]-C[101]-C[90]*DP[7]-
 C[4]*DP[14])+C[88]*(DP[8]+DP[9]);
tmp[16]=+DP[12]*(DP[7]*(DP[4]*(DP[10]*(C[50]*DP[6]-C[36]+C[5]*DP[7])+DP[0]*(
 C[36]-C[5]*DP[14])+C[26]*(-DP[7]-DP[11])+C[68]-C[36]*DP[6]+C[8]*DP[14])+
 DP[3]*(DP[6]*(C[5]*DP[10]-C[26]+C[22]*DP[11])+DP[10]*(C[2]*DP[7]-C[53])+
 C[106]-C[26]*DP[11]-C[2]*DP[14]*DP[0])+DP[0]*(DP[6]*(C[34]*(-DP[12]-
 DP[13]))+C[36]*(DP[12]+DP[13])-C[2]*DP[10]*DP[9])+DP[9]*(C[8]*DP[11]-C[90]-
 C[3]*DP[10])+DP[7]*(C[8]*(-DP[12]-DP[13]))+C[37]*(DP[12]+DP[13]))+DP[6]*(
 DP[4]*(DP[6]*(-C[56]-C[22]*DP[11])+DP[14]*(C[3]+C[22]*DP[0])+C[108]+C[26]*
 DP[11])+DP[3]*(C[56]*(-DP[6]-DP[10])+C[72]+C[71]*DP[0]+C[23]*DP[14])+DP[9]*
 (DP[0]*(C[56]-C[2]*DP[11])+C[38]-C[23]*DP[10]-C[3]*DP[11])+DP[6]*(C[23]*(
 DP[12]+DP[13]))+C[38]*(-DP[12]-DP[13]))+DP[0]*(DP[0]*(C[8]*(-DP[12]-
 DP[13])+C[2]*DP[14]*DP[9]-C[26]*DP[4])+DP[4]*(C[26]*(DP[11]-DP[14])+C[8]*
 DP[10])+DP[9]*(C[56]*DP[10]-C[100]+C[3]*DP[14])+DP[3]*(C[8]*DP[11]-C[111])+
 C[37]*(-DP[12]-DP[13]))+DP[3]*(C[96]*DP[10]-C[112]+C[93]*DP[11]+C[28]*
 DP[14])+DP[4]*(C[93]*DP[10]-C[110]-C[92]*DP[11]-C[27]*DP[14])+DP[9]*(C[38]*
 DP[10]-C[101]-C[90]*DP[11]-C[4]*DP[14])+C[88]*(DP[12]+DP[13]));
tmp[17]=+DP[2]*(DP[14]*(DP[0]*(DP[14]*(C[7]*(DP[2]+DP[4])+C[20]*DP[1]+C[2]*
 DP[3])+DP[8]*(C[34]*DP[10]-C[36]-C[7]*DP[11])+DP[9]*(C[22]*DP[10]-C[26]-
 C[5]*DP[11])+DP[12]*(C[34]*DP[6]-C[36]-C[7]*DP[7])+DP[13]*(C[22]*DP[6]-
 C[26]-C[5]*DP[7])+C[55]*(-DP[2]-DP[4]))+DP[6]*(DP[10]*(C[51]*(-DP[2]-
 DP[4])-C[7]*DP[1]-C[5]*DP[3])+DP[11]*(C[7]*(-DP[2]-DP[4])-C[20]*DP[1]-C[2]*
 DP[3])+C[55]*(DP[2]+DP[4])+C[65]*DP[1]+C[53]*DP[3]+C[21]*DP[12]+C[3]*
 DP[13])+DP[7]*(DP[10]*(C[7]*(-DP[2]-DP[4])-C[20]*DP[1]-C[2]*DP[3])+DP[11]*(
 C[7]*DP[1]+C[5]*DP[3])+C[36]*(DP[2]+DP[4])+C[33]*DP[12]+C[8]*DP[13])+
 DP[10]*(C[55]*(DP[2]+DP[4])+C[65]*DP[1]+C[53]*DP[3]+C[21]*DP[8]+C[3]*
 DP[9])+DP[11]*(C[36]*(DP[2]+DP[4])+C[33]*DP[8]+C[8]*DP[9])+DP[14]*(C[8]*(-
 DP[2]-DP[4])-C[21]*DP[1]-C[3]*DP[3])+C[70]*(-DP[2]-DP[4])+C[37]*(-DP[8]-
 DP[12])+C[27]*(-DP[9]-DP[13])-C[84]*DP[1]-C[69]*DP[3])+DP[0]*(C[36]*(DP[0]*
 (DP[1]-DP[8]-DP[12])+DP[7]*(DP[8]-DP[1]+DP[13])+DP[11]*(DP[9]-DP[1]+
 DP[12])+DP[2]*(DP[6]+DP[10])+DP[4]*(DP[6]+DP[10]))+C[26]*(DP[0]*(DP[3]-
 DP[9]-DP[13])+DP[3]*(-DP[7]-DP[11])+DP[9]*DP[7]+DP[13]*DP[11])+DP[6]*(
 C[33]*DP[8]+C[8]*DP[9])+DP[10]*(C[33]*DP[12]+C[8]*DP[13])+C[68]*(-DP[2]-
 DP[4])+C[55]*(DP[11]*DP[8]+DP[12]*DP[7])-C[119]*DP[1]-C[92]*DP[3])+
 tmp[13]);
tmp[18]=+DP[1]*(DP[7]*(DP[11]*(DP[14]*(C[20]*(DP[1]+DP[3])+C[5]*DP[4])+
 DP[6]*(C[34]*DP[12]+C[22]*DP[13])+DP[8]*(C[34]*DP[10]-C[36])+DP[9]*(C[22]*
 DP[10]-C[26])-C[36]*DP[12]-C[26]*DP[13])+DP[10]*(DP[12]*(C[7]*DP[6]-C[65]+
 C[20]*DP[7])+DP[13]*(C[5]*DP[6]-C[53]+C[2]*DP[7])-C[2]*DP[14]*DP[4])+DP[0]*
 (DP[14]*(-C[20]*DP[12]-C[2]*DP[13])+C[33]*DP[8]-C[26]*DP[4]+C[8]*DP[9])+
 DP[6]*(C[8]*DP[4]-C[36]*DP[12]-C[26]*DP[13])+DP[1]*(C[156]-C[8]*DP[7])+
 DP[3]*(C[156]-C[8]*DP[7])+C[120]*DP[8]+C[93]*DP[9]+C[129]*DP[12]+C[106]*
 DP[13])+tmp[14])+DP[8]*(DP[11]*(DP[4]*(DP[6]*(C[50]*DP[10]-C[36]+C[5]*
 DP[11])+DP[0]*(C[36]-C[5]*DP[14])+C[26]*(-DP[7]-DP[11])+C[68]-C[36]*DP[10]+
 C[8]*DP[14])+DP[3]*(DP[6]*(C[5]*DP[10]-C[53]+C[2]*DP[11])+DP[7]*(C[22]*
 DP[10]-C[26])+C[106]-C[26]*DP[10]-C[2]*DP[14]*DP[0])+DP[0]*(DP[6]*(-C[20]*
 DP[12]-C[2]*DP[13])+DP[8]*(C[36]-C[34]*DP[10])+DP[9]*(C[36]-C[34]*DP[10]))+
 DP[12]*(C[33]*DP[7]-C[117]-C[21]*DP[6])+DP[13]*(C[8]*DP[7]-C[90]-C[3]*
 DP[6])+DP[8]*(C[37]-C[8]*DP[11])+DP[9]*(C[37]-C[8]*DP[11]))+tmp[15])+
 tmp[16]+tmp[17];
tmp[19]=+S[2]*(S[2]*(DP[9]*(DP[10]*(DP[2]*(DP[0]*(C[29]-C[24]*DP[14])+DP[6]*
 (-C[95]-C[45]*DP[11])+DP[7]*(C[45]*DP[10]-C[29])+C[109]+C[58]*DP[10]+C[48]*
 DP[11]-C[13]*DP[14])+DP[12]*(DP[0]*(C[46]*DP[7]-C[58])+C[103]+C[25]*DP[6]+
 C[91]*DP[7])+DP[1]*(DP[11]*(-C[58]-C[45]*DP[7])+C[102]+C[25]*DP[14])+DP[8]*
 (C[31]-C[25]*DP[10]+C[43]*DP[11]*DP[0]))+DP[0]*(DP[12]*(DP[6]*(-C[58]-
 C[45]*DP[11])+DP[14]*(-C[13]-C[11]*DP[0])+C[48]*(DP[11]-DP[7])+C[104])+
 DP[1]*(C[11]*DP[14]*DP[11]-C[115]-C[18]*DP[7])+DP[2]*(C[97]*DP[6]-C[113]+
 C[29]*DP[14])+DP[8]*(C[87]+C[18]*DP[0]-C[29]*DP[11]))+DP[11]*(DP[1]*(DP[6]*
 (C[58]+C[45]*DP[11])+C[48]*(DP[7]-DP[11])+C[107]+C[13]*DP[14])+C[18]*(
 DP[11]*DP[8]-DP[12]*DP[7]-DP[14]*DP[2])+C[102]*DP[12]-C[87]*DP[8])+DP[2]*(
 C[98]*DP[6]-C[114]+C[94]*DP[7]+C[30]*DP[14])+DP[12]*(C[105]-C[87]*DP[6]-
 C[31]*DP[7]+C[15]*DP[14])+DP[1]*(C[99]*DP[6]-C[116]-C[31]*DP[14])-C[89]*
 DP[8])+tmp[10]+tmp[11]+tmp[12])+tmp[18]);
R=+DP[5]*(DP[6]*(DP[10]*(DP[7]*(C[5]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-
 DP[13])+DP[10]*(DP[5]-S[2]))+C[50]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-
 DP[13]))+S[2]*(C[145]+C[95]*S[2])+C[39]*DP[10]-C[146]-C[145]*DP[5])+DP[14]*
 (DP[2]*(C[5]*(DP[1]+DP[3])+C[50]*DP[2]+C[51]*DP[4])+DP[4]*(C[5]*(DP[1]+
 DP[3])+C[50]*DP[4])+S[2]*(C[3]-C[13]*S[2])-C[14]-C[3]*DP[5])+C[56]*(DP[1]*(
 DP[8]+DP[9]+DP[12]+DP[13])+DP[3]*(DP[8]+DP[9]+DP[12]+DP[13]))+S[2]*(C[57]*(
 DP[6]+DP[10])-C[164]-C[166]*S[2])+C[23]*(DP[8]*(DP[12]+DP[13])+DP[9]*(
 DP[12]+DP[13]))+DP[5]*(C[57]*(-DP[6]-DP[10])+C[164])+C[160]*(-DP[6]-
 DP[10])+C[167])+tmp[2]+tmp[3])+tmp[8]+tmp[9])+tmp[19];
R*=(N/D)*Q1[6]*Q1[1]*Q2[2]*Q1[7]*Q1[3];
 if(cb_coeff_out)
 {
 }
 return R;
}
