/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F882_out,F883_out,F884_out,F885_out,F886_out,F887_out;
static FNN *Farr[6]={&F882_out,&F883_out,&F884_out,&F885_out,&F886_out
 ,&F887_out};
extern DNN S232_out;
REAL S232_out(double GG, REAL * momenta,int * err)
{REAL  ans=0;
REAL DP[15];
REAL* V=va_out;
REAL mass[6],width[6];
char * Qtxt[6];
REAL Q0[6],Q1[6],Q2[6];
width[5]=0.; mass[5]=V[15];  Qtxt[5]="\1\5";
width[4]=0.; mass[4]=V[50];  Qtxt[4]="\2\5";
width[2]=V[8]; mass[2]=V[50];  Qtxt[2]="\3\4";
width[1]=V[13]; mass[1]=V[12];  Qtxt[1]="\1\2\5";
width[3]=0.; mass[3]=V[6];  Qtxt[3]="\1\5";
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
