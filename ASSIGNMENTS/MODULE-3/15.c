   /*15.Write a program user enter the 5 subjects mark. You have to make a totaland find the percentage.
   Percentage > 75 you have to print“Distinction”
   Percentage > 60 and percentage <= 75 you have to print “Firstclass”
   Percentage >50 and percentage <= 60 you have to print “Second class” Percentage > 35 and 
   percentage <= 50 you have to print “Pass class” Otherwise print“Fail*/
 
#include<stdio.h>

void main()
{
	int s1,s2,s3,s4,s5,tot;
	float per;

	printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 FIND PERCENTAGES : \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	printf("Enter your physics marks   : ");
	scanf("%d",&s1);
	printf("Enter your chemistry marks : ");
	scanf("%d",&s2);
	printf("Enter your maths marks     : ");
	scanf("%d",&s3);
	printf("Enter your computer marks  : ");
	scanf("%d",&s4);
	printf("Enter your english marks   : ");
	scanf("%d",&s5);
	
	printf("\n\n\t\xb2\xb2\xb2\xb2 CANDIDATE'S RESULT: \xb2\xb2\xb2\xb2\n");
	
      	printf("\n\t\t physics  :%d",s1);
   	    printf("\n\t\t chemistry:%d",s2);
  	    printf("\n\t\t maths    :%d",s3);
   	    printf("\n\t\t computer :%d",s4);
 	    printf("\n\t\t english  :%d",s5);
 	    
 	    tot=s1+s2+s3+s4+s5;
 	    
 	    printf("\n\t----------------------------------");
 	    printf("\n\t\tTOTAL IS :%d",tot);
 	    
 	    per=(float)tot/5;
 	    
 	    printf("\n\n\t Percentges is : %.2f",per);
 	    
 	    if(per>=75)
 	    {
 	    	printf("\n\n\t DESTINATION");
		 }
		 else if(per>=60)
		 {
		 	printf("\n\n\t FIRST CLASS");
		 }
 	     else if(per>=50)
 	     {
 	     	printf("\n\n\t SECOND CLASS");
		  }
 	     else if(per>=40) 
 	     {
 	     	printf("\n\n\t PASS CLASS");
		  }
         else
         {
         	printf("\n\n\t BETTER LUCK NEXT TIME(FAIL)");
		 }
    	
}