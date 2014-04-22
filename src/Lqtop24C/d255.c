/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F1006_out,F1007_out,F1008_out,F1009_out,F1010_out,F1011_out
 ,F1012_out,F1013_out,F1014_out,F1015_out,F1016_out,F1017_out,F1018_out
 ,F1019_out,F1020_out,F1021_out,F1022_out,F1023_out,F1024_out,F1025_out;
static FNN *Farr[20]={&F1006_out,&F1007_out,&F1008_out,&F1009_out,&F1010_out
 ,&F1011_out,&F1012_out,&F1013_out,&F1014_out,&F1015_out,&F1016_out
 ,&F1017_out,&F1018_out,&F1019_out,&F1020_out,&F1021_out,&F1022_out
 ,&F1023_out,&F1024_out,&F1025_out};
extern DNN S255_out;
REAL S255_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=0;  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[12];  Qtxt[6]="\1\5";
width[5]=0.; mass[5]=V[12];  Qtxt[5]="\2\5";
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
