#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

using namespace std;

class MarvellousFile
{
	public:
	char Fname[30];
	int fd;
	
	MarvellousFile(char * Name)
	{
		strcpy(Fname, Name);
		fd = open(Fname,O_RDWR);
	}
	
	~MarvellousFile()
	{
		close(fd);
	}
	
	void Display()
	{
		int iRet = 0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,10) != 0)
		{
			write(1,Buffer,iRet);
		}
	}
	
	void CountCapital()
	{
		int iRet = 0, iCnt = 0, i = 0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,10) != 0)
		{
			for(i = 0;i<iRet;i++)
			{
				if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	void CountSmall()
	{
		int iRet = 0, iCnt = 0, i = 0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,10) != 0)
		{
			for(i = 0;i<iRet;i++)
			{
				if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
	void CountDigit()
	{
		int iRet = 0, iCnt = 0, i = 0;
		char Buffer[10];
		lseek(fd,0,0);
		
		while((iRet = read(fd,Buffer,10) != 0)
		{
			for(i = 0;i<iRet;i++)
			{
				if((Buffer[i] >= '0') && (Buffer[i] <= '9'))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
	
};

int main()
{
	char Name[30];
	int iCnt = 0;
	
	cout<<"Enter name of file\n";
	cin>>Name;
	
	MarvellousFile obj(Name);
	
	obj.Display();
	
	iRet = obj.CountCapital();
	cout<<"Capital letters are : "<<iRet<<"\n";
	
	iRet = obj.CountSmall();
	cout<<"Small letters are : "<<iRet<<"\n";
	
	iRet = obj.CountDigit();
	cout<<"Number of digits are : "<<iRet<<"\n";
	
	return 0;
}