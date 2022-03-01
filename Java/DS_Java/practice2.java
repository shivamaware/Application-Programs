//Doubly Linear Linked List

class Node
{
	public int data;
	public Node next;
	public Node prev;
}

class DoublyLL
{
	private Node first;
	private int size;
	
	public DoublyLL()
	{
		this.first = null;
		this.size = 0;
	}
	
	public void InsertFirst(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		newn.prev = null;
		
		if(first == null)
		{
			first = newn;
		}
		else
		{
			newn.next = first;
			first.prev = newn;
			first = newn;
		}
		this.size++;
	}
	
	public void InsertLast(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		newn.prev = null;
		
		if(first == null)
		{
			first = newn;
		}
		else
		{
			Node temp = first;
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = newn;
			newn.prev = temp;
		}
		this.size++;
	}
	
	public void InsertAtPos(int no,int iPos)
	{
		if((iPos  <= 0) || (iPos > size+1))
			return;
		if(iPos == 1)
			InsertFirst(no);
		else if(iPos == size +1)
			InsertLast(no);
		else
		{
			Node temp = first;
			Node newn = new Node();
			newn.data = no;
			newn.next = null;
			newn.prev = null;
			
			for(int i = 1;i<iPos - 1;i++)
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
	
	public void DeleteFirst()
	{
		if(first == null)
			return;
		else if(first.next == null)
			first = null;
		else
		{
			first = first.next;
			first.prev = null;
		}
		this.size--;
	}
	
	public void DeleteLast()
	{
		if(first == null)
			return;
		else if(first.next == null)
			first = null;
		else
		{
			Node temp = first;
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.prev.next = null;
		}
		this.size--;
	}
	
	public void DeleteAtPos(int iPos)
	{
		if((iPos <= 0) || (iPos > size))
			return;
		if(iPos == 1)
			DeleteFirst();
		else if(iPos == size)
			DeleteLast();
		else
		{
			Node temp = first;
			for(int i = 1;i < iPos;i++)
			{
				temp = temp.next;
			}
			temp.prev.next = temp.next;
			temp.next.prev = temp.prev;
			
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
		while(temp != null)
		{
			System.out.print("|"+temp.data+"|->");
			temp = temp.next;
		}  
		System.out.println("null");
	}
	
}

class practice2
{
	public static void main(String args[])
	{
		int iRet = 0;
		DoublyLL obj = new DoublyLL();
		
		obj.InsertFirst(11);
		obj.InsertFirst(21);
		obj.InsertFirst(51);
		
		obj.Display();
		
		obj.InsertLast(101);
		obj.InsertLast(111);
		
		obj.Display();
		
		obj.InsertAtPos(45,5);
		
		obj.Display();
		
		obj.DeleteFirst();
		obj.DeleteFirst();
		
		obj.Display();
		
		obj.DeleteLast();
		
		obj.Display();
		
		obj.DeleteAtPos(2);
		obj.Display();
		
		iRet = obj.Count();
		System.out.println("Total number of nodes in linked list are " +iRet);
	}
}