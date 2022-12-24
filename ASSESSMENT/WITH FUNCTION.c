#include<stdio.h>
#include<conio.h>

void food()
{
	int choice,qty;
	float price,amt,totalamt;
	char ans,addanother;
	
	
	
	printf("\n\n\t========================  MENU  ==========================");
	printf("\n\n\t\t 1.Pizza\t price = 180rps/pcs");
	printf("\n\t\t 2.Burger\t price = 100rps/pcs");
	printf("\n\t\t 3.Dosa  \t price = 120rps/pcs");	
	printf("\n\t\t 4.Idli  \t price =  50rps/pcs");
	
	
	printf("\n\n\t\t Enter Your Choice ? : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	 case 1:  printf("\n\t\t You Have Selected Pizza");
	          price = 180.00;
	    break;
	case 2:  printf("\n\t\t You Have Selected Burger");
	          price = 100.00;
	    break;
	case 3:  printf("\n\t\t You Have Selected Dosa");
	          price = 120.00;
	    break;
	case 4:  printf("\n\t\t You Have Selected Idli");
	          price = 50.00;
	    break;
	}
	//for quantity//
	printf("\n\n\t\t Enter Quantity  : ");
	scanf("%d",&qty);
	
	amt = price * qty ;
	
	printf("\n\t\t Amount is        : %.2f",amt);
	
	 totalamt = totalamt + amt;
	 printf("\n\n\t\t The Total Amount is : %.2f",totalamt);
	printf("\n\n\t\t Do You Want Place More Order ? : y & n ? : ");
    scanf("%s",&ans);
	     
     switch(ans)
     {
     	 case'y':food();
     	 case'Y'
     	       break;
     	 case'n':
		 case'N':printf("\n\n\t\t THE FINAL BILL AMOUNT IS : %2.f",totalamt);
     	       break;
      }
}
void main()
{
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 FOOD BILLING SYSTEM \xb2\xb2\xb2\xb2\xb2\xb2\xb2");
	
	food();
}  