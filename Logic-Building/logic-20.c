#include<stdio.h>
void main()
{
 double salary,primium;
 
 printf("\nEnter your salary : ");
 scanf("%d",&salary);
 
 
 primium= salary * 20;
 double primiumsalary = primium /100;

printf("Your salary is : %d",salary);

printf("\n cuted salary by one month is : %d ",primiumsalary);

printf("\n Total salary is :  %d ",primiumsalary * 12- salary);


	

}