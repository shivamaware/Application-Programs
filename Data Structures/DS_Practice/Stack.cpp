#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE; 

class Stack
{
	private:
		PNODE first;
		int size;
	public:
		Stack();
		void push(int);
		int pop();
		void Display();
		int Count();
};

Stack::Stack()
{
	first = NULL;
	size = 0;
}

void Stack::push(int no)
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

int Stack::pop()
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

void Stack::Display()
{
	PNODE temp = first;
	while(temp != NULL)
	{
		cout<<"|"<<temp->data<<"|  ";
		temp = temp->next;
	}
	cout<<"\n";
}

int Stack::Count()
{
	return size;
}

int main()
{
	Stack obj;
	obj.push(11);
    obj.push(21);
    obj.push(51);
    obj.push(101);
	
    cout<<"Elements of Stack :\n";
	
	obj.Display();	
    int iret = obj.pop();      
    cout<<"Removed element from Stack : "<<iret<<"\n";                    
    
    obj.Display();          
    iret = obj.Count();     
    
    cout<<"Size of Stack is : "<<iret<<"\n";
	return 0;
}