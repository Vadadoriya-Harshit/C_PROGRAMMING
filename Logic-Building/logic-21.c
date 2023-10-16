#include<stdio.h>


void main()
{
	int phy,chem,math,eng,comp;


 printf("\nEnter Physics Marks : ");
 scanf("%d",&phy);
  printf("\nEnter Chemistry Marks : ");
 scanf("%d",&chem);
  printf("\nEnter Maths Marks : ");
 scanf("%d",&math);
  printf("\nEnter English Marks : ");
 scanf("%d",&eng);
   printf("\nEnter Computer Marks : ");
 scanf("%d",&comp);
  
  int total = phy + chem + math + eng + comp;
  float per = total /5;


 printf("\n Percentages is %.2f",per);

	

}