#include<stdio.h>
#include<string.h>
void main()
{
   printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 STRING CONVERT FROM UPPER TO LOWER\xb2\xb2\xb2\xb2\xb2");
   char str[25];
   int i;
   printf("\n\n\t\tEnter the string: ");
   scanf("%s",str);
 
   for(i=0;i<=strlen(str);i++)
   {
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
   }
   printf("\n\n\t\tLower Case String is :- %s",str);
}