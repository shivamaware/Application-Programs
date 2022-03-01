#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
	UINT iMask1 = 0x00000001;
	UINT iMask2 = 0x00000001;
	
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);
	
	UINT iMask = iMask1 | iMask2;
	
	if((iNo & iMask) != 0)
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
	UINT iValue = 0, i = 0, j = 0;
	BOOL bRet = FALSE;
	printf("Enter number\n");
	scanf("%d", &iValue);
	
	printf("Enter first number\n");
	scanf("%d", &i);
	
	printf("Enter second number\n");
	scanf("%d", &j);
	
	bRet = ChkBit(iValue, i, j);
	
	if(bRet == TRUE)
	{
		printf("Bit at iPos1 or iPos2 or both are ON");
	}
	else
	{
		printf("Any one of the bit is OFF");
	}
	return 0;
}