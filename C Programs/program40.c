#include<stdio.h>

int Power(int, int);

int main()
{
	int iNo1 = 0, iNo2 = 0, iRet = 0;
	printf("Enter first number\n");
	scanf("%d",&iNo1);
	printf("Enter first number\n");
	scanf("%d",&iNo2);
	iRet = Power(iNo1, iNo2);
	printf("%d\n",iRet);
	return 0;
}

int Power(int iValue1, int iValue2)
{
	int iMult = 1, iCnt = 0;
	if(iValue1 < 0)
	{
		iValue1 = -iValue1;
	}
	
	if(iValue2 < 0)
	{
		iValue2 = -iValue2;
	}

	for(iCnt = 1;iCnt<=iValue2;iCnt++)
	{
		iMult = iMult * iValue1;
	}
	
	return iMult;
}

