#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
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
	
	iRet = lseek(fd,0,2);
	printf("Size of file is : %d",iRet);
	
	close(fd);
	return 0;
}