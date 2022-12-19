#include<stdio.h>

void main()
{

	int choice;
     printf("\n\t--------------------MENU------------------");
     
     printf("\n\t\tPRESS 1 FOR ADDITION");
     printf("\n\t\tPRESS 2 FOR SUBTRACTION");
     printf("\n\t\tPREE 3 FOR MULTIPLICATION");
     printf("\n\t\tPRESS 4 FOR DIVISION");
     
     printf("\n\n\t\tENTER YOUR CHOICE : ");
     scanf("%d",&choice);
     
     switch(choice)
     {
     	case 1: add();
     	     break;
     	case 2 : sub();
     	      break;
     	 case 3 :mult();
		        break;
		 case 4 : div();
		        break;
			default : printf("\n\t\tINVAILD NUMBER");
			    break;      
	 }
}
void add()
{
	int a=10;
	int b=20;
	printf("\n\t ADDITION IS : %d",(a+b));
}
void sub()
{
	int a=10;
	int b=20;
	printf("\n\t SUBTRACTION IS : %d",(a-b));
}
void mult()
{
	int a=10;
	int b=20;
	printf("\n\t MULTIPLICATION IS : %d",(a*b));
}
 void div()
{
	int a=10;
	int b=20;
	printf("\n\t DIVISION  IS : %.2f",((float)a/b));
}