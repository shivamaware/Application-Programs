#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
	int iCnt = 0, iSum = 0;
	if((iStart>iEnd) || (iStart<0) || (iEnd<0))
	{
		printf("Invalid Range\n");
	}
	else
	{
		for(iCnt = iStart;iCnt<=iEnd;iCnt++)	////Timecomplexity is (m-n)+1 where m is last number ans n is first number
		{
			iSum = iSum + iCnt;
		}		
	}
	return iSum;	
}
int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	iRet = RangeSum(iValue1, iValue2);
	printf("Addition is %d",iRet);
	return 0;
}