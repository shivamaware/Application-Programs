#include<stdio.h>

void Display()
{
	static int i = 5;
	if(i > 0)
	{
		printf("%d\t",i);
		i--;
		Display();
	}
	return;
}

int main()
{
	Display();
	return 0;
}