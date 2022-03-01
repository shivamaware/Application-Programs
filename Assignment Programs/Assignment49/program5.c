#include<stdio.h>

int Mult(int iNo)
{
	static int iMult = 1;
	if(iNo != 0)
	{
		iMult = iMult * (iNo%10);
		iNo = iNo/10;
		Mult(iNo);	
	}
	return iMult;
}
int main()
{
	int iRet = 0,iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet = Mult(iValue);
	printf("Multiplication of digits of given number is %d",iRet);
	return 0;
}