#include<stdio.h>

int Strlen(char *str)
{
	static int iCnt = 0;
	if(*str != '\0')
	{
		iCnt++;
		str++;
		Strlen(str);	
	}
	return iCnt;
}
int main()
{
	int iRet = 0;
	char arr[20];
	printf("Enter string\n");
	scanf("%[^\n]s",arr);
	iRet = Strlen(arr);
	printf("Length of string is %d",iRet);
	return 0;
}