#include<stdio.h>

void main()
{
	int i,j;
	int matrix[3][3];
	int matrix2[3][3];
	
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 SUBTRACTION OF MATRIXs \xb2\xb2\xb2\xb2\xb2");
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 MATRIX 1 \xb2\xb2\xb2\xb2\xb2");
	printf("\n\n\t\t ENTER ELEMENTS OF MATRIX : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t\tEnter Element[%d][%d] : ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 MATRIX 2 \xb2\xb2\xb2\xb2\xb2");
	printf("\n\n\t\t ENTER ELEMENTS OF MATRIX2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t\tEnter Element[%d][%d] : ",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("\n\n\tMATRIX ELEMENTS ARE : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",matrix[i][j]);
	   }
	   printf("\n");
	}
	printf("\n\n\tMATRIX2 ELEMENTS ARE : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",matrix2[i][j]);
	   }
	   printf("\n");
	}
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 SUBTRACTION \xb2\xb2\xb2\xb2\xb2\n\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",matrix[i][j]-matrix2[i][j]);
	   }
	   printf("\n");
	}
}