#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
	char *end = NULL;
	bool flag = true;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		if(*str != *end)
		{
			flag = false;
			break;
		}
		str++;
		end--;
	}
	return flag;
}

int main()
{
	char Arr[30];
	bool bRet = false;
	
	printf("Enter String\n");
	scanf("%[^'\n']s", Arr);
	
	bRet = CheckPalindrome(Arr);
	if(bRet == true)
	{
		printf("It is palindrome\n");
	}
	else
	{
		printf("It is not palindrome\n");
	}
	return 0;
}