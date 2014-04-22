/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F911_out,F912_out,F913_out,F914_out,F915_out,F916_out;
static FNN *Farr[6]={&F911_out,&F912_out,&F913_out,&F914_out,&F915_out
 ,&F916_out};
extern DNN S235_out;
REAL S235_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[6],width[6];
char * Qtxt[6];
REAL Q0[6],Q1[6],Q2[6];
width[4]=V[16]; mass[4]=V[15];  Qtxt[4]="\1\2";
width[3]=V[7]; mass[3]=V[6];  Qtxt[3]="\1\2";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[5]=0.; mass[5]=V[50];  Qtxt[5]="\1\5";
*err=*err|prepDen(5,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<6;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}