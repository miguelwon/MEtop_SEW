/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F155_out,F156_out,F157_out,F158_out,F159_out,F160_out,F161_out
 ,F162_out,F163_out,F164_out,F165_out;
static FNN *Farr[11]={&F155_out,&F156_out,&F157_out,&F158_out,&F159_out
 ,&F160_out,&F161_out,&F162_out,&F163_out,&F164_out,&F165_out};
extern DNN S27_out;
REAL S27_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[7],width[7];
char * Qtxt[7];
REAL Q0[7],Q1[7],Q2[7];
width[6]=0.; mass[6]=V[15];  Qtxt[6]="\2\6";
width[3]=V[8]; mass[3]=V[50];  Qtxt[3]="\1\2";
width[5]=0.; mass[5]=V[6];  Qtxt[5]="\2\6";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\6";
width[4]=0.; mass[4]=0;  Qtxt[4]="\2\6";
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
