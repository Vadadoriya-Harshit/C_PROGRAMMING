#include <stdio.h>
#include <string.h>

void main()
{
    char string1[20];
    int i, length;
    int flag = 0;
    printf("\n\t\t\xb2\xb2\xb2\xb2\xb2  CHECK THE STRING\xb2\xb2\xb2\xb2\xb2");
    
    printf("\n\n\t\tEnter a string : ");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("\n\n\t\t%s is not a palindrome", string1);
    }    
    else {
        printf("\n\n\t\t%s is a palindrome", string1);
    }
    
}