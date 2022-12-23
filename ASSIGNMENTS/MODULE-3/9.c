   /* 9. Write a Program to show swap of two No's without
        using third variable.*/

#include<stdio.h>

void main()
{
	int a=10,b=30;
		printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 SWAP 2 NUMBERS WITHOUT 3RD NUMBER \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf("\n\tBEFORE SWAP :\n-------------------- \n\ta=%d\n\tb=%d",a,b);
	printf("\n\n\t----*---*---*----");
	
   a=a+b;//a=40 (10+30);
   b=a-b;//b=10 (20-30);
   a=a-b;//a=30 (40-10);
   
   	printf("\n\n\tAFTER SWAP :\n--------------------- \n\ta=%d\n\tb=%d",a,b);
   
}
