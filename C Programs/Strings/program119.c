#include<stdio.h>

void Count(char *str)
{
	int cCnt = 0, sCnt = 0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			cCnt++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			sCnt++;
		}
		str++;
	}
	
	printf("Small letters are : %d\n",sCnt);
	printf("Capital letters are : %d\n",cCnt);
}

int main()
{
	char Arr[20];
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);
	return 0;
}