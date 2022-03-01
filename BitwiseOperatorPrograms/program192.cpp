#include<iostream>
using namespace std;

int ToggleBit(int iNo, int iPos1, int iPos2)
{
	
	int iResult = 0;
	int iMask1 = 0x00000001;
	int iMask2 = 0x00000001;
	
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);
	
	int iMask = iMask1 | iMask2;
	
	iResult = iNo ^ iMask;
	return iResult;	
}

int main()
{
	int iValue = 0, iRet = 0, i = 0, j = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	cout<<"Enter first position\n";
	cin>>i;
	
	cout<<"Enter second position 2\n";
	cin>>j;
	
	iRet = ToggleBit(iValue, i, j);
	
	cout<<"Updated number is: "<<iRet<<"\n";
	return 0;
}