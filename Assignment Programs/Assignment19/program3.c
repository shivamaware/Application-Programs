#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Difference(int Arr[], int iLength)
{
	int iCnt = 0, iMax = Arr[0], iMin = Arr[0];
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] > iMax))
		{
			iMax = Arr[iCnt];
		}
		else
		{
			iMin = Arr[iCnt];
		}
	}
	return (iMax - iMin);
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
	int *p = NULL;
	printf("Enter number of elements\n");
	scanf("%d",&iSize);

	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	printf("Enter %d elements\n",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element : %d\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Difference(p, iSize);
	printf("Difference is %d\n",iRet);
	free(p);
	return 0;
}