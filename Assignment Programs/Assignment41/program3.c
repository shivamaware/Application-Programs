#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char fName[30];
	char Array[70];
	char Buffer[10];
	
	printf("Enter file name to open: \n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("File does not opened");
	}

	while((iRet = read(fd,Array,sizeof(Buffer))) != 0)
	{
		write(1,Array,iRet); 
	}
	
	close(fd);
	return 0;
}