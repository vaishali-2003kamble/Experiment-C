#include<stdio.h>
int len(char[]);
int main()
{
	char str[20];
	int l;
	printf("enter string name");
	scanf("%s",str);
	l=len(str);
	printf("length of the string %d",l);	
}
int len(char str[])
{	int i;
	int count=0;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
