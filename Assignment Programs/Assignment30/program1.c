#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
	int iCnt = 0, i = 0;
	UINT iMask = 0x00000001;
	for(i = 0;i<32;i++)
	{
		if((iNo & iMask) != 0)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	return iCnt;
}

int main()
{
	UINT iValue = 0, iRet = 0;
	printf("Enter a number\n");
	scanf("%d", &iValue);

	iRet = CountOne(iValue);
	printf("Numer of 1 are : %d", iRet);
	return 0;
}