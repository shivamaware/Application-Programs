#include<stdio.h>

void StrRevX(char *str)
{
	char str2[20];

	int iLength = 0, i = 0, j = 0;
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	for(i = 1,j = 0;i<=iLength;i++,j++)
	{
		*(str2+j) = *(str-i);
	}
	
	for(i = 1,j = iLength-1;i<=iLength;i++,j--)
	{
		*(str-i) = *(str2+j);
	}
} 
int main()
{
	char arr[20];
	int iRet = 0;
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	StrRevX(arr);
	printf("Modified string is %s\n",arr);
	return 0;
}