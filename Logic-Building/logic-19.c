#include<stdio.h>
void main()
{
 int p,r,t;
 
 printf("\nEnter Prionciple : ");
 scanf("%d",&p);
  printf("\nEnter Rate : ");
 scanf("%d",&r);
   printf("\nEnter Term : ");
 scanf("%d",&t);
 
 int res = p * r * t;
 int interest = res/100;
 
printf("The simple interest is : %d",interest);

	

}