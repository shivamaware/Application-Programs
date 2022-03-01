#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class SinglyCL
{
	private:
		PNODE first;
		PNODE last;
		int size;
	public:
		SinglyCL();
		void InsertFirst(int);
		void InsertLast(int);
		void InsertAtPos(int, int);
		void Display();
		int Count();
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
	
};

SinglyCL::SinglyCL()
{
	first = NULL;
	last = NULL;
	size = 0;
}

void SinglyCL::InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first = newn;
	}
	last->next = first;
	size++;
}

void SinglyCL::InsertLast(int no)
{

	PNODE newn = new NODE;
	newn->data = no;
	newn->next = NULL;
	
	if(first == NULL)
	{
		first = newn;
		last = newn;
	}
	else
	{	
		last->next = newn;
		last = newn;
	}
	last->next = first;
	size++;
}

void SinglyCL::InsertAtPos(int no, int iPos)
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

void SinglyCL::DeleteFirst()
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
		last->next = first;
	}
	size--;
}

void SinglyCL::DeleteLast()
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
		PNODE temp = first;
		while(temp->next != last)
		{
			temp = temp->next;
		}
		delete last;
		last = temp;
		last->next = first;
	}
	size--;
}

void SinglyCL::DeleteAtPos(int iPos)
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

void SinglyCL::Display()
{
	PNODE temp = first;
	if((first == NULL)&&(last == NULL))
	{
		return;
	}
	do
	{
		cout<<"|"<<temp->data<<"|  ";
		temp = temp->next;
	}while(temp != last->next);
	cout<<"\n";
}

int SinglyCL::Count()
{
	return size;
}

int main()
{
	int iRet = 0;
	SinglyCL obj1;
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