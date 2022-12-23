#include<stdio.h>

void main()
{
	
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=0;k<=5-i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf(" %d",j);
		}
		printf("\n");
	}
	
	
}