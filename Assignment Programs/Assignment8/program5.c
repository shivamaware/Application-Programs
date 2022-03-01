#include<stdio.h>

int RangeDisplayRev(int iStart , int iEnd)
{
	int iCnt = 0, iSum = 0;
	if(iStart>iEnd)
	{
		printf("Invalid Range\n");
	}
	else
	{
		for(iCnt = iEnd;iCnt>=iStart;iCnt--)	//Timecomplexity is (m-n)+1 where m is last number ans n is first number
		{
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	RangeDisplayRev(iValue1, iValue2);
	return 0;
}