#include<stdio.h>

int Factorial(int);	//Function Declaration
int main()
{
	int iNo = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d",&iNo);
	iRet = Factorial(iNo);	//Function Call
	printf("Factorial is %d",iRet);
	return 0;
}

int Factorial(int iValue)	//Function Defination
{
	
	int iFact = 1;
	int iCnt = 0;
	
	if(iValue < 0)	//Updater
	{
		iValue = -iValue;
	}	
	
	if(iValue == 0)
	{
		printf("Invalid Input\n");
	}

	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}
