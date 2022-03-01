#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	UINT iMask = 0x0000000F;
	UINT iResult = 0;
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	bRet = CheckBit(iValue);
	if(bRet == true)
	{
		printf("All the bits from first nibble are ON\n");
	}
	else
	{
		printf("All the bits from first nibble are OFF\n");
	}
	return 0;
}