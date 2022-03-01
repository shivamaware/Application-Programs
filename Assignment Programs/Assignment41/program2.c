#include<stdio.h>
#include<io.h>

int main()
{
	int fd = 0;
	char fName[30];
	
	printf("Enter file name to create: \n");
	scanf("%s",fName);
	
	fd = creat(fName,0777);
	printf("fd = %d\n",fd);
	
	if(fd == -1)
	{
		printf("File does not created");
	}
	else
	{
		printf("File created successfully");
	}
	return 0;
}