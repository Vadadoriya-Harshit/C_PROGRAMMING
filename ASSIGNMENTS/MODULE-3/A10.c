#include<stdio.h>

void main()
{

	int i,j,max;
	int matrix[3][3];
	
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 FIND MAX FROM MATRIX \xb2\xb2\xb2\xb2\xb2");
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
		printf("\n\n\tMATRIX ELEMENTS ARE : \n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",matrix[i][j]);
	   }
	   printf("\n");
	}
	 for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max<matrix[i][j])
                max = matrix[i][j];
        }
    }
    printf("\n\n\t\tMAXIMUM NUMBER = %d", max);
}