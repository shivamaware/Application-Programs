//Header file inclusion
#include<stdio.h>

//Function Declaration
void Display(int);

//Entry point function
int main()
{
	int iValue = 0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	Display(iValue);	//Function call
	
	return 0;
}

//Function defination
void Display(int iNo)
{
	//Local variables
	int iDigit = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;	//1
		printf("%d\n",iDigit);	//1
		iNo = iNo/10;	//752
	}
}