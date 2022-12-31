#include<stdio.h>

	void main()
	{
		int num;
		int i=1;
		printf("\n\n\t\t ENTER ENY NUM ");
		scanf("%d",&num);
		
		lable:
			printf("\n\n\t\t%d ",i);
			i++;
			if(i<=num)
			  goto lable;
	}
