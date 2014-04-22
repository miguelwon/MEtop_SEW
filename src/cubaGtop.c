int initiate(void *userdata,int *NprSub,int *qid,int *SubPorder)
{

int i,j,MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6,subpro[6];
int SubProLs[8]={122,144,149,19,54,82,85,9};
double *udata;
int randt;

*qid=0;
udata=(double *)userdata;
subpro[0]=(int) udata[1];
subpro[1]=(int) udata[2];
subpro[2]=(int) udata[3];
subpro[3]=(int) udata[5];
subpro[4]=(int) udata[6];
subpro[5]=(int) udata[4];

srand(100);
calcFunc_out();
for (i=0;i<5;i++)
{
        if (subpro[i]==0) subpro[i]=21;
}


if ((abs(subpro[3]) == 2) || (abs(subpro[4])==3) ) *qid=1;
for (i=2;i<5;i++)
{
	if (subpro[i]==11)
	{
	subpro[i]=13;
	}
	else if (subpro[i]==-11)
	{
	subpro[i]=-13;
	}
	else if (subpro[i]==12)
	{
	subpro[i]=14;
	}
	else if (subpro[i]==-12)
	{
	subpro[i]=-14;
	}
	else if (subpro[i]==15)
	{
	subpro[i]=13;
	}
	else if (subpro[i]==-15)
	{
	subpro[i]=-13;
	}
	else if (subpro[i]==16)
	{
	subpro[i]=14;
	}
	else if (subpro[i]==-16)
	{
	subpro[i]=-14;
	}
	else if ((subpro[i]==2) && (i >1) )
	{
	subpro[i]=14;
	}
	else if ((subpro[i]==-2) && (i >1) )
	{
	subpro[i]=-14;
	}
	else if ((subpro[i]==4) && (i >1) )
	{
	subpro[i]=14;
	}
	else if ((subpro[i]==-4) && (i >1) )
	{
	subpro[i]=-14;
	}
	else if ((subpro[i]==1) && (i >1) )
	{
	subpro[i]=13;
	}
	else if ((subpro[i]==-1) && (i >1) )
	{
	subpro[i]=-13;
	}
	else if ((subpro[i]==3) && (i >1) )
	{
	subpro[i]=13;
	}
	else if ((subpro[i]==-3) && (i >1) )
	{
	subpro[i]=-13;
	}
	else continue;
}


*NprSub=0;
for (i=1;i<=nprc_out;i++)
{
        *NprSub=0;
        *SubPorder=0;
        pinf_out(i,1,NULL,&MCcode1);
        pinf_out(i,2,NULL,&MCcode2);
        pinf_out(i,3,NULL,&MCcode3);
        pinf_out(i,4,NULL,&MCcode4);
        pinf_out(i,5,NULL,&MCcode5);
        pinf_out(i,6,NULL,&MCcode6);

        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5) && (subpro[5]==MCcode6) )
        {
                *SubPorder=1;
                *NprSub=i;
                break;
        }
        else continue;
}
if (*NprSub == 0) 
{
printf("Erro Dtop C interface %d %d %d %d %d %d \n",subpro[0],subpro[1],subpro[2],subpro[3],subpro[4],subpro[5]);

return 1;
}

return 0;

}


int finalization()
{
destroy_cb_out();
}


