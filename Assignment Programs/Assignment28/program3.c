#include<stdio.h>

typedef unsigned int UINT;

int OffBit(UINT iNo)
{
	UINT iMask1 = 0xFFFFFFBF;
	UINT iMask2 = 0x00000040;
	if((iNo & iMask1) == iNo)
	{
		return (iNo | iMask2);
	}
	else
	{
		return (iNo & iMask1);
	}
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