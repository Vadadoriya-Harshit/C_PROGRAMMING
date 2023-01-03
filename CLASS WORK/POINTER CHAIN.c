#include<stdio.h>

void main()
{
	int a=10;
	int *p;
	int **q;
	int ***r;
	p=&a;
	q=&p;
	r=&q;
	
	printf("\n\n\t\t value of   a = %d",a);
	printf("\n\n\t\t value of  *p = %d",*p);
	printf("\n\n\t\t value of **q = %d",**q);
	printf("\n\n\t\t value of ***r= %d",***r);
	
}