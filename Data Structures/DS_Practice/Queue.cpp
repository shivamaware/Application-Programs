#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE; 

class Queue
{
	private:
		PNODE first;
		int size;
	public:
		Queue();
		void Enqueue(int);
		int Dequeue();
		void Display();
		int Count();
};

Queue::Queue()
{
	first = NULL;
	size = 0;
}

void Queue::Enqueue(int no)
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

int Queue::Dequeue()
{
	int no = 0 ;
	if(first == NULL)
	{
		return -1;
	}
	else if(first->next == NULL)
	{
		no = first->data;
		delete first;
		first = NULL;
	}
	else
	{
		PNODE temp = first;
		no = first->data;
		first = first->next;
		delete temp;
	}
	size--;
	return no;
}

void Queue::Display()
{
	PNODE temp = first;
	while(temp != NULL)
	{
		cout<<"|"<<temp->data<<"|  ";
		temp = temp->next;
	}
	cout<<"\n";
}

int Queue::Count()
{
	return size;
}

int main()
{
	Queue obj;
	obj.Enqueue(11);
    obj.Enqueue(21);
    obj.Enqueue(51);
    obj.Enqueue(101);
	
    cout<<"Elements of Queue :\n";
	
	obj.Display();	
    int iret = obj.Dequeue();      
    cout<<"Removed element from Queue : "<<iret<<"\n";                    
    
    obj.Display();          
    iret = obj.Count();     
    
    cout<<"Size of queue is : "<<iret<<"\n";
	return 0;
}