#include<stdio.h>

void main()
{
	int a=10;
	float f=3.3;
	void *ptr;
	ptr=&a;
	
	
	printf("\n\n\t\t value of a =%d ",*((int*)ptr));
	ptr=&f;
	printf("\n\n\t\t value of f =%.2f ",*((float*)ptr));

	
}