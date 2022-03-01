#include<stdio.h>

int small(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		small(str);
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char str[100];
	printf("Enter string\n");
	scanf("%[^\n]s",str);
	iRet = small(str);
	printf("Number of small characters in given string are : %d\n",iRet);
	return 0;
}