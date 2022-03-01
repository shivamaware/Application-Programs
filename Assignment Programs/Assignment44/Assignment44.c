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

void DisplayPerfect(PNODE Head)
{
	int iSum = 0, i = 0;
	while(Head != NULL)
	{
		iSum = 0;
		for(i = 1;i<=((Head->Data)/2);i++)
		{
			if((Head->Data)%i == 0)
			{
				iSum = iSum + i;
			}
		}
		if(Head->Data == iSum)
		{
			printf("%d\t", Head->Data);
		}
		Head = Head->Next;
	}
	printf("\n");
}

void DisplayPrime(PNODE Head)
{
	int i = 0, iFlag = 0;
	while(Head != NULL)
	{
		iFlag = 0;
		for(i = 2;i<=(Head->Data)/2;i++)
		{
			if(Head->Data % i == 0)
			{
				iFlag = 1;
				break;
			}
		}
		if(iFlag == 0)
		{
			printf("%d\t",Head->Data);
		}
		Head = Head->Next;
	}
	printf("\n");
}

int AdditionEven(PNODE Head)
{
	int iSum = 0, i = 1;
	while(Head != NULL)
	{
		if((Head->Data)%2 == 0) 
		{
			iSum = iSum + Head->Data;
		}
		Head = Head->Next;
	}
	return iSum;
}

int SecMaximum(PNODE Head)
{
	int iMax = 0, iMax2 = 0;
	while(Head != NULL)
	{
		if(Head->Data > iMax)
		{
			iMax2 = iMax;
			iMax = Head->Data;
		}
		else if((Head->Data > iMax2) && (Head->Data < iMax))
		{
			iMax2 = Head->Data;
		}
		Head = Head->Next;
	}
	return iMax2;
}

void SumDigit(PNODE Head)
{
	int iSum = 0, i = 0, iDigit = 0, iNo = 0;
	while(Head != NULL)
	{
		iSum = 0;
		iNo = Head->Data;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo/10;
		}
		printf("%d\t",iSum);
		Head = Head->Next;
	}
}

int main()
{
	int iRet1 = 0, iRet2 = 0, iNo = 0;
	PNODE First = NULL;
	InsertFirst(&First, 101);	
	InsertFirst(&First, 101);
	InsertFirst(&First, 28);
	InsertFirst(&First, 11);
	InsertFirst(&First, 6);
	InsertFirst(&First, 102);
	
	printf("Perfect numbers are : \n");
	DisplayPerfect(First);
	
	printf("Prime numbers are : \n");
	DisplayPrime(First);
	
	iRet1 = AdditionEven(First);
	printf("Addition of even elments is %d\n",iRet1);
	
	iRet2 = SecMaximum(First);
	printf("Second maximum number from the linked list is %d\n",iRet2);
	
	printf("Addition of digits of elements from linked list is \n");
	SumDigit(First);
	
	return 0;
}