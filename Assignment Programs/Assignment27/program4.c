#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x000001C0;
	
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
		printf("7th, 8th, and 9th bits are ON\n");
	}
	else
	{
		printf("Any of the bit from 7th, 8th and 9th or all of the bits are OFF\n");
	}
	return 0;
}