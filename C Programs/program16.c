#include<stdio.h>

void Display(int);	//Function Declaration
int main()
{
	int iNo = 0;
	printf("Enter a number\n");
	scanf("%d",&iNo);
	Display(iNo);	//Function Call
	return 0;
}

void Display(int iValue)	//Function Defination
{
	if(iValue < 0)
	{
		iValue = -iValue;
	}	
	
	if(iValue == 0)
	{
		printf("Invalid Input\n");
	}
	int i = 0;
	for(i=iValue;i>=1;i--)
	{
		printf("%d\n",i);
	}
}
