/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F793_out;
static void C793(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[2]*V[2];
S[1]=V[14]*V[14]*V[14]*V[14];
S[2]=V[9]*V[9]*V[9]*V[9];
C[149]=+S[2]*(S[1]*(S[0]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
S[3]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[148]=+S[3]*(S[2]*(S[0]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
S[4]=V[17]*V[17];
S[5]=V[1]*V[1];
S[6]=V[9]*V[9];
C[147]=+S[1]*(S[6]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[146]=+S[2]*(S[1]*(S[0]*(V[21]*(72*(V[37]*V[23]+V[21]*V[2])))));
S[7]=V[14]*V[14];
C[145]=+S[2]*(S[0]*(S[7]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[144]=+S[6]*(S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(2*(S[6]*(V[37]*V[22]+
 V[20]*V[2])+S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(4*(-
 V[37]*V[22]-V[20]*V[2])))))))));
C[143]=+S[2]*(S[1]*(S[0]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[142]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[6]*(-V[37]*V[22]-
 V[20]*V[2])+S[7]*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*
 V[43]*V[37]*V[22]*S[4]*S[5]))));
C[141]=+S[2]*(S[0]*(S[7]*(V[21]*(120*(V[37]*V[23]+V[21]*V[2])))));
C[140]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(4*(-V[37]*V[22]-
 V[20]*V[2]))))+2*V[43]*V[20]*S[4]*S[5])+2*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[139]=+S[2]*(S[0]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2]))));
C[138]=+S[6]*(S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(2*(S[6]*(-V[37]*V[22]-
 V[20]*V[2])+S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(4*(-
 V[37]*V[22]-V[20]*V[2])))))))));
C[137]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[6]*(-V[37]*V[22]-
 V[20]*V[2])+S[7]*(V[37]*V[22]+V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*
 V[43]*V[37]*V[22]*S[4]*S[5]))));
C[136]=+S[2]*(S[0]*(S[7]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[135]=+S[2]*(S[5]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(V[37]*V[22]+V[20]*
 V[2])))))));
C[134]=+S[6]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(2*(S[6]*(-V[37]*V[22]-V[20]*
 V[2])+S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(4*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[133]=+S[2]*(S[0]*(S[7]*(V[21]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[132]=+S[6]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[6]*(-V[37]*V[22]-V[20]*
 V[2])+S[7]*(V[37]*V[22]+V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*
 V[37]*V[22]*S[4]*S[5])));
C[131]=+S[3]*(S[0]*(S[6]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[130]=+S[1]*(S[0]*(S[6]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*
 V[2])))))));
C[129]=+S[1]*(S[0]*(S[6]*(V[21]*(288*(V[37]*V[23]+V[21]*V[2])))));
C[128]=+S[0]*(S[6]*(S[7]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2])))));
C[127]=+S[3]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[126]=+S[1]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5])));
C[125]=+S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[124]=+S[1]*(S[0]*(V[21]*(288*(V[37]*V[23]+V[21]*V[2]))));
C[123]=+S[0]*(S[7]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2]))));
C[122]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[121]=+S[0]*(S[6]*(S[7]*(V[21]*(480*(V[37]*V[23]+V[21]*V[2])))));
C[120]=+S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(4*(S[6]*(V[37]*V[22]+V[20]*
 V[2])+S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[119]=+S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[6]*(-V[37]*V[22]-V[20]*
 V[2])+S[7]*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*
 V[37]*V[22]*S[4]*S[5])));
C[118]=+S[1]*(S[0]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[117]=+S[0]*(S[7]*(V[21]*(480*(V[37]*V[23]+V[21]*V[2]))));
C[116]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(16*(V[37]*V[22]+
 V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[115]=+S[1]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[114]=+S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(4*(S[6]*(-V[37]*V[22]-V[20]*
 V[2])+S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[113]=+S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[6]*(-V[37]*V[22]-V[20]*
 V[2])+S[7]*(V[37]*V[22]+V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*
 V[37]*V[22]*S[4]*S[5])));
C[112]=+S[0]*(S[7]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[111]=+S[0]*(S[6]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2]))));
C[110]=+S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(8*(-V[37]*V[22]-V[20]*
 V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5])));
C[109]=+S[0]*(S[7]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))))));
C[108]=+S[0]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2])));
C[107]=+S[6]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(16*(V[37]*V[22]+V[20]*
 V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5])));
C[106]=+V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(4*(S[6]*(-V[37]*V[22]-V[20]*V[2])+
 S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2])))))));
C[105]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[6]*(-V[37]*V[22]-V[20]*V[2])+
 S[7]*(V[37]*V[22]+V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*
 V[22]*S[4]*S[5]));
