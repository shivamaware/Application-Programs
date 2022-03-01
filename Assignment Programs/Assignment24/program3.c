#include<stdio.h>

int FirstChar(char *str, char ch)
{
	int iCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		iCnt++;
		if(*str == ch)
		{
			break;
		}
		
		str++;
	}
	if(*str == '\0')
	{
		return 0;
	}
	else
	{
		return iCnt;
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
	
	iRet = FirstChar(arr,cValue);
	printf("Character location is %d", iRet);
	return 0;
}