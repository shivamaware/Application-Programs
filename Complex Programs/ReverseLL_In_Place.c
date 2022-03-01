#include<stdlib.h>
#include<stdio.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE first, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	newn->next = NULL;
	newn->data = no;
	
	if(*first == NULL)
	{
		*first = newn;
	}
	else
	{
		newn->next = *first;
		*first = newn;
	}
}

void Display(PNODE first)
{
	while(first != NULL)
	{
		printf("|%d|",first->data);
		first = first->next;
	}
	printf("\n");
}

void Reverse(PPNODE first)
{
	PNODE Next = NULL, Previous = NULL, Current = *first;
	
	while(Current != NULL)
	{
		Next = Current->next;
		Current->next = Previous;
		Previous = Current;
		Current = Next;
	}
	*first = Previous;
}

int main()
{
	int ret = 0;
	PNODE Head = NULL;
	
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	
	Display(Head);
	
	Reverse(&Head);
	
	printf("\nLinked list after reverse\n");
	Display(Head);
	
	return 0;
}