#include<stdio.h>

typedef unsigned int UINT;

int OffBit(UINT iNo)
{
	UINT iMask = 0xFFFFFFBF;
	iNo = iNo & iMask;
	return iNo;
}

int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);
	iRet = OffBit(iValue);
	printf("Modified number is %d\n", iRet);
	
	return 0;
}