#include<stdio.h>

/*
do..while loop:
				- It is called as Exit Controlled Loop.
				-because the condition is checked at last.
				-It execute's the do block atleast once, even 
				 if the condition is false.
				-Semi colon after while condition.
 
               //initialization
               
               do
               {
               		statement;
               		updation;
               }
               while(condition);
              


*/


void main()
{
	
	int i = 1;
	
	do
	{
		printf("%d\n",i);
		i++;		
	}
	while(i<50);
	
	
	
	
	
	
}