C[104]=+S[0]*(S[7]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[103]=+S[1]*(S[5]*(S[6]*(S[4]*(V[12]*(V[36]*(V[43]*(8*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[102]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(32*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[101]=+S[1]*(S[0]*(S[6]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2])))));
C[100]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(16*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[99]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*
 V[2])))))));
C[98]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(12*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[97]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+24*V[43]*V[20]*S[4]*S[5])+24*V[43]*V[37]*V[22]*S[4]*
 S[5]))));
C[96]=+S[1]*(S[0]*(S[6]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])))));
C[95]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(96*(V[37]*V[22]+V[20]*
 V[2])))))));
C[94]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(20*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[93]=+S[6]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(80*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5])));
C[92]=+S[0]*(S[6]*(S[7]*(V[21]*(224*(V[37]*V[23]+V[21]*V[2])))));
C[91]=+S[6]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(32*(-V[37]*V[22]-V[20]*
 V[2]))))+16*V[43]*V[20]*S[4]*S[5])+16*V[43]*V[37]*V[22]*S[4]*S[5])));
C[90]=+S[0]*(S[6]*(S[7]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])))));
C[89]=+S[0]*(S[6]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2]))))));
C[88]=+S[0]*(S[6]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[87]=+S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(S[6]*(4*(V[37]*V[22]+V[20]*
 V[2]))+S[7]*(8*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(16*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[86]=+S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[6]*(16*(-V[37]*V[22]-V[20]*
 V[2]))+S[7]*(32*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*
 V[43]*V[37]*V[22]*S[4]*S[5])));
C[85]=+S[1]*(S[0]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[84]=+S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(32*(-V[37]*V[22]-V[20]*
 V[2]))))+16*V[43]*V[20]*S[4]*S[5])+16*V[43]*V[37]*V[22]*S[4]*S[5])));
C[83]=+S[0]*(S[7]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2]))))));
C[82]=+S[0]*(S[7]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[81]=+S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(24*(-V[37]*V[22]-V[20]*
 V[2]))))+12*V[43]*V[20]*S[4]*S[5])+12*V[43]*V[37]*V[22]*S[4]*S[5])));
C[80]=+S[0]*(S[7]*(V[12]*(V[27]*(V[36]*(48*(V[37]*V[22]+V[20]*V[2]))))));
C[79]=+S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(S[6]*(12*(V[37]*V[22]+V[20]*
 V[2]))+S[7]*(4*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(8*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[78]=+S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[6]*(48*(-V[37]*V[22]-V[20]*
 V[2]))+S[7]*(16*(-V[37]*V[22]-V[20]*V[2]))))+24*V[43]*V[20]*S[4]*S[5])+24*
 V[43]*V[37]*V[22]*S[4]*S[5])));
C[77]=+S[1]*(S[0]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[76]=+S[0]*(S[7]*(V[12]*(V[27]*(V[36]*(96*(V[37]*V[22]+V[20]*V[2]))))));
C[75]=+V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(S[6]*(4*(V[37]*V[22]+V[20]*V[2]))+
 S[7]*(20*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(40*(-V[37]*
 V[22]-V[20]*V[2])))))));
C[74]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[6]*(16*(-V[37]*V[22]-V[20]*V[2]))+
 S[7]*(80*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*
 V[37]*V[22]*S[4]*S[5]));
C[73]=+S[0]*(S[7]*(V[21]*(224*(V[37]*V[23]+V[21]*V[2]))));
C[72]=+S[0]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2])))));
C[71]=+S[0]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])));
C[70]=+V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(8*(S[6]*(V[37]*V[22]+V[20]*V[2])+
 S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(16*(-V[37]*
 V[22]-V[20]*V[2])))))));
C[69]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(32*(S[6]*(-V[37]*V[22]-V[20]*V[2])+
 S[7]*(-V[37]*V[22]-V[20]*V[2]))))+16*V[43]*V[20]*S[4]*S[5])+16*V[43]*V[37]*
 V[22]*S[4]*S[5]));
C[68]=+S[0]*(S[7]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[67]=+S[0]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2])))));
C[66]=+S[0]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])));
C[65]=+S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5])));
C[64]=+S[0]*(S[7]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[63]=+S[3]*(S[0]*(S[6]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[62]=+S[1]*(S[0]*(S[6]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*
 V[2])))))));
