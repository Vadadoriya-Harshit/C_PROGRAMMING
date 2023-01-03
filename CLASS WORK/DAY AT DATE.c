#include<stdio.h>
#include<conio.h>
void main()
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date,mon,year,i,r,s=0,flag=0;
	
	printf("\n\n\t\tENTER A VAILD DATE : ");
	scanf("%d/%d/%d",&date,&mon,&year);
	
	if((year%100!=0)&&(year%4==0)||(year%400==0))
	{
		flag=1;
		month[1]=29;
		
		for(i=0;i<mon-1;i++)
		s=s+month[i];
		s=s+(date+year+(year/4))-2);
		s=ss%7;
		if(flag==1)
		s=s-1;
		printf("\n the day at date is : ");
		
		switch(s)
		{
			case 0:
				printf("sunday");
			case 1:
				printf("monday");
			case 2:
				printf("tuesday");
			case 3:
				printf("wednesday");
			case 4:
				printf("thursday");
			case 5:
				printf("friday");
			case 6:
				printf("saturday");
		}
		
	}
}