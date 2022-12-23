    /*11.Write a Program to check the given year is leap 
          year or not.*/
#include<stdio.h>

void main()
{
	int year;
		printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 CHECK THE GIVEN YEAR IS LEAP OR NOT LEAP\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	
	printf("\n\n\t\tENTER YEAR :");
	scanf("%d",&year);
	printf("\n\n\t\t ENTERED YEAR IS :   %d",year);
	
	if(year%400==0)
	{
		printf("\n\n\t\t(%d) is leap year",year);
	}
	else if(year%100==0)
	{
		printf("\n\n\t\t(%d) is not leap year ",year);
	}
	else if(year%4==0)
	{
		printf("\n\n\t\t(%d) is leap year",year);
	}
	else
	{
	     printf("\n\n\t\t(%d) is not leap year",year);
	}
}























