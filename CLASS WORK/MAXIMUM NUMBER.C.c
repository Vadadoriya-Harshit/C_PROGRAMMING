#include<stdio.h>

void main()
{
	int a;
	int b;
	printf("ENTER A :");
	scanf("%d",&a);
	printf("ENTER B:");
	scanf("%d",&b);
	
    	
	if(a>b)
	{
		printf("a is maximum");
	}
	else if(a<b)
	{
		printf("b is maximum");
	}
	else
	{
		printf("both are equal");
	}
}