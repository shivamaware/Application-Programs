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

int MiddleElement(PNODE first)
{
	PNODE Fast = NULL, Slow = NULL;
	
	if(first == NULL)
	{
		printf("LL is empty\n");
	}
	
	Fast = first;
	Slow = first;
	
	while((Fast != NULL) && (Fast->next != NULL))
	{
		Fast = Fast->next->next;
		Slow = Slow->next;
	}
	return Slow->data;
}


int main()
{
	int ret = 0;
	PNODE Head = NULL;
	
	InsertFirst(&Head,110);
	InsertFirst(&Head,100);
	InsertFirst(&Head,90);
	InsertFirst(&Head,80);
	InsertFirst(&Head,70);
	InsertFirst(&Head,60);
	InsertFirst(&Head,50);
	InsertFirst(&Head,40);
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	
	Display(Head);
	
	ret = MiddleElement(Head);
	
	printf("Middle element is %d",ret);
	
	return 0;
}