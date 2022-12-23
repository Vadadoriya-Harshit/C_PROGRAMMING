#include<stdio.h>

void main()
{
	int i,j,k;
	
	for(i=0;i<=5;i++)
	{
		for(k=0;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(k=0;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
}