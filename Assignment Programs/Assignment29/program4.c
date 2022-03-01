#include<stdio.h>

typedef unsigned int UINT;

int ToggleBit(UINT iNo, int iPos)
{
	UINT iResult = 0;
	UINT iMask = 0x00000001;
	iMask = iMask << (iPos - 1);
	
	iResult = iNo ^ iMask;
	return iResult;
}

/* int ToggleBit(UINT iNo, int iPos)
{
	UINT iMask1 = 0x00000001;
	UINT iMask2 = 0xFFFFFFFE;
	iMask1 = (iMask1 << (iPos - 1));
	if((iMask1 & iNo) == iMask1)
	{
		iMask2 = ((iMask2 << (iPos - 1)) | (iMask2 >> (32 - (iPos -1))));
		return (iMask2 & iNo);
	}
	else
	{
		return (iMask1 | iNo);
	}
} */

int main()
{
	UINT iValue = 0, iPosition = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);
	
	printf("Enter a position\n");
	scanf("%d",&iPosition);
	
	iRet = ToggleBit(iValue, iPosition);
	printf("Modified number is %d\n", iRet);
	return 0;
}