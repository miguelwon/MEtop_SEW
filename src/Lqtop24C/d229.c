/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F864_out,F865_out,F866_out,F867_out,F868_out,F869_out;
static FNN *Farr[6]={&F864_out,&F865_out,&F866_out,&F867_out,&F868_out
 ,&F869_out};
extern DNN S229_out;
REAL S229_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[6],width[6];
char * Qtxt[6];
REAL Q0[6],Q1[6],Q2[6];
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\5";
width[4]=0.; mass[4]=V[6];  Qtxt[4]="\1\5";
width[3]=V[8]; mass[3]=V[50];  Qtxt[3]="\3\4";
width[2]=V[13]; mass[2]=V[12];  Qtxt[2]="\1\2\5";
width[1]=V[8]; mass[1]=V[50];  Qtxt[1]="\1\2";
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
