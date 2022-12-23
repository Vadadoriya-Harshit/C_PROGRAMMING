// g. Write aprogramto printthe numberin reverseorder //

#include<stdio.h>

void main()
{
	int n,r;
	printf("\n\t\xb2\xb2\xb2\xb2\xb2 REVERSE ORDER \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\tENTER NUBER : ");
	 scanf("%d",&n);
	 
	 while(n>0)
	 {
	 	r=n%10;
	 	
	 	printf("%d",r);
	 	n=n/10;
	 	
	 }
	
	
}