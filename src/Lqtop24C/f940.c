/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F940_out;
static void C940(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[2]*V[2];
S[1]=V[14]*V[14]*V[14]*V[14];
S[2]=V[9]*V[9]*V[9]*V[9];
C[149]=+S[2]*(S[1]*(S[0]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
S[3]=V[14]*V[14];
S[4]=V[9]*V[9];
S[5]=V[17]*V[17];
S[6]=V[1]*V[1];
C[148]=+S[4]*(S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(S[4]*(2*(V[37]*V[22]+
 V[20]*V[2]))+S[3]*(4*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(
 8*(-V[37]*V[22]-V[20]*V[2])))))))));
C[147]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[4]*(8*(-V[37]*V[22]-
 V[20]*V[2]))+S[3]*(16*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[5]*
 S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[146]=+S[2]*(S[6]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(3*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[145]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(12*(-V[37]*V[22]-
 V[20]*V[2]))))+6*V[43]*V[20]*S[5]*S[6])+6*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[144]=+S[2]*(S[6]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[143]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[142]=+S[4]*(S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(S[4]*(6*(V[37]*V[22]+
 V[20]*V[2]))+S[3]*(2*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(
 4*(-V[37]*V[22]-V[20]*V[2])))))))));
C[141]=+S[2]*(S[1]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[140]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[4]*(24*(-V[37]*V[22]-
 V[20]*V[2]))+S[3]*(8*(-V[37]*V[22]-V[20]*V[2]))))+12*V[43]*V[20]*S[5]*
 S[6])+12*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[139]=+S[4]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(4*(S[4]*(V[37]*V[22]+V[20]*
 V[2])+S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[138]=+S[2]*(S[0]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[137]=+S[4]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[4]*(-V[37]*V[22]-V[20]*
 V[2])+S[3]*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*
 V[37]*V[22]*S[5]*S[6])));
C[136]=+S[2]*(S[6]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(5*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[135]=+S[4]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(S[4]*(2*(V[37]*V[22]+V[20]*
 V[2]))+S[3]*(10*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(20*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[134]=+S[2]*(S[0]*(S[3]*(V[21]*(56*(V[37]*V[23]+V[21]*V[2])))));
C[133]=+S[4]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[4]*(8*(-V[37]*V[22]-V[20]*
 V[2]))+S[3]*(40*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*
 V[43]*V[37]*V[22]*S[5]*S[6])));
C[132]=+S[2]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[131]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(32*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[130]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(12*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[129]=+S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(S[4]*(4*(V[37]*V[22]+V[20]*
 V[2]))+S[3]*(8*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(16*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[128]=+S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[4]*(16*(-V[37]*V[22]-V[20]*
 V[2]))+S[3]*(32*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*
 V[43]*V[37]*V[22]*S[5]*S[6])));
C[127]=+S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(24*(-V[37]*V[22]-V[20]*
 V[2]))))+12*V[43]*V[20]*S[5]*S[6])+12*V[43]*V[37]*V[22]*S[5]*S[6])));
C[126]=+S[0]*(S[3]*(V[12]*(V[27]*(V[36]*(48*(V[37]*V[22]+V[20]*V[2]))))));
C[125]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(16*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[124]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*
 V[2])))))));
C[123]=+S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(32*(-V[37]*V[22]-V[20]*
 V[2]))))+16*V[43]*V[20]*S[5]*S[6])+16*V[43]*V[37]*V[22]*S[5]*S[6])));
C[122]=+S[0]*(S[3]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2]))))));
C[121]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+24*V[43]*V[20]*S[5]*S[6])+24*V[43]*V[37]*V[22]*S[5]*
 S[6]))));
C[120]=+S[1]*(S[0]*(S[4]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])))));
C[119]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(96*(V[37]*V[22]+V[20]*
 V[2])))))));
C[118]=+S[4]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(32*(-V[37]*V[22]-V[20]*
 V[2]))))+16*V[43]*V[20]*S[5]*S[6])+16*V[43]*V[37]*V[22]*S[5]*S[6])));
C[117]=+S[0]*(S[4]*(S[3]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])))));
C[116]=+S[0]*(S[4]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2]))))));
C[115]=+S[1]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[114]=+S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(S[4]*(12*(V[37]*V[22]+V[20]*
 V[2]))+S[3]*(4*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(8*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[113]=+S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[4]*(48*(-V[37]*V[22]-V[20]*
 V[2]))+S[3]*(16*(-V[37]*V[22]-V[20]*V[2]))))+24*V[43]*V[20]*S[5]*S[6])+24*
 V[43]*V[37]*V[22]*S[5]*S[6])));
C[112]=+S[1]*(S[0]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[111]=+S[0]*(S[3]*(V[12]*(V[27]*(V[36]*(96*(V[37]*V[22]+V[20]*V[2]))))));
C[110]=+V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(8*(S[4]*(V[37]*V[22]+V[20]*V[2])+
 S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(16*(-V[37]*
 V[22]-V[20]*V[2])))))));
