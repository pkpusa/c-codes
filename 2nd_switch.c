 #include<stdio.h>
int main()
{
	int amount,ch;/* amount = the amount customer want to make FD. ch= for selection of choice*/
	float bal;/* bal variable to store balance after calculation of intrest */
	printf("\n********BANK Intrest calculator*******");
	printf("\n\n1.Press 1 for 3 Month Deposit\n\n2.Press 2 for 6 month deposit\n\n3.Press 3 For for one year Deposit");
	
	
	printf("\n\n Enter Choice : ");
	scanf("%d",&ch);
	
	switch(ch)	/* switch case statement starts here */
	{
		case 1:
			{
			
			printf("\n\nEnter amount you want to deposit :   ");
			scanf("%d",&amount);
			
			if(amount>=10000 && amount<=50000)	/* implementation of if statement inside switch case */
			{
				bal=amount+(amount/40);/* calculation of intrest*/
				printf("\n\nYour balance after intrest = %f",bal);
			}
			else
			{
				printf("\n\ninvalid amount");
			}
			break;
			}
		case 2:
			{
				printf("\n\nEnter amount you want to deposit	");
			scanf("%d",&amount);
			
			if(amount>=10000 && amount<=50000)
			{
				bal=amount+(amount/20);
				printf("\n\nYour balance after intrest = %f",bal);
			}
			else
			{
				printf("\n\ninvalid amount");
			}
			break;	
				
			}
			
		case 3:
			{
			printf("\n\nEnter amount you want to deposit	");
			scanf("%d",&amount);
			
			if(amount>=10000 && amount<=50000)
			{
				bal=amount+(amount/10);
				printf("\n\nYour balance after intrest = %f",bal);
			}
			
			else
			{
				printf("\n\n invalid amount");
			}
			break;
		}
		
		
	}	

return 0;
}