C[61]=+S[1]*(S[0]*(S[6]*(V[21]*(144*(V[37]*V[23]+V[21]*V[2])))));
C[60]=+S[0]*(S[6]*(S[7]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2])))));
C[59]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[58]=+S[1]*(S[0]*(S[6]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[57]=+S[0]*(S[6]*(S[7]*(V[21]*(240*(V[37]*V[23]+V[21]*V[2])))));
C[56]=+S[1]*(S[0]*(S[6]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[55]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(8*(V[37]*V[22]+
 V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[54]=+S[0]*(S[6]*(S[7]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[53]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(8*(V[37]*V[22]+V[20]*
 V[2])))))));
C[52]=+S[0]*(S[6]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[51]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[50]=+S[6]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(8*(V[37]*V[22]+V[20]*
 V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5])));
C[49]=+S[0]*(S[6]*(S[7]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[48]=+S[2]*(S[1]*(S[5]*(S[4]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[47]=+S[6]*(S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(S[6]*(2*(V[37]*V[22]+
 V[20]*V[2]))+S[7]*(4*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(
 8*(-V[37]*V[22]-V[20]*V[2])))))))));
C[46]=+S[2]*(S[1]*(S[0]*(V[21]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[45]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[6]*(8*(-V[37]*V[22]-
 V[20]*V[2]))+S[7]*(16*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[4]*
 S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[44]=+S[2]*(S[5]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[43]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[42]=+S[2]*(S[0]*(S[7]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
C[41]=+S[1]*(S[5]*(S[6]*(S[4]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[40]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[39]=+S[1]*(S[0]*(S[6]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[38]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(8*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[37]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*
 V[2])))))));
C[36]=+S[0]*(S[6]*(S[7]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[35]=+S[2]*(S[5]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(3*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[34]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(12*(-V[37]*V[22]-
 V[20]*V[2]))))+6*V[43]*V[20]*S[4]*S[5])+6*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[33]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(6*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[32]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(24*(V[37]*V[22]+V[20]*
 V[2])))))));
C[31]=+S[2]*(S[1]*(S[5]*(S[4]*(V[12]*(V[36]*(V[43]*(V[37]*V[22]+V[20]*
 V[2])))))));
C[30]=+S[6]*(S[7]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(S[6]*(6*(V[37]*V[22]+
 V[20]*V[2]))+S[7]*(2*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(
 4*(-V[37]*V[22]-V[20]*V[2])))))))));
C[29]=+S[2]*(S[1]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[28]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[6]*(24*(-V[37]*V[22]-
 V[20]*V[2]))+S[7]*(8*(-V[37]*V[22]-V[20]*V[2]))))+12*V[43]*V[20]*S[4]*
 S[5])+12*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[27]=+S[2]*(S[5]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(5*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[26]=+S[6]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(S[6]*(2*(V[37]*V[22]+V[20]*
 V[2]))+S[7]*(10*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(20*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[25]=+S[2]*(S[0]*(S[7]*(V[21]*(56*(V[37]*V[23]+V[21]*V[2])))));
C[24]=+S[6]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[6]*(8*(-V[37]*V[22]-V[20]*
 V[2]))+S[7]*(40*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*
 V[43]*V[37]*V[22]*S[4]*S[5])));
C[23]=+S[2]*(S[0]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2]))));
C[22]=+S[1]*(S[5]*(S[6]*(S[4]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[21]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+12*V[43]*V[20]*S[4]*S[5])+12*V[43]*V[37]*V[22]*S[4]*
 S[5]))));
C[20]=+S[1]*(S[0]*(S[6]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])))));
C[19]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(48*(V[37]*V[22]+V[20]*
 V[2])))))));
C[18]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(10*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[17]=+S[6]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(40*(-V[37]*V[22]-V[20]*
 V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5])));
