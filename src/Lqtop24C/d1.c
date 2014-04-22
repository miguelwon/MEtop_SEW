/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F1_out,F2_out,F3_out,F4_out,F5_out,F6_out,F7_out,F8_out,F9_out
 ,F10_out,F11_out,F12_out,F13_out;
static FNN *Farr[13]={&F1_out,&F2_out,&F3_out,&F4_out,&F5_out,&F6_out
 ,&F7_out,&F8_out,&F9_out,&F10_out,&F11_out,&F12_out,&F13_out};
extern DNN S1_out;
REAL S1_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[7],width[7];
char * Qtxt[7];
REAL Q0[7],Q1[7],Q2[7];
width[6]=0.; mass[6]=V[6];  Qtxt[6]="\2\5";
width[5]=0.; mass[5]=0;  Qtxt[5]="\2\5";
width[4]=0.; mass[4]=V[6];  Qtxt[4]="\1\5";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\5";
*err=*err|prepDen(6,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<13;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
