#include<stdio.h>

void main()
{
	printf("\n\t\t/xb2/xb2/xb2/xb2/xb2 SUMMATION OF ARRAY \xb2\xb2\xb2\xb2\xb2");
	
	int i,arr1[10],sum=0,r,avrage;
	
	printf("\n\n\t\tenter arr1[i] elements : \n\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr1[i]);
		sum =sum +arr1[i];
	}
		printf("\n\t\arr1[i] elements are : ");
	for(i=0;i<10;i++)
	{
		printf("\t :%d",arr1[i]);
	}
	
	printf("\n\n\t\tSUMMATION IS : %d",sum);
	
	printf("\n\n------------------------AVRAGE OF ARR1[I]-------------------------");
             
             printf("\n\n\t\tAVRAGE OF ARRAY1 SUMMATION IS : ");
             
             avrage=sum/10;
             printf("\n\t\tAVRAGE IS : %.2f",(float)avrage);
             
}