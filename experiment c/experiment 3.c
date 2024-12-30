#include<stdio.h>
int main()
{
	int flat_uses=0;
	float water_bill=0.0;
	printf("flat uses water in liter");
	scanf("%d",&flat_uses);
	if(flat_uses<=1000)
	{
		printf("water bill is RS 155");
	}
	else if (flat_uses>1000 && flat_uses<=2000)
	{
		water_bill=0.175*(flat_uses/28.317)+155;
		printf("water bill is %f",water_bill);
	}
	else if (flat_uses>2000 && flat_uses<=3000)
	{
		water_bill=0.200*(flat_uses/28.317)+175;
		printf("water bill is %f",water_bill);
	}
	else
	{
		printf("water bill is Rs 700");
	}
	return 0;
	
}
