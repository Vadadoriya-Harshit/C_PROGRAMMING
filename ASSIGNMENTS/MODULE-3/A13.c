#include <stdio.h>
#include <string.h>
 
void main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2  TOTAL NUMBER OF WORDS \xb2\xb2\xb2\xb2\xb2");
	
  	char str[100];
  	int i, totalwords;
  	totalwords = 1;
 
  	printf("\n\n\t\t Please Enter any String :  ");
  	gets(str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;	
		} 
	}	
	printf("\n\t\t total number of words :- %s  = %d", str, totalwords);
	
  	
}