//Doubly Circular Linked List

class Node
{
	public int data;
	public Node next;
	public Node prev;
}

class DoublyCL
{
	private Node first;
	private Node last;
	private int size;
	
	public DoublyCL()
	{
		this.first = null;
		this.last = null;
		this.size = 0;
	}
	
	void InsertFirst(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		newn.prev = null;
		
		if((first == null) && (last == null))
		{
			first = newn;
			last = newn;	
		}	
		else
		{
			newn.next = first;
			first.prev = newn;
			first = newn;
		}
		first.prev = last;
		last.next = first;
		
		this.size++;
	}
	
	void InsertLast(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		newn.prev = null;
		
		if((first == null) && (last == null))
		{
			first = newn;
			last = newn;
		}
		else
		{
			last.next = newn;
			newn.prev = last;
			last = newn;
		}
		first.prev = last;
		last.next = first;
		
		this.size++;
	}
	
	void InsertAtPos(int no, int iPos)
	{
		if((iPos <= 0) || (iPos > size+1))
			return;
		if(iPos == 1)
			InsertFirst(no);
		else if(iPos == size+1)
			InsertLast(no);
		else
		{
			Node temp = first;
			Node newn = new Node();
			newn.data = no;
			newn.next = null;
			newn.prev = null;
			
			for(int i = 1;i < iPos-1;i++)
			{
				temp = temp.next;
			}
			newn.next = temp.next;
			temp.next.prev = newn;
			temp.next = newn;
			newn.prev = temp;
			
			this.size++;
		}
	}
	
	void DeleteFirst()
	{
		if((first == null) && (last == null))
			return;
		else if(first.next == first)
		{
			first = null;
			last = null;
		}
		else
		{
			first = first.next;
			last.next = first;
		}
		this.size--;	
	}
	
	void DeleteLast()
	{
		if((first == null) && (last == null))
			return;
		else if(first.next == first)
		{
			first = null;
			last = null;
		}
		else
		{
			last = last.prev;
			last.next = first;
			first.prev = last;
		}
		this.size--;
	}
	
	void DeleteAtPos(int iPos)
	{
		if((iPos <= 0) && (iPos > size))
			return;
		if(iPos == 1)
			DeleteFirst();
		else if(iPos == size)
			DeleteLast();
		else
		{
			Node temp = first;
			for(int i = 1;i < iPos - 1;i++)
			{
				temp = temp.next;
			}
			temp.next = temp.next.next;
			temp.next.prev = temp;
			
			this.size--;
		}
			
	}
	
	void Display()
	{
		Node temp = first;
		do
		{
			System.out.print("|"+temp.data+"|->");
			temp = temp.next;
		}while(temp != first);
		System.out.println("null");
	}
	
	int Count()
	{
		return this.size;
	}
}

class practice4
{
	public static void main(String args[])
	{
		int iRet = 0;
		DoublyCL obj = new DoublyCL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		
		iRet = obj.Count();
		System.out.println("Total number of nodes are "+iRet);
		
		obj.Display();
		obj.InsertLast(101);
		obj.InsertLast(111);
		
		obj.Display();
		
		obj.InsertAtPos(45,4);
		obj.Display();
		obj.DeleteFirst();
		obj.Display();
		obj.DeleteLast();
		obj.Display();
		obj.DeleteAtPos(3);
		obj.DeleteAtPos(2);
		obj.Display(); 
	}
}