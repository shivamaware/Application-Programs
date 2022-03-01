#include<stdio.h>
#include<stdlib.h>

float Average(int (*Arr)[2], int iSize)
{
	int iSum = 0, iCnt = 0;
	float fResult = 0.0f;
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	printf("%d\n",Arr);
	printf("%d\n",Arr+1);
	fResult = (float)iSum/(float)iSize;	//Explicit typecasting
	return fResult;
}

int main()
{
	int (*ptr)[] = NULL;
	int iLength = 0, iCnt = 0;
	float fRet = 0.0f;
	printf("Enter number of elements:\n");
	scanf("%d",&iLength);
	ptr = (int *)malloc(sizeof(int)*iLength);
	
	printf("Enter elements:\n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	fRet = Average(ptr, iLength);
	printf("Average is: %2f", fRet);
	free(ptr);
	return 0;
}