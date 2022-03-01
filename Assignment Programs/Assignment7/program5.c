#include<stdio.h>

double SquareMeter(int iValue)
{
	return (iValue * 0.0929);
}
int main()
{
	int iValue = 0;
	double dRet = 0.0;
	printf("Enter area in square feet\n");
	scanf("%d",&iValue);
	dRet = SquareMeter(iValue);
	printf("%lf",dRet);
	return 0;
}