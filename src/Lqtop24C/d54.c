/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F309_out,F310_out,F311_out,F312_out,F313_out,F314_out,F315_out
 ,F316_out,F317_out,F318_out,F319_out,F320_out,F321_out,F322_out,F323_out
 ,F324_out,F325_out,F326_out,F327_out,F328_out,F329_out,F330_out;
static FNN *Farr[22]={&F309_out,&F310_out,&F311_out,&F312_out,&F313_out
 ,&F314_out,&F315_out,&F316_out,&F317_out,&F318_out,&F319_out,&F320_out
 ,&F321_out,&F322_out,&F323_out,&F324_out,&F325_out,&F326_out,&F327_out
 ,&F328_out,&F329_out,&F330_out};
extern DNN S54_out;
REAL S54_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[12],width[12];
char * Qtxt[12];
REAL Q0[12],Q1[12],Q2[12];
width[11]=0.; mass[11]=V[15];  Qtxt[11]="\2\6";
width[10]=0.; mass[10]=V[15];  Qtxt[10]="\2\5";
width[9]=0.; mass[9]=V[50];  Qtxt[9]="\1\5";
width[8]=0.; mass[8]=V[50];  Qtxt[8]="\1\6";
width[7]=0.; mass[7]=V[6];  Qtxt[7]="\2\6";
width[6]=0.; mass[6]=V[6];  Qtxt[6]="\2\5";
width[3]=V[13]; mass[3]=V[12];  Qtxt[3]="\1\2\6";
width[5]=0.; mass[5]=0;  Qtxt[5]="\2\6";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[4]=0.; mass[4]=0;  Qtxt[4]="\2\5";
*err=*err|prepDen(11,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<22;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
