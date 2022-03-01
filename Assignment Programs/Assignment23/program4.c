#include<stdio.h>

void DisplayDigit(char *str)
{
	char str2[20];
	int i = 0;
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if((*str>='0') && (*str<='9'))
		{
			str2[i] = *str;
			i++;
		}
		str++;
	}
	printf("%s",str2);
} 
int main()
{
	char arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	DisplayDigit(arr);
	return 0;
}