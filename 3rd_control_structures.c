/* C program for implementation of Various Control Structures  */

#include<stdio.h>

#define NAME_LENGTH 30
#define MAIL_LEN 50
#define GENDER_LEN 5
#define ADDRESS_LENGTH 50

int main()
{
	char name[NAME_LENGTH],fname[NAME_LENGTH],email[MAIL_LEN],gender[GENDER_LEN],address[ADDRESS_LENGTH],city[NAME_LENGTH],state[NAME_LENGTH],country[NAME_LENGTH];
	int index,count,ch;
	unsigned long long mob;
	long int dob,pin;/* date of birth and pin code*/
	count = 5;
	
	/* */
	do
	{
		printf("\t\t\tREGISTRATION FORM\n\n");
		printf(" *if u want to register press 1\n \n *want to see the output of the ur registration form press 2\n\n *FOR EXIT press 3\n");
		ch=0;
		scanf("%d",&ch);

		/* */
		switch(ch)/* switch case statement starts here*/
		{
			case 1:
				printf("*******************************************************************************************\n"); 
		printf("\t****************************(BANK MANAMGEMENT SYSTEM)*****************************\n");
		printf("*******************************************************************************************\n");
		printf("\nCustomer Registration Form\npress ENTER to fil the form....\n(please fill the form correctly no changes after pressing enter)\n\n");
		getchar();
		printf("Enter Name of Customer:\n (Max 20 characters a-z and A-z)\n ");
		gets(name);
		
		
		for(index=0;index<sizeof(name);index+=1)
		{
			if(name[index]>=48 && name[index]<=57)/* Validation of name using if condition inside the for loop */
			{
			
				printf("Invalid entry! please enter letters only.\n");
			
			}
		}
		
		printf("Enter Fathers Name:\n (Max 20 characters a-z and A-z)\n"); 
		gets(fname);
		for(index=0;index<sizeof(name);index+=1) /* validation of father's name using if condition inside the for loop*/
		{
			if(fname[index]>=48 && fname[index]<=57)
			{
				printf("Invalid entry! please enter letters only.");
				
			}
		}
		
		printf("Enter mobile no:\n"); 
		scanf("%llu",&mob);
		while(mob < 1000000000 || mob > 9999999999)/*validation of mobile no using while loop*/
		{
   			printf("\n Please enter only 10 digits... \n");
   		
		}
		printf("Enter your Gender:\n(male/female)");/* Gender of customer*/
		scanf("%s",&gender);
		getchar();
		
		printf("Enter Address\n"); /* Address of customer*/
		gets(address);
		
		printf("Enter Your City Name\n"); /* Name of city*/
		scanf("%s",&city);
		
		for(index=0;index<sizeof(city);index+=1) /* validation for name of city*/
		{
			if(city[index]>=48 && city[index]<=57)
			{
			
				printf("Invalid entry! please enter letters only.\n");
				
			}
		}
		count=0;
		break;
		case 2:
		if(5==count)
		{
			printf("first fill ur registration \n\n");
		
		}
		else
		{
		printf("___________________________________\n");   /* Showing outputs*/
		printf("name is %s\n",name);
		printf("fathers name is %s\n",fname);
		printf("date of birth is %s\n",dob);
		printf("email is %s\n",email);
		printf("mobile no is %llu\n",mob);
		printf("gender is %s\n",gender);	
		printf("address is %s\n",address);
		printf("city is %s\n",city);
		printf("pin is %li\n",pin);
		printf("state is %s\n",state);
		printf("country is %s\n",country);
		
	
		printf("___________________________________");
		count=0;
		break;
		}
		case 3:
			exit(0);
			break;
		default: printf("enter correct choice");
		
		}
	}
	while(ch!=0);

	
}

