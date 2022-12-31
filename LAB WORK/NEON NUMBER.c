#include<stdio.h>

void main()
{
	int n,sq,sum=0;
	
	printf("\n\n\t\t \xb2\xb2\xb2\xb2\xb2 NEON NUMBER \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t Enter The Number : ");
	scanf("%d",&n);
	
	sq=n*n;
	while(sq>0)
	{
	   sum=sum+sq%10;
	   sq=sq/10;	
	}
	if(sum==n)
	{
		printf("\n\n\t\t %d is Neon Number ",n);
	}
	else
    {
    	printf("\n\n\t\t%d is Not a Neon Number ",n);
	}
}