#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int CountChar(char FName[],char ch)
{
	int fd = 0, iRet = 0, i = 0, iCnt = 0;
	char Buffer[10];
	fd = open(FName,O_RDONLY);
	
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		for(i = 0;i<iRet;i++)
		{
			if(Buffer[i] == ch)
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;
}

int main()
{
	char FileName[30];
	int iRet = 0;
	char cValue;
	
	printf("Enter file name\n");
	scanf("%s",FileName);
	
	printf("Enter the character\n");
	scanf(" %c",&cValue);
	
	iRet = CountChar(FileName,cValue);
	printf("Frequency is %d",iRet);
	
	return 0;
}