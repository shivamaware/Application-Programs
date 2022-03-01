#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
	int i = 0, iSum = 0, iDigit = 0, iCopy = 0;
	for(i = 0;i<iLength;i++)
	{
		iSum = 0;
		iCopy = Arr[i];
		while(iCopy != 0)
		{
			iDigit = iCopy % 10;
			iSum = iSum + iDigit;
			iCopy = iCopy/10;
		}
		
		printf("%d\t", iSum);
	}
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
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
	DigitsSum(p, iSize);
	free(p);
	return 0;
}