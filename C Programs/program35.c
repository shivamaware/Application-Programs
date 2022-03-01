#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int);

int main()
{
	int iValue = 0;
	bool bRet = false;
	printf("Enter a number: \n");
	scanf("%d",&iValue);
	bRet = CheckPalindrome(iValue);
	if(bRet == true)
	{
		printf("Number is palindrome\n");
	}
	else
	{
		printf("Number is not palindrome\n");
	}
	
	return 0;
}

bool CheckPalindrome(int iNo)
{
	int iDigit = 0, iRev = 0;
	int iTemp = iNo;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	if(iTemp == iRev)
	{
		return true;
	}
	else
	{
		return false;
	}
}