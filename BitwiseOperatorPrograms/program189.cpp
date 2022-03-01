#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
	
	int i = 0, iCnt = 0, iResult = 0;
	int iMask = 0x00000001;
	for(i = 1;i<=31;i++)
	{
		iResult = iNo & iMask;
		if(iResult != 0)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	return iCnt;	
}

int main()
{
	int iValue = 0, iRet = 0, i = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet = ToggleBit(iValue);
	
	cout<<"Number of 1 are : "<<iRet<<"\n";
	return 0;
}