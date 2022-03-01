#include<stdio.h>


int MultFact(int iNo)
{
	int iCnt = 0;
	int mul = 1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			mul = mul*iCnt;
		}
	}
	return mul;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = MultFact(iValue);
	printf("%d",iRet);
	return 0;
}