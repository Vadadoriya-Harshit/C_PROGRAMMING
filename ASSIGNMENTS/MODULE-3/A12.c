#include <stdio.h>
void main()
{
char s[100];
int i;
printf("\n\t\t\xb2\xb2\xb2\xb2\xb2 LENGTH OF STRING\xb2\xb2\xb2\xb2\xb2\n");
printf("\n\t\tENTER A STRING :");
//scanf("%s",&s);
gets(s);
for(i = 0; s[i]!='\0'; ++i);

printf("\\nn\t\tlength of string : %d", i);
}
