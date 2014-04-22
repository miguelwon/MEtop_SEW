/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F871_out,F872_out,F873_out,F874_out,F875_out,F876_out,F877_out
 ,F878_out,F879_out,F880_out,F881_out;
static FNN *Farr[11]={&F871_out,&F872_out,&F873_out,&F874_out,&F875_out
 ,&F876_out,&F877_out,&F878_out,&F879_out,&F880_out,&F881_out};
extern DNN S231_out;
REAL S231_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[7],width[7];
char * Qtxt[7];
REAL Q0[7],Q1[7],Q2[7];
width[6]=0.; mass[6]=V[15];  Qtxt[6]="\1\6";
width[5]=0.; mass[5]=V[6];  Qtxt[5]="\1\6";
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\6";
width[3]=V[8]; mass[3]=V[50];  Qtxt[3]="\3\4";
width[2]=V[13]; mass[2]=V[12];  Qtxt[2]="\1\2\6";
width[1]=V[8]; mass[1]=V[50];  Qtxt[1]="\1\2";
*err=*err|prepDen(6,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<11;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
