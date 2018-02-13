/***********************************************************************************************************************************************************/
/*												Domain - BANK MANAGEMENT SYSTEM
														15th LABWORK
							Bitwise Operations( AND , OR, XOR, COMPLIMENT, RIGHT SHIFT AND LEFT SHIFT OPERATIONS)											*/
/*************************************************************************************************************************************************************/												


	/* HEADERS FILES*/
#include<stdio.h>
#include<conio.h>


void layout_func();
void check(int);

void main()
{
	int rate1,rate2,result,bitNotation;
	layout_func();
	
	
	
	printf("\nDear Customer, please enter Your deposit and Withdrawal balance and we will manipulate your Account Balance according to our calculation\n\n");
	printf("\n\t\tEnter Amount of Deposit And Withdrawal(Any Positive Numeric Value for AND Operation) \n");
	
	/* Taking two integer values(Deposit and Withdrawal) for the Bitwise operations */

/***************************************************** Bitwise And Operation *******************************************************************/
	
	printf("\nEnter Deposit \t");
	scanf("%d",&rate1);
	printf("\nEnter Withdrawal \t");
	scanf("%d",&rate2);
	printf("\n\n\nBit Notation of first rate is %d and second rate is %d",convert(rate1),convert(rate2));
	result = rate1 & rate2;
	printf("\nBalance of your Account according to AND OPERATION is \t %d",result);
	check(result);
/*********************************COVERTING RESULT INTO ITS BINARY VALUE**********************************************************/
	bitNotation = convert(result);
	printf("\nBinary form of the following result is %d\n\n",bitNotation);
	void layout_func();
	
	

	
/************************************************* Bitwise OR Operation **********************************************************************/
/*	printf("\n\t\tEnter Amount of Deposit And Withdrawal(Any Positive Numeric Value for OR Operation)");
	printf("\nEnter Deposit Amount\t");
	scanf("%d",&rate1);
	printf("\nEnter Withdrawal Amount\t");
	scanf("%d",&rate2);
	printf("\nBit Notation of first rate is %d and second rate is %d",convert(rate1),convert(rate2));*/
	result = rate1 | rate2;
	printf("\nBalance of Your Account according to OR calculation is \t %d",result);
	check(result);
/*********************************COVERTING RESULT INTO ITS BINARY VALUE**********************************************************/
	bitNotation = convert(result);
	printf("\nBinary form of the following result is %d\n\n",bitNotation);
	void layout_func();
	
	
	
/*********************************************** Bitwise XOR Operation ************************************************************/	
	/*printf("\n\t\tEnter Amount of Deposit And Withdrawal(Any Positive Numeric Value for XOR Operation)");
	printf("\nEnter Deposit Amount\t");
	scanf("%d",&rate1);
	printf("\nEnter Withdrawal Amount\t");
	scanf("%d",&rate2);
	printf("\nBit Notation of first rate is %d and second rate is %d",convert(rate1),convert(rate2));*/
	result = rate1 ^ rate2;
	printf("\nBalance of Your Account according to XOR operation is \t %d",result);
	check(result);
/*********************************COVERTING RESULT INTO ITS BINARY VALUE**********************************************************/
	bitNotation = convert(result);
	printf("\nBinary form of the following result is %d\n\n",bitNotation);
	void layout_func();
	
	
	
/******************************************* Bitwise Complement Operation ************************************************************/	
	/*printf("\n\t\tEnter Amount of Deposit And Withdrawal(Any Positive Numeric Value for Compliment Operation)");
	printf("\nEnter Deposit Amount\t");
	scanf("%d",&rate1);
	printf("\nEnter Withdrawal Amount\t");
	scanf("%d",&rate2);
	printf("\nBit Notation of first rate is %d and second rate is %d",convert(rate1),convert(rate2));*/
	result = ~ rate1;
	check(result);
	printf("\nBalance of Your Account according to COMPLEMENT Operation is \t %d",result);
	result = ~ rate2;
	printf("\n And %d",result);
	check(result);
/*********************************COVERTING RESULT INTO ITS BINARY VALUE**********************************************************/
	bitNotation = convert(result);
	printf("\nBinary form of the following result is %d\n\n",bitNotation);
	void layout_func();
	
	
/******************************************* Bitwise Shift Right Operation ************************************************************/	
	/*printf("\n\t\tEnter Amount of Deposit And Withdrawal(Any Positive Numeric Value for Shift Right Operation)");
	printf("\nEnter Deposit Balance\t");
	scanf("%d",&rate1);
	printf("\nEnter Withdrawal Balance\t");
	scanf("%d",&rate2);
	printf("\nBit Notation of first rate is %d and second rate is %d",convert(rate1),convert(rate2));*/
	result = rate1 >> rate2;
	printf("\nBalance of Your account according to SHIFT RIGHT OPERATION is \t %d",result);
	check(result);
/************************************COVERTING RESULT INTO ITS BINARY VALUE**********************************************************/
	bitNotation = convert(result);
	printf("\nBinary form of the following result is %d\n\n",bitNotation);
	void layout_func();
	
	
/******************************************* Bitwise Shift Left Operation ************************************************************/	
/*	printf("\n\t\tEnter Amount of Deposit And Withdrawal(Any Positive Numeric Value for Shift Left Operation)");
	printf("\nEnter Deposit Balance\t");
	scanf("%d",&rate1);
	printf("\nEnter Withdrawal Balance\t");
	scanf("%d",&rate2);
	printf("\nBit Notation of first rate is %d and second rate is %d",convert(rate1),convert(rate2));*/
	
	result = rate1 << rate2;
	printf("\nBalance of Your account according to SHIFT LEFT OPERATION is \t %d",result);
	
	/*********************************COVERTING RESULT INTO ITS BINARY VALUE**********************************************************/
	bitNotation = convert(result);
	printf("\nBinary form of the following result is %d\n\n",bitNotation);
	void layout_func();
	
}
/*********************************fUNCTION APPLYING VALIDATION THE RESULT****************************************************************/
void check(int rcv)
{
	if(rcv < 0 || rcv > 10)
	{
		printf("\n Which is practically Based on Bitwise Operations.");
	}
}


/******************************function to convert integer value into binary value ************************************************************/

int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}


/******************************************************************************************************************************************************
												Layout Function No Logic
	**************************************************************************************************************************************************/
void layout_func()  
{
	printf("\t\t\t ___________________________________ \n");
	printf("\n\t\t\t ************* SOUTH INDIAN BANK ************* \n");
	printf("\t\t\t ___________________________________ \n\n\n");
	printf("\t\t\tWelcome to South Indian Bank , !!\n\n");
	printf("\t______________________________________________________________________\n");
}
