#include<stdio.h>
#define r 3
#define c 3
int main()
{
	int a[r][c],i,j;
	printf("enter element of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	
	printf("matrix A");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("transpose of the matrix");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
		
	}
	
	
}

