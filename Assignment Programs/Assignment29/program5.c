#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
	UINT iResult = 0;
	UINT iMask1 = 0x0000000F;
	UINT iMask2 = 0xF0000000;
	UINT iMask = (iMask1 | iMask2);

	iResult = iNo ^ iMask;
	return iResult;
}

int main()
{
	UINT iValue = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);

	iRet = ToggleBit(iValue);
	printf("Modified number is %u\n", iRet);
	return 0;
}