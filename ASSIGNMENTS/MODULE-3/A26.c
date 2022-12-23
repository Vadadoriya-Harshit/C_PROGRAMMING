#include <stdio.h>

struct Employee
{
	int empno;
	int age;
	char empname[10];
	char address[50];
};


void main()
{
	struct Employee emp;
	printf("\n\t\tEnter No      :  ");
	scanf("%d",&emp.empno);
	printf("\n\t\tEnter Age     :  ");
	scanf("%d",&emp.age);
	printf("\n\t\tEnter Name    :  ");
	scanf("%s",&emp.empname);
	printf("\n\t\tEnter Address :  ");
	scanf("%s",&emp.address);
	
	printf("\n\t\t----------Details-----------");
	printf("\n\n\t\tEmp No     : %d",emp.empno);
	printf("\n\t\tEmp  Age     : %d",emp.age);
	printf("\n\t\t Emp Name    : %s",emp.empname);
	printf("\n\t\t Emp Address : %s",emp.address);
	
	
	
	
	
	
	
}