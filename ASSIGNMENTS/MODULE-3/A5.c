
#include<stdio.h>
int main()
{
	
   int arr[10], n, element, position=0;
   int i;

  printf("\n\t\tENTER ELEMENTS OF ARRAY :-\n");
  for(i=0;i<10;i++)
  {
  	printf("\n\t\t ENTER ELEMENT [%d] : ",i+1);
  	scanf("%d",&arr[i]);
  }
    printf("\n\t\tELEMENTS ARE : ");
    for(i=0;i<10;i++)
    {
    	printf("\n\t\t%d",arr[i]);
	}
    
    printf("\n\t\t====================search engine================");
   printf("\n\n\t\t ENTER POSITION TO SEARCH : ");
   scanf("%d",&position);

   for(i=0; i<10; i++)
   {
     if(arr[i]==position)
     {
       printf("\n\t\t%d FOUND AT ELEMENT : %d", position, i+1);
       return 0;
     }
   }

   printf("\n\n\t\t\t%d IS NOT FOUND.", element);
   return 0;
}
