#include<stdio.h>


/*
	Nested for loop : 
	
			for(intitialization;condition;updation)
			{
				for(initialization;condition;updation)
				{
					statement;
				}
				statement;
			}
	
*/

void main()
{
	
	int i,j,k;
	
	for(i=1;i<=10;i++)
	{
		for(k=0;k<=10-i;k++)
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