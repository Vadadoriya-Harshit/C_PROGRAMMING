#include<stdio.h>

void main()
{
	
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 EVEN ODD\xb2\xb2\xb2\xb2\xb2");
	int i,even=0,odd=0;
	int arr1[10]={11,37,13,14,15,25,17,18,19,20};
	
	for(i=0;i<10;i++)
	{
		if(arr1[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\n\tcontent of the array : \n");
	  for(i=0;i<10;i++)
	  {
	  	printf("\n%d",arr1[i]);
	  }
	  printf("\n\ntotal even numbers is : %d",even);
	  printf("\n\ntotal odd numbers is : %d",odd);
	  
}