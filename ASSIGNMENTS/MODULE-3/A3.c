#include<stdio.h>

void main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 SORTING OF ARRAY \xb2\xb2\xb2\xb2\xb2\n\n");
	
	int i,j,arr[5],temp;
		printf("\nEnter Array Elements : \n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter Element [%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	

	printf("\n\t\t ARRAY 1 ELEMENTS ARE :\n ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);	
		
	}
		printf("\n\nArray Elements  in Ascending Order : \n\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
		
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);		
	}
	
	
	printf("\n\nArray Elements  in Descending Order : \n\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
		
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);		
	}
		 
		
	
}