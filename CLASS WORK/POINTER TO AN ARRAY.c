#include<stdio.h>

void main()
{
	
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i;
	
	int*ptr;
	ptr=arr;
	
	for(i=0;i<10;i++)
	{
		printf("\n\n\t\tvalue of arr[%d] : %d\n\n",i,*ptr);
		ptr++;
	}
}