C[109]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(32*(S[4]*(-V[37]*V[22]-V[20]*V[2])+
 S[3]*(-V[37]*V[22]-V[20]*V[2]))))+16*V[43]*V[20]*S[5]*S[6])+16*V[43]*V[37]*
 V[22]*S[5]*S[6]));
C[108]=+S[0]*(S[3]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[107]=+S[0]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2])))));
C[106]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(20*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[105]=+S[4]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(80*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6])));
C[104]=+S[0]*(S[4]*(S[3]*(V[21]*(224*(V[37]*V[23]+V[21]*V[2])))));
C[103]=+S[0]*(S[4]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[102]=+V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(S[4]*(4*(V[37]*V[22]+V[20]*V[2]))+
 S[3]*(20*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(40*(-V[37]*
 V[22]-V[20]*V[2])))))));
C[101]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[4]*(16*(-V[37]*V[22]-V[20]*
 V[2]))+S[3]*(80*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*
 V[43]*V[37]*V[22]*S[5]*S[6]));
C[100]=+S[0]*(S[3]*(V[21]*(224*(V[37]*V[23]+V[21]*V[2]))));
C[99]=+S[0]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])));
S[7]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[98]=+S[7]*(S[0]*(S[4]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[97]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[96]=+S[1]*(S[6]*(S[4]*(S[5]*(V[12]*(V[36]*(V[43]*(8*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[95]=+S[1]*(S[0]*(S[4]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*
 V[2])))))));
C[94]=+S[1]*(S[0]*(S[4]*(V[21]*(288*(V[37]*V[23]+V[21]*V[2])))));
C[93]=+S[0]*(S[4]*(S[3]*(V[21]*(480*(V[37]*V[23]+V[21]*V[2])))));
C[92]=+S[0]*(S[4]*(S[3]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2])))));
C[91]=+S[0]*(S[4]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2]))));
C[90]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(16*(V[37]*V[22]+
 V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[89]=+S[1]*(S[0]*(S[4]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2])))));
C[88]=+S[4]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(16*(V[37]*V[22]+V[20]*
 V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6])));
C[87]=+S[7]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[86]=+S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(4*(S[4]*(V[37]*V[22]+V[20]*
 V[2])+S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[85]=+S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[4]*(-V[37]*V[22]-V[20]*
 V[2])+S[3]*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*
 V[37]*V[22]*S[5]*S[6])));
C[84]=+S[1]*(S[0]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[83]=+S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(8*(-V[37]*V[22]-V[20]*
 V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6])));
C[82]=+S[0]*(S[3]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))))));
C[81]=+S[0]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[80]=+S[1]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6])));
C[79]=+S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[78]=+S[1]*(S[0]*(V[21]*(288*(V[37]*V[23]+V[21]*V[2]))));
C[77]=+S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6])));
C[76]=+S[0]*(S[3]*(V[21]*(480*(V[37]*V[23]+V[21]*V[2]))));
C[75]=+S[0]*(S[3]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2]))));
C[74]=+S[0]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2])));
C[73]=+S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(4*(S[4]*(-V[37]*V[22]-V[20]*
 V[2])+S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[72]=+S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[4]*(-V[37]*V[22]-V[20]*
 V[2])+S[3]*(V[37]*V[22]+V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*
 V[37]*V[22]*S[5]*S[6])));
C[71]=+S[1]*(S[0]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[70]=+S[0]*(S[3]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[69]=+V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(4*(S[4]*(-V[37]*V[22]-V[20]*V[2])+
 S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2])))))));
C[68]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[4]*(-V[37]*V[22]-V[20]*V[2])+
 S[3]*(V[37]*V[22]+V[20]*V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*
 V[22]*S[5]*S[6]));
C[67]=+S[0]*(S[3]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[66]=+S[0]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2])))));
C[65]=+S[0]*(S[3]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[64]=+S[0]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])));
C[63]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[62]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(6*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[61]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(24*(V[37]*V[22]+V[20]*
 V[2])))))));
C[60]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(8*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[59]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*
 V[2])))))));
C[58]=+S[1]*(S[0]*(S[4]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[57]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+12*V[43]*V[20]*S[5]*S[6])+12*V[43]*V[37]*V[22]*S[5]*
 S[6]))));
C[56]=+S[1]*(S[0]*(S[4]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])))));
C[55]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(48*(V[37]*V[22]+V[20]*
 V[2])))))));
C[54]=+S[4]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[5]*S[6])+8*V[43]*V[37]*V[22]*S[5]*S[6])));
C[53]=+S[0]*(S[4]*(S[3]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])))));
C[52]=+S[0]*(S[4]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[51]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(10*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[50]=+S[4]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(40*(-V[37]*V[22]-V[20]*
 V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6])));
