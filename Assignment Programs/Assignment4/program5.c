#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int nfSum = 0;
	int fSum = 0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt != 0)
		{
			nfSum = nfSum + iCnt;
		}
		else
		{
			fSum = fSum + iCnt;
		}
	}
	return fSum - nfSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;	
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = FactDiff(iValue);
	printf("%d",iRet);
	return 0;
}