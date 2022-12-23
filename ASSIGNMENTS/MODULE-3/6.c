   //6. Write a program to find the simple Interest.//

#include<stdio.h>  
int main()   
    {   
        int P,R,T;
	   float SI ;  
     
     printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 SIMPLE INTEREST \xb2\xb2\xb2\xb2\xb2\n\n");;
     printf("\n\t\tEnter Principal(p) is : ");
     scanf("%d",&P);
     printf("\n\n\t\tEnter Rate is(R) : ");
     scanf("%d",&R);
     printf("\n\n\t\tEnter Time(T) : ");
     scanf("%d",&T);
     
     printf("\n\n\t\tP=%d\n\t\tR=%d\n\t\tT=%d",P,R,T);
       SI=(P*R*T)/100;   
    printf("\n\n\t\t Simple Interest is : %.3f",SI);  
        return (0);  
    }  