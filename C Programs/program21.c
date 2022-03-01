#include<stdio.h>

typedef unsigned long int UINT;
UINT Factorial(int);	//Function Declaration
int main()
{
	int iNo = 0; 
	UINT iRet = 0;
	printf("Enter a number\n");
	scanf("%d",&iNo);
	iRet = Factorial(iNo);	//Function Call
	printf("Factorial is %lu",iRet);
	return 0;
}

UINT Factorial(int iValue)	//Function Defination
{
	
	UINT iFact = 1;
	int iCnt = 0;
	
	if(iValue < 0)	//Updater
	{
		iValue = -iValue;
	}	
	
	if(iValue == 0)
	{
		printf("Invalid Input\n");
	}

	/* for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iFact = iFact * iCnt;
	} */
	
	iCnt = 1;
	while(iCnt<=iValue)
	{
		iFact = iFact * iCnt;
		iCnt++;
	}
	return iFact;
}
