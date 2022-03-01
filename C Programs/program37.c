#include<stdio.h>
#include<stdbool.h>

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
	int iCnt = 0, iSum = 0;
	if(iNumber < 0)
	{
		iNumber = -iNumber;
	}

	for(iCnt = 1; iCnt <= (iNumber/2); iCnt++)
	{
		if((iNumber % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	
	if(iSum == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}

