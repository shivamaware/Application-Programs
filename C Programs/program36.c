#include<stdio.h>
#include<stdbool.h>

int SumFactor(int);
bool CheckPerfect(int);
int main()
{
	int iValue = 0;
	bool bRet = false;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("Number is perfect\n");
	}
	else
	{
		printf("Number is not perfect\n");
	}
	return 0;
}

bool CheckPerfect(int iNumber)
{
	int iRet = 0;
	if(iNumber < 0)
	{
		iNumber = -iNumber;
	}
	iRet = SumFactor(iNumber);
	if(iRet == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SumFactor(int iNo)
{
	int iCnt = 0, iSum = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

