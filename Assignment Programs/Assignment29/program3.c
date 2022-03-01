#include<stdio.h>

typedef unsigned int UINT;

int OnBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	iMask = (iMask << (iPos - 1));
	if((iMask & iNo) == iMask)
	{
		return iNo;
	}
	else
	{
		return (iMask | iNo);
	}
}

int main()
{
	UINT iValue = 0, iPosition = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);
	
	printf("Enter a position\n");
	scanf("%d",&iPosition);
	
	iRet = OnBit(iValue, iPosition);
	printf("Modified number is %d\n", iRet);
	return 0;
}