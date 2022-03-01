#include<stdio.h>

void PrintEven(int iNo)
{
	int i = 0,j = 2;
	if(iNo <= 0)
	{
		return;
	}
	else
	{
		for(i=0;i<iNo;i++,j=j+2)
		{
			printf("%d\n",j);
		}
	}
}
int main()
{
	int iValue = 0;	
	printf("Enter number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}
