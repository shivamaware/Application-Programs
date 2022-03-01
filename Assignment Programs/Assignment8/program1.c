#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
	int iCnt = 0;
	if(iStart>iEnd)
	{
		printf("Invalid Range\n");
	}

	for(iCnt = iStart;iCnt<=iEnd;iCnt++)	//Timecomplexity is (m-n)+1 where m is last number ans n is first number
	{
		printf("%d\t",iCnt);
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	RangeDisplay(iValue1, iValue2);
	return 0;
}