#include<stdio.h>
#define n 5
int main()
{
	int rollno[n],marks[n];
	int i,max,min,sum=0;
	float avg;
	printf("enter rollno");
	for(i=0;i<n;i++)
	{
		scanf("%d",&rollno[i]);
	}
	printf("enter marks");
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	printf("\nrollno\t\t marks\n");
	for(i=0;i<n;i++)
	{
		printf(" \n%d\t\t %d\n",rollno[i],marks[i]);	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	avg=(float)sum/n;
	printf("average of the class %f\n",avg);
	max=marks[0];
	for(i=0;i<n;i++)
	{
		if(max<marks[i])
		{
			max=marks[i];
		}
	}
	printf("highest marks in the class %d\n",max);
	min=marks[0];
	for(i=0;i<n;i++)
	{
		if(min>marks[i])
		{
			min=marks[i];
		}
	}
	printf("lowest marks in the class %d\n",min);	
	
}
