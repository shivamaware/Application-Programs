#include<stdio.h>

typedef unsigned int UINT;

int OffBit(UINT iNo, int iPos)
{
	UINT iMask = 0xFFFFFFFE;
	iMask = (iMask << (iPos - 1)) | (iMask >> (32 - (iPos - 1)));
	return (iMask & iNo);
}

int main()
{
	UINT iValue = 0, iPosition = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);
	
	printf("Enter a position\n");
	scanf("%d",&iPosition);
	
	iRet = OffBit(iValue, iPosition);
	printf("Modified number is %d\n", iRet);
	return 0;
}