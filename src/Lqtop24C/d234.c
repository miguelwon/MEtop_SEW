/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F889_out,F890_out,F891_out,F892_out,F893_out,F894_out,F895_out
 ,F896_out,F897_out,F898_out,F899_out,F900_out,F901_out,F902_out,F903_out
 ,F904_out,F905_out,F906_out,F907_out,F908_out,F909_out,F910_out;
static FNN *Farr[22]={&F889_out,&F890_out,&F891_out,&F892_out,&F893_out
 ,&F894_out,&F895_out,&F896_out,&F897_out,&F898_out,&F899_out,&F900_out
 ,&F901_out,&F902_out,&F903_out,&F904_out,&F905_out,&F906_out,&F907_out
 ,&F908_out,&F909_out,&F910_out};
extern DNN S234_out;
REAL S234_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[12],width[12];
char * Qtxt[12];
REAL Q0[12],Q1[12],Q2[12];
width[11]=0.; mass[11]=V[15];  Qtxt[11]="\1\5";
width[10]=0.; mass[10]=V[15];  Qtxt[10]="\1\6";
width[9]=0.; mass[9]=V[6];  Qtxt[9]="\1\5";
width[8]=0.; mass[8]=V[6];  Qtxt[8]="\1\6";
width[7]=0.; mass[7]=0;  Qtxt[7]="\1\5";
width[6]=0.; mass[6]=0;  Qtxt[6]="\1\6";
width[3]=V[13]; mass[3]=V[12];  Qtxt[3]="\1\2\6";
width[5]=0.; mass[5]=V[50];  Qtxt[5]="\2\6";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[4]=0.; mass[4]=V[50];  Qtxt[4]="\2\5";
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
