#include <stdio.h>
#include <string.h>
 
void printReverse(char str[])
{
    int length = strlen(str);
 
    
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
 
            str[i] = '\0';
 
            printf("\t%s ", &(str[i]) + 1);
        }
    }
 
    
    printf("%s", str);
}
 
// Driver code
void main()
{
    char str[] = "I AM A GEEK";
    printReverse(str);
    
}