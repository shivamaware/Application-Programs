#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int iSize, int iNo)
{
	int i = 0, index = -1;
	
	for(i = 0; i<iSize; i++)
	{
		if(Arr[i]==iNo)
		{
			index = i;
		}
	}
	return index;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;
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
	iRet = LastOccurance(ptr, iLength, iValue);
	if(iRet == -1)
	{	
		printf("Number not found\n");
	}
	else
	{
		printf("Number is there at index: %d\n",iRet);
	}
	free(ptr);
	return 0;
}