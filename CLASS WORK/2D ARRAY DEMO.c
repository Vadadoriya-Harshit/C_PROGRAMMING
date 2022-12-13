#include<stdio.h>

void main()
{
	int matrix1[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element[%d][%d] : ",i,j);
			scanf("%d",&matrix1[i][j]);
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
	
	
}