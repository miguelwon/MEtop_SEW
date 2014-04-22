/*******************************
*    CalcHEP  3.2*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F770_out,F771_out,F772_out,F773_out,F774_out,F775_out,F776_out
 ,F777_out,F778_out,F779_out,F780_out,F781_out,F782_out,F783_out,F784_out
 ,F785_out,F786_out,F787_out,F788_out,F789_out,F790_out,F791_out;
static FNN *Farr[22]={&F770_out,&F771_out,&F772_out,&F773_out,&F774_out
 ,&F775_out,&F776_out,&F777_out,&F778_out,&F779_out,&F780_out,&F781_out
 ,&F782_out,&F783_out,&F784_out,&F785_out,&F786_out,&F787_out,&F788_out
 ,&F789_out,&F790_out,&F791_out};
extern DNN S207_out;
REAL S207_out(double GG, REAL * momenta,int * err)
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
