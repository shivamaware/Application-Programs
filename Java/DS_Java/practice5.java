//Queue

class Node
{
	public int data;
	public Node next;
}

class Queue
{
	private Node first;
	private int size;
	
	public Queue()
	{
		this.first = null;
		this.size = 0;
	}
	
	public void Enqueue(int no)
	{
		Node newn = new Node();
		newn.data = no;
		newn.next = null;
		
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
		}		
		this.size++;
	}
	
	public int Dequeue()
	{
		int iValue = 0;
		if(first == null)
			return 0;
		else if(first.next == null)
		{
			iValue = first.data;
			first = null;
		}
		else
		{
			iValue = first.data;
			first = first.next;
		}
		this.size--;
		return iValue;
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
	
	public int Count()
	{
		return this.size;
	}
}

class practice5
{
	public static void main(String arg[])
	{
		Queue obj = new Queue();
		int iRet = 0;
		
		obj.Enqueue(51);
		obj.Enqueue(21);
		obj.Enqueue(11);
		iRet = obj.Count();
		System.out.println("Total number of nodes are "+iRet);
		obj.Display();
		
		iRet = obj.Dequeue();
		obj.Display();
		System.out.println("Data from dequeued node is "+iRet);
	}
}