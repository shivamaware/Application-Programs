#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int);	//Function Declaration
int main()
{
	int iNo = 0; 
	bool iRet = false;
	printf("Enter a number\n");
	scanf("%d",&iNo);
	iRet = CheckEven(iNo);	//Function Call
	if(iRet == true)
	{
		printf("%d is even",iNo);
	}
	else
	{
		printf("%d is not even",iNo);		
	}

	return 0;
}

bool CheckEven(int iValue)	//Function Defination
{

	if(iValue%2 == 0)	
	{
		return true;
	}	
	else
	{
		return false;
	}
}
