#include<stdio.h>

void main()
{
	int n,sum=0,prod=1;
	int d;
	
	printf("\n\n\t\t enter the number : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		prod=prod*d;
		n=n/10;
	}
	
	if(sum==prod)
	{
		printf("\n\n\t\t Given Number Is SPY number.");
	}
	else
	{
		printf("\n\n\t\t Given Number Is Not SPY number. ");
	}
}