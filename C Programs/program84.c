#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)	//number is greater than 10 and less than 20
{
	int i = 0, iMax = 0;
	
	for(i = 0;i<iSize;i++)
	{
		if((Arr[i])>iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
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
	
	fRet = Maximum(ptr, iLength);
	printf("Maximum : %d", fRet);
	free(ptr);
	return 0;
}