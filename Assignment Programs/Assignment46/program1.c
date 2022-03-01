#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char str[100];
	printf("Enter string\n");
	scanf("%[^\n]s",str);
	iRet = WhiteSpace(str);
	printf("Number of white spaces in given string are : %d\n",iRet);
	return 0;
}