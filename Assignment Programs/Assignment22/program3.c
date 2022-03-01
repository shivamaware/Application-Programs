#include<stdio.h>

int Difference(char *str)
{
	int cCnt = 0, sCnt = 0;
	if(str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			cCnt++;
		}
		else if((*str>='a') && (*str<='z'))
		{
			sCnt++;
		}
		str++;
	}
	return (cCnt - sCnt);
} 
int main()
{
	char arr[20];
	int iRet = 0;
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	iRet = Difference(arr);
	printf("%d",iRet);
	return 0;
}