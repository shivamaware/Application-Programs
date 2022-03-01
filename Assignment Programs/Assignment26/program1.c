#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
	int iLength = 0, i = 0;;
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while(*src != '\0')
	{
		iLength++;
		src++;
	}
	for(i = 1;i<=iLength;i++)
	{
		*dest = *(src - i);
		dest++;
	}
	*dest = '\0';
} 

int main()
{
	char arr[30] = "Marvellous Python";
	char brr[30]; // Empty string
	StrCpyRev(arr,brr);
	printf("%s",brr); // nohtyP suollevraM
	return 0;
}