#include <stdio.h>

/*	
	Union : It is a name at memory, which stores
				multiple elements of multiple types.
				
				- to use union, we declare with 
				  union keyword.
	
	syntax: 
				  
	union <union-name>
	{
		members;
	};
	
	-> In Union we accept once and display at once.
	-> Because the size of union is the highest type of its member.
	
	
*/

union Employee
{
	int eid;
	char ename[10];
	float esal;	
};


void main()
{
	union Employee emp;
	printf("\nEnter Id : ");
	scanf("%d",&emp.eid);
	printf("Id : %d",emp.eid);
	
	printf("\n\nEnter Name : ");	
	scanf("%s",&emp.ename);
	printf("Name : %s",emp.ename);
	
	printf("\n\nEnter Salary : ");
	scanf("%f",&emp.esal);
	printf("Salary : %.2f",emp.esal);

	
	printf("\n\nSize of Union is : %d Bytes",sizeof(emp));
	
	
	
	
	
}