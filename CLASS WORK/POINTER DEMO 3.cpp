#include<stdio.h>

int main()
{
	int x=12;
	int y=32;
	int *x_ptr;
	int *y_ptr;
	x_ptr=&x;
	y_ptr=&y;
	
	
	printf("\n\n\t\t x=%d",*x_ptr);
	printf("\n\n\t\t y=%d",*y_ptr);
	
	return 0;
}