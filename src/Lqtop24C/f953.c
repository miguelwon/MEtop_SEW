/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_out.h"
#include"num_in.h"
extern FNN F953_out;
static void C953(REAL * C)
{
REAL* V=va_out;
REAL S[12];                                                                 
     
S[0]=V[14]*V[14];
S[1]=V[9]*V[9];
S[2]=V[17]*V[17];
S[3]=V[2]*V[2];
S[4]=V[1]*V[1];
C[149]=+S[1]*(S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(S[1]*(6*(V[37]*V[22]+
 V[20]*V[2]))+S[0]*(2*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(
 4*(-V[37]*V[22]-V[20]*V[2])))))))));
S[5]=V[14]*V[14]*V[14]*V[14];
S[6]=V[9]*V[9]*V[9]*V[9];
C[148]=+S[6]*(S[5]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[147]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[1]*(24*(-V[37]*V[22]-
 V[20]*V[2]))+S[0]*(8*(-V[37]*V[22]-V[20]*V[2]))))+12*V[43]*V[20]*S[2]*
 S[4])+12*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[146]=+S[1]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(4*(S[1]*(V[37]*V[22]+V[20]*
 V[2])+S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[145]=+S[6]*(S[3]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[144]=+S[1]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[1]*(-V[37]*V[22]-V[20]*
 V[2])+S[0]*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*
 V[37]*V[22]*S[2]*S[4])));
C[143]=+S[1]*(S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(S[1]*(2*(V[37]*V[22]+
 V[20]*V[2]))+S[0]*(4*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(
 8*(-V[37]*V[22]-V[20]*V[2])))))))));
C[142]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[1]*(8*(-V[37]*V[22]-
 V[20]*V[2]))+S[0]*(16*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[2]*
 S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[141]=+S[6]*(S[4]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(3*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[140]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(12*(-V[37]*V[22]-
 V[20]*V[2]))))+6*V[43]*V[20]*S[2]*S[4])+6*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[139]=+S[6]*(S[4]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(5*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[138]=+S[1]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(S[1]*(2*(V[37]*V[22]+V[20]*
 V[2]))+S[0]*(10*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(20*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[137]=+S[6]*(S[3]*(S[0]*(V[21]*(56*(V[37]*V[23]+V[21]*V[2])))));
C[136]=+S[1]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[1]*(8*(-V[37]*V[22]-V[20]*
 V[2]))+S[0]*(40*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*
 V[43]*V[37]*V[22]*S[2]*S[4])));
C[135]=+S[6]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[134]=+S[6]*(S[4]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[133]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[132]=+S[6]*(S[5]*(S[3]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
C[131]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+24*V[43]*V[20]*S[2]*S[4])+24*V[43]*V[37]*V[22]*S[2]*
 S[4]))));
C[130]=+S[5]*(S[3]*(S[1]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])))));
C[129]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(96*(V[37]*V[22]+V[20]*
 V[2])))))));
C[128]=+S[1]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(32*(-V[37]*V[22]-V[20]*
 V[2]))))+16*V[43]*V[20]*S[2]*S[4])+16*V[43]*V[37]*V[22]*S[2]*S[4])));
C[127]=+S[3]*(S[1]*(S[0]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])))));
C[126]=+S[3]*(S[1]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2]))))));
C[125]=+S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(S[1]*(12*(V[37]*V[22]+V[20]*
 V[2]))+S[0]*(4*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(8*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[124]=+S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[1]*(48*(-V[37]*V[22]-V[20]*
 V[2]))+S[0]*(16*(-V[37]*V[22]-V[20]*V[2]))))+24*V[43]*V[20]*S[2]*S[4])+24*
 V[43]*V[37]*V[22]*S[2]*S[4])));
C[123]=+S[5]*(S[3]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[122]=+S[3]*(S[0]*(V[12]*(V[27]*(V[36]*(96*(V[37]*V[22]+V[20]*V[2]))))));
C[121]=+V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(8*(S[1]*(V[37]*V[22]+V[20]*V[2])+
 S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(16*(-V[37]*
 V[22]-V[20]*V[2])))))));
C[120]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(32*(S[1]*(-V[37]*V[22]-V[20]*V[2])+
 S[0]*(-V[37]*V[22]-V[20]*V[2]))))+16*V[43]*V[20]*S[2]*S[4])+16*V[43]*V[37]*
 V[22]*S[2]*S[4]));
C[119]=+S[3]*(S[0]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[118]=+S[3]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2])))));
C[117]=+S[5]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[116]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(32*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[115]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(12*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[114]=+S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(S[1]*(4*(V[37]*V[22]+V[20]*
 V[2]))+S[0]*(8*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(16*(-
 V[37]*V[22]-V[20]*V[2]))))))));
C[113]=+S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[1]*(16*(-V[37]*V[22]-V[20]*
 V[2]))+S[0]*(32*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*
 V[43]*V[37]*V[22]*S[2]*S[4])));
C[112]=+S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(24*(-V[37]*V[22]-V[20]*
 V[2]))))+12*V[43]*V[20]*S[2]*S[4])+12*V[43]*V[37]*V[22]*S[2]*S[4])));
