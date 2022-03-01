#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
	
	UINT iResult = 0;
	UINT iMask = 0xF000000F;
	
	iResult = iNo ^ iMask;
	return iResult;	
}

int main()
{
	UINT iValue = 0, iRet = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	

	iRet = ToggleBit(iValue);
	
	cout<<"Updated number is: "<<iRet<<"\n";
	return 0;
}