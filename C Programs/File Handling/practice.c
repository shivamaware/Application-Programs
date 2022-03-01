#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iCnt = 0, iRet = 0, i = 0;
	char fName[20];
	char Buffer[10];
	
	printf("Enter file name\n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR);
	printf("fd = %d\n",fd);
	fd = open(fName,O_RDWR);
	printf("fd = %d\n",fd);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	printf("Total number of a are : %d",iCnt);
	
	close(fd);
	return 0;
}