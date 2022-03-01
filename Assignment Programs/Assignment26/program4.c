#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='A') && (*src<='Z'))
		{
			*src = *src+32;;
		}
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
} 

int main()
{
	char arr[30] = "Marvellous Python 2";
	char brr[30]; // Empty string
	StrCpySmall(arr,brr);
	printf("%s",brr); // marvellous python 2
	return 0;
}