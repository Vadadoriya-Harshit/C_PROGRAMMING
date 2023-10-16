#include<stdio.h>


void main()
{
	float temp;

 printf("\nEnter celcius Of Temprature in degree : ");
 scanf("%f",&temp);

  float total =  temp * 9;
  float c= total /5;
  float finalres = c + 32;
  
  printf("Fernheat is : %.2f",finalres);



	

}