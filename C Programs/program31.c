//Header file inclusion
#include<stdio.h>

//Function Declaration
int CountEven(int);

//Entry point function
int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	iRet = CountEven(iValue);	//Function call
	printf("Number of even digits in number are: %d\n",iRet);
	
	return 0;
}

//Function defination
int CountEven(int iNo)
{
	//Local variables
	int iDigit = 0;
	int iCnt = 0;
	if(iNo == 0)
	{
		return 1;
	}
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;	
		if((iDigit % 2) == 0)
		{
			iCnt++;
		}	
		iNo = iNo/10;	
	}
	return iCnt;
}