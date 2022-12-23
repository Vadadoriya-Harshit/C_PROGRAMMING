#include<stdio.h>

void main()
{
	int i,j,k,n=1;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",n);
			n++;
			
		}
		printf("\n");
	}
}