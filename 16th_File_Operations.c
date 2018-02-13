/****************************************************************************************************************************************************************/
/*									16th LAB WORK :- Various File OPerations In c
									Domain :- Bank Management System
****************************************************************************************************************************************************************/



/*Defining Header Files and Macros*/
									
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define AADHAR 10
#define NAME 30
#define ACNO 20
#define ITEM 10
#define MAX 10
#define FILESIZE 80

/* Defining Structure to get account no, Deposited Balance, And Availavle balance */
typedef struct items{
		char ac_no[ACNO];
		float deposit;
		double avl_bal;
	}itm;
/* Defining structure (reciepts) to get Name of customer, aadhar no and variable to calculate deposited and available balance*/
typedef struct reciepts{
	char name[NAME];
	char aadhar[AADHAR];
	unsigned long total_bal;
	itm t[ITEM];
	
}reciept;



/*********************************************************************************************************************************************************
										layout Function No LOGIC
*********************************************************************************************************************************************************/

void box(){

	
	printf("__________________________________________________________________________________________\n");
	printf("************************************BANK MANAGEMENT SYSTEM********************************\n");
	printf("___________________________________________________________________________________________\n");
	
}

/* Main Function Starts here*/

int main(){
	

	reciept r[ITEM]; /* taking r[] as array of structure reciept */
	
	FILE *fptr;
	char yn;		/* char variable for giving option to customer*/
	int i=0, j=0; /* variablre i and j for looping */
	char filename[FILESIZE];
/*------------------------------- Writing data into the file------------------------------------------------*/
	
	
	
		
	printf("Enter the name of file:- ");
	scanf("%s", filename);
	//strcat(filename,".txt");
	if(filename == NULL)
	{
		printf("Enter some value");
	}
	else
	{
	
	fptr= fopen(filename, "w");
	}
	
	
	
	
	//int total_items;
	
	while(i<MAX){
		system("cls");
		box();
		r[i].total_bal=0;
		
		/*********************Taking input of customer name and Balance***********************************/
		printf("\n\nCustomer Name:- ");
		scanf(" %[^\n]s", r[i].name);
	
		printf("\n\nDear %s !\nPlease Enter Your Aadhar Card No:- ", r[i].name);
		scanf(" %[^\n]s", r[i].aadhar);
		
		/*********************** Display Customer details with balance************************************/
		
		fprintf(fptr, "Customer name:- %s\nAadhar Card  No:- %s\n\n", r[i].name, r[i].aadhar);
		fprintf(fptr, "*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
		fprintf(fptr, "\t Account No \t Deposited Balance\t\t Availavle Balance\n ");
		
		while(j<10){
			system("cls");
			box();
			layout_func();
			printf("\nEnter Your Account No :- ");
			scanf(" %[^\n]s", r[i].t[j].ac_no);			/* input of account No*/
		
			printf("\nEnter the amount You want to Deposit in Account No (%s):- ", r[i].t[j].ac_no); 
			scanf("%f", &r[i].t[j].deposit);  /* Input of deposited amount into particular Account*/
			r[i].t[j].avl_bal = (100/4)* r[i].t[j].deposit;
			fprintf(fptr, "\n%d\t %s \t\t %0.2f \t\t Rs.%0.2f", j+1, r[i].t[j].ac_no, r[i].t[j].deposit, r[i].t[j].avl_bal);
	
			j++;
			printf("\nDo you have more accounts Linked to this Aadhar No (y/n):- ");
			scanf(" %c", &yn);
			if(yn =='y'){
				continue;
			}
			else{
				
/***********************************************************************************************************************************************************
										printing data from the file
**********************************************************************************************************************************************************/

				fprintf(fptr, "\n*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n\n");
				while(j>=0){
					r[i].total_bal += r[i].t[j].avl_bal;
					j--;
				}
				fprintf(fptr, "\t\t\t\t  Total Rs. %lu", r[i].total_bal);
				fprintf(fptr, "\n________________________________________________________________________________\n\n");
				
				
				
				fclose(fptr); /* Closing of the file*/
			
		
				printf("\nDo you want View Your Records(y/n):- ");
				scanf(" %c", &yn);
				if(yn == 'y'){
					fptr = fopen(filename, "r");
					system("cls");
					char ch = fgetc(fptr);
					while(ch != EOF){
						printf("%c", ch);
						ch = fgetc(fptr);
					}
					
					fclose(fptr);
				}
				else{
					system("cls");
					box();
		
					printf("\n\n Thank You, !! \n\n Please Visit Again \n\n ***\t SOUTH INDIAN BANK\t **");
		
					exit(0);
				}
				break;
			}
		
		}
		printf("Do you Want To Make New Entry(y/n) :- ");
		scanf(" %c", &yn);
		if(yn == 'y'){
			continue;
			system("cls");
			
			fptr = fopen(filename, "a");
			i++;
		}
		else{
			system("cls");
			box();
		
			printf("\n\n Thank You, !! \n\n Please Visit Again \n\n ***\t SOUTH INDIAN BANK\t **");
			layout_func();
			exit(0);
		}
	}
	
	
	
/******************************************************************************************************************************************************
												Layout Function No Logic
	**************************************************************************************************************************************************/
	
	
	return 0;
}

void layout_func()  
{
	printf("\t\t\t ___________________________________ \n");
	printf("\n\t\t\t ************* SOUTH INDIAN BANK ************* \n");
	printf("\t\t\t ___________________________________ \n\n\n");
	printf("\t\t\tWelcome to South Indian Bank , !!\n\n");
	printf("\t______________________________________________________________________\n");
}

