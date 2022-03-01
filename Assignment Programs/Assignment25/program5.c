#include<stdio.h>

void StrCatX(char *src, char *dest)
{
	int iCnt = 0;
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		iCnt++;
		src++;
	}
	
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*dest = '\0';
} 

int main()
{
	char arr[50] = "Marvellos Infosystems";
	char brr[30] = "Logic Building";
	StrCatX(arr,brr);
	printf("%s",arr); //  Marvellos Infosystems Logic Building
	return 0;
}