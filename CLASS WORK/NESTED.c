#include<stdio.h>

void main()
{
	int a,b,c;
	printf("\nEnter A , B , C : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n\nA = %d, B = %d, C = %d\n",a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\n%d is Greater",a);
		}
		else
		{
			printf("\n%d is Greater",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n%d is Greater",b);
		}
		else
		{
			printf("\n%d is Greater",c);
		}
		
	}
	
	
	
}