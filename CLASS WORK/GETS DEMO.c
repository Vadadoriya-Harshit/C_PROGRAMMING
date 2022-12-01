#include<stdio.h>

void main()
{
	char name[10];
	printf("Enter Name :");
	//scanf("%s",&name);
	gets(name);
	
	printf("\nName is : %s ",name);
}