C[111]=+S[3]*(S[0]*(V[12]*(V[27]*(V[36]*(48*(V[37]*V[22]+V[20]*V[2]))))));
C[110]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(20*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[109]=+S[1]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(80*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4])));
C[108]=+S[3]*(S[1]*(S[0]*(V[21]*(224*(V[37]*V[23]+V[21]*V[2])))));
C[107]=+S[3]*(S[1]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2]))));
C[106]=+V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(S[1]*(4*(V[37]*V[22]+V[20]*V[2]))+
 S[0]*(20*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(40*(-V[37]*
 V[22]-V[20]*V[2])))))));
C[105]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(S[1]*(16*(-V[37]*V[22]-V[20]*
 V[2]))+S[0]*(80*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*
 V[43]*V[37]*V[22]*S[2]*S[4]));
C[104]=+S[3]*(S[0]*(V[21]*(224*(V[37]*V[23]+V[21]*V[2]))));
C[103]=+S[3]*(V[21]*(128*(V[37]*V[23]+V[21]*V[2])));
C[102]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(16*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[101]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*
 V[2])))))));
C[100]=+S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(32*(-V[37]*V[22]-V[20]*
 V[2]))))+16*V[43]*V[20]*S[2]*S[4])+16*V[43]*V[37]*V[22]*S[2]*S[4])));
C[99]=+S[3]*(S[0]*(V[12]*(V[27]*(V[36]*(64*(V[37]*V[22]+V[20]*V[2]))))));
S[7]=V[14]*V[14]*V[14]*V[14]*V[14]*V[14];
C[98]=+S[7]*(S[3]*(S[1]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[97]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[96]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(16*(V[37]*V[22]+
 V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[95]=+S[5]*(S[3]*(S[1]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2])))));
C[94]=+S[1]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(16*(V[37]*V[22]+V[20]*
 V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4])));
C[93]=+S[5]*(S[4]*(S[1]*(S[2]*(V[12]*(V[36]*(V[43]*(8*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[92]=+S[5]*(S[3]*(S[1]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*
 V[2])))))));
C[91]=+S[5]*(S[3]*(S[1]*(V[21]*(288*(V[37]*V[23]+V[21]*V[2])))));
C[90]=+S[3]*(S[1]*(S[0]*(V[21]*(480*(V[37]*V[23]+V[21]*V[2])))));
C[89]=+S[3]*(S[1]*(S[0]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2])))));
C[88]=+S[3]*(S[1]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2]))));
C[87]=+S[7]*(S[3]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[86]=+S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(4*(S[1]*(V[37]*V[22]+V[20]*
 V[2])+S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[85]=+S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[1]*(-V[37]*V[22]-V[20]*
 V[2])+S[0]*(-V[37]*V[22]-V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*
 V[37]*V[22]*S[2]*S[4])));
C[84]=+S[5]*(S[3]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[83]=+S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(8*(-V[37]*V[22]-V[20]*
 V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4])));
C[82]=+S[3]*(S[0]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))))));
C[81]=+S[3]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[80]=+S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(4*(S[1]*(-V[37]*V[22]-V[20]*
 V[2])+S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(8*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[79]=+S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[1]*(-V[37]*V[22]-V[20]*
 V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*
 V[37]*V[22]*S[2]*S[4])));
C[78]=+S[5]*(S[3]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[77]=+V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(4*(S[1]*(-V[37]*V[22]-V[20]*V[2])+
 S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2])))))));
C[76]=+V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(16*(S[1]*(-V[37]*V[22]-V[20]*V[2])+
 S[0]*(V[37]*V[22]+V[20]*V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*
 V[22]*S[2]*S[4]));
C[75]=+S[3]*(S[0]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
C[74]=+S[3]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2])))));
C[73]=+S[5]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4])));
C[72]=+S[5]*(S[3]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[71]=+S[5]*(S[3]*(V[21]*(288*(V[37]*V[23]+V[21]*V[2]))));
C[70]=+S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4])));
C[69]=+S[3]*(S[0]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[68]=+S[3]*(S[0]*(V[21]*(480*(V[37]*V[23]+V[21]*V[2]))));
C[67]=+S[3]*(S[0]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[66]=+S[3]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])));
C[65]=+S[3]*(S[0]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2]))));
C[64]=+S[3]*(V[21]*(192*(V[37]*V[23]+V[21]*V[2])));
C[63]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+12*V[43]*V[20]*S[2]*S[4])+12*V[43]*V[37]*V[22]*S[2]*
 S[4]))));
C[62]=+S[5]*(S[3]*(S[1]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])))));
C[61]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(48*(V[37]*V[22]+V[20]*
 V[2])))))));
C[60]=+S[1]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(16*(-V[37]*V[22]-V[20]*
 V[2]))))+8*V[43]*V[20]*S[2]*S[4])+8*V[43]*V[37]*V[22]*S[2]*S[4])));
C[59]=+S[3]*(S[1]*(S[0]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2])))));
C[58]=+S[3]*(S[1]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*V[2]))))));
C[57]=+S[5]*(S[3]*(S[1]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[56]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(16*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[55]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(6*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[54]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(24*(V[37]*V[22]+V[20]*
 V[2])))))));
C[53]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(10*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[52]=+S[1]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(40*(-V[37]*V[22]-V[20]*
 V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4])));
