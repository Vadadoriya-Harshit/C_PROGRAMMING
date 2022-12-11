#include<stdio.h>

void main()
{
	int arr1[5],arr2[5];
	int i;
	
	printf("\nEnter Array 1 Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\nEnter Array 2 Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	printf("\n\nArray 1 Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	printf("\n\nArray 2 Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr2[i]);
	}
	
	printf("\n\nAddition of  2 Arrays are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",(arr1[i]+arr2[i]));
	}
	
}