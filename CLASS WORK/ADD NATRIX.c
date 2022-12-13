#include<stdio.h>

void main()
{
	int matrix1[3][3];
	int matrix2[3][3];
	int i,j;
	printf("\n\nEnter Matrix 1 Elements : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d] : ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("\n\nEnter Matrix 2 Elements : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d] : ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	printf("\n\nMatrix 1 Elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatrix 2 Elements : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nAddition of Matrix : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(matrix1[i][j]+matrix2[i][j]));
		}
		printf("\n");
	}
	
	
}