C[51]=+S[3]*(S[1]*(S[0]*(V[21]*(112*(V[37]*V[23]+V[21]*V[2])))));
C[50]=+S[3]*(S[1]*(V[21]*(64*(V[37]*V[23]+V[21]*V[2]))));
C[49]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(8*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[48]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(32*(V[37]*V[22]+V[20]*
 V[2])))))));
C[47]=+S[7]*(S[6]*(S[3]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
C[46]=+S[1]*(S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(2*(S[1]*(V[37]*V[22]+
 V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(4*(-
 V[37]*V[22]-V[20]*V[2])))))))));
C[45]=+S[6]*(S[5]*(S[3]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[44]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[1]*(-V[37]*V[22]-
 V[20]*V[2])+S[0]*(-V[37]*V[22]-V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*
 V[43]*V[37]*V[22]*S[2]*S[4]))));
C[43]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(4*(-V[37]*V[22]-
 V[20]*V[2]))))+2*V[43]*V[20]*S[2]*S[4])+2*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[42]=+S[6]*(S[3]*(S[0]*(V[21]*(8*(V[37]*V[23]+V[21]*V[2])))));
C[41]=+S[7]*(S[3]*(S[1]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[40]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[39]=+S[5]*(S[3]*(S[1]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[38]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(8*(V[37]*V[22]+V[20]*
 V[2])))))));
C[37]=+S[3]*(S[1]*(S[0]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[36]=+S[6]*(S[5]*(S[4]*(S[2]*(V[12]*(V[36]*(V[43]*(V[37]*V[22]+V[20]*
 V[2])))))));
C[35]=+S[1]*(S[0]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(2*(S[1]*(-V[37]*V[22]-
 V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(4*(-
 V[37]*V[22]-V[20]*V[2])))))))));
C[34]=+S[6]*(S[5]*(S[3]*(V[21]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[33]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[1]*(-V[37]*V[22]-
 V[20]*V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*
 V[43]*V[37]*V[22]*S[2]*S[4]))));
C[32]=+S[6]*(S[4]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(V[37]*V[22]+V[20]*
 V[2])))))));
C[31]=+S[1]*(V[12]*(V[36]*(S[4]*(S[2]*(V[43]*(2*(S[1]*(-V[37]*V[22]-V[20]*
 V[2])+S[0]*(V[37]*V[22]+V[20]*V[2])))))+S[3]*(S[1]*(S[0]*(V[27]*(4*(-V[37]*
 V[22]-V[20]*V[2]))))))));
