#include<stdio.h>

void Display(int iNo)
{
	static int i = 1;
	if(i <= iNo)
	{
		printf("%d\t",i);
		i++;
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