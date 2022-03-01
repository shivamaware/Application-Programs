//Stack

class Node
{
	public int data;
	public Node next;
}

class Stack
{
	private Node first;
	private int size;
	
	public Stack()
	{
		this.first = null;
		this.size = 0;
	}
	
	public void push(int no)
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
			newn.next = first;
			first = newn;
		}
		this.size++;
	}
	
	public int pop()
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

class practice6
{
	public static void main(String arg[])
	{
		int iRet = 0;
		Stack obj = new Stack();
		obj.push(11);
		obj.push(21);
		obj.push(51);
		iRet = obj.Count();
		System.out.println("Total number of nodes are "+iRet);
		obj.Display();
		
		iRet = obj.pop();
		System.out.println("Popped element is "+iRet);
	}

}