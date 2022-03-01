#include<iostream>
#include<stdio.h>
using namespace std;

int CountCapI(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int CountCapR(char *str)
{ 
	static int iCnt = 0;
	if(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
		CountCapR(str);
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char Arr[20];
	cout<<"Enter string\n";
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCapR(Arr);
	
	cout<<"Number of capital letters in string are : "<<iRet<<"\n";
	return 0;
	
}