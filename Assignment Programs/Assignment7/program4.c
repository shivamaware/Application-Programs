#include<stdio.h>
double FhtoCs(float fTemp)
{
	double Celsius = 0.0;
	Celsius = ((fTemp - 32) * ((float)5/9));
	return Celsius;
}
int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	printf("Enter temperature in Fahrenheit\n");
	scanf("%f",&fValue);
	dRet = FhtoCs(fValue);
	printf("%f",dRet);
	return 0;
}