#include<stdio.h>

/*

while : It is called an Entry Controlled Loop.
        -because the condition is checked first and then the body
         is executed.
        - No semi-colon after while.
        -If condition is false, then loop will stop.
        
syntax :  
			Initialization;

			while(condition)
			{
				statement;
				updation;
		    }
		

*/

void main()
{
	
	int i = 1; //Initialization
	int j=1;
	do
	{
		printf("%d\t%d\n",i,j);
		i++;
	}
	while(i<=1000);
		
}