#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[], int iSize)
{
	int i = 0, iSum = 0;
	for(i = 0;i<iSize;i++)
	{
		if((Arr[i]%2) != 0)
		{
			iSum = iSum + Arr[i];
		}
	}
	return iSum;
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
	
	fRet = SumOdd(ptr, iLength);
	printf("Sum of odd elements is: %d", fRet);
	free(ptr);
	return 0;
}