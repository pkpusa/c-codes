/* 6th Labwork Implementation of Call by Value and Call by Referance and Recursion
	Domain :- Bank Management System */
	
#include<stdio.h>
#include<string.h>
#define  ROW 5
#define COL 30

void print(char name[COL])  /* function 1 declared as print to show the output */
{

	int employee_id;/* variable declared to take input of employee id*/
	printf("Enter the employee_id :"); 
	scanf("%d",&employee_id); /*it takes the player id */
	find(name,employee_id); /*here call by value takes place */
	}
	
void find(char name[COL], int employee_id) /*function 2 declared as a "find" */
	{
		int code;
		
	printf("\nENTER YOUR BRANCH CODE:"); /*user enter their Branchs code for taking the information */
	printf("\n");
	printf("---------------------------");
	

	printf("\n Codes of Different Branches:"); /*it is a codes of different Branchs */
    printf("\n BTM Layout=1");
	printf("\n Kormangla=2");	
	printf("\n Jaynagar=3");
	printf("\n S.G Palaya=4");
	printf("\n Electronic City=5");
	printf("\n Hosur Road=6");
	printf("\n");
	scanf("\n%d",&code);
	
	switch(code) /*here switch case is start it gives us the player id and name and gives the information about their session and also time */
	{
		case 1:
			printf("\n You Selected BTM LAyout Baranch "); /*print the Branch name */
			printf("\n%s employee_id %d Today is Loan fair inthis branch At 1:00 Pm",name,employee_id); /*print the session  name and time */
			break;
			
		case 2:
			printf("\n You Selected Kormangla branch "); /*print the Branch name */
			printf("\n %s employee_id %d Today is One day workshop On GST at Kormangla Branch",name,employee_id); /*print the session  name and time */
			break;
				
		case 3:
			printf("\n You have Selected Jaynagar Branch "); /*print the Branch name */
			printf("\n %s employee_id %d There is not any session in this branch",name,employee_id); /*print the session  name and time */
			break;
					
		case 4:
			printf("\n You Have Selected S.G Palaya Branch "); /*print the Branch name */
		 	printf("\n %s employee_id %d Today is an Cultural(inter-Bank Cultural) Event here @ 2:pm ",name,employee_id); /*print the session  name and time */
			break;
						
		case 5:
			printf("\n You have Selected Electronic City Branch "); /*print the Branch name */
			printf("\n %s employee_id %d Account Opening Session(Jan DHAN Yojna) 9:00 - 4:00",name,employee_id); /*print the session  name and time */
			break;
								
		case 6:
			printf("\n You Have Selected Hosur Road Branch"); /*print the Branch name */
			printf("\n %s employee_id %d This Branch is Closed ( SHifting to another location)",name,employee_id); /*print the session  name and time */
			break;
										
		default :
			printf("ENTER CORRECT CHOICE\n :"); /*print the Branch name */
		    find(name,employee_id); /*here recursion takes place it calls the find function */
			break;
	    }
	getchar();

	}
	void main()
	{	
		int index,customer_count;
		char name[ROW][COL];
		printf("\n\t\t\t\t\t\tINFORMATION ABOUT SESSION :");
		printf("\n number of Employee :"); /*number of Employee */
		scanf("%d",&customer_count);
	
	
		for(index=0;index<customer_count;index+=1) /*loop starts to enter the various Employee information */
		{
			fflush(stdin);
			printf("\n Please Enter the Name :   \n");
			scanf("%s",&name[index]);
			print(name[index]); /*call reference and passing arrays take place */
		}
	
	getchar();
}