C[16]=+S[0]*(S[6]*(S[7]*(V[21]*(112*(V[37]*V[23]+V[21]*V[2])))));
C[15]=+S[0]*(S[6]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))))));
C[14]=+S[0]*(S[6]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[13]=+S[6]*(V[12]*(V[36]*(S[5]*(S[4]*(V[43]*(4*(S[6]*(V[37]*V[22]+V[20]*
 V[2])+S[7]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[6]*(S[7]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[12]=+S[2]*(S[0]*(S[7]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[11]=+S[6]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[6]*(-V[37]*V[22]-V[20]*
 V[2])+S[7]*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*
 V[37]*V[22]*S[4]*S[5])));
C[10]=+S[2]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[9]=+S[6]*(V[12]*(V[36]*(V[2]*(S[7]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[4]*S[5])+8*V[43]*V[37]*V[22]*S[4]*S[5])));
C[8]=+S[0]*(S[6]*(S[7]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])))));
C[7]=+S[0]*(S[6]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[6]=+S[0]*(S[6]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[5]=+S[2]*(S[5]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[4]=+S[6]*(S[7]*(V[12]*(V[36]*(V[2]*(S[6]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[4]*S[5])+4*V[43]*V[37]*V[22]*S[4]*S[5]))));
C[3]=+S[5]*(S[6]*(S[7]*(S[4]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[2]=+S[0]*(S[6]*(S[7]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*
 V[2])))))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[49]*V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[10]*S[11];
}
REAL F793_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                                     !  b                 b          
                                    /!==>==============@==>==        
                                    |!  P5             |  P1         
                                    |!                 |             
      b                       N2    |!  N2             |             
    ==>==\                 /==<=====+!==<==\          A|-PA          
      P1 |                 |  P3    |!  P3 |           3             
         |                 |        |!     |           |             
      U  |  W+    t     W+ |  e2    |!  e2 |  W+    t  |  U          
    ==<==@-1<--@==<==@-2<--@==>=====+!==>==@--<4-@==<==@==<==        
      P2    P7 |  P8 |  P9    P4    |!  P4   -PC | -PB    P2         
               |     |              |!           |                   
               |     |        B     |!  B        |                   
               |     \========<=====+!==<========/                   
               |              P6    |!  P6                           
               |                    |!                               
               |              b     |!                               
               \==============>=====/!                               
                              P5     !                               
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[150];REAL S[2];REAL tmp[12];                                  
     
if(CalcConst) C793(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[0]*(V[50]*(V[50]*(DP[9]*(DP[0]*(C[71]*(DP[0]+DP[6]-DP[7])+C[82])+
 DP[6]*(C[66]*(DP[7]-DP[6])+C[73])+V[50]*(C[64]-C[72]*DP[7])-C[85]-C[73]*
 DP[7])+DP[3]*(DP[7]*(C[71]*(DP[7]-DP[0])+C[104]-C[108]*DP[6])+C[118]-C[64]*
 V[50]-C[112]*DP[6])+DP[4]*(DP[6]*(C[108]*(DP[6]-DP[0])-C[117]-C[71]*DP[7])+
 C[124]+C[123]*DP[0]+C[112]*DP[7]))+DP[9]*(C[86]-C[83]*DP[0]+C[80]*DP[6]-
 C[74]*DP[7])+DP[3]*(C[64]*(DP[0]-DP[7])-C[113])+DP[4]*(C[64]*DP[6]-C[125])+
 DP[8]*(C[7]*DP[7]-C[37])+C[37]*DP[1])+DP[6]*(DP[7]*(C[6]*(DP[2]-DP[9])+
 C[111]*DP[1]+C[52]*DP[3]+C[14]*DP[4]-C[88]*DP[8])+DP[0]*(C[111]*DP[2]+
 C[52]*DP[4]-C[6]*DP[8]-C[14]*DP[9])+DP[6]*(C[88]*DP[8]-C[111]*DP[2]-C[52]*
 DP[4]+C[6]*DP[9])+C[8]*DP[1]+C[121]*DP[2]+C[54]*DP[3]+C[57]*DP[4]-C[92]*
 DP[8]-C[16]*DP[9])+DP[7]*(DP[0]*(C[6]*(DP[1]+DP[8])+C[14]*(DP[3]+DP[9]))+
 DP[1]*(-C[60]-C[6]*DP[7])+DP[3]*(-C[49]-C[14]*DP[7])+C[92]*DP[8]-C[8]*
 DP[2]-C[54]*DP[4]+C[16]*DP[9])+DP[0]*(DP[0]*(-C[6]*DP[8]-C[14]*DP[9])-
 C[128]*DP[2]-C[60]*DP[4]-C[54]*DP[8]-C[36]*DP[9])+C[101]*DP[8]-C[20]*DP[1]-
 C[129]*DP[2]-C[58]*DP[3]-C[61]*DP[4]+C[39]*DP[9]);
tmp[1]=+DP[0]*(DP[5]*(DP[14]*(DP[0]*(C[14]*(DP[0]+DP[6]-DP[7])+C[36])+DP[6]*
 (C[6]*(DP[7]-DP[6])+C[16])+V[50]*(C[2]-C[15]*DP[7])-C[39]-C[16]*DP[7])+
 DP[10]*(DP[7]*(C[14]*(DP[7]-DP[0])+C[49]-C[52]*DP[6])+C[58]-C[2]*V[50]-
 C[54]*DP[6])+DP[11]*(DP[6]*(C[52]*(DP[6]-DP[0])-C[57]-C[14]*DP[7])+C[61]+
 C[60]*DP[0]+C[54]*DP[7]))+DP[13]*(DP[8]*(DP[0]*(C[14]*(DP[7]-DP[0]-DP[6])-
 C[36])+DP[6]*(C[6]*(DP[6]-DP[7])-C[16])+V[50]*(C[15]*DP[7]-C[2])+C[39]+
 C[16]*DP[7])+DP[1]*(DP[7]*(C[14]*(DP[0]-DP[7])+C[52]*DP[6]-C[49])+C[2]*
 V[50]-C[58]+C[54]*DP[6])+DP[2]*(DP[6]*(C[52]*(DP[0]-DP[6])+C[57]+C[14]*
 DP[7])-C[61]-C[60]*DP[0]-C[54]*DP[7])))+DP[7]*(DP[5]*(V[50]*(DP[6]*(C[7]*
 DP[14]-C[15]*DP[11])+DP[10]*(C[2]+C[15]*DP[7])+C[2]*DP[11]-C[19]*DP[14])+
 DP[6]*(C[8]*DP[14]-C[36]*DP[10]-C[49]*DP[11])+DP[10]*(C[56]+C[49]*DP[7])+
 C[39]*DP[11]-C[20]*DP[14])+DP[13]*(V[50]*(DP[1]*(-C[2]-C[15]*DP[7])+DP[2]*(
 C[15]*DP[6]-C[2])+DP[8]*(C[19]-C[7]*DP[6]))+DP[1]*(C[36]*DP[6]-C[56]-C[49]*
 DP[7])+DP[2]*(C[49]*DP[6]-C[39])+DP[8]*(C[20]-C[8]*DP[6])))+DP[6]*(DP[2]*(
 DP[13]*(C[58]+C[2]*V[50]-C[36]*DP[6]))+DP[5]*(DP[11]*(C[36]*DP[6]-C[58]-
 C[2]*V[50])))+V[50]*(C[62]*(DP[11]*DP[5]-DP[13]*DP[2]))+C[63]*(DP[11]*
 DP[5]-DP[13]*DP[2]);
tmp[2]=+DP[5]*(DP[7]*(C[15]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(-DP[2]-
 DP[4])+DP[7]*(DP[1]+DP[3]))+DP[5]*(DP[11]*DP[6]-DP[10]*DP[7]+DP[14]*
 DP[0]))+C[2]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*(DP[1]+DP[2]+DP[3]+
 DP[4])+DP[5]*(-DP[10]-DP[11])-DP[10]*DP[0]-DP[14]*DP[7])+DP[6]*(C[7]*(
 DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[53]*DP[10]-
 C[132]*DP[11]+C[11]*DP[14])+C[19]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])+DP[10]*(C[4]+C[132]*DP[7])+DP[14]*(-C[28]-C[24]*
 DP[0])+C[137]*DP[11])+DP[0]*(C[2]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*
 (DP[8]-DP[1]-DP[3]+DP[9])+DP[5]*(DP[10]-DP[14])+DP[10]*DP[0]+DP[11]*DP[6])+
 DP[14]*(C[45]-C[37]*DP[0]+C[32]*DP[6])-C[137]*DP[10]-C[62]*DP[11])+DP[6]*(
 C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+DP[11]*(-
 C[142]-C[53]*DP[6]))+C[62]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])+C[147]*DP[11]);
