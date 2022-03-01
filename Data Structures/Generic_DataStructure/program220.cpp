#include<iostream>
using namespace std;


void swap(float *p, float *q)
{
	float temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	float x = 0.0, y = 0.0;
	cout<<"Enter first character\n";
	cin>>x;
	
	cout<<"Enter second character\n";
	cin>>y;
	
	swap(&x,&y);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	return 0;
}