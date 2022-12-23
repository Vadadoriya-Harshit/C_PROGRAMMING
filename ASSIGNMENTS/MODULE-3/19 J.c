   /*j. Write a program you have tomake a summation of 
first and last Digit. (E.g. 1234ans:-5*/

#include<stdio.h>

void main()
{
	printf("\n\t\t\t\xb2\xb2\xb2\xb2\xb2 SUMMATION OF FIRST AND LAST DIGITS \xb2\xb2\xb2\xb2\xb2");
	
	int n,last,sum;
	
		printf("\n\n\t\t\tENTER NUMBER OF SUMMATION : ");
         	scanf("%d",&n);
         	
         	last=n%10;
         	while(n>9)
         	{
         		
         		n=n/10;
			 }
			 sum=n+last;
	printf("\n\t\tSUMMATION OF 1RST AND LAST DIGIT IS : %d",sum);	 
}      
