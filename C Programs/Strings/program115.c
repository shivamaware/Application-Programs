#include<stdio.h>

char SmallToCapital(char c)
{
	if((c>='A')&&(c<='Z'))
	{
		return c+32;
	}
}

int main()
{
	char ch = '\0', cRet = '\0';
	printf("Enter character\n");
	scanf("%c",&ch);
	
	cRet = SmallToCapital(ch);

	printf("Small letter is : %c\n",cRet);

	return 0;
}