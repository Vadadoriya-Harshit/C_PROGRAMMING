#include<stdio.h>

void f1()
{
	int i,arr1[10]={12,32,16,67,76,78,87,90,99,72};
	int min,max;
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 FIND MAX FROM ARRAY ELEMENTS \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\tELEMENTS OF ARRAY 1 ARE : \n");
	
	for(i=0;i<10;i++)
	{
		
		printf("\n\t\t %d",arr1[i]);
		
	}
	  max=arr1[0];
	   min=arr1[0];
	   for(i=0;i<10;i++)
	{
	   
	    if( max<arr1[i])
	{
		max=arr1[i];
	}
  }
		printf("\n\t\t MAXIMUM NUMBER IS : %d",max);
  
}
void main()
{
	f1();
}