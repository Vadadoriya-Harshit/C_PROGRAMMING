#include<stdio.h>

void main()
{
	char ch;
	
	printf("\n\t\xb2\xb2\xb2\xb2\xb2 please select \xb2\xb2\xb2\xb2\xb2\n");
	
        	printf("\n\t ENTER M FOR MONDAY ");
		    printf("\n\t ENTER T FOR TUESDAY");
			printf("\n\t ENTER W FOR WEDNESDAY ");
			printf("\n\t ENTER H FOR THURSDAY");
			printf("\n\t ENTER F FOR FRIDAY ");
			printf("\n\t ENTER S FOR SATURDAY ");
			printf("\n\t ENTER U FOR SUNDAY");
			
			printf("\n\n\ntEnter Your Choice ? : ");
			scanf("%c",&ch);
			
			printf("\n\n\t The Choice Is : %c ",ch);
			
			switch (ch)
			{
			
			case'm' :
			case'M' : printf("\n\tMONDAY");
		       	break;
			case't' :
			case'T' : printf("\n\tTUESDAY");
			    break;
			case'w' :
			case'W' : printf("\n\tWEDNESDAY");
			   break;
			case'h' :
			case'H' : printf("\n\tTHURSDAY");
			   break;
			case'f' :
			case'F' : printf("\n\tFRIDAY");
			   break;
			case's' :
			case'S' : printf("\n\tSATURDAY");
			   break;
			case'u' :
			case'U' : printf("\n\tSUNDAY");
			   break;
			default :printf("\INVAILD NUMBER");
		}
			
}