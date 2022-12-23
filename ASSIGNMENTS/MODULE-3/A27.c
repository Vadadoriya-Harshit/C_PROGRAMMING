#include <stdio.h>

struct Employee
{
	int empno;
	int age;
	char empname[10];
	char address[50];
};
struct Employee2
{
	int empno;
	int age;
	char empname[10];
	char address[50];
};
struct Employee3
{
	int empno;
	int age;
	char empname[10];
	char address[50];
};
struct Employee4
{
	int empno;
	int age;
	char empname[10];
	char address[50];
};
struct Employee5
{
	int empno;
	int age;
	char empname[10];
	char address[50];
};

void main()
{
	struct Employee emp;
	printf("\n\n\t===================== EMPLOYE 1 =====================");
	printf("\n\n\t\tEnter No    :  ");
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
	
		struct Employee2 emp2;
		printf("\n\n\t===================== EMPLOYE 2 =====================");
	printf("\n\n\t\tEnter Emp No    :  ");
	scanf("%d",&emp2.empno);
	printf("\n\t\tEnter Emp Age     :  ");
	scanf("%d",&emp2.age);
	printf("\n\t\tEnter Emp Name    :  ");
	scanf("%s",&emp2.empname);
	printf("\n\t\tEnter Address     :  ");
	scanf("%s",&emp2.address);
	
	printf("\n\t\t----------Details-----------");
	printf("\n\n\t\tEmp No     : %d",emp2.empno);
	printf("\n\t\tEmp  Age     : %d",emp2.age);
	printf("\n\t\t Emp Name    : %s",emp2.empname);
	printf("\n\t\t Emp Address : %s",emp2.address);
	
	
	struct Employee3 emp3;
		printf("\n\n\t===================== EMPLOYE 3 =====================");;
	printf("\n\n\t\tEnter Emp No    :  ");
	scanf("%d",&emp3.empno);
	printf("\n\t\tEnter Emp Age     :  ");
	scanf("%d",&emp3.age);
	printf("\n\t\tEnter Emp Name    :  ");
	scanf("%s",&emp3.empname);
	printf("\n\t\tEnter Address     :  ");
	scanf("%s",&emp3.address);
	
	printf("\n\t\t----------Details-----------");
	printf("\n\n\t\tEmp No     : %d",emp3.empno);
	printf("\n\t\tEmp  Age     : %d",emp3.age);
	printf("\n\t\t Emp Name    : %s",emp3.empname);
	printf("\n\t\t Emp Address : %s",emp3.address);
	
		struct Employee4 emp4;
		printf("\n\n\t===================== EMPLOYE 4 =====================");;
	printf("\n\n\t\tEnter Emp No    :  ");
	scanf("%d",&emp4.empno);
	printf("\n\t\tEnter Emp Age     :  ");
	scanf("%d",&emp4.age);
	printf("\n\t\tEnter Emp Name    :  ");
	scanf("%s",&emp4.empname);
	printf("\n\t\tEnter Address     :  ");
	scanf("%s",&emp4.address);
	
	printf("\n\t\t----------Details-----------");
	printf("\n\n\t\tEmp No     : %d",emp4.empno);
	printf("\n\t\tEmp  Age     : %d",emp4.age);
	printf("\n\t\t Emp Name    : %s",emp4.empname);
	printf("\n\t\t Emp Address : %s",emp4.address);
	
	
		struct Employee5 emp5;
		printf("\n\n\t===================== EMPLOYE 5 =====================");;
	printf("\n\n\t\tEnter Emp No    :  ");
	scanf("%d",&emp5.empno);
	printf("\n\t\tEnter Emp Age     :  ");
	scanf("%d",&emp5.age);
	printf("\n\t\tEnter Emp Name    :  ");
	scanf("%s",&emp5.empname);
	printf("\n\t\tEnter Address     :  ");
	scanf("%s",&emp5.address);
	
	printf("\n\t\t----------Details-----------");
	printf("\n\n\t\tEmp No     : %d",emp5.empno);
	printf("\n\t\tEmp  Age     : %d",emp5.age);
	printf("\n\t\t Emp Name    : %s",emp5.empname);
	printf("\n\t\t Emp Address : %s",emp5.address);
	
	
}