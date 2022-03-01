#include<stdio.h>

int Fact(int iNo)
{
	static int iFact = 1;
	if(iNo >= 1)
	{
		iFact = iFact * iNo;
		iNo--;
		Fact(iNo);	
	}
	return iFact;
}
int main()
{
	int iRet = 0,iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = Fact(iValue);
	printf("Factorial of number is %d",iRet);
	return 0;
}