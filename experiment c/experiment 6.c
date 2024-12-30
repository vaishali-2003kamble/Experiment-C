#include<stdio.h>
int main()
{
	float ir,dp,year,si,fi=0,i;
	printf("enter deposite amount");
	scanf("%f",&dp);
	printf("enter year");
	scanf("%f",&year);
	printf("enter interset rate");
	scanf("%f",&ir);
	ir=ir/4;
	for(i=1;i<4;i++)
	{
		si=(dp*year*ir)/100;
		dp=dp+si;
		fi=fi+si;
	}
	printf("interest accumulate per year %f\n",si);
	printf("final interest %f\n",fi);
}
