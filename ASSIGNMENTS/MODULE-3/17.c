  /*Write a Program of Addition, Subtraction ,Multiplication and Division using Switch case.(Must Be Menu
Driven)*/
#include<stdio.h>

void main()
{
	int a,b,choice;
	
	
	printf("\n\t\xB2\xB2\xB2\xB2\xb2\xb2\xb2 Calculator \xb2\xb2\xb2\xB2\xB2\xB2\xB2\n");
	
	printf("\n\tENTER A : ");
	scanf("%d",&a);
	printf("\n\tENTER B : ");
	scanf("%d",&b);
	
	printf("\n\t A IS : %d",a);
	printf("\n\t B IS : %d",b); 
	
	printf("\n\n\t\xB2\xB2\xB2\xB2\xb2\xb2\xb2 MENU \xb2\xb2\xB2\xB2\xB2\xB2\n");	
	
	printf("\n\t PRESS 1 FOR ADDITION.");
	printf("\n\t PRESS 2 FOR SUBTRACTION.");
	printf("\n\t PRESS 3 FOR MULTIPLICATION.");
	printf("\n\t PRESS 4 FOR DIVISION.");
	
	printf("\n\n\t ENTER YOUR CHOICE: ");
	scanf("%d",&choice);
	
	printf("\n\t CHOICE IS : %d",choice);
	
	switch(choice)
	{
		case 1 :printf("\n\tADDITION IS : %d ",(a+b));
		break;
		case 2 :printf("\n\tSUBTRACTION IS : %d ",(a-b));
		break;
		case 3 :printf("\n\tMULTIPLICATION IS : %d ",(a*b));
		break;
		case 4 :printf("\n\t\tDivision : %f",((float)a/b));
		break;
		default : printf("\n\t INVAILD NUMBER.");
	}
	
}