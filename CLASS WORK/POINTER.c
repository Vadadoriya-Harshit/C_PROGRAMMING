#include<stdio.h>

void main()
{
	
	int i=10;
	float f=3.14;
	char c='A';
	int *i_pr=&i;
	float *f_pr=&f;
	char *c_pr=&c;
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 POINTER DEMO \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t value of i=%d",*i_pr);
	printf("\n\n\t\t value of f=%f",*f_pr);
	printf("\n\n\t\t value of c=%c",*c_pr);
	
	
}