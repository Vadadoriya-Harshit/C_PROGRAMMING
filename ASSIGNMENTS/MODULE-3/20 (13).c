#include <stdio.h>  
  
void main()  
{  
    int n,m=1,i,j;  
     
for(i=1;i<=5;i++)  
{  
  for(j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for(i=5-1;i>=1;i--)  
 {  
   for(j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }    
     
    
}  