C[49]=+S[0]*(S[4]*(S[3]*(V[21]*(112*(V[37]*V[23]+V[21]*V[2])))));
C[48]=+S[0]*(S[4]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[47]=+S[7]*(S[2]*(S[0]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
C[46]=+S[4]*(S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(2*(S[4]*(V[37]*V[22]+
 V[20]*V[2])+S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(4*(-
 V[37]*V[22]-V[20]*V[2])))))))));
C[45]=+S[2]*(S[1]*(S[0]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[44]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[4]*(-V[37]*V[22]-
 V[20]*V[2])+S[3]*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*
 V[43]*V[37]*V[22]*S[5]*S[6]))));
C[43]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(4*(-V[37]*V[22]-
 V[20]*V[2]))))+2*V[43]*V[20]*S[5]*S[6])+2*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[42]=+S[2]*(S[0]*(S[3]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
C[41]=+S[7]*(S[0]*(S[4]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[40]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[39]=+S[1]*(S[0]*(S[4]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[38]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(8*(V[37]*V[22]+V[20]*
 V[2])))))));
C[37]=+S[0]*(S[4]*(S[3]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[36]=+S[2]*(S[1]*(S[6]*(S[5]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[35]=+S[1]*(S[4]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[34]=+S[2]*(S[1]*(S[0]*(V[21]*(72*(V[37]*V[23]+V[21]*V[2])))));
C[33]=+S[2]*(S[6]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[32]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[4]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[31]=+S[2]*(S[0]*(S[3]*(V[21]*(120*(V[37]*V[23]+V[21]*V[2])))));
C[30]=+S[1]*(S[6]*(S[4]*(S[5]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[29]=+S[1]*(S[0]*(S[4]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*
 V[2])))))));
C[28]=+S[1]*(S[0]*(S[4]*(V[21]*(144*(V[37]*V[23]+V[21]*V[2])))));
C[27]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[26]=+S[0]*(S[4]*(S[3]*(V[21]*(240*(V[37]*V[23]+V[21]*V[2])))));
C[25]=+S[2]*(S[0]*(S[3]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[24]=+S[2]*(S[0]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2]))));
C[23]=+S[0]*(S[4]*(S[3]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2])))));
C[22]=+S[0]*(S[4]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[21]=+S[2]*(S[1]*(S[6]*(S[5]*(V[12]*(V[36]*(V[43]*(V[37]*V[22]+V[20]*
 V[2])))))));
C[20]=+S[4]*(S[3]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(2*(S[4]*(-V[37]*V[22]-
 V[20]*V[2])+S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(4*(-
 V[37]*V[22]-V[20]*V[2])))))))));
C[19]=+S[2]*(S[1]*(S[0]*(V[21]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[18]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[4]*(-V[37]*V[22]-
 V[20]*V[2])+S[3]*(V[37]*V[22]+V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*
 V[43]*V[37]*V[22]*S[5]*S[6]))));
C[17]=+S[2]*(S[6]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(V[37]*V[22]+V[20]*
 V[2])))))));
