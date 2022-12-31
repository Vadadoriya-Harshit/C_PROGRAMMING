#include<stdio.h>

void main()
{
	int n,i,count=0;
	
	printf("\n\n\t\t \xb2\xb2\xb2\xb2\xb2 PRIME NUMBER \xb2\xb2\xb2\xb2\xb2");
	printf("\n\n\t\t Enter Eny Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
	     printf("\n\n\t\t %d Is A Prime Number ",n);
	}
	else
	{
		printf("\n\n\t\t %d Is Not A Prime Number ",n);
	}
}