#include<stdio.h>

void main()
{
	int n;
	int num;
	int sum=0;
	int r;
	int t=10;
	int sq,equal;
	
	
	printf("\n\n\t\t \xb2\xb2\xb2\xb2\xb2 AUTOMARPHIC NUMBER \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\tENTER NUMBER  : ");
	scanf("%d",&n);
	
	num=n;
	sq=n*n;
	
	printf("\n\n\t\t SQUARE OF NUMBER IS : %d",sq);
	
	while(n>0)
	{
		r=sq%t;
		if(num==r)
		{
			equal=1;
			break;
		}
		n=n/10;
		t=t*10;
		
	}
	if(equal==1)
	{
		printf("\n\n\t\t %d is AUTOMARPHIC NUMBER ",num);
	}
	else
	{
			printf("\n\n\t\t %d is  Not AUTOMARPHIC NUMBER ",num);
	}
}