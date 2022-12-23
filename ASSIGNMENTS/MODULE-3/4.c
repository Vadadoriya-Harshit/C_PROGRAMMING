  //4. Write a program to find the Area of Circle //
#include<stdio.h>   
int main()   
{  
   #define PI 3.141  
  // pi=3.14;
    float radius,area;  
    printf("\n\n\t\t\xb2\xb2\xb2\xb2 AREA OF CIRCLE \xb2\xb2\xb2\xb2\n\n");
    printf("\n\t\tEnter radius of circle : ");  
    scanf("%f", & radius);  
    area=PI*radius*radius;  
    printf("\n\n\t\tArea of circle : %0.2f\n", area);  

}   