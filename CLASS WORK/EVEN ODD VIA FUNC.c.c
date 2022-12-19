#include<stdio.h>

void temp(int a)

{
	printf("\n\t\t temp A  = %d",a);
	if(a%2==0)
	{
		printf("\n\n\t\t %d IS EVEN",a);
	}
	else
	{
		printf("\n\n\t\t %d  IS ODD",a);
	}
}
void main()
{
	int a;
	printf("\n\t\tENTER VALUE : ");
	scanf("%d",&a);
	temp(a);
	
}