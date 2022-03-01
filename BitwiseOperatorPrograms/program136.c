#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool CheckBit(UINT iNo, UINT iPosition)
{
	UINT iMask = 0x00000001;
	if((iPosition < 1)||(iPosition > 32))
	{
		return false;
	}
	iMask = iMask << (iPosition - 1);
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
	UINT iBit = 0;
	bool bRet = false;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	printf("Enter position\n");
	scanf("%d",&iBit);
	bRet = CheckBit(iValue, iBit);
	if(bRet == true)
	{
		printf("Bit is ON\n");
	}
	else
	{
		printf("Bit is OFF\n");
	}
	return 0;
}