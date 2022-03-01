#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
	int iDigit = 0, iFlag = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit == 0)
		{
			iFlag++;
		}
		iNo = iNo/10;
	}
	if(iFlag>0)
	{
		return TRUE;
	}
	else
	{	
		return FALSE;
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	scanf("%d",&iValue);
	bRet = ChkZero(iValue);
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	return 0;
}