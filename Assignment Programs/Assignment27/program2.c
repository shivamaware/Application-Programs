#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x00020010;
	
	if((iNo & iMask) == iMask)
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
	printf("Enter a number\n");
	scanf("%d", &iValue);
	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("5th and 18th bits are ON\n");
	}
	else
	{
		printf("5th or 18th or both bits are OFF\n");
	}
	return 0;
}