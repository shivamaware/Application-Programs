#include<stdio.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char fName[30];
	
	printf("Enter file name to open: \n");
	scanf("%s",fName);
	
	fd = open(fName,O_RDONLY);
	printf("fd = %d\n",fd);	
	
	if(fd == -1)
	{
		printf("File does not opened");
	}
	else
	{
		printf("File opened successfully");
	}
	
	close(fd);
	return 0;
}