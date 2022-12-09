#include<stdio.h>

void main()
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		if(i==5||i==8)
		{
			continue;
		}		
		printf("%d\n",i);		
	}
}








