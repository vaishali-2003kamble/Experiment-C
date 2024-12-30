#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("enter three side of triangle");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3)
	{
		printf("triangle is equlilateral");
	}
	else if(s1==s2 ||s2==s3 || s3==s1)
	{
		printf("triangle is isoceles");
	}
	else
	{
		printf("triangle is scalene");
	}
	return 0;	
}
