//Header file inclusion
#include<stdio.h>

//Function Declaration
int EvenSum(int);

//Entry point function
int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	iRet = EvenSum(iValue);	//Function call
	printf("Addition of even digits in number is: %d\n",iRet);
	
	return 0;
}

//Function defination
int EvenSum(int iNo)
{
	//Local variables
	int iDigit = 0, iCnt = 0, iSum = 0;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;	
		if((iDigit % 2) == 0)
		{
			iSum = iSum + iDigit;
		}	
		iNo = iNo/10;	
	}
	return iSum;
}