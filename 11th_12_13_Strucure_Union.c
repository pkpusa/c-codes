/*-----------------------------------------------------------------------------------------------------------------------------------------

										 Implementation of pointers to structures and unions 
										 
										 Labwork :- 11th, 12th &13th
										 Domain :- Bank Management SYStem
										 
										 
-------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include<stdlib.h>
#define MAX 3

/*Implementation of structure */
struct account
{
   int sno;
   float quantity;
   char name[10];
};

int main()
{
	int i,option,choice,num;
    struct account account[MAX];

    do{
    	system("cls");
    printf("\n**********************BANK MANAGEMENT SYSTEM*********************************\n");
    
	printf("\n\nPress 1 to VIEW CUSTOMER name & BALANCE,\nPress 2 For VIEW only BALANCE,\nPress 3 to Generate  account No:\nPress 4 to Exit:");
    scanf("%d",&option);
    switch(option)
    {
    	case 1:
    		{
    			system("cls");
				printf("\nEnter the NO of Customers you want to Display\n(only numeric value) :");
				scanf("%d",&num);
				for(i = 0; i < num; i ++) /* Array to structures */
				{ 
				    printf("\nEnter Accout NO: ");
				    scanf("%d",&account[i].sno);
				
				    printf("\nEnter Account Balance: ");
				    scanf("%f",&account[i].quantity);
				    
				    printf("\nEnter Customer Name: ");
				    getchar();
				    fflush(0);
				    scanf("%s",&account[i].name);
				    getchar();
				}
				system("cls");
				printf("\n***************************************BANK MANAGEMENT SYSTEM********************************************************\n\n\n\n");
				for(i = 0; i < num; i ++)
				{
					
					
					printf("\nDear %s following are Your details inputted by You:\n\n",account[i].name);
					printf(" \nAccount NO :			%d\nAccount Balance:	%f\nName:				%s",account[i].sno,account[i].quantity,account[i].name);
				}
				break;
			}
		case 2: 
			{
			/*-------------------- Implementation of union--------------------------------------*/
			/*---------------Either name or balance will be printed as it creates common memeory for both--------------*/	
				union p_account
				{
   					char name[32];
   					int acno;
   					
   					float bal;
   					
				} p_account1;

				system("cls");
   				printf("\n\nEnter name:");
   				scanf("%s", &p_account1.name);
   				
   				
   				printf("\n\nEnter Acoount NO:");
   				scanf("%d",&p_account1.acno);
   				

   				printf("\nEnter Balance in Account: ");
   				scanf("%f", &p_account1.bal);
				system("cls");
				printf("\n***************************************BANK MANAGEMENT SYSTEM********************************************************\n\n\n\n");
   				printf("Displaying\n:%s\n (Customer Account No  is kept Hidden because of Seurity Reason,) \n \n We are Displaying only the balance only:-\n", p_account1.name);
   				printf("Account Balance: %.1f", p_account1.bal);
	
				break;
				}
		
			
		case 3:
			/*-----------------------Use of pointer inside the structure----------------------------------------*/
			{
				typedef struct create
			{
   				int ifsc,serial;
			};

			system("cls");
    		struct create *personPtr, person1;
    		personPtr = &person1;            // Referencing pointer to memory address of person1

    		printf("Enter branch code  : ");
    		scanf("%d",&(*personPtr).ifsc);

    		printf("Enter the unique no\n(serial no of the account holder to create account no):\n ");
    		scanf("%d",&(*personPtr).serial);
			system("cls");
			printf("\n***************************************BANK MANAGEMENT SYSTEM********************************************************\n\n\n\n");
    		printf("Unique Account NO is generated\n ");
    		printf("\nAccount No :=  %d%d",(*personPtr).ifsc,(*personPtr).serial);	
				
				break;
				}	
	
		case 4:
			{
				printf("\n System will now exit");
				return 0;
			}
		default:
			{
				printf("\nInvalid Input");
				
			}
	}
	
	printf("\n\n\nDo You Want to continue(Enter Y Or N) \n");
	
	scanf("%s",&choice);
	getchar();
	
}while(choice=='Y' || choice=='y');
	
return 0;
}

