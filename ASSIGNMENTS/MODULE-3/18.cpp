  /* 18.Writeaprogram ofto find outthe Area of Triangle,Rectangleand
   Circle using If Condition.(Must Be Menu Driven)*/

#include<stdio.h>
#include<math.h>

int main()
{
	
	int choice;
	int a,b,c;
    float s,area;
	printf("\n\n\t\xb2\xb2\xb2\xb2\xb2\xb2 AREA CALCULATOR \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t-----MENU-----\n\n");
	
	printf("\tenter 1 to find area of triangle : ");
	printf("\n\tenter 2 to find area of rectengle : ");
	printf("\n\tenter 3 to find area of circle : ");
	
	
	printf("\n\n\tENTER YOUR CHOICE : ");
	scanf("%d",&choice);
	
	printf("\n\t CHOICE IS : %d",choice);
	
	
	if(choice==1)
	{
		 
         printf("Enter sides of triangle : ");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("\n\tArea of Triangle is %.2f",area);
	}
	else if(choice==2)
	{
		 float len,breadth,area;
         printf("\n\n\tEnter Length and Breadth of Rectangle : ");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("\n\tArea of Rectangle is : %.2f",area);
	}
		else if(choice==3)
	{
		 float radius,area;
         printf("\tEnter Radius of Circle : ");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("\n\tArea of Circle  is : %.2f",area);
	}
	
}