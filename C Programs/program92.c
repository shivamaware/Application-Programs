#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize, int iNo)
{
	int i = 0;
	
	for(i = 0; i<iSize; i++)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
	}
	if(i==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, iCnt = 0, iValue = 0;
	bool bRet = false;
	printf("Enter number of elements:\n");
	scanf("%d",&iLength);
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter elements:\n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("Enter the element to search\n");
	scanf("%d",&iValue);
	bRet = CheckNumber(ptr, iLength, iValue);
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