static int IntGtop(const int *ndim, const double xx[],
  const int *ncomp, double ff[], void *userdata)
{
#define x3 xx[0]
#define x4 xx[1]
#define x5 xx[2]
#define x6 xx[3]
#define x7 xx[4]
#define x8 xx[5]
#define x9 xx[6]
#define f ff[0]


double *udata,Pi;
int i,j,k,NprSub,err,count;
int MCcode1,MCcode2,MCcode3,MCcode4,MCcode5,MCcode6,subpro[6],qid;
/*double x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;*/
double ECM,m1,m2,m3,mb,mn,ml;
int Flav1,Flav2,Flav2temp,pp;
double y1,y2;


double GG,pdf1,pdf2;
double Qt,Qt2,Qtmin,Qtmax,y,ymin,ymax,WTBreit1,x1t,x2t,ECMS,wt1,wt2,wt3,wt4;
double QW,QWmin,QWmax,WTBreit2,rnd1,rnd2,Fact,wtFact;
double p1[5],p2[5],p3[5],pb[5],pn[5],pl[5],ptop[5],pW[5],pvec[24],p3cm[5],ptcm[5],pcm[5];
double s,smin,smax,t,PT,PTmax,PTmin,E2,Et,jacob,mpcm,costhe,theta,phi;
double eps,WTpdf,flux;
err=0;
udata=(double *)userdata;


qid=0;
ECM=udata[0];
subpro[0]=(int) udata[1];
subpro[1]=(int) udata[2];
subpro[2]=(int) udata[3];
subpro[3]=(int) udata[5];
subpro[4]=(int) udata[6];
subpro[5]=(int) udata[4];
Flav1=subpro[0];
Flav2=subpro[1];
m1=udata[7];
m2=udata[8];
m3=udata[9];
mb=udata[10];
mn=udata[11];
ml=udata[12];
PTmin=udata[13];
ECMS=Sq(ECM);
Fact=0.389*pow(10,9);
Pi=3.1415926535;
NprSub=(int) udata[14];
qid=(int) udata[15];

pp = (int) udata[16];



//printf("!!!  %d\n",NprSub);

/*

if ((abs(subpro[3]) == 2) || (abs(subpro[4])==3) ) qid=1;
for (i=0;i<5;i++)
{
        if (subpro[i]==0)
	{
	subpro[i]=21;
	}
	else if (subpro[i]==11)
	{
	subpro[i]=13;
	}
	else if (subpro[i]==-11)
	{
	subpro[i]=-13;
	}
	else if (subpro[i]==12)
	{
	subpro[i]=14;
	}
	else if (subpro[i]==-12)
	{
	subpro[i]=-14;
	}
	else if (subpro[i]==15)
	{
	subpro[i]=13;
	}
	else if (subpro[i]==-15)
	{
	subpro[i]=-13;
	}
	else if (subpro[i]==16)
	{
	subpro[i]=14;
	}
	else if (subpro[i]==-16)
	{
	subpro[i]=-14;
	}
	else if ((subpro[i]==2) && (i >1) )
	{
	subpro[i]=14;
	}
	else if ((subpro[i]==-2) && (i >1) )
	{
	subpro[i]=-14;
	}
	else if ((subpro[i]==4) && (i >1) )
	{
	subpro[i]=14;
	}
	else if ((subpro[i]==-4) && (i >1) )
	{
	subpro[i]=-14;
	}
	else if ((subpro[i]==1) && (i >1) )
	{
	subpro[i]=13;
	}
	else if ((subpro[i]==-1) && (i >1) )
	{
	subpro[i]=-13;
	}
	else if ((subpro[i]==3) && (i >1) )
	{
	subpro[i]=13;
	}
	else if ((subpro[i]==-3) && (i >1) )
	{
	subpro[i]=-13;
	}
	else continue;
}


NprSub=0;
for (i=1;i<=nprc_out;i++)
{
        NprSub=0;
        count=0;
        pinf_out(i,1,NULL,&MCcode1);
        pinf_out(i,2,NULL,&MCcode2);
        pinf_out(i,3,NULL,&MCcode3);
        pinf_out(i,4,NULL,&MCcode4);
        pinf_out(i,5,NULL,&MCcode5);
        pinf_out(i,6,NULL,&MCcode6);

        if ((subpro[0]==MCcode1) && (subpro[1]==MCcode2) && (subpro[2]==MCcode3) && (subpro[3]==MCcode4) && (subpro[4]==MCcode5) && (subpro[5]==MCcode6) )
        {
                count=1;
                NprSub=i;
                break;
        }
        else continue;
}
if (NprSub == 0) 
{
printf("Erro Dtop C interface   \n");
return;
}
*/
rnd1=rand()/(RAND_MAX+1.0);
Qtmin=mn+ml+mb;
Qtmax=ECM;
ymax=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmax)-Sq(data.Mtop))/(data.Mtop*data.wtop));
ymin=(1/(data.Mtop*data.wtop))*atan((Sq(Qtmin)-Sq(data.Mtop))/(data.Mtop*data.wtop));
y=ymin+(ymax-ymin)*rnd1;
/*y=ymin+(ymax-ymin)*x1;*/
Qt=sqrt(data.Mtop*data.wtop*tan(data.Mtop*data.wtop*y)+Sq(data.Mtop));
Qt2=Sq(Qt);
WTBreit1=(Sq(Sq(Qt)-Sq(data.Mtop))+Sq(data.Mtop*data.wtop))*(ymax-ymin);

