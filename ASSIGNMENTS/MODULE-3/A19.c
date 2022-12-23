#include<stdio.h>

void f1()
{
	int x=9,fact=1;
	for(x=1;x<=9;x++)
	{
        fact=fact*x; 
    }

    printf("\n\t\tFactorial of x is: %d",fact);
}
void main()
{
	f1();
}