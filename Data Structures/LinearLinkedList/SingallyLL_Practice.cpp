#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE;

class SingallyLL
{
	private:
		PNODE first;
		int size;
		
	public:
	SingallyLL()
	{
		first = NULL;
		size = 0;
	}
	
	void Display()
	{
		PNODE temp = first;
		while(temp != NULL)
		{
			cout<<temp->data<<" -> ";
			temp = temp->next;
		}
		cout<<"NULL";
		
	}
	
	int Count()
	{
		return size;
	}
	
	void InsertFirst(int no)
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
	
	void InsertLast(int no)
	{
		PNODE temp = first;
		PNODE newn = new NODE;
		
		newn->data = no;
		newn->next = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
	}
	
	void InsertAtPosition(int no, int iPos)
	{
		PNODE temp = first;
		int i = 0;
		PNODE newn = new NODE;
		
		newn->data = no;
		newn->next = NULL;
		
		if((iPos < 1) || (iPos > size+1))
		{
			cout<<"Invalid Position\n";
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
			for(i = 1;i<iPos-1;i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next = newn;
		}
		size++;
	}
	
	void DeleteFirst()
	{
		PNODE temp = first;
		if(first != NULL)
		{
			first = first->next;
			delete temp;
		}
		size--;
	}
	
	void DeleteLast()
	{
		PNODE temp = first;
		if(first == NULL)
		{
			return;
		}
		else if(first->next = NULL)
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
			delete (temp->next);
			temp->next = NULL;
			size--;
		}
	}
	
	
	void DeleteAtPosition(int iPos)
	{
		PNODE temp = first;
		int i = 0;
		PNODE targeted = NULL;
		
		if((iPos < 1) || (iPos > size))
		{
			cout<<"Invalid Position\n";
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
			for(i = 1;i<iPos-1;i++)
			{
				temp = temp->next;
			}
			targeted = temp->next;
			temp->next = temp->next->next;
			delete targeted;
		}
	}
};


int main()
{
	int iChoice = 1, iValue = 0, iPos = 0, iRet = 0;
	SingallyLL obj;
	
	
	while(iChoice != 0)
	{
		cout<<"\n==================================================================================\n";
		cout<<"\nWelcome to the Singally Linked List Project.....!!!!\n";
		cout<<"\nPlease select the appropriate option for different operations mentioned below.\n";
		cout<<"1 : To insert the new node at first position of linked list.\n";
		cout<<"2 : To insert the new node at last position of linked list.\n";
		cout<<"3 : To insert the new node at desired position of linked list.\n";
		cout<<"4 : To delete the node from first position of linked list.\n";
		cout<<"5 : To delete the node from last position of linked list.\n";
		cout<<"6 : To delete the node from desired position of linked list.\n";
		cout<<"7 : To display the linked list.\n";
		cout<<"8 : To count the number of nodes from linked list.\n";
		cout<<"0 : To terminate the linked list project.\n";
		cout<<"\n==================================================================================\n";
		
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1: 
				cout<<"Enter the data to be inserted in linked list.\n";
				cin>>iValue;
				obj.InsertFirst(iValue);
				break;
				
			case 2:
				cout<<"Enter the data to be inserted in linked list.\n";
				cin>>iValue;
				obj.InsertLast(iValue);
				break;
			
			case 3:
				cout<<"Enter the data to be inserted in linked list.\n";
				cin>>iValue;
				cout<<"Enter the position of data at which node is to be inserted.\n";
				cin>>iPos;
				obj.InsertAtPosition(iValue,iPos);
				break;

			case 4:
				obj.DeleteFirst();
				break;			
				
			case 5:
				obj.DeleteLast();
				break;	
				
			case 6:
				cout<<"Enter the position of the node which is to be removed.\n";
				cin>>iPos;
				obj.DeleteAtPosition(iPos);
				break;	
				
			case 7:
				obj.Display();
				break;
				
			case 8:
				iRet = obj.Count();
				cout<<"Number of elements in the linked list are : "<<iRet<<"\n";
				break;	
				
			case 0:
				cout<<"Application Terminated...!!";
				cout<<"Thanks for using linked list project.\n";
				break;	
				
			default:
				cout<<"Please enter valid option.\n";
				break;					
		}
	}
}