C[16]=+S[4]*(V[12]*(V[36]*(S[6]*(S[5]*(V[43]*(2*(S[4]*(-V[37]*V[22]-V[20]*
 V[2])+S[3]*(V[37]*V[22]+V[20]*V[2])))))+S[0]*(S[4]*(S[3]*(V[27]*(4*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[15]=+S[2]*(S[0]*(S[3]*(V[21]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[14]=+S[4]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[4]*(-V[37]*V[22]-V[20]*
 V[2])+S[3]*(V[37]*V[22]+V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*
 V[37]*V[22]*S[5]*S[6])));
C[13]=+S[1]*(S[6]*(S[4]*(S[5]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[12]=+S[4]*(S[3]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(8*(V[37]*V[22]+
 V[20]*V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6]))));
C[11]=+S[1]*(S[0]*(S[4]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[10]=+S[0]*(S[4]*(S[3]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*
 V[2])))))));
C[9]=+S[6]*(S[4]*(S[3]*(S[5]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[8]=+S[4]*(V[12]*(V[36]*(V[2]*(S[3]*(V[2]*(V[27]*(8*(V[37]*V[22]+V[20]*
 V[2]))))+4*V[43]*V[20]*S[5]*S[6])+4*V[43]*V[37]*V[22]*S[5]*S[6])));
C[7]=+S[0]*(S[4]*(S[3]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[6]=+S[0]*(S[4]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))))));
C[5]=+S[2]*(S[0]*(S[3]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[4]=+S[2]*(S[0]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2]))));
C[3]=+S[0]*(S[4]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[2]=+S[0]*(S[4]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[49]*V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[10]*S[11];
}
REAL F940_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
      B                 U      !                                     
    ==<==@==============<==\   !                                     
      P1 |              P5 |   !                                     
         |                 |   !                                     
         |              n2 |   !  n2                      B          
       W+|P7         /==>==+===!==>==\                 /==<==        
         1           |  P3 |   !  P3 |                 |  P1         
         |           |     |   !     |                 |             
      b  |  t     W+ |  E2 |   !  E2 |  W+    t     A  |  b          
    ==>==@==>==@-2>--@==<==+===!==<==@-->4-@==>==@---3-@==>==        
      P2    P8 |  P9    P4 |   !  P4   -PC | -PB | -PA    P2         
               |           |   !           |     |                   
               |        b  |   !  b        |     |                   
               \========>==+===!==>========/     |                   
                        P6 |   !  P6             |                   
                           |   !                 |                   
                           |   !  U              |                   
                           \===!==<==============/                   
                               !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[150];REAL S[2];REAL tmp[12];                                  
     
if(CalcConst) C940(C);
N=+C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[6]*(V[50]*(V[50]*(DP[4]*(DP[0]*(C[99]*(DP[0]+DP[7])+C[100]-C[64]*
 DP[6])+DP[6]*(C[64]*(-DP[6]-DP[7])+C[81])+V[50]*(C[66]*DP[7]-C[70])+C[71]+
 C[100]*DP[7])+DP[3]*(DP[7]*(C[64]*(DP[6]+DP[7])+C[67]+C[74]*DP[0])+C[84]-
 C[70]*V[50]+C[65]*DP[0])+DP[9]*(DP[0]*(C[74]*(DP[6]-DP[0])-C[76]-C[64]*
 DP[7])+C[75]*DP[6]-C[78]-C[65]*DP[7]))+DP[4]*(C[126]*DP[0]-C[128]-C[122]*
 DP[6]+C[101]*DP[7])+DP[3]*(C[70]*(-DP[6]-DP[7])-C[72])+DP[2]*(C[59]-C[52]*
 DP[7])+DP[9]*(C[79]+C[70]*DP[0])+C[59]*DP[1])+DP[0]*(DP[7]*(C[48]*(DP[8]-
 DP[4])+C[2]*DP[9]-C[91]*DP[1]-C[103]*DP[2]-C[22]*DP[3])+DP[0]*(C[91]*DP[8]-
 C[103]*DP[2]-C[48]*DP[4]+C[22]*DP[9])+DP[6]*(C[48]*DP[2]+C[2]*DP[4]-C[91]*
 DP[8]-C[22]*DP[9])+C[93]*DP[8]-C[53]*DP[1]-C[104]*DP[2]-C[3]*DP[3]-C[49]*
 DP[4]+C[26]*DP[9])+DP[7]*(DP[6]*(C[48]*(DP[2]-DP[1])+C[2]*(DP[4]-DP[3]))+
 DP[1]*(-C[23]-C[48]*DP[7])+DP[3]*(-C[7]-C[2]*DP[7])+C[53]*DP[8]-C[104]*
 DP[2]-C[49]*DP[4]+C[3]*DP[9])+DP[6]*(DP[2]*(C[48]*DP[6]-C[3])+DP[4]*(C[2]*
 DP[6]-C[37])-C[92]*DP[8]-C[23]*DP[9])+C[94]*DP[8]-C[56]*DP[1]-C[89]*DP[2]-
 C[39]*DP[3]-C[11]*DP[4]+C[28]*DP[9]);
tmp[1]=+DP[6]*(DP[5]*(DP[11]*(DP[0]*(C[48]*(DP[0]+DP[7])+C[49]-C[2]*DP[6])+
 DP[6]*(C[2]*(-DP[6]-DP[7])+C[37])+V[50]*(C[6]*DP[7]-C[10])+C[11]+C[49]*
 DP[7])+DP[10]*(DP[7]*(C[2]*(DP[6]+DP[7])+C[7]+C[22]*DP[0])+C[39]-C[10]*
 V[50]+C[3]*DP[0])+DP[14]*(DP[0]*(C[22]*(DP[6]-DP[0])-C[26]-C[2]*DP[7])+
 C[23]*DP[6]-C[28]-C[3]*DP[7]))+DP[13]*(DP[2]*(DP[0]*(C[48]*(-DP[0]-DP[7])+
 C[2]*DP[6]-C[49])+DP[6]*(C[2]*(DP[6]+DP[7])-C[37])+V[50]*(C[10]-C[6]*
 DP[7])-C[11]-C[49]*DP[7])+DP[1]*(DP[7]*(C[2]*(-DP[6]-DP[7])-C[7]-C[22]*
 DP[0])+C[10]*V[50]-C[39]-C[3]*DP[0])+DP[8]*(DP[0]*(C[22]*(DP[0]-DP[6])+
 C[26]+C[2]*DP[7])+C[28]-C[23]*DP[6]+C[3]*DP[7])))+DP[7]*(DP[5]*(V[50]*(
 DP[0]*(C[6]*DP[14]-C[52]*DP[11])+DP[10]*(-C[10]-C[6]*DP[7])+C[10]*DP[14]-
 C[55]*DP[11])+DP[0]*(C[7]*DP[14]-C[37]*DP[10]-C[53]*DP[11])+DP[10]*(-C[58]-
 C[7]*DP[7])+C[11]*DP[14]-C[56]*DP[11])+DP[13]*(V[50]*(DP[0]*(C[52]*DP[2]-
 C[6]*DP[8])+DP[1]*(C[10]+C[6]*DP[7])+C[55]*DP[2]-C[10]*DP[8])+DP[0]*(C[37]*
 DP[1]+C[53]*DP[2]-C[7]*DP[8])+DP[1]*(C[58]+C[7]*DP[7])+C[56]*DP[2]-C[11]*
 DP[8]))+DP[0]*(DP[5]*(DP[14]*(C[39]+C[10]*V[50]+C[37]*DP[0]))+DP[8]*(
 DP[13]*(-C[39]-C[10]*V[50]-C[37]*DP[0])))+V[50]*(C[29]*(DP[14]*DP[5]-
 DP[13]*DP[8]))+C[41]*(DP[14]*DP[5]-DP[13]*DP[8]);
tmp[2]=+DP[5]*(DP[7]*(C[6]*(DP[12]*(DP[0]*(DP[8]+DP[9])+DP[6]*(DP[2]+DP[4])+
 DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(DP[8]+DP[9])+DP[6]*(DP[2]+DP[4])+
 DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]-DP[14]*DP[0]))+
 C[10]*(DP[12]*(DP[8]-DP[1]-DP[3]+DP[9])+DP[13]*(DP[8]-DP[1]-DP[3]+DP[9])+
 DP[5]*(DP[10]-DP[14])-DP[10]*DP[6]-DP[11]*DP[7])+DP[0]*(C[52]*(DP[2]*(-
 DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+C[38]*DP[10]-C[137]*
 DP[11]+C[14]*DP[14])+C[55]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+
 DP[11]*DP[5])+DP[10]*(-C[32]-C[14]*DP[7])+DP[11]*(C[133]*DP[6]-C[140])+
 C[18]*DP[14])+DP[6]*(C[10]*(DP[12]*(-DP[1]-DP[2]-DP[3]-DP[4])+DP[13]*(-
 DP[1]-DP[2]-DP[3]-DP[4])+DP[5]*(DP[10]+DP[11])+DP[14]*DP[0]-DP[10]*DP[6])+
 DP[11]*(C[61]*DP[0]-C[147]-C[59]*DP[6])+C[29]*DP[14]-C[18]*DP[10])+DP[0]*(
 C[10]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+DP[14]*(
 C[44]-C[38]*DP[0]))+C[29]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-
 DP[14]*DP[5])+C[35]*DP[14]);
tmp[3]=+DP[12]*(DP[7]*(DP[0]*(C[118]*DP[2]-C[10]*DP[1]+C[83]*DP[3]+C[110]*
 DP[4]-C[88]*DP[8]+C[69]*DP[9])+DP[6]*(C[59]*DP[1]-C[105]*DP[2]-C[77]*DP[3]-
 C[102]*DP[4])+DP[7]*(C[88]*DP[1]+C[59]*DP[2]-C[69]*DP[3]-C[77]*DP[4])+
 C[60]*DP[1]+C[121]*DP[2]+C[27]*DP[3]+C[114]*DP[4]-C[90]*DP[8]+C[73]*DP[9])+
 DP[6]*(DP[0]*(C[127]*DP[4]-C[55]*DP[2]-C[59]*DP[8]+C[77]*DP[9])+DP[6]*(
 C[59]*DP[1]+C[124]*DP[2]-C[77]*DP[3]-C[123]*DP[4])+C[90]*DP[1]+C[131]*
 DP[2]-C[73]*DP[3]+C[129]*DP[4]-C[95]*DP[8]+C[80]*DP[9])+DP[0]*(DP[0]*(
 C[10]*DP[8]-C[83]*DP[9])-C[97]*DP[8]-C[86]*DP[9])-C[96]*DP[8]-C[30]*DP[9])+
 DP[13]*(DP[7]*(DP[1]*(C[27]-C[38]*DP[0]+C[10]*DP[6]+C[8]*DP[7])+DP[2]*(
 C[57]+C[54]*DP[0]-C[50]*DP[6]+C[10]*DP[7])+DP[8]*(-C[12]-C[8]*DP[0]))+
 DP[6]*(DP[2]*(C[63]-C[61]*DP[0]+C[59]*DP[6])+DP[1]*(C[12]+C[10]*DP[6])+
 DP[8]*(-C[29]-C[10]*DP[0]))+DP[8]*(DP[0]*(C[38]*DP[0]-C[40])-C[30]))+
 tmp[2];
tmp[4]=+DP[7]*(C[2]*(DP[6]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-
 DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+DP[7]*(DP[1]*(DP[12]+DP[13])+
 DP[3]*(DP[12]+DP[13])-DP[10]*DP[5]))+DP[12]*(C[7]*(DP[1]+DP[3])+C[49]*(
 DP[2]+DP[4])+C[3]*(-DP[8]-DP[9]))+DP[13]*(C[7]*(DP[1]+DP[3])+C[49]*(DP[2]+
 DP[4])+C[3]*(-DP[8]-DP[9]))+DP[10]*(C[4]*(-DP[6]-DP[7])-C[15]-C[7]*DP[5])+
 DP[11]*(C[4]*DP[6]-C[134]-C[49]*DP[5])+DP[14]*(C[5]+C[3]*DP[5]))+DP[6]*(
 DP[6]*(C[2]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[4]*DP[11])+C[37]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*
 DP[5])+C[23]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-
 C[42]*DP[11]-C[25]*DP[14])+DP[12]*(C[39]*(DP[1]+DP[3])+C[11]*(DP[2]+DP[4])+
 C[28]*(-DP[8]-DP[9]))+DP[13]*(C[39]*(DP[1]+DP[3])+C[11]*(DP[2]+DP[4])+
 C[28]*(-DP[8]-DP[9]))+DP[5]*(C[28]*DP[14]-C[39]*DP[10]-C[11]*DP[11])+C[34]*
 DP[14]-C[45]*DP[10]-C[19]*DP[11];
tmp[5]=+DP[7]*(DP[0]*(DP[12]*(C[37]*(-DP[1]-DP[3])+C[53]*(-DP[2]-DP[4])+
 C[7]*(DP[8]+DP[9]))+DP[13]*(C[37]*(-DP[1]-DP[3])+C[53]*(-DP[2]-DP[4])+C[7]*
 (DP[8]+DP[9]))+DP[5]*(C[37]*DP[10]+C[53]*DP[11]-C[7]*DP[14])+C[42]*DP[10]+
 C[138]*DP[11]-C[15]*DP[14])+DP[12]*(DP[1]*(-C[58]-C[7]*DP[7])+DP[3]*(-
 C[58]-C[7]*DP[7])+C[56]*(-DP[2]-DP[4])+C[11]*(DP[8]+DP[9]))+DP[13]*(DP[1]*
 (-C[58]-C[7]*DP[7])+DP[3]*(-C[58]-C[7]*DP[7])+C[56]*(-DP[2]-DP[4])+C[11]*(
 DP[8]+DP[9]))+DP[5]*(DP[10]*(C[58]+C[7]*DP[7])+C[56]*DP[11]-C[11]*DP[14])+
 DP[10]*(C[149]+C[15]*DP[7])+C[141]*DP[11]-C[19]*DP[14])+DP[0]*(DP[0]*(
 C[37]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[42]*
 DP[14])+C[39]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-
 C[45]*DP[14])+C[41]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])-C[47]*DP[14];
tmp[6]=+V[50]*(V[50]*(DP[12]*(DP[7]*(V[50]*(V[50]*(V[50]*(DP[0]*(C[66]*
 DP[9]-C[107]*DP[4])+DP[3]*(-C[70]-C[66]*DP[7])+C[70]*DP[9]-C[111]*DP[4])+
 DP[0]*(C[67]*DP[9]-C[81]*DP[3]-C[108]*DP[4])+DP[3]*(-C[115]-C[67]*DP[7])+
 C[71]*DP[9]-C[112]*DP[4])+DP[0]*(C[116]*DP[2]+C[82]*DP[3]-C[109]*DP[4]-
 C[52]*DP[8]+C[68]*DP[9])+DP[7]*(C[52]*DP[1]-C[68]*DP[3]-C[70]*DP[4])+C[59]*
 (DP[1]-DP[8])+C[119]*DP[2]-C[77]*DP[3]-C[113]*DP[4]+C[72]*DP[9])+DP[0]*(
 C[3]*DP[1]+C[117]*DP[2]+C[37]*DP[3]+C[53]*DP[4]-C[23]*DP[8]-C[7]*DP[9])+
 DP[1]*(C[39]+C[23]*DP[7])+DP[3]*(C[58]+C[7]*DP[7])+C[120]*DP[2]+C[56]*
 DP[4]-C[89]*DP[8]-C[11]*DP[9])+DP[9]*(V[50]*(V[50]*(DP[0]*(C[84]+C[70]*
 V[50]+C[81]*DP[0])+C[87]+C[79]*V[50])+DP[0]*(C[85]-C[82]*DP[0])+C[80])+
 DP[0]*(-C[39]-C[37]*DP[0])-C[41])+DP[8]*(DP[0]*(-C[56]-C[59]*V[50]-C[3]*
 DP[0])-C[98]-C[95]*V[50])+tmp[0])+tmp[1])+tmp[3]);
tmp[7]=+DP[6]*(DP[12]*(DP[0]*(C[61]*(DP[2]+DP[4])+C[10]*(DP[8]+DP[9]))+
 DP[6]*(C[10]*(-DP[1]-DP[3])+C[59]*(-DP[2]-DP[4]))+C[12]*(-DP[1]-DP[3])+
 C[63]*(-DP[2]-DP[4])+C[29]*(DP[8]+DP[9]))+DP[13]*(DP[0]*(C[61]*(DP[2]+
 DP[4])+C[10]*(DP[8]+DP[9]))+DP[6]*(C[10]*(-DP[1]-DP[3])+C[59]*(-DP[2]-
 DP[4]))+C[12]*(-DP[1]-DP[3])+C[63]*(-DP[2]-DP[4])+C[29]*(DP[8]+DP[9]))+
 DP[5]*(DP[11]*(C[63]-C[61]*DP[0]+C[59]*DP[6])+DP[10]*(C[12]+C[10]*DP[6])+
 DP[14]*(-C[29]-C[10]*DP[0]))+DP[11]*(C[148]+C[145]*DP[0]-C[143]*DP[6])+
 DP[10]*(-C[20]-C[32]*DP[6])+DP[14]*(C[35]+C[32]*DP[0]))+DP[0]*(DP[0]*(
 C[38]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])-C[43]*
 DP[14])+C[40]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-
 C[46]*DP[14])+C[30]*(DP[8]*(DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*
 DP[5])-C[36]*DP[14];
tmp[8]=+DP[5]*(DP[7]*(DP[12]*(DP[0]*(C[38]*(DP[1]+DP[3])+C[54]*(-DP[2]-
 DP[4])+C[8]*(DP[8]+DP[9]))+DP[6]*(C[10]*(-DP[1]-DP[3])+C[50]*(DP[2]+
 DP[4]))+DP[7]*(C[8]*(-DP[1]-DP[3])+C[10]*(-DP[2]-DP[4]))+C[27]*(-DP[1]-
 DP[3])+C[57]*(-DP[2]-DP[4])+C[12]*(DP[8]+DP[9]))+DP[13]*(DP[0]*(C[38]*(
 DP[1]+DP[3])+C[54]*(-DP[2]-DP[4])+C[8]*(DP[8]+DP[9]))+DP[6]*(C[10]*(-DP[1]-
 DP[3])+C[50]*(DP[2]+DP[4]))+DP[7]*(C[8]*(-DP[1]-DP[3])+C[10]*(-DP[2]-
 DP[4]))+C[27]*(-DP[1]-DP[3])+C[57]*(-DP[2]-DP[4])+C[12]*(DP[8]+DP[9]))+
 DP[5]*(DP[10]*(C[27]-C[38]*DP[0]+C[10]*DP[6]+C[8]*DP[7])+DP[11]*(C[57]+
 C[54]*DP[0]-C[50]*DP[6]+C[10]*DP[7])+DP[14]*(-C[12]-C[8]*DP[0]))+DP[10]*(
 C[33]+C[43]*DP[0]-C[32]*DP[6]-C[16]*DP[7])+DP[11]*(C[142]+C[139]*DP[0]-
 C[135]*DP[6]-C[32]*DP[7])+DP[14]*(C[20]+C[16]*DP[0]))+tmp[7]);
tmp[9]=+V[50]*(DP[5]*(DP[6]*(DP[0]*(DP[12]*(DP[7]*(C[22]*(DP[1]+DP[3])+
 C[48]*(DP[2]+DP[4])+C[2]*(-DP[8]-DP[9]))+DP[0]*(C[48]*(DP[2]+DP[4])+C[22]*
 (-DP[8]-DP[9]))+DP[6]*(C[2]*(-DP[2]-DP[4])+C[22]*(DP[8]+DP[9]))+C[3]*(
 DP[1]+DP[3])+C[49]*(DP[2]+DP[4])+C[26]*(-DP[8]-DP[9]))+DP[13]*(DP[7]*(
 C[22]*(DP[1]+DP[3])+C[48]*(DP[2]+DP[4])+C[2]*(-DP[8]-DP[9]))+DP[0]*(C[48]*(
 DP[2]+DP[4])+C[22]*(-DP[8]-DP[9]))+DP[6]*(C[2]*(-DP[2]-DP[4])+C[22]*(DP[8]+
 DP[9]))+C[3]*(DP[1]+DP[3])+C[49]*(DP[2]+DP[4])+C[26]*(-DP[8]-DP[9]))+DP[5]*
 (DP[11]*(C[48]*(-DP[0]-DP[7])+C[2]*DP[6]-C[49])+DP[14]*(C[22]*(DP[0]-
 DP[6])+C[26]+C[2]*DP[7])+DP[10]*(-C[3]-C[22]*DP[7]))+DP[11]*(C[132]*(-
 DP[0]-DP[7])+C[4]*DP[6]-C[134])+DP[14]*(C[24]*(DP[0]-DP[6])+C[31]+C[4]*
 DP[7])+DP[10]*(-C[5]-C[24]*DP[7]))+tmp[4])+tmp[5])+tmp[6]);
tmp[10]=+DP[6]*(DP[12]*(C[27]*(DP[0]*(DP[8]+DP[9])+DP[1]*(-DP[6]-DP[7])+
 DP[3]*(-DP[6]-DP[7]))+DP[2]*(C[30]+C[62]*DP[0]-C[60]*DP[6]-C[51]*DP[7])+
 DP[4]*(C[30]+C[62]*DP[0]-C[60]*DP[6]-C[51]*DP[7])+C[13]*(-DP[1]-DP[3])+
 C[30]*(DP[8]+DP[9]))+DP[13]*(C[27]*(DP[0]*(DP[8]+DP[9])+DP[1]*(-DP[6]-
 DP[7])+DP[3]*(-DP[6]-DP[7]))+DP[2]*(C[30]+C[62]*DP[0]-C[60]*DP[6]-C[51]*
 DP[7])+DP[4]*(C[30]+C[62]*DP[0]-C[60]*DP[6]-C[51]*DP[7])+C[13]*(-DP[1]-
 DP[3])+C[30]*(DP[8]+DP[9]))+DP[5]*(DP[11]*(C[60]*DP[6]-C[30]-C[62]*DP[0]+
 C[51]*DP[7])+DP[10]*(C[27]*(DP[6]+DP[7])+C[13])+DP[14]*(-C[30]-C[27]*
 DP[0]))+DP[11]*(C[144]*DP[6]-C[36]-C[146]*DP[0]+C[136]*DP[7])+DP[10]*(
 C[33]*(DP[6]+DP[7])+C[21])+DP[14]*(-C[36]-C[33]*DP[0]));
S[1]=V[50]*V[50];
tmp[11]=+S[1]*(DP[12]*(DP[6]*(DP[0]*(-C[130]*DP[2]-C[62]*DP[4]-C[60]*DP[8]-
 C[27]*DP[9])+DP[6]*(C[60]*(DP[1]+DP[4])+C[125]*DP[2]+C[27]*DP[3])+DP[7]*(
 C[60]*DP[1]+C[106]*DP[2]+C[27]*DP[3]+C[51]*DP[4])+C[30]*(DP[1]-DP[4]-
 DP[9])+C[96]*(-DP[2]-DP[8])+C[13]*DP[3])+DP[7]*(DP[0]*(C[27]*(-DP[1]-DP[4]-
 DP[8])+C[9]*(-DP[3]-DP[9])-C[60]*DP[2])+DP[7]*(C[27]*(DP[1]+DP[4])+C[60]*
 DP[2]+C[9]*DP[3])+C[30]*(-DP[2]-DP[8])+C[13]*(-DP[4]-DP[9]))+DP[0]*(DP[0]*(
 C[27]*DP[8]+C[9]*DP[9])+C[30]*DP[8]+C[13]*DP[9]))+DP[13]*(DP[6]*(DP[2]*(
 C[60]*DP[6]-C[30]-C[62]*DP[0]+C[51]*DP[7])+DP[1]*(C[27]*(DP[6]+DP[7])+
 C[13])+DP[8]*(-C[30]-C[27]*DP[0]))+DP[7]*(DP[0]*(C[9]*(-DP[1]-DP[8])-C[27]*
 DP[2])+DP[2]*(C[27]*DP[7]-C[13])+C[9]*DP[7]*DP[1]-C[13]*DP[8])+DP[0]*(
 DP[8]*(C[13]+C[9]*DP[0])))+tmp[8]+tmp[9]);
R=+DP[5]*(DP[7]*(DP[0]*(C[9]*(DP[12]*(DP[1]+DP[3]+DP[8]+DP[9])+DP[13]*(
 DP[1]+DP[3]+DP[8]+DP[9])+DP[5]*(-DP[10]-DP[14]))+C[27]*(DP[2]*(DP[12]+
 DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])+C[17]*(-DP[10]-DP[14])-C[33]*
 DP[11])+DP[7]*(C[9]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*
 DP[5])+C[27]*(DP[2]*(-DP[12]-DP[13])+DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5])+
 C[17]*DP[10]+C[33]*DP[11])+C[13]*(DP[12]*(DP[2]+DP[4]+DP[8]+DP[9])+DP[13]*(
 DP[2]+DP[4]+DP[8]+DP[9])+DP[5]*(-DP[11]-DP[14]))+C[21]*(-DP[11]-DP[14]))+
 DP[0]*(DP[0]*(C[9]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[17]*DP[14])+C[13]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[21]*DP[14])+tmp[10])+tmp[11];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3]*Q0[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
