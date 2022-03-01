#include<stdio.h>

void strlwrX(char *str)
{
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			*str = *str+32;;
		}
		str++;
	}
} 
int main()
{
	char arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	strlwrX(arr);
	printf("Modified string is %s\n",arr);
	return 0;
}