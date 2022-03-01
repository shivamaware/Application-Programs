#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
	PNODE first = NULL;
	first = (PNODE)malloc(sizeof(NODE));
	first->data = 11;
	first->next = NULL;
	
	PNODE second = (PNODE)malloc(sizeof(NODE));
	first->next = second;
	second->data = 21;
	second->next = NULL;
	
	return 0;
}
