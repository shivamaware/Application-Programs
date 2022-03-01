#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
}NODE, *PNODE;

class Tree
{
	public:
		int size;
		PNODE first;
	public:
		Tree();
		void Insert(int);
		bool Search(int);
		int Count(PNODE);
		int CountLeafNode(PNODE);
		int CountParentNode(PNODE);
		void Inorder(PNODE);
		void Preorder(PNODE);
		void Postorder(PNODE);
};

Tree::Tree()
{
	this->size = 0;
	this->first = NULL;
}
		
void Tree::Insert(int no)
{
	PNODE temp = first;
	
	PNODE newn = new NODE;
	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		while(1)
		{
			if(no == temp->data)
			{
				cout<<"Duplicate node";
				delete newn;
				break;
			}
			else if(no < temp->data)
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(no > temp->data)
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
		}
	}
	size++;
}

bool Tree::Search(int no)
{
	PNODE temp = first;
	bool flag = false;
	
	if(first == NULL)
	{
		return false;
	}
	else
	{
		while(temp != NULL)
		{		
			if(no == temp->data)
			{
				flag = true;
				break;
			}
			else if(no < temp->data)
			{
				temp = temp->lchild;
			}
			else if(no > temp->data)
			{
				temp = temp->rchild;
			}
		}
	}
	return flag;
}

int Tree::Count(PNODE temp)
{
	static int iCnt = 0;
	if(temp != NULL)
	{
		iCnt++;
		Count(temp->lchild);
		Count(temp->rchild);
	}
	return iCnt;
}

int Tree::CountLeafNode(PNODE temp)
{
	static int iCnt = 0;
	if(temp != NULL)
	{
		if((temp->lchild == NULL) && (temp->rchild == NULL))
		{
			iCnt++;
		}
		CountLeafNode(temp->lchild);
		CountLeafNode(temp->rchild);
	}
	return iCnt;
}

int Tree::CountParentNode(PNODE temp)
{
	static int iCnt = 0;
	if(temp != NULL)
	{
		if((temp->lchild != NULL) || (temp->rchild != NULL))
		{
			iCnt++;
		}
		CountParentNode(temp->lchild);
		CountParentNode(temp->rchild);
	}
	return iCnt;
}

void Tree::Inorder(PNODE temp)
{
	if(temp != NULL)
	{
		Inorder(temp->lchild);
		cout<<temp->data<<"\n";
		Inorder(temp->rchild);
	}
}


void Tree::Preorder(PNODE temp)
{
	if(temp != NULL)
	{
		cout<<temp->data<<"\n";
		Preorder(temp->lchild);
		Preorder(temp->rchild);
	}	
}

void Tree::Postorder(PNODE temp)
{
	if(temp != NULL)
	{
		Postorder(temp->lchild);
		Postorder(temp->rchild);
		cout<<temp->data<<"\n";
	}	
}

int main()
{
	bool bRet = false;
	int iRet = 0;
	Tree obj;
	obj.Insert(51);
	obj.Insert(11);
	obj.Insert(101);
	obj.Insert(21);
	obj.Insert(5);
	bRet = obj.Search(7);
	if(bRet == true)
	{
		cout<<"Node with given value is found\n";
	}
	else 
	{
		cout<<"There is no node of given value\n";
	}
	iRet = obj.Count(obj.first);
	cout<<"Total number of nodes in given tree are : "<<iRet<<"\n";
	iRet = obj.CountLeafNode(obj.first);
	cout<<"Total number of leaf nodes in given tree are : "<<iRet<<"\n";
	iRet = obj.CountParentNode(obj.first);
	cout<<"Total number of parent nodes in given tree are : "<<iRet<<"\n";
	cout<<"Inorder\n";
	obj.Inorder(obj.first);
	cout<<"Preorder\n";
	obj.Preorder(obj.first);
	cout<<"Postorder\n";
	obj.Postorder(obj.first);
	return 0;
}