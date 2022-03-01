#include<stdio.h>
#include<stdlib.h>

struct node
{
	char Data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
	PNODE First = NULL;
	
	printf("%d\n",sizeof(NODE));
	printf("%d\n",sizeof(First));
	return 0;
}