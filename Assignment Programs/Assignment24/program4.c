#include<stdio.h>

int LastChar(char *str, char ch)
{
	int iCnt = 0, iLength = 0, i = 0, j=0;
	char cCh = '\0';
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	
	for(i = 1,j = iLength; i<=iLength; i++,j--)
	{
		if(*(str-i) == ch)
		{
			break;
		}
	}
	if(i == 0)
	{
		return 0;
	}
	else
	{
		return j;
	}
} 
int main()
{
	char arr[20];
	char cValue = '\0';
	int iRet = 0;
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	
	iRet = LastChar(arr,cValue);
	printf("Character location is %d", iRet);
	return 0;
}