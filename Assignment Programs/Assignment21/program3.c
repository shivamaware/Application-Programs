#include<stdio.h>

void Display(char ch)
{
	int iCh = '\0';
	if((ch >= 'A') && (ch <= 'Z'))
	{
		for(iCh = ch;iCh<='Z';iCh++)
		{
			printf("%c\t", iCh);
		}
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		for(iCh = ch;iCh>='a';iCh--)
		{
			printf("%c\t", iCh);
		}
	}
	else
	{
		return;
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