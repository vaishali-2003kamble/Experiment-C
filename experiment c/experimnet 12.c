#include<stdio.h>
void replacechar(char* s ,char* c1,char* c2);
int main()
{
  char s[20];
  char c1,c2;
  printf("enter string name");
  gets(s);
  printf("enter replace the character\n");
  c1=getchar();
  getchar();
  printf("enter character where to replace\n");
  c2=getchar();
  printf("string before replacement %s\n",s);
  replacechar(s,c1,c2);
  printf("string after replacement %s\n",s);
  	
}
void replacechar(char* s,char* c1,char* c2)
{	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c1)
		{
			s[i]=c2;
		}	
	}
}
