#include<stdio.h>

void main()
{
	int n=5;
	int px=n;
	int py=n;
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n*2;j++)
		{
			if(j>px&&j<py)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			
		}
		px--;
		py++;
		
		printf("\n");
	}
}