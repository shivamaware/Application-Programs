#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		if((*src>='a') && (*src<='z'))
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
	char arr[30] = "Marvellous multi OS";
	char brr[30]; // Empty string
	StrCpySmall(arr,brr);
	printf("%s",brr); //  arvellous multi
	return 0;
}