C[30]=+S[6]*(S[3]*(S[0]*(V[21]*(24*(V[37]*V[23]+V[21]*V[2])))));
C[29]=+S[1]*(V[12]*(V[36]*(V[2]*(V[2]*(V[27]*(8*(S[1]*(-V[37]*V[22]-V[20]*
 V[2])+S[0]*(V[37]*V[22]+V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*
 V[37]*V[22]*S[2]*S[4])));
C[28]=+S[5]*(S[4]*(S[1]*(S[2]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[27]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(8*(V[37]*V[22]+
 V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[26]=+S[5]*(S[3]*(S[1]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[25]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[24]=+S[1]*(V[12]*(V[36]*(V[2]*(S[0]*(V[2]*(V[27]*(8*(V[37]*V[22]+V[20]*
 V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4])));
C[23]=+S[3]*(S[1]*(S[0]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[22]=+S[3]*(S[1]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*V[2]))))));
C[21]=+S[6]*(S[5]*(S[4]*(S[2]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[20]=+S[5]*(S[1]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[19]=+S[6]*(S[5]*(S[3]*(V[21]*(72*(V[37]*V[23]+V[21]*V[2])))));
C[18]=+S[6]*(S[4]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(2*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[17]=+S[1]*(S[0]*(V[12]*(V[36]*(V[2]*(S[1]*(V[2]*(V[27]*(8*(-V[37]*V[22]-
 V[20]*V[2]))))+4*V[43]*V[20]*S[2]*S[4])+4*V[43]*V[37]*V[22]*S[2]*S[4]))));
C[16]=+S[6]*(S[3]*(S[0]*(V[21]*(120*(V[37]*V[23]+V[21]*V[2])))));
C[15]=+S[5]*(S[4]*(S[1]*(S[2]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[14]=+S[5]*(S[3]*(S[1]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*
 V[2])))))));
C[13]=+S[5]*(S[3]*(S[1]*(V[21]*(144*(V[37]*V[23]+V[21]*V[2])))));
C[12]=+S[4]*(S[1]*(S[0]*(S[2]*(V[12]*(V[36]*(V[43]*(4*(V[37]*V[22]+V[20]*
 V[2]))))))));
C[11]=+S[3]*(S[1]*(S[0]*(V[12]*(V[27]*(V[36]*(16*(V[37]*V[22]+V[20]*
 V[2])))))));
C[10]=+S[3]*(S[1]*(S[0]*(V[21]*(240*(V[37]*V[23]+V[21]*V[2])))));
C[9]=+S[6]*(S[3]*(S[0]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2])))));
C[8]=+S[6]*(S[3]*(V[21]*(16*(V[37]*V[23]+V[21]*V[2]))));
C[7]=+S[3]*(S[1]*(S[0]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2])))));
C[6]=+S[3]*(S[1]*(V[21]*(32*(V[37]*V[23]+V[21]*V[2]))));
C[5]=+S[6]*(S[3]*(S[0]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2])))));
C[4]=+S[6]*(S[3]*(V[21]*(48*(V[37]*V[23]+V[21]*V[2]))));
C[3]=+S[3]*(S[1]*(S[0]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2])))));
C[2]=+S[3]*(S[1]*(V[21]*(96*(V[37]*V[23]+V[21]*V[2]))));
S[8]=V[17]*V[17]*V[17]*V[17];
S[9]=V[2]*V[2]*V[2]*V[2]*V[2];
C[1]=+9*S[8]*S[9];
S[10]=V[49]*V[49]*V[49];
S[11]=V[1]*V[1]*V[1]*V[1];
C[0]=+2*S[10]*S[11];
}
REAL F953_out(double GG,REAL*DP,REAL*Q0,REAL*Q1,REAL*Q2)
{
/*
                        N2     !  N2                      B          
                     /==<======!==<==\                 /==<==        
                     |  P3     !  P3 |                 |  P1         
                     |         !     |                 |             
      B     t     W+ |  e2     !  e2 |  W+    t     A  |  b          
    ==<==@==<==@-2<--@==>======!==>==@--<4-@==<==@---3-@==>==        
      P1 |  P8 |  P9    P4     !  P4   -PC | -PB | -PA    P2         
         |     |               !           |     |                   
         |     |        B      !  B        |     |                   
       W+|P7   \========<======!==<========/     |                   
         1              P6     !  P6             |                   
         |                     !                 |                   
      b  |              u      !  u              |                   
    ==>==@==============>======!==>==============/                   
      P2                P5     !  P5                                 
*/
REAL N,D,R;
REAL * V=va_out;
static REAL C[150];REAL S[2];REAL tmp[12];                                  
     
if(CalcConst) C953(C);
N=-C[0];
S[0]=V[50]*V[50]*V[50]*V[50]*V[50];
D=+C[1]*S[0];
tmp[0]=+DP[7]*(V[50]*(V[50]*(DP[3]*(DP[0]*(C[103]*(-DP[0]-DP[6])+C[66]*
 DP[7]-C[104])+DP[6]*(C[66]*DP[7]-C[104]-C[74]*V[50])+DP[7]*(C[66]*DP[7]-
 C[81])+C[69]*V[50]-C[78])+DP[4]*(DP[6]*(C[66]*(-DP[6]-DP[7])-C[75]-C[64]*
 DP[0])+C[69]*V[50]-C[84]-C[67]*DP[0])+DP[9]*(DP[0]*(C[64]*(DP[0]-DP[7])+
 C[68]+C[66]*DP[6])+C[71]+C[67]*DP[6]-C[65]*DP[7]))+DP[3]*(C[113]-C[111]*
 DP[0]-C[105]*DP[6]+C[99]*DP[7])+DP[4]*(C[69]*(DP[6]+DP[7])+C[79])+DP[1]*(
 C[58]*DP[6]-C[48])+DP[9]*(-C[72]-C[69]*DP[0])-C[48]*DP[2])+DP[0]*(DP[6]*(
 C[50]*(DP[3]-DP[8])+C[107]*DP[1]+C[88]*DP[2]+C[2]*DP[4]-C[6]*DP[9])+DP[0]*(
 C[107]*DP[1]+C[50]*DP[3]-C[88]*DP[8]-C[2]*DP[9])+DP[7]*(C[88]*DP[8]-C[50]*
 DP[1]-C[6]*DP[3]+C[2]*DP[9])+C[108]*DP[1]+C[59]*DP[2]+C[51]*DP[3]+C[7]*
 DP[4]-C[90]*DP[8]-C[10]*DP[9])+DP[6]*(DP[7]*(C[50]*(DP[2]-DP[1])+C[6]*(
 DP[4]-DP[3]))+DP[2]*(C[3]+C[50]*DP[6])+DP[4]*(C[23]+C[6]*DP[6])+C[108]*
 DP[1]+C[51]*DP[3]-C[59]*DP[8]-C[7]*DP[9])+DP[7]*(DP[1]*(C[7]-C[50]*DP[7])+
 DP[3]*(C[37]-C[6]*DP[7])+C[89]*DP[8]+C[3]*DP[9])+C[95]*DP[1]+C[62]*DP[2]+
 C[26]*DP[3]+C[39]*DP[4]-C[91]*DP[8]-C[13]*DP[9]);
tmp[1]=+DP[7]*(DP[5]*(DP[10]*(DP[0]*(C[50]*(-DP[0]-DP[6])+C[6]*DP[7]-C[51])+
 DP[6]*(C[6]*DP[7]-C[51]-C[22]*V[50])+DP[7]*(C[6]*DP[7]-C[37])+C[11]*V[50]-
 C[26])+DP[11]*(DP[6]*(C[6]*(-DP[6]-DP[7])-C[23]-C[2]*DP[0])+C[11]*V[50]-
 C[39]-C[7]*DP[0])+DP[14]*(DP[0]*(C[2]*(DP[0]-DP[7])+C[10]+C[6]*DP[6])+
 C[13]+C[7]*DP[6]-C[3]*DP[7]))+DP[13]*(DP[1]*(DP[0]*(C[50]*(DP[0]+DP[6])+
 C[51]-C[6]*DP[7])+DP[6]*(C[51]+C[22]*V[50]-C[6]*DP[7])+DP[7]*(C[37]-C[6]*
 DP[7])+C[26]-C[11]*V[50])+DP[2]*(DP[6]*(C[6]*(DP[6]+DP[7])+C[23]+C[2]*
 DP[0])+C[39]-C[11]*V[50]+C[7]*DP[0])+DP[8]*(DP[0]*(C[2]*(DP[7]-DP[0])-
 C[10]-C[6]*DP[6])+C[3]*DP[7]-C[13]-C[7]*DP[6])))+DP[6]*(DP[5]*(V[50]*(
 DP[0]*(C[58]*DP[10]-C[22]*DP[14])+DP[11]*(C[11]+C[22]*DP[6])+C[61]*DP[10]-
 C[11]*DP[14])+DP[0]*(C[59]*DP[10]+C[37]*DP[11]-C[23]*DP[14])+DP[11]*(C[57]+
 C[23]*DP[6])+C[62]*DP[10]-C[26]*DP[14])+DP[13]*(V[50]*(DP[0]*(C[22]*DP[8]-
 C[58]*DP[1])+DP[2]*(-C[11]-C[22]*DP[6])+C[11]*DP[8]-C[61]*DP[1])+DP[0]*(
 C[23]*DP[8]-C[59]*DP[1]-C[37]*DP[2])+DP[2]*(-C[57]-C[23]*DP[6])+C[26]*
 DP[8]-C[62]*DP[1]))+DP[0]*(DP[5]*(DP[14]*(-C[39]-C[11]*V[50]-C[37]*DP[0]))+
 DP[8]*(DP[13]*(C[39]+C[11]*V[50]+C[37]*DP[0])))+V[50]*(C[14]*(DP[13]*DP[8]-
 DP[14]*DP[5]))+C[41]*(DP[13]*DP[8]-DP[14]*DP[5]);
tmp[2]=+DP[5]*(DP[6]*(C[22]*(DP[12]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[13]*(DP[0]*(-DP[8]-DP[9])+DP[6]*(DP[2]+
 DP[4])+DP[7]*(-DP[1]-DP[3]))+DP[5]*(DP[10]*DP[7]-DP[11]*DP[6]+DP[14]*
 DP[0]))+C[11]*(DP[12]*(DP[2]+DP[4]-DP[8]-DP[9])+DP[13]*(DP[2]+DP[4]-DP[8]-
 DP[9])+DP[5]*(DP[14]-DP[11])+DP[10]*DP[6]+DP[11]*DP[7])+DP[0]*(C[58]*(
 DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*DP[5])+C[144]*DP[10]-
 C[38]*DP[11]-C[29]*DP[14])+C[61]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+
 DP[13])-DP[10]*DP[5])+DP[10]*(C[147]-C[136]*DP[7])+DP[11]*(C[17]+C[29]*
 DP[6])-C[33]*DP[14])+DP[7]*(C[11]*(DP[12]*(DP[1]+DP[2]+DP[3]+DP[4])+DP[13]*
 (DP[1]+DP[2]+DP[3]+DP[4])+DP[5]*(-DP[10]-DP[11])+DP[11]*DP[7]-DP[14]*
 DP[0])+DP[10]*(C[142]-C[54]*DP[0]+C[48]*DP[7])+C[33]*DP[11]-C[14]*DP[14])+
 DP[0]*(C[11]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 DP[14]*(C[38]*DP[0]-C[44]))+C[14]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-
 DP[13])+DP[14]*DP[5])-C[20]*DP[14]);
