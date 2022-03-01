#include<stdio.h>

char CharToggle(char c)
{
	if((c>='A')&&(c<='Z'))
	{
		return c+32;
	}
	else if((c>='a')&&(c<='z'))
	{
		return c-32;
	}
}

int main()
{
	char ch = '\0', cRet = '\0';
	printf("Enter character\n");
	scanf("%c",&ch);
	
	cRet = CharToggle(ch);

	printf("Toggelled letter is : %c\n",cRet);
	return 0;
}