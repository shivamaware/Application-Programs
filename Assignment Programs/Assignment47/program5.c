#include<stdio.h>

void Display()
{
	static char ch = 'a';
	if(ch <= 'f')
	{
		printf("%c\t",ch);
		ch++;
		Display();
	}
	return;
}

int main()
{
	Display();
	return 0;
}