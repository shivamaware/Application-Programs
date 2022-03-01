#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if(*src != ' ')
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
} 

int main()
{
	char arr[30] = "Marvel lous Pyth on";
	char brr[30]; // Empty string
	StrCpyX(arr,brr);
	printf("%s",brr); // MarvellousPython
	return 0;
}