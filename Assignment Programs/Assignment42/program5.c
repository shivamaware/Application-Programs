#include<stdio.h>
#include<io.h>
#include<fcntl.h>

void DisplayN(char FName[],int iSize)
{
	int fd = 0, iRet = 0, i = 0, iCnt = 0;
	char Buffer[iSize];
	fd = open(FName,O_RDONLY);
	
	read(fd,Buffer,iSize);
	write(1,Buffer,iSize);
	
	close(fd);
}

int main()
{
	char FileName[30];
	int iValue = 0;
	
	printf("Enter file name\n");
	scanf("%s",FileName);
	
	printf("Enter the number of characters\n");
	scanf("%d",&iValue);
	
	DisplayN(FileName,iValue);
	
	return 0;
}