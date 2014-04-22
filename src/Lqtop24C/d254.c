/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F985_out,F986_out,F987_out,F988_out,F989_out,F990_out,F991_out
 ,F992_out,F993_out,F994_out,F995_out,F996_out,F997_out,F998_out,F999_out
 ,F1000_out,F1001_out,F1002_out,F1003_out,F1004_out,F1005_out;
static FNN *Farr[21]={&F985_out,&F986_out,&F987_out,&F988_out,&F989_out
 ,&F990_out,&F991_out,&F992_out,&F993_out,&F994_out,&F995_out,&F996_out
 ,&F997_out,&F998_out,&F999_out,&F1000_out,&F1001_out,&F1002_out,&F1003_out
 ,&F1004_out,&F1005_out};
extern DNN S254_out;
REAL S254_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[12];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[10];  Qtxt[6]="\2\5";
width[5]=0.; mass[5]=V[12];  Qtxt[5]="\1\5";
width[4]=0.; mass[4]=V[10];  Qtxt[4]="\1\5";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=0;  Qtxt[3]="\1\2";
*err=*err|prepDen(7,nin_out,BWrange_out*
 BWrange_out,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(6, momenta, DP);
{int i; for(i=0;i<21;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
