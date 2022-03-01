#include<stdio.h>

void Display();	//Function Declaration
int main()
{
	
	Display();	//Function Call
	return 0;
}

void Display()	//Function Defination
{
	int i = 0;
	for(i=5;i>=1;i--)
	{
		printf("%d\n",i);
	}
}
