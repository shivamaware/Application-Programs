#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int CountSmall(char FName[])
{
	int fd = 0, iRet = 0, i = 0, iCnt = 0;
	char Buffer[10];
	fd = open(FName,O_RDONLY);
	
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		for(i = 0;i<iRet;i++)
		{
			if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
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
	iRet = CountSmall(FileName);
	printf("Number of Small characters are %d",iRet);
	return 0;
}