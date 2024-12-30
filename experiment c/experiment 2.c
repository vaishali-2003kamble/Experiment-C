#include<stdio.h>
#define IB 0.03
#define ST 10.36
#define STT 0.025
#define SD 0.0002
#define RC 0.0004
int main()
{
int bp,sp,s;
float ib,st,stt,sd,rc,ss,profit;
printf("enter buying price");
scanf("%d",&bp);
printf("enter selling price");
scanf("%d",&sp);
printf("enter number of share");
scanf("%d",&s);
ib=((sp+bp)*IB)/100;
st=(ib*st)/100;
stt=(sp*stt)/100;
sd=((sp+bp)*SD)/100;
rc=((sp+bp)*RC)/100;
profit=(sp-bp)-(ib+st+stt+sd+rc);
printf("profit is %.2f\n",profit);
ss=(sp*s-bp*s)-(ib+st+stt+sd+rc);
printf("total turn over is %.2f\n",ss);
return 0;	
}
