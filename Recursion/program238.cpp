#include<iostream>
using namespace std;

int SumI(int Arr[], int iSize)
{
	int i = 0,iSum = 0;
	while(i < iSize)
	{
		iSum = iSum + Arr[i];
		i++;
	}
	return iSum;
}

int SumR(int Arr[], int iSize)
{
	static int i = 0,iSum = 0;
	if(i < iSize)
	{
		iSum = iSum + Arr[i];
		i++;
		SumR(Arr,iSize);
	}
	return iSum;
}

int main()
{
	int iLength = 0,iRet = 0, i = 0;
	int *p = NULL;
	
	cout<<"Enter size of array \n";
	cin>>iLength;
	
	p = new int[iLength];
	
	cout<<"Enter the elements\n";
	for(i = 0;i<iLength;i++)
	{
		cin>>p[i];
	}
	
	//iRet = SumI(p,iLength);
	iRet = SumR(p,iLength);
	cout<<"Summation of all elements of array is : "<<iRet<<"\n";
	
	delete[]p;
	return 0;
}