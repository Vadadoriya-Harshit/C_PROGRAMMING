  /*  13.Write a program to find the Max number from the
	 given three number using Nested If */

#include<stdio.h>

void main()
{
	int a,b,c;
		printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 FIND THE MAX NUMBER FROM THE GIVEN THREE NUMBER\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	    printf("\n\t\t ENTER A :");
	    scanf("%d",&a);
	    printf("\n\t\t ENTER B :");
	    scanf("%d",&b);
	    printf("\n\t\t ENTER C :");
	    scanf("%d",&c);
	    
	    printf("\n-------------------\n\ta = %d\n\tb = %d\n\tc = %d\n--------------------",a,b,c);
	    
	    if(a>b)
	    {
	    	if(a>c)
	    	{
	    		printf("\n\t%d IS MAXIMUM",a);
			}
			else
			{
				printf("\n\t%d IS MAXIMUM",c);
			}
			
		}
		else 
		{
			if(b>c)
			{
	    		printf("\n\t\t\t%d IS MAXIMUM",b);
			}
			else 
			{
				printf("\n\t\t\t\t%d IS MAXIMUM",c);
			}
						
		}
	
}