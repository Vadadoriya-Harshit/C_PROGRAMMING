#include<stdio.h>
#include<conio.h>
struct student
{
int rollno,tot;
char name[25];
int mark[3];
float per;
};
void main()
{
	int n,i,j;
	struct student s[3];
	printf("\n\n\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 RECORDS OF STUDENT \xb2\xb2\xb2\xb2\xb2\xb2\xb2");
  printf("\n\n\n\t\t\tEnter The Number of Students :");
  scanf("%d",&n);
  
  printf("\n\n\t\t\t============= students record ===============");
  
  
  
  for(i=0;i<n;i++)
  {
  
  	printf("\n\n\t\t\t------------------- Student %d -------------------",i);
  	
printf("\n\n\t\t\t Enter Student Roll Number          : ");
scanf("%d",&s[i].rollno);
printf("\n\n\t\t\tEnter Student name                  : ");
scanf("%s",s[i].name);
printf("\n\n\t\t\tEnter Student's 3 subject's marks   : ");
  
  for(j=0;j<3;j++)
  
    scanf("%d",&s[i].mark[j]);
  }
  for(i=0;i<n;i++)
  {
   s[i].tot=0;
  for(j=0;j<3;j++)
      {
    s[i].tot = s[i].tot+ s[i].mark[j];
     }
   }
   for(i=0;i<n;i++)
   {
   	s[i].per = s[i].tot/3; 
   }
   printf("\n================================== Result Section ====================================\n");
     for(i=0;i<n;i++)
    {
    	
   printf("\n\t\t------------*Student %d Records*-----------\n",s[i].rollno);
   
   printf("\n\t\tStudent's Roll no.      : %d", s[i].rollno);
   printf("\n\t\tStudent's Name is       : %s", s[i].name);
   printf("\n\t\tStudent's Total Marks   : %d", s[i].tot);
   printf("\n\t\tStudent's percenrage is : %.2f",s[i].per);
    }
    getch();
}
