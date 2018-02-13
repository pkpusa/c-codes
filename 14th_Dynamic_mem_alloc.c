/*-------------------------------------- Demonstration of dynamic allocation of memory--------------------------------------------------------------------*/
/*------------------------------------------------------14th LAB PROGRAM----------------------------------------------------------------------------------*/
/*-----------------------------Use of Malloc, Calloc, Realloc and Free Function Preforming various memeory Functions--------------------------------------*/
 


/* -----------------------------------------------------HEADER FILES----------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
/* -------------- --------------------------------variable num- 	creation of memory----------------------------------------------------------------------------
------------------------------------------------------i - 	for looping -----------------------------------------------------------------------------------
------------------------------------------------option - Choice in Switch Case--------------------------------------------------------------------*/
														
																												
    int num, i, *ptr,option,choice;
    printf("\n ________________________________________________________________________________________________________________\n");
	printf("\n ***********************************BANK MANAGEMENT SYSTEM*******************************************************\n");
	printf("\n ________________________________________________________________________________________________________________\n");
    do{
	
		printf("\nPress 1 to Input Saving Account,\n\nPress 2 to Input Current Account,\n\nPress 3 to Input FD(Fix Deposit Account),\n\nPress 4 to Exit:");
		scanf("%d",&option);
	
		switch(option)
		{
		case 1:
			{
				printf("\nEnter number of Saving Accounts in the BANK: ");
			    scanf("%d", &num);
			
			    ptr = (int*) malloc(num * sizeof(int));  /* memory allocated using malloc*/
			    if(ptr == NULL)                     
			    {
			        printf("Error! memory not allocated.");
			        exit(0);
			    }
			
			    
			    for(i = 0; i < num; ++i)
			    {
			    	printf("\nEnter the Balance Limit of Saving Account :\n ");
			        scanf("%d",ptr + i);
			    }
			
			    printf("\nHere is the Your Balance Limit for the Saving Account :\n ");/* Printing the Allocated memory*/
			    for(i = 0; i < num; ++i)
			    {
			        printf("Balance in 47476001%d Account No = %d\n",i, *(ptr + i));
			    }
			    
			free(ptr);
			break;
			//return main();
			  //goto MAIN;  
			}
		case 2:
			{
				printf("\nEnter number Of Current Account in Bank : ");
			    scanf("%d", &num);
			    
				
			    ptr = (int*) calloc(num, sizeof(int));  /*memory allocated using calloc*/
			    if(ptr == NULL)                     
			    {
			        printf("Error! memory not allocated.");
			        exit(0);
			    }
			
			    
			    for(i = 0; i < num; ++i)
			    {
			    	printf("\nEnter the Balance Limits For Current Account:\n ");
			        scanf("%d", ptr + i);
			    }
			
			    printf("\nHere the Balance Limits for your Current Accounts:\n\n ");/* Printing the value at Allocated memory*/
			    for(i = 0; i < num; ++i)
			    {
			        printf("Balance in  4746001%d Account is = %d\n",i ,*(ptr + i));
			    }
			    
			
				free(ptr);
				break;
				//return main();	
				//goto MAIN;
			}
		case 3:
			{	
				printf("\nEnter number of Fix Deposits: ");
			    scanf("%d", &num);
			    
	/*----------------------- Initialization of the value of ptr to null for reallocation---------------------------------*/
			    
			    ptr = NULL;
				
//				ptr = (int*) malloc(num * sizeof(int));
			    ptr = (int*) realloc(ptr, 5*sizeof(int));  /* memory allocated using realloc*/
				if(ptr == NULL)                     
			    {
			        printf("Error! memory not allocated.");
			        exit(0);
			    }
			
			    printf("\nEnter Balances for all Fix Deposits :\n ");
			    for(i = 0; i < num; ++i)
			    {
			        scanf("%d", ptr + i);
			    }
			
			    printf("\nBalances in Fix deposit accounts are: \n ");
			    for(i = 0; i < num; ++i)
			    {
			        printf(" Balance in 4746001%d Account is = %d\n",i, *(ptr + i));
			    }
			    
			    free(ptr);
			    break;
			}
		case 4:
			{
				printf("\nSystem will now exit!");
				return 0;
				exit(0);
			}
		default:
			{
				printf("\nInvalid Input.");
				
			}
	}
	printf("Do You Want to continue(Enter Y Or N) \n");
	
	scanf("%s",&choice);
	getchar();
	
}while(choice=='Y' || choice=='y');

    return 0;
}
