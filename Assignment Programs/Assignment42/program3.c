#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int CountWhite(char FName[])
{
	int fd = 0, iRet = 0, i = 0, iCnt = 0;
	char Buffer[10];
	fd = open(FName,O_RDONLY);
	
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		for(i = 0;i<iRet;i++)
		{
			if(Buffer[i] == ' ')
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
	printf("Enter file name\n");
	scanf("%s",FileName);	
	iRet = CountWhite(FileName);
	printf("Number of white spaces are %d",iRet);
	return 0;
}