tmp[3]=+DP[12]*(DP[6]*(DP[0]*(C[11]*DP[2]-C[128]*DP[1]-C[121]*DP[3]-C[83]*
 DP[4]+C[94]*DP[8]-C[77]*DP[9])+DP[6]*(C[70]*DP[3]-C[48]*DP[1]-C[94]*DP[2]+
 C[77]*DP[4])+DP[7]*(C[109]*DP[1]-C[48]*DP[2]+C[106]*DP[3]+C[70]*DP[4])+
 C[96]*DP[8]-C[131]*DP[1]-C[49]*DP[2]-C[125]*DP[3]-C[12]*DP[4]-C[80]*DP[9])+
 DP[7]*(DP[0]*(C[61]*DP[1]-C[112]*DP[3]+C[48]*DP[8]-C[70]*DP[9])+DP[7]*(
 C[100]*DP[3]-C[101]*DP[1]-C[48]*DP[2]+C[70]*DP[4])+C[80]*DP[4]-C[116]*
 DP[1]-C[96]*DP[2]-C[114]*DP[3]+C[92]*DP[8]-C[73]*DP[9])+DP[0]*(DP[0]*(
 C[83]*DP[9]-C[11]*DP[8])+C[97]*DP[8]+C[86]*DP[9])+C[93]*DP[8]+C[15]*DP[9])+
 DP[13]*(DP[6]*(DP[1]*(C[52]*DP[7]-C[63]-C[60]*DP[0]-C[11]*DP[6])+DP[2]*(
 C[38]*DP[0]-C[12]-C[24]*DP[6]-C[11]*DP[7])+DP[8]*(C[27]+C[24]*DP[0]))+
 DP[7]*(DP[1]*(C[54]*DP[0]-C[56]-C[48]*DP[7])+DP[2]*(-C[27]-C[11]*DP[7])+
 DP[8]*(C[14]+C[11]*DP[0]))+DP[8]*(DP[0]*(C[40]-C[38]*DP[0])+C[15]))+tmp[2];
