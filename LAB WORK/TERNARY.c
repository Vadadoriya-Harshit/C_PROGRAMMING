#include<stdio.h>

void main()
{
	int a,b,c,t,max;
	printf("\n\n\t\t\t\xb2\xb2\xb2\xb2\xb2 TERNARY \xb2\xb2\xb2\xb2\n\n");
	
	printf("\n\t\t\t Enter   A  : ");
	scanf("%d",&a);
	printf("\n\t\t\t Enter   B  : ");
	scanf("%d",&b);
	printf("\n\t\t\t Enter   c  : ");
	scanf("%d",&c);
	printf("\n\t\t---------------------------------");
	printf("\n\t\t\tA=%d\tB=%d\tc=%d",a,b,c);
	
	
    
	t=a>b?:b;
	max=t>c?t:c;
	printf("\n\n\t\t\t THE MAXIMUM NUMBER IS :- %d",max);
}