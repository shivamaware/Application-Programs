#include<stdio.h>

typedef unsigned int UNIT;

UNIT strlenX(char *str)
{
	int iCnt = 0;
	
 	if(str == NULL)
	{
		return 0;
	} 
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[5];
	UNIT iRet = 0;
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	//char *ptr = NULL;
	iRet = strlenX(Arr);	//strlenX(ptr); This will generate segmentatin fault if we emove that if condition from strlenX function
	printf("Length of string is : %d\n",iRet);
	return 0;
}