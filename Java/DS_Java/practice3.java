//Singly Circular Linked List

class Node
{
	public int data;
	public Node next;
}

class SinglyCL
{
	private Node first;
	private Node last;
	private int size;
	
	public SinglyCL()
	{
		this.first = null;
		this.last = null;
		this.size = 0;
	}
	
	public void InsertFirst(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		
		if((first == null) && (last == null))
		{
			first = newn;
			last = newn;
		}
		else
		{
			newn.next = first;
			last.next = newn;
			first = newn;
		}
		this.size++;
	}
	
	public void InsertLast(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		
		if((first == null) && (last == null))
		{
			first = newn;
			last = newn;
		}
		else
		{
			last.next = newn;
			newn.next = first;
			last = newn;
		}
		this.size++;
	}
	
	public void InsertAtPos(int no, int iPos)
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
			
			for(int i = 1;i < iPos-1;i++)
			{
				temp = temp.next;
			}
			newn.next = temp.next;
			temp.next = newn;
			this.size++;
		}
	}
	
	public void DeleteFirst()
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
	
	public void DeleteLast()
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
			Node temp = last;
			while(temp.next.next != first)
			{
				temp = temp.next;
			}
			temp.next = first;
			last = temp;
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
			for(int i = 1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			temp.next = temp.next.next;
			this.size--;
		}
	}
	
	public int Count()
	{
		return this.size;
	}
	
	public void Display()
	{
		Node temp = first;
		do
		{
			System.out.print("|"+temp.data+"|->");
			temp = temp.next;
		}while(temp != first);
		System.out.println("null");
	}
	
}

class practice3
{
	public static void main(String arg[])
	{
		int iRet = 0;
		SinglyCL obj = new SinglyCL();
		
		obj.InsertFirst(11);
		obj.InsertFirst(21);
		obj.InsertFirst(51);
		
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