tmp[4]=+DP[6]*(C[6]*(DP[7]*(DP[12]*(DP[1]-DP[2]+DP[3]-DP[4])+DP[13]*(DP[1]-
 DP[2]+DP[3]-DP[4])+DP[5]*(DP[11]-DP[10]))+DP[6]*(DP[2]*(-DP[12]-DP[13])+
 DP[4]*(-DP[12]-DP[13])+DP[11]*DP[5]))+DP[12]*(C[51]*(-DP[1]-DP[3])+C[23]*(-
 DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[13]*(C[51]*(-DP[1]-DP[3])+C[23]*(-
 DP[2]-DP[4])+C[7]*(DP[8]+DP[9]))+DP[11]*(C[8]*(DP[6]+DP[7])+C[30]+C[23]*
 DP[5])+DP[10]*(C[137]+C[51]*DP[5]-C[8]*DP[7])+DP[14]*(-C[9]-C[7]*DP[5]))+
 DP[7]*(DP[7]*(C[6]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])-C[8]*DP[10])+C[37]*(DP[1]*(-DP[12]-DP[13])+DP[3]*(-DP[12]-DP[13])+
 DP[10]*DP[5])+C[3]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[42]*DP[10]+C[5]*DP[14])+DP[12]*(C[26]*(-DP[1]-DP[3])+C[39]*(-
 DP[2]-DP[4])+C[13]*(DP[8]+DP[9]))+DP[13]*(C[26]*(-DP[1]-DP[3])+C[39]*(-
 DP[2]-DP[4])+C[13]*(DP[8]+DP[9]))+DP[5]*(C[26]*DP[10]+C[39]*DP[11]-C[13]*
 DP[14])+C[34]*DP[10]+C[45]*DP[11]-C[19]*DP[14];
tmp[5]=+DP[6]*(DP[0]*(DP[12]*(C[59]*(DP[1]+DP[3])+C[37]*(DP[2]+DP[4])+C[23]*
 (-DP[8]-DP[9]))+DP[13]*(C[59]*(DP[1]+DP[3])+C[37]*(DP[2]+DP[4])+C[23]*(-
 DP[8]-DP[9]))+DP[5]*(C[23]*DP[14]-C[59]*DP[10]-C[37]*DP[11])+C[30]*DP[14]-
 C[145]*DP[10]-C[42]*DP[11])+DP[12]*(DP[2]*(C[57]+C[23]*DP[6])+DP[4]*(C[57]+
 C[23]*DP[6])+C[62]*(DP[1]+DP[3])+C[26]*(-DP[8]-DP[9]))+DP[13]*(DP[2]*(
 C[57]+C[23]*DP[6])+DP[4]*(C[57]+C[23]*DP[6])+C[62]*(DP[1]+DP[3])+C[26]*(-
 DP[8]-DP[9]))+DP[5]*(DP[11]*(-C[57]-C[23]*DP[6])+C[26]*DP[14]-C[62]*
 DP[10])+DP[11]*(-C[132]-C[30]*DP[6])+C[34]*DP[14]-C[148]*DP[10])+DP[0]*(
 DP[0]*(C[37]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+
 C[42]*DP[14])+C[39]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*
 DP[5])+C[45]*DP[14])+C[41]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+
 DP[14]*DP[5])+C[47]*DP[14];
tmp[6]=+V[50]*(V[50]*(DP[12]*(DP[6]*(V[50]*(V[50]*(V[50]*(DP[0]*(C[118]*
 DP[3]-C[74]*DP[9])+DP[4]*(C[69]+C[74]*DP[6])+C[122]*DP[3]-C[69]*DP[9])+
 DP[0]*(C[119]*DP[3]+C[81]*DP[4]-C[75]*DP[9])+DP[4]*(C[117]+C[75]*DP[6])+
 C[123]*DP[3]-C[78]*DP[9])+DP[0]*(C[120]*DP[3]-C[126]*DP[1]-C[82]*DP[4]+
 C[58]*DP[8]-C[76]*DP[9])+DP[6]*(C[69]*DP[3]-C[58]*DP[2]+C[76]*DP[4])+C[48]*
 (DP[8]-DP[2])+C[124]*DP[3]-C[129]*DP[1]+C[70]*DP[4]-C[79]*DP[9])+DP[0]*(
 C[3]*DP[8]-C[127]*DP[1]-C[7]*DP[2]-C[59]*DP[3]-C[37]*DP[4]+C[23]*DP[9])+
 DP[2]*(-C[39]-C[3]*DP[6])+DP[4]*(-C[57]-C[23]*DP[6])+C[95]*DP[8]-C[130]*
 DP[1]-C[62]*DP[3]+C[26]*DP[9])+DP[9]*(V[50]*(V[50]*(DP[0]*(-C[84]-C[69]*
 V[50]-C[81]*DP[0])-C[87]-C[72]*V[50])+DP[0]*(C[82]*DP[0]-C[85])-C[73])+
 DP[0]*(C[39]+C[37]*DP[0])+C[41])+DP[8]*(DP[0]*(C[62]+C[48]*V[50]+C[7]*
 DP[0])+C[98]+C[92]*V[50])+tmp[0])+tmp[1])+tmp[3]);
