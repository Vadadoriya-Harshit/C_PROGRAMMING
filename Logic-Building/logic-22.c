#include<stdio.h>


void main()
{
	char name1[23];
	char name2[23];
	char name3[23];
	char name4[23];
	char name5[23];	
	
	int sal1,sal2,sal3,sal4,sal5;	

 printf("\nEnter Name Of Employe 1 : ");
 scanf("%s",name1);
  printf("\nEnter Salary Of Employe 1 : ");
 scanf("%d",&sal1);
   printf("\nEnter Name Of Employe 2 : ");
 scanf("%s",name2);
   printf("\nEnter Salary Of Employe 2 : ");
 scanf("%d",&sal2);
  printf("\nEnter Name Of Employe 3 : ");
 scanf("%s",name3);
   printf("\nEnter Salary Of Employe 3 : ");
 scanf("%d",&sal3);
  printf("\nEnter Name Of Employe 4 : ");
 scanf("%s",name4);
   printf("\nEnter Salary Of Employe 4 : ");
 scanf("%d",&sal4);
  printf("\nEnter Name Of Employe 5 : ");
 scanf("%s",name5);
   printf("\nEnter Salary Of Employe 5 : ");
 scanf("%d",&sal5);
  
  int total = sal1 + sal2 + sal3 + sal4 + sal5;
  float avragesalary = total /5;


 printf("\n avragesalarys is %.2f",avragesalary);

	

}