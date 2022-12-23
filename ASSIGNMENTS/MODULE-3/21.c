#include<stdio.h>

void main()
{
	int i,arr1[5];
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 ELEMENTS OF ARRAYS \xb2\xb2\xb2\xb2\xb2\n\n");
	printf("\n\t\tENTER ARRAY[1] ELEMENTS : \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("\n\t\tELEMENTS ARE : \n\n");
	
	for(i=0;i<5;i++)
	{
		printf("\t%d\t",arr1[i]);
	}
}