rnd1=rand()/(RAND_MAX+1.0);
QWmin=mn+ml;
QWmax=Qt-mb;
ymax=(1/(data.MW*data.wW))*atan((Sq(QWmax)-Sq(data.MW))/(data.MW*data.wW));
ymin=(1/(data.MW*data.wW))*atan((Sq(QWmin)-Sq(data.MW))/(data.MW*data.wW));
y=ymin+(ymax-ymin)*rnd1;
/*y=ymin+(ymax-ymin)*x2;*/
QW=sqrt(data.MW*data.wW*tan(data.MW*data.wW*y)+Sq(data.MW));
WTBreit2=(Sq(Sq(QW)-Sq(data.MW))+Sq(data.MW*data.wW))*(ymax-ymin);


if (Qt < QW+mb) {
 f=0;
 return 0;
}

y1=x3;
y2=x4;
eps=Sq(Qt)/ECMS;
x1t=pow(eps,y1*y2);
x2t=pow(eps,y2*(1-y1));
if (pp == 1){
        pdf_(&Flav1,&x1t,&data.Q,&pdf1,&GG);
        pdf_(&Flav2,&x2t,&data.Q,&pdf2,&GG);
}
else if (pp == -1){
        Flav2temp=-1*Flav2;
        pdf_(&Flav1,&x1t,&data.Q,&pdf1,&GG);
        pdf_(&Flav2temp,&x2t,&data.Q,&pdf2,&GG);
}
else {
printf("Erro: Wrong pp flag.\n");
return 0;
}


wt1=pdf1*pdf2*y2*pow(eps,y2)*Sq(log(eps))/(x1t*x2t);


p1[3]=ECM*x1t/2.0;
p1[0]=0.0;
p1[1]=0.0;
p1[2]=sqrt(Sq(p1[3])-Sq(m1));
p1[4]=m1;


p2[3]=ECM*x2t/2.0;
p2[0]=0.0;
p2[1]=0.0;
p2[2]=-sqrt(Sq(p2[3])-Sq(m2));
p2[4]=m2;



s=Sq(m1)+Sq(m2)+2*(p1[3]*p2[3]-(p1[0]*p2[0]+p1[1]*p2[1]+p1[2]*p2[2]));
flux=4*sqrt(Sq((s-Sq(m1)-Sq(m2))/2)-Sq(m1)*Sq(m2));

if (s < Sq(Qt+m3)) {
 f=0;
 return 0;
}



pcm[0]=0.0;
pcm[1]=0.0;
pcm[2]=p1[2]+p2[2];
pcm[3]=p1[3]+p2[3];
pcm[4]=sqrt(Sq(pcm[3])-Sq(pcm[2]));

rnd1=rand()/(RAND_MAX+1.0);

Phase2(sqrt(s),Qt,m3,pcm,ptop,p3,rnd1,x5,&wt2);
/*
printf("-----\n");
printf("%f %f %f %f %f %f %f %f %f %f\n",s,Qt,m3,pcm[0],pcm[1],pcm[2],pcm[3],pcm[4],rnd1,x5);
printf("%f %f %f %f %f %f\n",ptop[0],ptop[1],ptop[2],ptop[3],ptop[4],rnd1,x5);
*/
Phase2(Qt,QW,mb,ptop,pW,pb,x6,x7,&wt3);

Phase2(QW,mn,ml,pW,pn,pl,x8,x9,&wt4);


PT=sqrt(Sq(ptop[0])+Sq(ptop[1]));

if (PT < PTmin) {
 f=0;
 return 0;
}

pvec[0]=p1[3];
pvec[1]=p1[0];
pvec[2]=p1[1];
pvec[3]=p1[2];
pvec[4]=p2[3];
pvec[5]=p2[0];
pvec[6]=p2[1];
pvec[7]=p2[2];
pvec[8]=p3[3];
pvec[9]=p3[0];
pvec[10]=p3[1];
pvec[11]=p3[2];
pvec[12]=pn[3];
pvec[13]=pn[0];
pvec[14]=pn[1];
pvec[15]=pn[2];
pvec[16]=pl[3];
pvec[17]=pl[0];
pvec[18]=pl[1];
pvec[19]=pl[2];
pvec[20]=pb[3];
pvec[21]=pb[0];
pvec[22]=pb[1];
pvec[23]=pb[2];


f=sqme_out(NprSub,GG,pvec,&err);

if ( qid == 1)
{
f=3*(2*Pi)*Fact*f*WTBreit1*WTBreit2*wt1*wt2*wt3*wt4/flux;
}
else
{
f=(2*Pi)*Fact*f*WTBreit1*WTBreit2*wt1*wt2*wt3*wt4/flux;
}
  return 0;
}
