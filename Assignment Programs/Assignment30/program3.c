#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x00000900;
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
	UINT iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter number\n");
	scanf("%d", &iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("9th or 12th or both the bits are ON");
	}
	else
	{
		printf("Any one of the bit is OFF");
	}
	return 0;
}