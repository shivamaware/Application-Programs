#include<stdio.h>

int Min(int iNo)
{
	static int iMin = 10;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		iNo = iNo / 10;
		Min(iNo);
	}
	return iMin;
}

int main()
{
	int iRet = 0, iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = Min(iValue);
	printf("Minimum digit from the number is : %d\n",iRet);
	return 0;
}