#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
	{
		printf("%c\n", ch+32);
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		printf("%c\n", ch-32);
	}
	else
	{
		printf("%c", ch);
	}
}
int main()
{
	char cValue = '\0';
	printf("Enter the character\n");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
}