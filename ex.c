#include<stdio.h>
#include<conio.h>
#define CUSTOMER_COUNT 3
#define NAME_LENGTH 32
extern void fun()
{
	auto int  num,i;
	float ac[NAME_LENGTH];
	static int mob; /* mob[] :- Mobile no of customers.  ac[] :- Account no of customers*/
	register float balance;
	char name[NAME_LENGTH];/* name[] :- Name of customers */
	balance=0.0;
	printf("\n*****************************************\n");
	printf("\n********BANK MANAGEMENT SYSTEM***********\n");
	printf("\n*****************************************\n");
	printf("\n Enter your name:\n ");
	scanf("%s",&name);
	printf("Enter phone number of customer   =  ");
    scanf("%d",&mob);
    printf("\n Enter the number of accounts you hold =  ");
    scanf("%d",&num);
	for(i= 0;i<num;i+=1)
	{
		printf("Enter the amount in %d account:\n",i+1);
		scanf("%f",&ac[i]);
 		
	}
 	for(i=0;i<num;i += 1)
 	{
 	balance=balance+ac[i];	
		
	} 
	printf("\n\t\tDETAILS ARE:\n\n");
	printf("NAME:%s\nMOBILE NUMBER:%d\nTOTAL BALANCE:%f",name,mob,balance);
	
	
	
}
