#include<stdio.h>

void Swap(char *p, char *q)
{
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char ch1, ch2;
	
	printf("Enter first character\n");
	scanf("%c", &ch1);
	printf("Enter second character\n");
	printf("Before swapping characters are %c %c\n",ch1,ch2);
	scanf(" %c",&ch2);
	Swap(&ch1,&ch2);
	printf("After swapping characters are %c %c\n",ch1,ch2);

	return 0;
}