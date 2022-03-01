#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x00004000;
	
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
		printf("15th bit is ON\n");
	}
	else
	{
		printf("15th bit is OFF\n");
	}
	return 0;
}