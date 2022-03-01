#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo, int iPos)
{
	UINT iMask = 0x00000001;
	iMask = iMask << (iPos - 1);
	if((iMask & iNo) == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UINT iValue = 0, iPosition = 0;
	BOOL bRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);
	
	printf("Enter a position\n");
	scanf("%d",&iPosition);
	
	bRet = ChkBit(iValue, iPosition);
	
	if(bRet == TRUE)
	{
		printf("The bit at position %d in number %d is ON\n",iPosition, iValue);
	}
	else
	{
		printf("The bit at position %d in number %d is OFF\n", iPosition, iValue);
	}
	

	return 0;
}