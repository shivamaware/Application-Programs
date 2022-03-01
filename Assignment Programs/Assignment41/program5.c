#include<stdio.h>
#include<io.h>
#include<fcntl.h>
#include<String.h>

int main()
{
	int fd = 0;
	char fName[30];
	char String[70] = {'\0'};
	char Buffer[10];
	
	printf("Enter file name to open: \n");
	scanf("%s",fName);
	
	printf("Enter the string\n");
	scanf(" %[^\n]s",String);
	
	fd = open(fName,O_RDWR);
	
	if(fd == -1)
	{
		printf("File does not opened");
	}
	
	lseek(fd,0,2);
	write(fd,String,strlen(String));
	printf("String inserted by user is written at the end of the file");
	
	close(fd);
	return 0;
}