/* 8th Labwork 
Implementation of storage types 
Domain:- BAk management System*/

#include<stdio.h>
/* calling external function*/
#include "ex.c"

/*Defining Macro for row ad column*/
#define CUSTOMER_COUNT 3
#define NAME_LENGTH 32
/* Main function taking input by use of switch case*/
void main()
{
int opt;/* option for switch case*/
printf("\nDo you want to continue. Press 1\n");
scanf("%d",&opt);
switch(opt)
{
	case 1:
		fun();
		break;
	default:
		printf("\nInvalid");
		break;
}	
}





