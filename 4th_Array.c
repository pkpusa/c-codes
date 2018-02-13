/* Fourth Lab program */
/* implementation of Array to take input of some number inside array and gives the output of their total and Average*/
/* Domain :- Bank Management Syatem */


#include<stdio.h>
#include<stdlib.h>
#define MAXSlZE 10
 
int main()
{
    int array[MAXSlZE];
    int i, num, sum = 0,ch;
    float total = 0.0, average;
 	
 	printf("***************************************BANK MANAGEMENT SYSTEM*****************************\n");
 	
 	printf("\nPress 1 for check the average\nPress 2 for EXit.\n");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 		case 1:/* Taking input of detail form user*/
 		{
 			printf("\n\n**********************WELCOME TO AVERAGE CALCULATOR MENU************************************\n\n(Please enter only the positive values)");
 			printf ("\n\nEnter No of Account Holders \n");
    		scanf("%d", &num);
    		printf("Enter Account Balance of %d Customers \n", num);
    		for (i = 0; i < num; i++)
    		{
        		scanf("%d", &array[i]);
    		}
    		printf("inputed Balances are :--  \n");
    		for (i = 0; i < num; i++)
    		{
        	printf("%+3d\n", array[i]);
    		}
    		/*  Summation starts */
    		for (i = 0; i < num; i++)
    		{
        
        		if (array[i] > 0)
        		{
            		sum = sum + array[i];
        		}
       			else if (array[i] == 0)
        		{
            		;
        		}
    	    	total = total + array[i] ;
    		}
    		average = total / num;
    		/*showing outut of sum and average*/
			printf("Total Available Balance Form All Customers  =  %d\n", sum);
    		printf("\n Average Balance for all the accounts =  %.2f\n", average);
    		break;
		 }
 		
 		
 		
 		case 2:
 			{
			 
 				exit(0);
 				break;
			}
			 
		default :
		{
			break;
		   }   	 
 	
	 
	 }
 		
 return 0;
}
