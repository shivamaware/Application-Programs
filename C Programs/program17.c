#include<stdio.h>

int Addition(int);	//Function Declaration
int main()
{
	int iNo = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d",&iNo);
	iRet = Addition(iNo);	//Function Call
	printf("Addition is %d",iRet);
	return 0;
}

int Addition(int iValue)	//Function Defination
{
	
	int iSum = 0;
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
		iSum = iSum + iCnt;
	}
	return iSum;
}
