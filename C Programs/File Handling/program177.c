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
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,10)) != 0)
	{
		for(i = 0;i<iRet;i++)
		{
			if((Buffer[i] == 'a') || (Buffer[i] == 'e') || (Buffer[i] == 'i') || (Buffer[i] == 'o') || (Buffer[i] == 'u') || (Buffer[i] == 'A') || (Buffer[i] == 'E') || (Buffer[i] == 'I') || (Buffer[i] == 'O') || (Buffer[i] == 'U'))
			{
				iCnt++;
			}
		}
	}
	printf("Total number of a are : %d",iCnt);
	
	close(fd);
	return 0;
}