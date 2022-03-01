#include<stdio.h>

void Display(int iNo)
{
	static char ch = 'A';
	if(iNo > 0)
	{
		printf("%c\t",ch);
		iNo--;
		ch++;
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