#include<stdio.h>
int checkage(int);
int main()
{
 int age;
 printf("enter age");
 scanf("%d",&age);
 if(checkage(age))
 {
 	printf("age is within the limit");
 }
 else
 {
 	printf("age is outoff limit");
 }
 			 			   		 	
}
int checkage(age)
{
	if(age>=0 && age<=125)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

