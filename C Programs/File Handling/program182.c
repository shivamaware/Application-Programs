#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iSum = 0, iRet = 0, i = 0;
	char fName[20];
	char Buffer[10];
	
	printf("Enter file name\n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,10)) != 0)
	{
		iSum = iSum + iRet;
	}
	printf("Size of file is : %d",iSum);
	
	close(fd);
	return 0;
}