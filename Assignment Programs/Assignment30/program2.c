#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	int iCnt = 0;
	UINT iMask = 0x00000001;
	UINT iNo3 = (iNo1 & iNo2);
	for(iCnt = 1;iCnt <= 32; iCnt++)
	{
		if((iNo3 & iMask) == iMask)
		{
			printf("%d\t",iCnt);
		}
		iMask = iMask << 1;
	}
}

int main()
{
	UINT iValue1 = 0, iValue2 = 0;
	printf("Enter first number\n");
	scanf("%d", &iValue1);
	
	printf("Enter second number\n");
	scanf("%d", &iValue2);
	
	CommonBits(iValue1, iValue2);
	return 0;
}