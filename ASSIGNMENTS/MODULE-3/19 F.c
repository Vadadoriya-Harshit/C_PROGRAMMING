     //f. Write aprogramyouhave to printthe table of givennumber.

#include<stdio.h>

void main()
{
	int n,i;
	printf("\n\t\xb2\xb2\xb2\xb2\xb2 PRINT THE  TABLE \xb2\xb2\xb2\xb2\xb2");
	
	    printf("\n\n\tENTER NUMBER TO PRINT THE TABLE : ");
	    scanf("%d",&n);
	  for(i=1;i<=10;i++)
	  {
	  	printf("\n\t%d * %d = %d\n",n,i,n*i);
	  }
}