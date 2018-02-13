/*    						
5th Lab Program taking account no and balance in an array and displays output--------
Implementation Of MultiDimensional Array
Domain:- Bank MAnagement System
							*/

#include<stdio.h>
/* Macros defining size of row and Column of Array*/
#define ROW 2
#define COL 2

int main()

{
	/* ac_no :- 	2D Array Integer value for Input of Account NO 
		row_val :- Value of row 
		col_val :- Value of col
		balance[][] :- 2D ARRAY Float value for input of balance
		
		*/			
	int ac_no[ROW][COL],row_val,col_val;
	float balance[ROW][COL];
	
	printf("***********************************************************************************************");
	printf("\n                               BANK MANAGEMENT SYSTEM                   ");
	printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
	
	printf("\n\n Add Accounts No :-\n");
	
	/* USer input for 2d array element
		Input of Customer Account NO 
	*/
	
	for(row_val = 0;row_val <ROW;row_val ++)
		for(col_val = 0;col_val <COL;col_val ++)
		{
		   printf("\nPlease Enter the Account NO %d%d\n",row_val+1,col_val+1);
		   scanf("%d",&ac_no[row_val][col_val]);
		
		} 
		
		/* Input Of Account Balance */
     printf("\n\nBalance in Account \n\n");
	 
	 for(row_val = 0;row_val < ROW;row_val ++)
	 	for(col_val = 0;col_val<COL;col_val ++)
		 {
		 	printf("\nEnter Balance in Account:-  INR%d%d\n",row_val+1,col_val+1);
		 	scanf("%f",&balance[row_val][col_val]);
		 }   	
	
	 printf("\nThe Account No and Balance\n");
	 
	 
	 /* Displaying 2D ARRAY 
	 	Showing Account NO And Balance in that particular Account*/
	 
	 printf("Account NO :                         Account BAlance:\n");
	 for(row_val=0;row_val<ROW;row_val++)
	{
		for(col_val = 0;col_val <COL;col_val ++)
			printf("%d                            %f\n",ac_no[row_val][col_val],balance[row_val][col_val]);
	
	}
			
	
	
	return 0;
}
