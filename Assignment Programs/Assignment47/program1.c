#include<stdio.h>

void Display()
{
	static int i = 1;
	if(i < 6)
	{
		printf("*\t");
		i++;
		Display();
	}
	return;
}

int main()
{
	Display();
	return 0;
}