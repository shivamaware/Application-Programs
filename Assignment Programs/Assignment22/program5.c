#include<stdio.h>

void Reverse(char *str)
{
	int iLength = 0;
	int i = 0;
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	
 	for(i = 1;i<=iLength;i++)
	{
		printf("%c",*(str-i));
	} 
} 
int main()
{
	char arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	Reverse(arr);
	return 0;
}

//	Another way

/* #include<stdio.h>

void Reverse(char str[])
{
	int iLength = 0;
	int i = 0;
	if(str == NULL)
	{
		return;
	}
	while(str[i] != '\0')
	{
		iLength++;
		i++;
	}
  	for(i = iLength-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
} 
int main()
{
	char arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	Reverse(arr);
	return 0;
} */