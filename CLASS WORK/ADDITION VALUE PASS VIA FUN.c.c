#include<stdio.h>

void temp(int a,int b)
{
	printf("\n\t\tADDITION : %d",(a+b));
}
void main()
{
	int a,b;
	printf("\n\t\tENTER A ,B : ");
	scanf("%d%d",&a,&b);
	temp(a,b);
}