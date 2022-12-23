#include<stdio.h>

void main()
{

	int choice;
     add();
     sub();
     mult();
     div();
     
}
void add()
{
	int a=10;
	int b=20;
	printf("\n\t ADDITION IS : %d",(a+b));
}
void sub()
{
	int a=10;
	int b=20;
	printf("\n\t SUBTRACTION IS : %d",(a-b));
}
void mult()
{
	int a=10;
	int b=20;
	printf("\n\t MULTIPLICATION IS : %d",(a*b));
}
 void div()
{
	int a=10;
	int b=20;
	printf("\n\t DIVISION  IS : %.2f",((float)a/b));
}