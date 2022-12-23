 /*i. Write a program make a summation of 
given number(E.g. 1523 ans :-11)*/
#include<stdio.h>
void main()
{
	int n,sum=0,r;
	printf("\n\t\t\t\xb2\xb2\xb2\xb2\xb2 SUMMATION OF DIGITS \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t\tENTER NUMBER OF SUMMATION : ");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\nSUMMATION IS : %d",sum);
}