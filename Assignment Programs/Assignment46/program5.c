#include<stdio.h>

int Reverse(int iNo)
{
	static int iRev = 0;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
		Reverse(iNo);
	}
	return iRev;
}

int main()
{
	int iRet = 0, iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = Reverse(iValue);
	printf("Reversed number of given number is : %d\n",iRet);
	return 0;
}