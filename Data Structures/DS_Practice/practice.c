#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| -> ",Head->data);
		Head = Head->next;
	}
	printf("NULL");
}

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}
	return iCnt;
}

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void InsertLast(PPNODE Head, int no)
{
	PNODE temp = *Head;
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
}

void InsertAtPosition(PPNODE Head, int no, int iPos)
{
	int i = 1, size = 0;
	size = Count(*Head);
	PNODE temp = NULL;
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	if((iPos < 1) || (iPos > size+1))
	{
		printf("Invalid Position\n");
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(Head,no);
	}
	else if(iPos == size+1)
	{
		InsertLast(Head,no);
	}
	else
	{
		while(i <= (iPos-1))
		{
			temp = temp->next;
			i++;
		}
		newn->next = temp;
		temp = newn;
	}
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head != NULL)
	{
		*Head = (*Head)->next;
		free(temp);
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(temp);
		*Head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void DeleteAtPosition(PPNODE Head, int iPos)
{
	int size = 0, i = 0;
	PNODE temp = *Head;
	size = Count(*Head);
	PNODE targeted = NULL;
	if((iPos < 1) || (iPos > size))
	{
		printf("Invalid Position\n");
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst(Head);
	}
	else if(iPos == size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i = 1;i<iPos;i++)
		{
			temp = temp->next;
		}
		targeted = temp->next;
		temp->next = targeted->next;
		free(targeted);
		
	}

}

int main()
{
	int iChoice = 1, iValue = 0, iPos = 0, iRet = 0;
	PNODE first = NULL;
	
	
	while(iChoice != 0)
	{
		printf("\n==================================================================================\n");
		printf("\nWelcome to the Singally Linked List Project.....!!!!\n");
		printf("\nPlease select the appropriate option for different operations mentioned below.\n");
		printf("1 : To insert the new node at first position of linked list.\n");
		printf("2 : To insert the new node at last position of linked list.\n");
		printf("3 : To insert the new node at desired position of linked list.\n");
		printf("4 : To delete the node from first position of linked list.\n");
		printf("5 : To delete the node from last position of linked list.\n");
		printf("6 : To delete the node from desired position of linked list.\n");
		printf("7 : To display the linked list.\n");
		printf("8 : To count the number of nodes from linked list.\n");
		printf("0 : To terminate the linked list project.\n");
		printf("\n==================================================================================\n");
		
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1: 
				printf("Enter the data to be inserted in linked list.\n");
				scanf("%d",&iValue);
				InsertFirst(&first,iValue);
				break;
				
			case 2:
				printf("Enter the data to be inserted in linked list.\n");
				scanf("%d",&iValue);
				InsertLast(&first,iValue);
				break;
			
			case 3:
				printf("Enter the data to be inserted in linked list.\n");
				scanf("%d",&iValue);
				printf("Enter the position of data at which node is to be inserted.\n");
				scanf("%d",&iPos);
				InsertAtPosition(&first,iValue,iPos);
				break;

			case 4:
				DeleteFirst(&first);
				break;			
				
			case 5:
				DeleteLast(&first);
				break;	
				
			case 6:
				printf("Enter the position of the node which is to be removed.\n");
				scanf("%d",&iPos);
				DeleteAtPosition(&first, iPos);
				break;	
				
			case 7:
				Display(first);
				break;
				
			case 8:
				iRet = Count(first);
				printf("Number of elements in the linked list are : %d",iRet);
				break;	
				
			case 0:
				printf("Application Terminated...!!");
				printf("Thanks for using linked list project.\n");
				break;	
				
			default:
				printf("Please enter valid option.\n");
				break;					
		}
	}
}