#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[], int iSize)
{
	int i = 0, iCnt = 0;
	for(i = 0;i<iSize;i++)
	{
		if((Arr[i]>10))
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, iCnt = 0;
	int fRet = 0;
	printf("Enter number of elements:\n");
	scanf("%d",&iLength);
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter elements:\n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	fRet = Count(ptr, iLength);
	printf("Number of elements greater than 10 are: %d", fRet);
	free(ptr);
	return 0;
}