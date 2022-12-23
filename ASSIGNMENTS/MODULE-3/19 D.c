  // d.writeaprogramyouhaveto find the factorialof givennumber

#include<stdio.h>

void main()
{
	printf("\n\t\xb2\xb2\xb2\xb2 Find The Factorial \xb2\xb2\xb2\xb2");
	  int x=1,fact=1,n;

    printf("\n\n\tENTER A NUMBER TO FIND THE FACTORIAL : ");

    scanf("%d",&n);

    while(x<=n)
	{

        fact=fact*x;

        x++;

    } 
      printf("\n\n\tFACTORIAL OF %d is : %d",n,fact);
}