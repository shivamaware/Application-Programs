#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node *next;
};

template <class T>
typedef struct node NODE;

template <class T>
typedef struct node *PNODE;

template <class T>
class SinglyLL
{
	private:
		PNODE first;
		int size;
		
	public:
		SinglyLL();
		void InsertFirst(T);
		void InsertLast(T);
		void InsertAtPos(T,int);
		void DeleteFirst();
		void DeleteLast();
		void DeleteAtPos(int);
		void Display();
		int Count();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
	first = NULL;
	size = 0;
}

template <class T>		
void SinglyLL<T>::InsertFirst(T no)
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
	
template <class T>		
void SinglyLL<T>::InsertLast(T no)
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
		while(temp->next  != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
	size++;			
}

template <class T>
void SinglyLL<T>::InsertAtPos(T no, int iPos)
{}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
	PNODE temp = first;
	if(first != NULL)
	{
		first = first->next;
		delete temp;
			
		size--;
	}
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
	PNODE temp = first;
			
	if(first == NULL)
	{
		return;
	}
	else if(first->next == NULL)
	{
		delete first;
		first = NULL;
		size--;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		
		delete temp->next;
		temp->next = NULL;
		size--;
	}
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{}

template <class T>
void SinglyLL<T>::Display()
{
	PNODE temp = first;
	while(temp != NULL)
	{
		cout<<temp->data<<"\t";
		temp = temp->next;
	}
	cout<<"\n";
}

template <class T>
int SinglyLL<T>::Count()
{
	return size;
}	

int main()
{
	SinglyLL <int>obj;
	int iRet = 0;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
	return 0;
}