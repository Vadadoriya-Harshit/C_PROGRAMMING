#include<stdio.h>

void main()
{
	int x,y,temp;
	printf("\n\n\t\t \xb2\xb2\xb2\xb2\xb2 Swap 2 Num \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t Enter x : ");
	scanf("%d",&x);
	printf("\n\n\t\t Enter y : ");
	scanf("%d",&y);
	
	printf("\n\n\t\t BEFORE SWAPPING  : \n");
	printf("\t\t--------------------------------");
	printf("\n\n\t\t x=%d\ty=%d",x,y);
	   temp=x;
	   x=y;
	   y=temp;
	printf("\n\n\t==============================================\n");
	
	printf("\n\n\t\t AFTER SWAPPING  : \n");
	printf("\t\t---------------------------------");
	printf("\n\n\t\t x=%d\ty=%d ",x,y);
}