tmp[7]=+DP[7]*(DP[12]*(DP[0]*(C[54]*(-DP[1]-DP[3])+C[11]*(-DP[8]-DP[9]))+
 DP[7]*(C[48]*(DP[1]+DP[3])+C[11]*(DP[2]+DP[4]))+C[56]*(DP[1]+DP[3])+C[27]*(
 DP[2]+DP[4])+C[14]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[54]*(-DP[1]-DP[3])+
 C[11]*(-DP[8]-DP[9]))+DP[7]*(C[48]*(DP[1]+DP[3])+C[11]*(DP[2]+DP[4]))+
 C[56]*(DP[1]+DP[3])+C[27]*(DP[2]+DP[4])+C[14]*(-DP[8]-DP[9]))+DP[5]*(
 DP[10]*(C[54]*DP[0]-C[56]-C[48]*DP[7])+DP[11]*(-C[27]-C[11]*DP[7])+DP[14]*(
 C[14]+C[11]*DP[0]))+DP[10]*(C[133]*DP[7]-C[143]-C[140]*DP[0])+DP[11]*(
 C[35]+C[17]*DP[7])+DP[14]*(-C[20]-C[17]*DP[0]))+DP[0]*(DP[0]*(C[38]*(DP[8]*
 (DP[12]+DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])+C[43]*DP[14])+C[40]*(
 DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[46]*DP[14])+
 C[15]*(DP[8]*(-DP[12]-DP[13])+DP[9]*(-DP[12]-DP[13])+DP[14]*DP[5])+C[21]*
 DP[14];
tmp[8]=+DP[5]*(DP[6]*(DP[12]*(DP[0]*(C[60]*(DP[1]+DP[3])+C[38]*(-DP[2]-
 DP[4])+C[24]*(-DP[8]-DP[9]))+DP[6]*(C[11]*(DP[1]+DP[3])+C[24]*(DP[2]+
 DP[4]))+DP[7]*(C[52]*(-DP[1]-DP[3])+C[11]*(DP[2]+DP[4]))+C[63]*(DP[1]+
 DP[3])+C[12]*(DP[2]+DP[4])+C[27]*(-DP[8]-DP[9]))+DP[13]*(DP[0]*(C[60]*(
 DP[1]+DP[3])+C[38]*(-DP[2]-DP[4])+C[24]*(-DP[8]-DP[9]))+DP[6]*(C[11]*(
 DP[1]+DP[3])+C[24]*(DP[2]+DP[4]))+DP[7]*(C[52]*(-DP[1]-DP[3])+C[11]*(DP[2]+
 DP[4]))+C[63]*(DP[1]+DP[3])+C[12]*(DP[2]+DP[4])+C[27]*(-DP[8]-DP[9]))+
 DP[5]*(DP[10]*(C[52]*DP[7]-C[63]-C[60]*DP[0]-C[11]*DP[6])+DP[11]*(C[38]*
 DP[0]-C[12]-C[24]*DP[6]-C[11]*DP[7])+DP[14]*(C[27]+C[24]*DP[0]))+DP[10]*(
 C[17]*DP[6]-C[149]-C[146]*DP[0]+C[138]*DP[7])+DP[11]*(C[31]*DP[6]-C[18]-
 C[43]*DP[0]+C[17]*DP[7])+DP[14]*(-C[35]-C[31]*DP[0]))+tmp[7]);
tmp[9]=+V[50]*(DP[5]*(DP[7]*(DP[0]*(DP[12]*(DP[6]*(C[50]*(-DP[1]-DP[3])+
 C[2]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+DP[0]*(C[50]*(-DP[1]-DP[3])+C[2]*(
 DP[8]+DP[9]))+DP[7]*(C[6]*(DP[1]+DP[3])+C[2]*(-DP[8]-DP[9]))+C[51]*(-DP[1]-
 DP[3])+C[7]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[13]*(DP[6]*(C[50]*(-
 DP[1]-DP[3])+C[2]*(-DP[2]-DP[4])+C[6]*(DP[8]+DP[9]))+DP[0]*(C[50]*(-DP[1]-
 DP[3])+C[2]*(DP[8]+DP[9]))+DP[7]*(C[6]*(DP[1]+DP[3])+C[2]*(-DP[8]-DP[9]))+
 C[51]*(-DP[1]-DP[3])+C[7]*(-DP[2]-DP[4])+C[10]*(DP[8]+DP[9]))+DP[5]*(
 DP[10]*(C[50]*(DP[0]+DP[6])+C[51]-C[6]*DP[7])+DP[14]*(C[2]*(DP[7]-DP[0])-
 C[10]-C[6]*DP[6])+DP[11]*(C[7]+C[2]*DP[6]))+DP[10]*(C[135]*(DP[0]+DP[6])+
 C[137]-C[8]*DP[7])+DP[14]*(C[4]*(DP[7]-DP[0])-C[16]-C[8]*DP[6])+DP[11]*(
 C[9]+C[4]*DP[6]))+tmp[4])+tmp[5])+tmp[6]);
tmp[10]=+DP[7]*(DP[12]*(DP[0]*(C[55]*(-DP[1]-DP[3])+C[12]*(-DP[8]-DP[9]))+
 DP[7]*(C[49]*(DP[1]+DP[3])+C[12]*(DP[2]+DP[4]))+C[15]*(-DP[1]-DP[3]-DP[8]-
 DP[9])+C[28]*(DP[2]+DP[4]))+DP[13]*(DP[0]*(C[55]*(-DP[1]-DP[3])+C[12]*(-
 DP[8]-DP[9]))+DP[7]*(C[49]*(DP[1]+DP[3])+C[12]*(DP[2]+DP[4]))+C[15]*(-
 DP[1]-DP[3]-DP[8]-DP[9])+C[28]*(DP[2]+DP[4]))+DP[5]*(DP[10]*(C[15]+C[55]*
 DP[0]-C[49]*DP[7])+DP[11]*(-C[28]-C[12]*DP[7])+DP[14]*(C[15]+C[12]*DP[0]))+
 DP[10]*(C[21]+C[141]*DP[0]-C[134]*DP[7])+DP[11]*(-C[36]-C[18]*DP[7])+
 DP[14]*(C[21]+C[18]*DP[0]))+DP[0]*(DP[0]*(C[25]*(DP[8]*(DP[12]+DP[13])+
 DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[32]*DP[14])+C[28]*(DP[8]*(DP[12]+
 DP[13])+DP[9]*(DP[12]+DP[13])-DP[14]*DP[5])-C[36]*DP[14]);
S[1]=V[50]*V[50];
tmp[11]=+S[1]*(DP[12]*(DP[6]*(DP[0]*(C[12]*(DP[2]+DP[3]+DP[8])+C[25]*(DP[4]+
 DP[9])+C[49]*DP[1])+DP[6]*(C[12]*(-DP[2]-DP[3])-C[49]*DP[1]-C[25]*DP[4])+
 DP[7]*(-C[110]*DP[1]-C[49]*DP[2]-C[53]*DP[3]-C[12]*DP[4])+C[15]*(DP[1]+
 DP[8])+C[28]*(DP[3]+DP[9]))+DP[7]*(DP[0]*(C[115]*DP[1]+C[55]*DP[3]+C[49]*
 DP[8]+C[12]*DP[9])+DP[7]*(C[49]*(-DP[2]-DP[3])-C[102]*DP[1]-C[12]*DP[4])+
 C[15]*(DP[3]-DP[2]+DP[9])+C[93]*(DP[1]+DP[8])-C[28]*DP[4])+DP[0]*(DP[0]*(-
 C[12]*DP[8]-C[25]*DP[9])-C[15]*DP[8]-C[28]*DP[9]))+DP[13]*(DP[6]*(DP[1]*(
 C[12]*(DP[0]-DP[6])+C[28]-C[53]*DP[7])+DP[2]*(C[25]*(DP[0]-DP[6])-C[12]*
 DP[7])+DP[8]*(C[28]+C[25]*DP[0]))+DP[7]*(DP[1]*(C[15]+C[55]*DP[0]-C[49]*
 DP[7])+DP[2]*(-C[28]-C[12]*DP[7])+DP[8]*(C[15]+C[12]*DP[0]))+DP[0]*(DP[8]*
 (-C[28]-C[25]*DP[0])))+tmp[8]+tmp[9]);
R=+DP[5]*(DP[6]*(DP[0]*(C[25]*(DP[12]*(-DP[2]-DP[4]-DP[8]-DP[9])+DP[13]*(-
 DP[2]-DP[4]-DP[8]-DP[9])+DP[5]*(DP[11]+DP[14]))+C[12]*(DP[1]*(-DP[12]-
 DP[13])+DP[3]*(-DP[12]-DP[13])+DP[10]*DP[5])+C[32]*(DP[11]+DP[14])+C[18]*
 DP[10])+DP[6]*(C[12]*(DP[1]*(DP[12]+DP[13])+DP[3]*(DP[12]+DP[13])-DP[10]*
 DP[5])+C[25]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+DP[13])-DP[11]*DP[5])-
 C[18]*DP[10]-C[32]*DP[11])+DP[7]*(C[53]*(DP[1]*(DP[12]+DP[13])+DP[3]*(
 DP[12]+DP[13])-DP[10]*DP[5])+C[12]*(DP[2]*(DP[12]+DP[13])+DP[4]*(DP[12]+
 DP[13])-DP[11]*DP[5])-C[139]*DP[10]-C[18]*DP[11])+C[28]*(DP[12]*(-DP[1]-
 DP[3]-DP[8]-DP[9])+DP[13]*(-DP[1]-DP[3]-DP[8]-DP[9])+DP[5]*(DP[10]+
 DP[14]))+C[36]*(DP[10]+DP[14]))+tmp[10])+tmp[11];
R*=(N/D)*Q1[5]*Q2[1]*Q2[2]*Q1[6];
if(gswidth_out ) R=R*Q0[3]*Q0[4];
 if(cb_coeff_out)
 {
 }
 return R;
}
