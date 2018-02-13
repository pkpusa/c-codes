#include<stdio.h>
#define MAX 30
int main()
{
	
	int ac, sum;/*integer value for account no(ano)  and Sum for sum of intrest and balance*/
	float deposit,x;/* Deposited balance*/
	char name[MAX];/* Character value for customer  name*/
	double aadhar;/* iaadhar card*/
	signed int ifsc;/*Bank ifsc Code*/
	short int age;/* customer age*/
	long int phone;/*phone no of costumer */
	double intrest= 10;/*for input of intrest*/ 
 	int total = (int)intrest*sum;/*Explict conversion from double to int */
 
    
	
	printf("*******BANK MANAGEMENT SYSTEM***********");
	printf("\n \n Please Enter Your Name ..  ");
	scanf("%s",name);
	printf("\nPlease Enter Your Account No :---");/* Input for accout no of customer*/
	scanf("%d",&ac);
	printf("\nPlesae Enter your Ifsc code  ");/* input for Ifsc code of Customer*/
	scanf("%d",&ifsc);
	printf("\nEnter your age   ");/* Input for age of the customer*/
	scanf("%d",&age);
	printf("\nEnter Your aadhar no   ");/* input for aadhar no of customer*/
	scanf("%d",&aadhar);
	printf("\nEnter your phone No   ");/* input for phone no of customer*/
	scanf("%d",&phone);
	printf("\nEnter the amount You want to ddeposit   ");/* amount that customer want to deposit*/
	scanf("%f",&deposit);
	printf("\nEnter your previous balance  ");/* input of previous balance*/
	scanf("%f",&x);
	
	sum=deposit + x;/* Calculation of previos balance and new balance*/
	

	printf("\n\nCustomer Name = %s",name);
	
	printf("\n\nAccount No = %d",ac);
	
	printf("\n\nIfsc Code = %d",ifsc);
		
	printf("\n\nAge =  %d",age);
			
	printf("\n\nAadhar Card No = %d",aadhar);
				
	printf("\n\n Contact No= = %d",phone);
					
	printf("\n\nDeposited Amount in Your account Is=== %f",deposit);

						
	printf("\n\nYour Previous Balance=== %f",x);/* Showing previous balance*/						
						
						
	printf("\n\nTotal Account balane=== %d",sum);/*implict type casting of float value into integer*/
						
	printf("\n\Balance after intrest = %d",total);/*explict type conversion of double into integer*/
								
			
	
	return 0;
	
	
}
