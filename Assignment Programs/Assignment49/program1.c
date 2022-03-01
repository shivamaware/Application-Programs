#include<stdio.h>

void Display(int iNo)
{
	int i = 1;
	if(i <= iNo)
	{
		printf("%d\t*\t",iNo);
		
		iNo--;
		Display(iNo);
	}
	return;
}
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}