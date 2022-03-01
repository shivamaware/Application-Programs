#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize)
{
	int i = 0; 
	bool bRet = false;
	
	for(i = 0; i<iSize; i++)
	{
		if(Arr[i]==11)
		{
			bRet = true;
			break;
		}
		else 
		{
			bRet = false;
		}
	}
	return bRet;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, iCnt = 0;
	bool bRet = false;
	printf("Enter number of elements:\n");
	scanf("%d",&iLength);
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter elements:\n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet = CheckNumber(ptr, iLength);
	if(bRet == true)
	{	
		printf("Number found\n");
	}
	else
	{
		printf("Number not found\n");
	}
	free(ptr);
	return 0;
}