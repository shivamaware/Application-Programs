#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *previous;
}NODE, *PNODE;

class DoublyLL
{
	private:
		PNODE first;
		int size;
	public:
		DoublyLL();
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int, int);
		void Display();
		int Count();
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
	
};

DoublyLL::DoublyLL()
{
	first = NULL;
	size = 0;
}

void DoublyLL::InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	newn->previous = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		newn->next = first;
		first->previous = newn;
		first = newn;
	}
	size++;
}

void DoublyLL::InsertLast(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	newn->previous = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		PNODE temp = first;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->previous = temp;
	}
	size++;
}

void DoublyLL::InsertAtPos(int no, int iPos)
{
	int i = 0;
	if((iPos < 0) || (iPos > size+1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == size+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE temp = first;
		PNODE newn = new NODE;
		newn->data = no;
		newn->next = NULL;
		newn->previous = NULL;
		
		for(i = 1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->previous = newn;
		temp->next = newn;
		newn->previous = temp;
		size++;
	}
}

void DoublyLL::DeleteFirst()
{
	if(first == NULL)
	{
		return;
	}
	else if(first->next == NULL)
	{
		delete first;
		first = NULL;
	}
	else
	{
		first = first->next;
		delete first->previous;
		first->previous = NULL;
	}
	size--;
}

void DoublyLL::DeleteLast()
{
	if(first == NULL)
	{
		return;
	}
	else if(first->next == NULL)
	{
		delete first;
		first = NULL;
	}
	else
	{
		PNODE temp = first;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->previous->next = NULL;
		delete temp;
	}
	size--;
}

void DoublyLL::DeleteAtPos(int iPos)
{
	if((iPos < 1) || (iPos > size))
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == size)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = first;
		for(int i = 1;i < iPos-1;i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		delete (temp->next->previous);
		temp->next->previous = temp;
		
		size--;
	}
		
}

void DoublyLL::Display()
{
	PNODE temp = first;
	while(temp != NULL)
	{
		cout<<"|"<<temp->data<<"|  ";
		temp = temp->next;
	}
	cout<<"\n";
}

int DoublyLL::Count()
{
	return size;
}

int main()
{
	int iRet = 0;
	DoublyLL obj1;
	obj1.InsertFirst(101);
	obj1.InsertFirst(51);
	obj1.InsertFirst(21);
	
	obj1.InsertLast(111);
	obj1.InsertLast(151);
	obj1.InsertLast(501);
	
	obj1.Display();
	
	obj1.InsertAtPos(31,2);
	obj1.Display();
	
	obj1.DeleteFirst();
	obj1.DeleteFirst();
	obj1.Display();
	obj1.DeleteLast();
	obj1.DeleteAtPos(2);
	obj1.Display();
	
	iRet = obj1.Count();
	cout<<"Number of nodes in linked list are : "<<iRet<<"\n";
	
	return 0;
}