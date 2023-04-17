#include<stdio.h>

int main()
{
	int age;
	char name[50];
	float salary;
	
	printf("\n\n\xB2\xB2\xB2\xB2 Personal Details \xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	
	printf("\nEnter your Name : ");
	//scanf("%s",&name);
	gets(name);
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Enter your Salary : ");
	scanf("%f",&salary);
	
	printf("\nName is : %s",name);
	printf("\nAge is : %d",age);
	printf("\nSalary is : %.2f",salary);
	
	return 0;
}





