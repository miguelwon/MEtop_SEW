/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F1026_out,F1027_out,F1028_out,F1029_out,F1030_out,F1031_out
 ,F1032_out,F1033_out,F1034_out,F1035_out,F1036_out,F1037_out,F1038_out
 ,F1039_out,F1040_out,F1041_out,F1042_out,F1043_out,F1044_out,F1045_out
 ,F1046_out;
static FNN *Farr[21]={&F1026_out,&F1027_out,&F1028_out,&F1029_out,&F1030_out
 ,&F1031_out,&F1032_out,&F1033_out,&F1034_out,&F1035_out,&F1036_out
 ,&F1037_out,&F1038_out,&F1039_out,&F1040_out,&F1041_out,&F1042_out
 ,&F1043_out,&F1044_out,&F1045_out,&F1046_out};
extern DNN S256_out;
REAL S256_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[8],width[8];
char * Qtxt[8];
REAL Q0[8],Q1[8],Q2[8];
width[7]=0.; mass[7]=V[10];  Qtxt[7]="\2\5";
width[6]=0.; mass[6]=V[12];  Qtxt[6]="\1\5";
width[5]=0.; mass[5]=V[12];  Qtxt[5]="\2\5";
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
