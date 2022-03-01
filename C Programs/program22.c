#include<stdio.h>

void DisplayFactor(int);

int main()
{
	int iNo = 0;
	printf("Enter a number\n");
	scanf("%d",&iNo);
	DisplayFactor(iNo);
	
	return 0;
}

void DisplayFactor(int iValue)
{
	int iCnt = 0;
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if(iValue%iCnt == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}
