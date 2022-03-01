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

void Reverse(PNODE Head)
{
	int iDigit = 0, iNo = 0, iRev = 0;
	while(Head != NULL)
	{
		iRev = 0;
		iNo = Head->Data;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iRev = iDigit + (iRev*10);
			iNo = iNo/10;
		}
		printf("%d\t",iRev);
		Head = Head->Next;
	}
	printf("\n");
}

void DisplayPallindrome(PNODE Head)
{
	int iDigit = 0, iNo = 0, iRev = 0, iTemp = 0;
	while(Head != NULL)
	{
		iRev = 0;
		iNo = Head->Data;
		iTemp = iNo;
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iRev = iDigit + (iRev*10);
			iNo = iNo/10;
		}
		if(iTemp == iRev)
		{
			printf("%d\t",iRev);
		}
		Head = Head->Next;
	}
	printf("\n");
}

void DisplayProduct(PNODE Head)
{
	int iDigit = 0, iNo = 0, iMul = 1;
	while(Head != NULL)
	{
		iMul = 1;
		iNo = Head->Data;
		if(iNo == 0)
		{
			printf("%d\t", iNo);
		}
		else
		{
			while(iNo != 0)
			{
				iDigit = iNo%10;
				if(iDigit != 0)
				{
					iMul = iMul * iDigit;
				}
				iNo = iNo/10;
			}
			printf("%d\t", iMul);
		}
		Head = Head->Next;
	}
	printf("\n");
}

void DisplaySmall(PNODE Head)
{
	int iDigit = 0, iNo = 0, iSmall = 0;
	while(Head != NULL)
	{
		iNo = Head->Data;
		iSmall = 10;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit < iSmall)
			{
				iSmall = iDigit;
			}
			iNo = iNo/10;
		}
		printf("%d\t",iSmall);
		Head = Head->Next;
	}
	printf("\n");
}

void DisplayLarge(PNODE Head)
{
	int iDigit = 0, iNo = 0, iLarge = 0;
	while(Head != NULL)
	{
		iNo = Head->Data;
		iLarge = 0;
		while(iNo != 0)
		{
			iDigit = iNo%10;
			if(iDigit > iLarge)
			{
				iLarge = iDigit;
			}
			iNo = iNo/10;
		}
		printf("%d\t",iLarge);
		Head = Head->Next;
	}
	printf("\n");
}

int main()
{
	int iNo = 0;
	PNODE First = NULL;
	InsertFirst(&First, 101);	
	InsertFirst(&First, 101);
	InsertFirst(&First, 28);
	InsertFirst(&First, 11);
	InsertFirst(&First, 6);
	InsertFirst(&First, 102);
	
	printf("Each number of linked list in reversed order : \n");
	Reverse(First);
	
	printf("Palindrome number from the linked list are : \n");
	DisplayPallindrome(First);
	
	printf("Product of all the elements from the linked list are : \n");
	DisplayProduct(First);
	
	printf("Smallest digits from all the elements of linked list are : \n");
	DisplaySmall(First);
	
	printf("Largest digits from all the elements of linked list are : \n");
	DisplayLarge(First);
	
	return 0;
}