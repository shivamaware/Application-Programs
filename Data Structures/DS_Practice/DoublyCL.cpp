#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *previous;
}NODE, *PNODE;

class DoublyCL
{
	private:
		PNODE first;
		PNODE last;
		int size;
	public:
		DoublyCL();
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int, int);
		void Display();
		int Count();
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
	
};

DoublyCL::DoublyCL()
{
	first = NULL;
	last = NULL;
	size = 0;
}

void DoublyCL::InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	newn->previous = NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first->previous = newn;
		first = newn;
	}
	last->next = first;
	first->previous = last;
	
	size++;
}

void DoublyCL::InsertLast(int no)
{

	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	newn->previous = NULL;
	
	if(first == NULL)
	{
		first = newn;
		last = newn;
	}
	else
	{	
		last->next = newn;
		newn->previous = last;
		last = newn;
	}
	last->next = first;
	first->previous = last;
	size++;
}

void DoublyCL::InsertAtPos(int no, int iPos)
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
		newn->previous = NULL;
		
		for(i = 1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		newn->next->previous = newn;
		newn->previous = temp;
		temp->next = newn;
		size++;
	}
}

void DoublyCL::DeleteFirst()
{
	if((first == NULL)&&(last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		first = first->next;
		delete last->next;
		first->previous = last;
		last->next = first;
	}

	size--;
}

void DoublyCL::DeleteLast()
{
	if((first == NULL) && (last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		last = last->previous;
		delete last->next;
		last->next = first;
		first->previous = last;
	}
	size--;
}

void DoublyCL::DeleteAtPos(int iPos)
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

void DoublyCL::Display()
{
	PNODE temp = first;
	for(int i = 1;i<=size;i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp->next;
	}
	cout<<"\n";
}

int DoublyCL::Count()
{
	return size;
}

int main()
{
	int iRet = 0;
	DoublyCL obj1;
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