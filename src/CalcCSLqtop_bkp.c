#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../src/num_in.h"
#include "../src/num_out.h"
#include "../src/util.c"
#include "dataLqtop.c"
#include "../src/cubaLqtop.c"
/*********************************************************************/


#define NDIM 7
#define NCOMP 1
#define EPSREL 1e-3
#define EPSABS 1e-12
#define LAST 1
#define SEED 10
#define MINEVAL 0
#define MAXEVAL 150000
#define VERBOSE 0

#define NSTART 10000
#define NINCREASE 1000
#define NBATCH 1000
#define GRIDNO -1
#define STATEFILE NULL

int main()
{


int verbose, comp, nregions, neval, fail;
double integral[NCOMP], error[NCOMP], prob[NCOMP];
double userdata[18];
double ECM,m1,m2,m3,m4,m5,m6,PTmin;
int Flav1,Flav2,Flav3,Flav4,Flav5,Flav6,Npr,NprSub,qid,SubPorder;
double CSTotal,ErroTotal;
FILE *fp;

dados();
assignVal("EE",data.EE);
assignVal("SW",data.SW);
assignVal("s12",data.s12);
assignVal("s23",data.s23);
assignVal("s13",data.s13);
assignVal("MZ",data.MZ);
assignVal("wZ",data.wZ);
assignVal("wW",data.wW);
assignVal("Mm",data.Mm);
assignVal("Mc",data.Mc);
assignVal("Ms",data.Ms);
assignVal("Mtop",data.Mtop);
assignVal("wtop",data.wtop);
assignVal("Mb",data.Mb);
assignVal("MH",data.MH);
assignVal("wH",data.wH);
assignVal("fu",data.fu);
assignVal("hu",data.hu);
assignVal("fc",data.fc);
assignVal("hc",data.hc);
assignVal("L",data.L);
assignVal("co1",data.co1);
assignVal("co2",data.co2);
assignVal("co3",data.co3);
assignVal("co4",data.co4);
assignVal("co5",data.co5);
assignVal("co6",data.co6);
assignVal("co7",data.co7);
assignVal("co8",data.co8);
assignVal("co9",data.co9);
assignVal("co10",data.co10);
assignVal("co11",data.co11);
assignVal("co12",data.co12);
assignVal("co13",data.co13);
assignVal("co14",data.co14);
assignVal("Sqrt2",1.41421356);
assignVal("CW",data.CW);
assignVal("c12",data.c12);
assignVal("c23",data.c23);
assignVal("c13",data.c13);
assignVal("Vud",data.Vud);
assignVal("Vus",data.Vus);
assignVal("Vub",data.Vub);
assignVal("Vcd",data.Vcd);
assignVal("Vcs",data.Vcs);
assignVal("Vcb",data.Vcb);
assignVal("Vtd",data.Vtd);
assignVal("Vts",data.Vts);
assignVal("Vtb",data.Vtb);
assignVal("MW",data.MW);
ECM=data.ECM;
PTmin=data.PTmin;

