#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class SinglyLL
{
	private:
		PNODE first;
		int size;
	public:
		SinglyLL();
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int, int);
		void Display();
		int Count();
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
	
};

SinglyLL::SinglyLL()
{
	first = NULL;
	size = 0;
}

void SinglyLL::InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		newn->next = first;
		first = newn;
	}
	size++;
}

void SinglyLL::InsertLast(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
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
	}
	size++;
}

void SinglyLL::InsertAtPos(int no, int iPos)
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
		PNODE newn = new NODE;; 
		newn->data = no;
		newn->next = NULL;
		
		for(i = 1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
		size++;
	}
}

void SinglyLL::DeleteFirst()
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
		first = first->next;
		delete temp;
	}
	size--;
}

void SinglyLL::DeleteLast()
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
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		delete temp->next;
		temp->next = NULL;
	}
	size--;
}

void SinglyLL::DeleteAtPos(int iPos)
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
		PNODE targeted = temp->next;
		temp->next = temp->next->next;
		delete targeted;
		size--;
	}
		
}

void SinglyLL::Display()
{
	PNODE temp = first;
	while(temp != NULL)
	{
		cout<<"|"<<temp->data<<"|  ";
		temp = temp->next;
	}
	cout<<"\n";
}

int SinglyLL::Count()
{
	return size;
}

int main()
{
	int iRet = 0;
	SinglyLL obj1;
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