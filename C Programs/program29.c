//Header file inclusion
#include<stdio.h>

//Function Declaration
int Display(int);

//Entry point function
int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	Addition = Display(iValue);	//Function call
	printf("Addition is: %d\n",iRet);
	
	return 0;
}

//Function defination
int Display(int iNo)
{
	//Local variables
	int iDigit = 0;
	int iSum = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;	
		iSum = iSum + iDigit;	
		iNo = iNo/10;	
	}
	return iSum;
}