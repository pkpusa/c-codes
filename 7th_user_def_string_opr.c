/* 				7th Lab program demonstrating User defined string function
					Domain:- Bank Management System
					Program Taking Feedback Form customer About the BAnk And its Services */
#include<stdio.h>
#include<stdlib.h>
/* Defining of Macro for column and row size MAX is for row size and MIN is for Column Size*/
#define MAX 50	
#define MIN 5
#define SUGGEST 100
/* Void two string functio*/
void layout_func();
void place_func();
/* Main function getting first and last name from customer*/
void main()
{
	int i,j = 0,k = 0,count = 0,m = 0;	/* variable for looping*/
	char first_name[MAX],last_name[MAX];	/* first name and last name*/
	char short_name[MIN];/*variable for shorting the name*/
	char suggestions[SUGGEST];/* VAriable to take suggestions from customer*/
	
	system("cls");
	layout_func();/* calling layout function*/
	printf("\n\n\n\t\t\t **** WELCOME CUSTOMER ****\n\n");
	printf("Please Enter you First Name\nFirst Name:\t");
	gets(first_name);
	printf("\nPlease Enter your Last Name\nLast Name: \t");
	gets(last_name);
	
	
	for( i = 0; i< MAX; i += 1)				/* a loop that combines first name and last name AND copies it to the first string */
	{
		if(first_name[i] == '\0')
		{
			first_name[i] = ' ';
			i+=1;
			for(j = 0 ; j< MAX; j+=1)
			{
		
			first_name[i] = last_name[j];
			i+=1; 	
 		}
		//first_name[j + 1] = '\0';
		}
		
		
	}

while(first_name[k] != '\0')		/* loop that will change the characters to upper case*/
    {
        if(first_name[k] >= 'a' && first_name[k] <= 'z'){
            first_name[k] = first_name[k] - 32;
        }
 
  k += 1;

  
	}
printf("\n\t\t\t Welcome ");
k=0;
while(first_name[k] != '\0')
{
	printf("%c",first_name[k]);
	k += 1;
}

place_func();/* string function calling*/


while(first_name[count] != '\0' ) 	/* loop that finds the length of the string */
{
	count += 1;
	
}

printf("\n\nDear %s, we have discovered that your name is %d characters long\n",first_name,count -= 1);
m = 0;
if(count >= 5)
{
	printf("\nSo we tried to cut short your name\n\n");
	/* While loop to create short name*/
	short_name[0] = first_name[0];
	while(' ' != first_name[m])
	{
		m += 1;
	}
	short_name[1] = first_name[m+1];
	short_name[2] = '\0';
	printf("\n\t\tWe will call you %s",short_name);
		
}
else
/* Showing results after shorting the name*/
{
	printf("\nWOW, your name is short, so we will call you %s\n",first_name);
}

printf("\n\n\t\t\t*x*x SOUTH INDIAN BANK*x*x\nComments:\t");
gets(suggestions);
printf("\nThank You for your feedback, we will work hard to meet your expectations\nPlease press Enter to exit.");
getch();
}


void place_func()
{
	char place[MAX],tmp[MAX],c;
	int i = 0;
	printf("\n\nFor Our Reference, may we know where are you from ? \nPlace:\t");
	gets(place);
	printf("\nSave Changes? {y/n} \nInput:\t");
	scanf("%c",&c);
	if('y' == c)
	{
		printf("\n\nThank you");
	}
	else
	{
		printf("\nRe-Enter the place you live in ?\nPlace:\t");
		fflush(stdin);
		gets(tmp);
		while('\0' != tmp[i])
		{
			place[i] = tmp[i];
			i += 1;
		}
		place[i] = '\0';
	}
	printf("\nSaved, You live in %s",place);
}
	

/* function to define layout of the program (no Logic)*/
void layout_func()  
{
	printf("\t\t\t ___________________________________ \n");
	printf("\n\t\t\t ************* SOUTH INDIAN BANK ************* \n");
	printf("\t\t\t ___________________________________ \n\n\n");
	printf("\tWelcome to RateIt, a program that lets you rate your favourite things!!\n\n");
	printf("\t______________________________________________________________________\n");
	printf("\n\t\t\t****BANK FEEDBACK FORM ****");
}

