/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F965_out,F966_out,F967_out,F968_out,F969_out,F970_out,F971_out
 ,F972_out,F973_out,F974_out,F975_out,F976_out,F977_out,F978_out,F979_out
 ,F980_out,F981_out,F982_out,F983_out,F984_out;
static FNN *Farr[20]={&F965_out,&F966_out,&F967_out,&F968_out,&F969_out
 ,&F970_out,&F971_out,&F972_out,&F973_out,&F974_out,&F975_out,&F976_out
 ,&F977_out,&F978_out,&F979_out,&F980_out,&F981_out,&F982_out,&F983_out
 ,&F984_out};
extern DNN S253_out;
REAL S253_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[12];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=0;  Qtxt[6]="\2\5";
width[5]=0.; mass[5]=V[12];  Qtxt[5]="\1\5";
width[4]=0.; mass[4]=0;  Qtxt[4]="\1\5";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
*err=*err|prepDen(7,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<20;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
