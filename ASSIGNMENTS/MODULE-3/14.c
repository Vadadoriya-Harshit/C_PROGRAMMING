#include<stdio.h>

 /* 4. Write a program to find the Max number from the given three number using 
Ternary Operator*/

#include<stdio.h>
void main()
{
		printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 FIND MAX VALUE THREW TERNARY OPERATOR\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
    int a,b,c,t,max;
    printf("\n\t\t\tenter a :");
    scanf("%d",&a);
     printf("\n\t\t\tenter b :");
    scanf("%d",&b);
     printf("\n\t\t\tenter c :");
    scanf("%d",&c);
    
    t=a>b?a:b;
    max=t>c?t:c;
    printf("\n\n\t\t\tMAX VALUE IS : %d",max);
}
