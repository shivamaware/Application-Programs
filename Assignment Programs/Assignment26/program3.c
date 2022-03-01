#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='a') && (*src<='z'))
		{
			*src = *src-32;;
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
	StrCpyCap(arr,brr);
	printf("%s",brr); // MARVELLOUS PYTHON 2
	return 0;
}