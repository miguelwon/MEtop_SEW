/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F339_out,F340_out,F341_out,F342_out,F343_out,F344_out,F345_out
 ,F346_out,F347_out,F348_out,F349_out,F350_out;
static FNN *Farr[12]={&F339_out,&F340_out,&F341_out,&F342_out,&F343_out
 ,&F344_out,&F345_out,&F346_out,&F347_out,&F348_out,&F349_out,&F350_out};
extern DNN S57_out;
REAL S57_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[10],width[10];
char * Qtxt[10];
REAL Q0[10],Q1[10],Q2[10];
width[9]=0.; mass[9]=V[15];  Qtxt[9]="\1\5";
width[8]=0.; mass[8]=V[15];  Qtxt[8]="\1\6";
width[7]=0.; mass[7]=V[6];  Qtxt[7]="\1\5";
width[6]=0.; mass[6]=V[6];  Qtxt[6]="\1\6";
width[3]=V[13]; mass[3]=V[12];  Qtxt[3]="\1\2\6";
width[5]=0.; mass[5]=V[50];  Qtxt[5]="\2\6";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[4]=0.; mass[4]=V[50];  Qtxt[4]="\2\5";
*err=*err|prepDen(9,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<12;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
