#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)	
{
	int i = 0, iMin = Arr[0], iMax = Arr[0], iDiff = 0;
	
	for(i = 1;i<iSize;i++)
	{
		if((Arr[i])<iMin)
		{
			iMin = Arr[i];
		}
		else if(Arr[i]>iMax)
		{
			iMax = Arr[i];
		}
	}
	iDiff = iMax - iMin;
	return iDiff;
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
	
	fRet = Difference(ptr, iLength);
	printf("Difference between Maximum and Minimum number is : %d", fRet);
	free(ptr);
	return 0;
}