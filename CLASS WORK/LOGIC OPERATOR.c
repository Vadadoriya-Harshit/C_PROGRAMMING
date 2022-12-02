#include<stdio.h>

/*
	&& -> returns true if both condition is true.
	|| -> returns true if either one condition is true.
	! -> returns the Opposite.
*/

void main()
{
	
	int a=2,b=0;
	
	if(a&&b)  //AND Operator
	{
		printf("\nLine 1 is True.");
	}
	else
	{
		printf("\nLine 1 is False");
	}
	b=10,a=0;
	if(a||b)   //OR Operator
	{
		printf("\nLine 2 is True");
	}
	else
	{
		printf("\nLine 2 is False");
	}
	a=10,b=2;
	if(!(a&&b))  //Not Operator
	{
		printf("\nLine 1 is True.");
	}
	else
	{
		printf("\nLine 1 is False");
	}
	
}



