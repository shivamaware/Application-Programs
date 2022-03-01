//Header file inclusion
#include<stdio.h>

//Function Declaration
void Display();

//Entry point function
int main()
{
	Display();	//Function call
	
	return 0;
}

//Function defination
void Display()
{
	//Local variables
	int iNo = 7521;
	int iDigit = 0;
	while(iNo != 0)
	{
		iDigit = iNo % 10;	//1
		printf("%d\n",iDigit);	//1
		iNo = iNo/10;	//752
	}
}