tmp[3]=+DP[12]*(DP[7]*(DP[6]*(C[107]*DP[2]-C[2]*DP[1]+C[110]*DP[3]-C[106]*
 DP[4]-C[91]*DP[8]-C[70]*DP[9])+DP[0]*(C[37]*DP[1]-C[65]*DP[3]+C[93]*DP[8]+
 C[75]*DP[9])+DP[7]*(C[106]*DP[3]-C[107]*DP[1]+C[37]*DP[8]-C[65]*DP[9])+
 C[114]*DP[4]-C[38]*DP[1]-C[116]*DP[2]-C[3]*DP[3]+C[97]*DP[8]+C[79]*DP[9])+
 DP[0]*(DP[0]*(C[65]*DP[3]-C[37]*DP[1]+C[99]*DP[8]-C[84]*DP[9])+DP[6]*(
 C[65]*DP[4]-C[37]*DP[2]-C[19]*DP[8]+C[81]*DP[9])+C[116]*DP[1]+C[130]*DP[2]-
 C[114]*DP[3]-C[126]*DP[4]-C[102]*DP[8]-C[87]*DP[9])+DP[6]*(DP[2]*(C[122]+
 C[2]*DP[6])+DP[4]*(C[120]-C[110]*DP[6]))-C[103]*DP[2]-C[41]*DP[4])+DP[13]*(
 DP[7]*(DP[1]*(C[2]*DP[0]-C[3]-C[53]*DP[6]-C[50]*DP[7])+DP[8]*(C[21]+C[17]*
 DP[0]-C[9]*DP[6]+C[2]*DP[7])+DP[2]*(C[50]*DP[6]-C[55]))+DP[0]*(DP[8]*(
 C[37]*DP[0]-C[40]-C[32]*DP[6])+DP[1]*(C[55]-C[2]*DP[0])+DP[2]*(C[62]-C[2]*
 DP[6]))+DP[2]*(DP[6]*(C[59]+C[53]*DP[6])-C[41]))+tmp[2];
