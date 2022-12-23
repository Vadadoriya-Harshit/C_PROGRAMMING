#include<stdio.h>

void f1()
{
     	int n,i,a=0,b=1,c;
	
	printf("\t\xb2\xb2\xb2\xb2\xb2 FIBONACI SERIES \xb2\xb2\xb2\xb2\xb2");
	
		printf("\n\n\tENTER THE NUMBER OF TERMS :");
	    scanf("%d",&n);
	    
	    for(i=1;i<=n;i++)
	    {
	    	printf("%d\t",a);
	    	c=a+b;
	    	a=b;
	    	b=c;
		}
	
}

void main()
{
	f1();
}
	