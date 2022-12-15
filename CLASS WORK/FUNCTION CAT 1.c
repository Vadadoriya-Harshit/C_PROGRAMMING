#include<stdio.h>
void func1(); // Function Declaration



void main()
{
	func1(); // Function Utilization.
	func2();
}

//Function Creation
void func1()
{
	printf("\nFunction1 Called.");
}

void func2()
{
	func1();
	printf("\nFunction2 Called.");
}
