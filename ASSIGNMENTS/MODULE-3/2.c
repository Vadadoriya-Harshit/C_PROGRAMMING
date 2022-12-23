  /*2.Write a program to make addition, Subtraction, Multiplication and Division 
      of Two Numbers*/  
#include<stdio.h>

void main()
{
	printf("\n\n\t\t\xb2\xb2\xb2\xb2 CALCULATOR \xb2\xb2\xb2\xb2\n");
	int A,B;
	printf("\n\n\t\tENTER A : ");
	scanf("%d",&A);
	printf("\n\t\tENTER B : ");
	scanf("%d",&B);
	printf("\n\t\tA=%d\tB=%d",A,B);
	
	printf("\n\n\t\t ADDITION       : %d",(A+B));
	printf("\n\n\t\t substiction    : %d",(A-B));
	printf("\n\n\t\t MULTIPLICATION : %d",(A*B));
    printf("\n\n\t\t DIVISION       : %.2f",(float)A/B);
	
	
}