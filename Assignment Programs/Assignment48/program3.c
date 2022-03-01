#include<stdio.h>

void Display(int iNo)
{
	int i = iNo;
	if(i > 0)
	{
		printf("%d\t",i);
		i--;
		Display(i);
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