tmp[4]=+DP[7]*(C[14]*(DP[0]*(DP[12]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[13]*(-
 DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+DP[14]))+DP[7]*(DP[1]*(DP[12]+
 DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5]))+DP[12]*(C[49]*(DP[1]+DP[3])+
 C[54]*(DP[2]+DP[4])+C[16]*(-DP[8]-DP[9]))+DP[13]*(C[49]*(DP[1]+DP[3])+
 C[54]*(DP[2]+DP[4])+C[16]*(-DP[8]-DP[9]))+DP[10]*(C[23]*(DP[0]-DP[7])-
 C[133]-C[49]*DP[5])+DP[14]*(C[25]+C[23]*DP[0]+C[16]*DP[5])+DP[11]*(-C[136]-
 C[54]*DP[5]))+DP[0]*(DP[0]*(C[14]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])-C[23]*DP[14])+C[60]*(DP[2]*(DP[12]+DP[13])+DP[4]*(
 DP[12]+DP[13])-DP[11]*DP[5])+C[36]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+
 DP[13])-DP[14]*DP[5])-C[145]*DP[11]-C[42]*DP[14])+DP[12]*(C[58]*(DP[1]+
 DP[3])+C[61]*(DP[2]+DP[4])+C[39]*(-DP[8]-DP[9]))+DP[13]*(C[58]*(DP[1]+
 DP[3])+C[61]*(DP[2]+DP[4])+C[39]*(-DP[8]-DP[9]))+DP[5]*(C[39]*DP[14]-C[58]*
 DP[10]-C[61]*DP[11])+C[46]*DP[14]-C[143]*DP[10]-C[146]*DP[11];
tmp[5]=+DP[7]*(DP[6]*(DP[12]*(C[36]*(-DP[1]-DP[3])+C[49]*(-DP[2]-DP[4])+
 C[8]*(DP[8]+DP[9]))+DP[13]*(C[36]*(-DP[1]-DP[3])+C[49]*(-DP[2]-DP[4])+C[8]*
 (DP[8]+DP[9]))+DP[5]*(C[36]*DP[10]+C[49]*DP[11]-C[8]*DP[14])+C[42]*DP[10]+
 C[133]*DP[11]-C[12]*DP[14])+DP[12]*(DP[1]*(C[56]+C[49]*DP[7])+DP[3]*(C[56]+
 C[49]*DP[7])+C[39]*(DP[2]+DP[4])+C[20]*(-DP[8]-DP[9]))+DP[13]*(DP[1]*(
 C[56]+C[49]*DP[7])+DP[3]*(C[56]+C[49]*DP[7])+C[39]*(DP[2]+DP[4])+C[20]*(-
 DP[8]-DP[9]))+DP[5]*(DP[10]*(-C[56]-C[49]*DP[7])+C[20]*DP[14]-C[39]*
 DP[11])+DP[10]*(-C[149]-C[133]*DP[7])+C[29]*DP[14]-C[46]*DP[11])+DP[6]*(
 DP[6]*(C[36]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-
 C[42]*DP[11])+C[58]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[143]*DP[11])+C[63]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[148]*DP[11];
tmp[6]=+V[50]*(V[50]*(DP[12]*(DP[7]*(V[50]*(V[50]*(V[50]*(DP[3]*(C[64]+
 C[72]*DP[7])+DP[4]*(C[64]-C[72]*DP[6])+DP[9]*(C[67]*DP[6]-C[76]))+DP[3]*(
 C[115]-C[82]*DP[6]+C[104]*DP[7])+DP[4]*(C[85]-C[104]*DP[6])+DP[9]*(C[68]*
 DP[6]-C[77]))+DP[6]*(C[7]*DP[2]+C[109]*DP[3]-C[105]*DP[4]-C[89]*DP[8]+
 C[69]*DP[9])+DP[7]*(C[105]*DP[3]-C[7]*DP[1]-C[64]*DP[9])+C[37]*(-DP[1]-
 DP[2])+C[65]*DP[3]+C[113]*DP[4]+C[95]*DP[8]-C[78]*DP[9])+DP[6]*(C[54]*
 DP[1]+C[60]*DP[2]+C[36]*DP[3]+C[49]*DP[4]-C[90]*DP[8]-C[8]*DP[9])+DP[1]*(-
 C[58]-C[60]*DP[7])+DP[3]*(-C[56]-C[49]*DP[7])+C[96]*DP[8]-C[101]*DP[2]-
 C[39]*DP[4]+C[20]*DP[9])+DP[4]*(V[50]*(V[50]*(DP[6]*(C[82]*DP[6]-C[118]-
 C[64]*V[50])+C[127]+C[125]*V[50])+DP[6]*(-C[119]-C[109]*DP[6])+C[126])+
 DP[6]*(C[58]-C[36]*DP[6])-C[63])+DP[2]*(DP[6]*(C[20]+C[37]*V[50]-C[54]*
 DP[6])-C[131]-C[130]*V[50])+tmp[0])+tmp[1])+tmp[3]);
