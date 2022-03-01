#include<stdio.h>

int main()
{
	int iValue = 0;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	printf("Its Decimal format is : %x\n",iValue);
	printf("Its Hexadecimal format is : %d\n",iValue);
	printf("Its Octal format is : %o\n",iValue);
	return 0;
}