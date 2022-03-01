#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
	UINT iMask = 0x80000001;
	
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
		printf("First and last bits are ON\n");
	}
	else
	{
		printf("First or last or both bits are OFF\n");
	}
	return 0;
}