 /* 8. Write a program to calculate sum of 5 subjects & find the percentage. Subject 
    marks entered by user.*/
#include<stdio.h>

void main()
{
	int s1,s2,s3,s4,s5,tot;
	float per;

	printf("\n\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 FIND PERCENTAGES : \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	printf("\n\tEnter your physics marks   : ");
	scanf("%d",&s1);
	printf("\n\tEnter your chemistry marks : ");
	scanf("%d",&s2);
	printf("\n\tEnter your maths marks     : ");
	scanf("%d",&s3);
	printf("\n\tEnter your computer marks  : ");
	scanf("%d",&s4);
	printf("\n\tEnter your english marks   : ");
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
 	    
 	
   
    	
}