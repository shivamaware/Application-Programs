#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
	int i = 0, iCnt = 0;
	float fResult = 0.0f;
	for(i = 0;i<iSize;i++)
	{
		if(Arr[i]%2 == 0)
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
	
	fRet = CountEven(ptr, iLength);
	printf("Number of even elements are: %d", fRet);
	free(ptr);
	return 0;
}