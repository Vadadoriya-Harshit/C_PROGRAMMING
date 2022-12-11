#include<stdio.h>

void main()
{
	int arr1[5];
	int i;
	
	printf("\nEnter Array 1 Elements : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\nArray 1 Elements are : \n\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	
}