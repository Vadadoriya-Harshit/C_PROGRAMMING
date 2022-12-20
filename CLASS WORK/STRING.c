#include<stdio.h>
#include<string.h>

/*
	String : Collection of characters.
			it terminate's with \0.
			
	strcmp() -> returns 1, if string 1 > string2		
			 -> returns -1, if string 1 < string2
			 -> returns 0, if string1 equals to string 2.				  
*/

void main()
{
	/*char name[10];
	printf("\nEnter Name : ");
	//scanf("%s",&name);
	gets(name);
	printf("\nName : %s",name);
	*/
	
	char str1[10]="tops tech";
	char str2[20]="CG ROAD";
	char str3[10];
	char str4[10]="zootopia";
	char str5[10]="ZOO";
	printf("\nString 1 : %s",str1);
	printf("\nString 2 : %s",str2);
	printf("\n\n\nString Length : %d",strlen(str1));
	printf("\nString Reverse : %s",strrev(str2));
	printf("\nString Copy : %s",strcpy(str3,str1));
	//str3 = str1; invalid
	printf("\nString Concatenation : %s",strcat(str2,str3));
	printf("\nString Compare : %d",strcmp(str4,str5));
	printf("\nString Uppercase : %s",strupr(str4));
	printf("\nString Lowercase : %s",strlwr(str5));
	
	
	
}




