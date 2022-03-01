#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head , int no )
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->Next = NULL;
	newn->Data = no;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> Next = *Head;
		*Head = newn;
	}
}

int SearchFirstOcc(PNODE Head, int no)
{
	int iPos = 0, iSize = 0;
	while(Head != NULL)
	{
		iPos++;
		iSize++;
		if(Head->Data == no)
		{
			return iPos;
		}
		Head = Head->Next;
	}
	
	if(iPos == iSize)
	{
		return 0;
	}
	
}

int SearchLastOcc(PNODE Head, int no)
{
	int iPos = 0, iRet = 0, iFlag = 0;
	while(Head != NULL)
	{
		iPos++;
		if(Head->Data == no)
		{
			iFlag = 1;
			iRet = iPos;
		}
		Head = Head->Next;
	}
	if(iFlag == 0)
	{
		return 0;
	}
	else
	{
		return iRet;
	}
}

int Addition(PNODE Head)
{
	int iSum = 0;
	while(Head != NULL)
	{
		iSum = iSum + Head->Data;
		Head = Head->Next;
	}
	return iSum;
}

int Maximum(PNODE Head)
{
	int iMax = Head->Data;
	while(Head != NULL)
	{
		if(Head->Data > iMax)
		{
			iMax = Head->Data;
		}
		Head = Head->Next;
	}
	return iMax;
}

int Minimum(PNODE Head)
{
	int iMin = Head->Data;
	while(Head != NULL)
	{
		if(Head->Data < iMin)
		{
			iMin = Head->Data;
		}
		Head = Head->Next;
	}
	return iMin;
}

int main()
{
	int iRet1 = 0, iRet2 = 0, iRet3 = 0, iRet4 = 0, iRet5 = 0, iNo = 0;
	PNODE First = NULL;
	InsertFirst(&First, 101);	
	InsertFirst(&First, 51);
	InsertFirst(&First, 21);
	InsertFirst(&First, 11);
	InsertFirst(&First, 21);
	InsertFirst(&First, 101);
	
	printf("Enter the number to be searched\n");
	scanf("%d",&iNo);
	
	iRet1 = SearchFirstOcc(First,iNo);
	if(iRet1 == 0)
	{
		printf("Number not found\n");
	}
	else
	{
		printf("First occurence of given number is at position %d\n",iRet1);
	}
	
	iRet2 = SearchLastOcc(First,iNo);
	if(iRet2 == 0)
	{
		printf("Number not found\n");
	}
	else
	{
		printf("Last occurence of given number is at position %d\n",iRet2);
	}
	
	iRet3 = Addition(First);
	printf("Addition of all the elements from singally linear linked list is %d\n", iRet3);
	
	iRet4 = Maximum(First);
	printf("Maximum number from linked list is % d\n", iRet4);
	
	iRet5 = Minimum(First);
	printf("Minimum number from linked list is % d\n", iRet5);
	
	return 0;
}