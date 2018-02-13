/* Demonstration of pointer operations and macros processing*/

#include <stdio.h>   
#define a 3
#define MAX 3  
#define inc(x) x+1
#define dec(x) x-1

int invSize(int *arr, int size)
{
	int l;
	for(l=0; l<size;l++)
	{
		printf("%d \t",arr[l]);
	}
	printf("\n");
}   

int main()
{          
	int mini,option,ch;
	int inventory[MAX]={1076,2118,786};
	printf("\n_________________________________________________________________________________________________________________\n");
	printf("\n ************************************BANK MANAGEMENT SYSTEM***************************************************\n");
	printf("\n__________________________________________________________________________________________________________________\n");
	printf("\nEnter number of Accounts:");
	scanf("%d",&mini);      
	int *account;//pointer to int    
	account=&mini;//stores the address of number variable 
	do{
	  
	printf("\nPress 1 to Increment,\n 2 for Addition,\n 3 for Subtraction,\n 4 to Decrement,\n 5 to See No of accounts in Bank,\n 6 to Exit:\n");
	scanf("%d",&option);
	switch(option)
	{
	    case 1:
		{	
			printf("\nVALUE of Account no of customer is %d \n",account);
			printf("Address of Account no of customer is %u \n",&account); /* Increment */
			printf("After increment: Address account variable is %u \n",inc(&account)); 
			break;
		}
		
		case 2:
		{
			printf("\nVALUE of Account no of customer is %d \n",account);
			printf("Address of Account no of customer %u \n",&account);      
			account=account+a;   //adding 3 to pointer variable  
			printf("After adding 3: Address account variable is %u \n",account); 
			break;
		}
		
		case 3:
		{
			printf("\nVALUE of Account no of customer is %d \n",account);
			printf("Address of Account no of customer %u \n",&account);      
			account=account-a; //subtracting 3 from pointer variable  
			printf("After subtracting 3: Address of account variable is %u \n",account); 
			break;
		}
		
	    case 4:
		{
			printf("\nVALUE of Account no of customer is %d \n",account);
			printf("Address of account variable is %u \n",&account); /* Decrement */
			printf("After decrement: Address of account variable is %u \n",dec(&account)); 
			break;
		}
		
		case 5:
		{
			printf("\nNo of accounts for SAVING, CURRENT and FD ACCOUNTS respectively:\n");
			invSize(inventory,MAX);
			break;
		}
		
		case 6:
		{
			printf("\nThe Program will now exit! \n");
			break;
		}
		
		default:
		{
			printf("\nInvalid Input\n");
			break;
		} 
	}
}while(ch!=0);
return 0;
} 
