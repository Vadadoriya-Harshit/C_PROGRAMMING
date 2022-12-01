#include<stdio.h>

void main()
{
	int age;
	printf("ENTER YOUR AGE :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are eligible for voting");
	}
	else
	{
		printf("you are not eligible for voting");
	}
}