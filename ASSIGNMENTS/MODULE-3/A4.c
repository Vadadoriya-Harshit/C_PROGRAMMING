#include<stdio.h>

void main()
{
	int n,i,max,min;
	
	printf("\n\t\tENTER THE NUMBER OF ELEMENTS : ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\t\tINPUT THE ARRAY ELEMENTS : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
//	int min=int_max
//	int second_min=INT_MAX;
	if(n<2)
	{
		printf("\n\t\tINVAILD INPUT");
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
		//	second_min=min;
	          //mmin=arr[i];
	
		}
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<//second_min&&arr[i] !=min)
		{
			second_min=arr[i];
		}
	}
	printf("\n\t\tTHE SECOND SMALLEST ELEMENT IS %d \n",second_min);
	
}