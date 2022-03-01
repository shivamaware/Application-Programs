#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
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
		else if((*src >= 'a') && (*src <= 'z'))
		{
			*src = *src-32;
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
	StrCpyToggle(arr,brr);
	printf("%s",brr); // mARVELLOUS pYTHON 2
	return 0;
}