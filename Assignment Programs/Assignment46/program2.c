#include<stdio.h>

int Max(int iNo)
{
	static int iMax = 0;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo / 10;
		Max(iNo);
	}
	return iMax;
}

int main()
{
	int iRet = 0, iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = Max(iValue);
	printf("Maximum digit from the number is : %d\n",iRet);
	return 0;
}