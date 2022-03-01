#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask1 = 0xFFFFFFFF;
	UINT iMask2 = 0xFFFFFFFF;
	
	iMask1 = iMask1 << (iStart - 1);
	iMask2 = iMask2 >> (32 - iEnd);
	
	UINT iMask = iMask1 & iMask2;
	
	return (iMask ^ iNo);
}

int main()
{
	UINT iValue = 0, iRet = 0, i = 0, j = 0;
	printf("Enter number\n");
	scanf("%d", &iValue);
	
	printf("Enter starting position\n");
	scanf("%d", &i);
	
	printf("Enter ending position\n");
	scanf("%d", &j);
	
	iRet = ToggleBitRange(iValue, i, j);
	
	printf("Modified number is %u ", iRet);
	return 0;
}