tmp[7]=+DP[0]*(DP[12]*(DP[0]*(C[2]*(DP[1]+DP[3])+C[37]*(-DP[8]-DP[9]))+
 DP[6]*(C[2]*(DP[2]+DP[4])+C[32]*(DP[8]+DP[9]))+C[55]*(-DP[1]-DP[3])+C[62]*
 (-DP[2]-DP[4])+C[40]*(DP[8]+DP[9]))+DP[13]*(DP[0]*(C[2]*(DP[1]+DP[3])+
 C[37]*(-DP[8]-DP[9]))+DP[6]*(C[2]*(DP[2]+DP[4])+C[32]*(DP[8]+DP[9]))+C[55]*
 (-DP[1]-DP[3])+C[62]*(-DP[2]-DP[4])+C[40]*(DP[8]+DP[9]))+DP[5]*(DP[14]*(
 C[37]*DP[0]-C[40]-C[32]*DP[6])+DP[10]*(C[55]-C[2]*DP[0])+DP[11]*(C[62]-
 C[2]*DP[6]))+DP[14]*(C[34]*DP[6]-C[47]-C[43]*DP[0])+DP[10]*(C[4]*DP[0]-
 C[138])+DP[11]*(C[4]*DP[6]-C[147]))+DP[6]*(DP[6]*(C[53]*(DP[2]*(-DP[12]-
 DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])-C[140]*DP[11])+C[59]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[144]*DP[11])+C[41]*(
 DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-C[48]*DP[11];
tmp[8]=+DP[5]*(DP[7]*(DP[12]*(DP[6]*(C[53]*(DP[1]+DP[3])+C[50]*(-DP[2]-
 DP[4])+C[9]*(DP[8]+DP[9]))+DP[0]*(C[2]*(-DP[1]-DP[3])+C[17]*(-DP[8]-
 DP[9]))+DP[7]*(C[50]*(DP[1]+DP[3])+C[2]*(-DP[8]-DP[9]))+C[3]*(DP[1]+DP[3])+
 C[55]*(DP[2]+DP[4])+C[21]*(-DP[8]-DP[9]))+DP[13]*(DP[6]*(C[53]*(DP[1]+
 DP[3])+C[50]*(-DP[2]-DP[4])+C[9]*(DP[8]+DP[9]))+DP[0]*(C[2]*(-DP[1]-DP[3])+
 C[17]*(-DP[8]-DP[9]))+DP[7]*(C[50]*(DP[1]+DP[3])+C[2]*(-DP[8]-DP[9]))+C[3]*
 (DP[1]+DP[3])+C[55]*(DP[2]+DP[4])+C[21]*(-DP[8]-DP[9]))+DP[5]*(DP[10]*(
 C[2]*DP[0]-C[3]-C[53]*DP[6]-C[50]*DP[7])+DP[14]*(C[21]+C[17]*DP[0]-C[9]*
 DP[6]+C[2]*DP[7])+DP[11]*(C[50]*DP[6]-C[55]))+DP[10]*(C[140]*DP[6]-C[5]-
 C[4]*DP[0]+C[134]*DP[7])+DP[14]*(C[30]+C[26]*DP[0]-C[13]*DP[6]-C[4]*DP[7])+
 DP[11]*(C[138]-C[134]*DP[6]))+tmp[7]);
tmp[9]=+V[50]*(DP[5]*(DP[0]*(DP[6]*(DP[12]*(DP[7]*(C[52]*(-DP[1]-DP[3])+
 C[14]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+DP[0]*(C[52]*(-DP[2]-DP[4])+C[14]*
 (DP[8]+DP[9]))+DP[6]*(C[52]*(DP[2]+DP[4])+C[6]*(-DP[8]-DP[9]))+C[54]*(-
 DP[1]-DP[3])+C[57]*(-DP[2]-DP[4])+C[16]*(DP[8]+DP[9]))+DP[13]*(DP[7]*(
 C[52]*(-DP[1]-DP[3])+C[14]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+DP[0]*(C[52]*
 (-DP[2]-DP[4])+C[14]*(DP[8]+DP[9]))+DP[6]*(C[52]*(DP[2]+DP[4])+C[6]*(-
 DP[8]-DP[9]))+C[54]*(-DP[1]-DP[3])+C[57]*(-DP[2]-DP[4])+C[16]*(DP[8]+
 DP[9]))+DP[5]*(DP[11]*(C[52]*(DP[0]-DP[6])+C[57]+C[14]*DP[7])+DP[14]*(C[6]*
 (DP[6]-DP[7])-C[16]-C[14]*DP[0])+DP[10]*(C[54]+C[52]*DP[7]))+DP[11]*(
 C[139]*(DP[0]-DP[6])+C[141]+C[23]*DP[7])+DP[14]*(C[10]*(DP[6]-DP[7])-C[25]-
 C[23]*DP[0])+DP[10]*(C[136]+C[139]*DP[7]))+tmp[4])+tmp[5])+tmp[6]);
tmp[10]=+DP[0]*(DP[12]*(C[3]*(DP[0]*(DP[1]+DP[3])+DP[6]*(DP[2]+DP[4])+DP[7]*
 (-DP[1]-DP[3]))+DP[8]*(C[33]*DP[6]-C[41]-C[38]*DP[0]+C[18]*DP[7])+DP[9]*(
 C[33]*DP[6]-C[41]-C[38]*DP[0]+C[18]*DP[7])+C[22]*(-DP[1]-DP[3])+C[41]*(-
 DP[2]-DP[4]))+DP[13]*(C[3]*(DP[0]*(DP[1]+DP[3])+DP[6]*(DP[2]+DP[4])+DP[7]*
 (-DP[1]-DP[3]))+DP[8]*(C[33]*DP[6]-C[41]-C[38]*DP[0]+C[18]*DP[7])+DP[9]*(
 C[33]*DP[6]-C[41]-C[38]*DP[0]+C[18]*DP[7])+C[22]*(-DP[1]-DP[3])+C[41]*(-
 DP[2]-DP[4]))+DP[5]*(DP[14]*(C[41]+C[38]*DP[0]-C[33]*DP[6]-C[18]*DP[7])+
 DP[10]*(C[3]*(DP[7]-DP[0])+C[22])+DP[11]*(C[41]-C[3]*DP[6]))+DP[14]*(C[48]+
 C[44]*DP[0]-C[35]*DP[6]-C[27]*DP[7])+DP[10]*(C[5]*(DP[7]-DP[0])+C[31])+
 DP[11]*(C[48]-C[5]*DP[6]));
S[1]=V[50]*V[50];
tmp[11]=+S[1]*(DP[12]*(DP[0]*(DP[0]*(C[38]*(DP[9]-DP[1])+C[100]*DP[8]-C[3]*
 DP[3])+DP[6]*(-C[38]*DP[2]-C[3]*DP[4]-C[98]*DP[8]-C[33]*DP[9])+DP[7]*(
 C[38]*DP[1]+C[3]*DP[3]-C[94]*DP[8]-C[18]*DP[9])+C[41]*(DP[1]+DP[4]+DP[9])+
 C[103]*(DP[2]+DP[8])+C[22]*DP[3])+DP[7]*(DP[6]*(C[3]*(DP[2]-DP[1]+DP[9])+
 C[51]*(DP[4]-DP[3])+C[38]*DP[8])+DP[7]*(C[3]*(DP[9]-DP[1])+C[38]*DP[8]-
 C[51]*DP[3])+C[41]*(-DP[2]-DP[8])+C[22]*(-DP[4]-DP[9]))+DP[6]*(DP[2]*(C[3]*
 DP[6]-C[41])+DP[4]*(C[51]*DP[6]-C[22])))+DP[13]*(DP[0]*(DP[8]*(C[41]+C[38]*
 DP[0]-C[33]*DP[6]-C[18]*DP[7])+DP[1]*(C[3]*(DP[7]-DP[0])+C[22])+DP[2]*(
 C[41]-C[3]*DP[6]))+DP[7]*(DP[6]*(C[51]*(DP[2]-DP[1])+C[3]*DP[8])+DP[7]*(
 C[3]*DP[8]-C[51]*DP[1])+C[22]*(-DP[2]-DP[8]))+DP[2]*(DP[6]*(C[51]*DP[6]-
 C[22])))+tmp[8]+tmp[9]);
R=+DP[5]*(DP[7]*(DP[6]*(C[51]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(
 DP[1]-DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+C[3]*(DP[8]*(-DP[12]-
 DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[135]*(DP[11]-DP[10])+C[5]*
 DP[14])+DP[7]*(C[51]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[5]*DP[14]-C[135]*DP[10])+C[22]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(
 DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+C[31]*(-DP[11]-DP[14]))+
 DP[6]*(DP[6]*(C[51]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*
 DP[5])+C[135]*DP[11])+C[22]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-
 DP[11]*DP[5])-C[31]*DP[11])+tmp[10])+tmp[11];
R*=(N/D)*Q1[1]*Q2[2]*Q2[3]*Q1[4];
 if(cb_coeff_out)
 {
 }
 return R;
}