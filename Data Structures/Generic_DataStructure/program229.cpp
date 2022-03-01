#include<iostream>
using namespace std;

template <typename T>
struct node
{
	T data;
	struct node *next;
};

template <class T>
class SinglyLL
{
	private:
		node <T>* first;
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
	node <T> * newn = new node<T>;
			
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
	node <T> * newn = new node<T>;
	
	newn->data = no;
	newn->next = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		node <T> * temp = first;
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
	node <T> * temp = first;
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
	node <T> * temp = first;
			
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
	node <T> * temp = first;
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
	int iRet = 0;
	SinglyLL <char>cobj;

	cobj.InsertFirst('A');
	cobj.InsertFirst('B');
	cobj.InsertFirst('C');
	
	cobj.InsertLast('D');
	cobj.InsertLast('E');
	cobj.Display();
	iRet = cobj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";
	
////////////////////////////////////////////////////////////
	
	SinglyLL <int>iobj;

	iobj.InsertFirst(11);
	iobj.InsertFirst(21);
	iobj.InsertFirst(51);
	
	iobj.InsertLast(101);
	iobj.InsertLast(111);
	iobj.Display();
	iRet = iobj.Count();
	cout<<"Number of elements are : "<<iRet<<"\n";	
	return 0;
}