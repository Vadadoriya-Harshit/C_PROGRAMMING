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
	
	while(i<=1000)  //condition
	{
		printf("%d\n",i);
		i++; 				// i+1  //updation
	}
		
}