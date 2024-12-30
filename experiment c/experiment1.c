#include<stdio.h>
int main()
{	//to fine area of circle and rectangle
	float r,l,b,a1,a2;
	printf("enter radius");
	scanf("%f",&r);
	a1=3.14*r*r;
	printf("area of circle is %f\n",a1);
	printf("enter length");
	scanf("%f",&l);
	printf("enter bredth");
	scanf("%f",&b);
	a2=l*b;
	printf("area of rectangle is %f\n",a2);
	return 0;	
}
