#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
	int EvenSum = 0, OddSum = 0;
	int iCnt = 0;
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			EvenSum = EvenSum + Arr[iCnt];
		}
		else
		{
			OddSum = OddSum + Arr[iCnt];
		}
	}
	return EvenSum - OddSum;
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
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
	printf("Result is %d\n",iRet);
	free(p);
	return 0;
}