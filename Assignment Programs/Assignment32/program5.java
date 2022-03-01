import java.util.*;

class ArrayX
{
	public int Arr[];
	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}
	
	public void Accept()
	{
		int iCnt = 0;
		Scanner sobj = new Scanner(System.in);
	
		System.out.println("Enter elements : ");
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
}

class ArrayDemo extends ArrayX
{
	public ArrayDemo(int iSize)
	{
		super(iSize);
	}
	
	public void Display()
	{
		int iCnt = 0;
		System.out.println("Elements which are multiples of 11 are : ");
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 11) == 0)
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}
}

class program5
{
	public static void main(String args[])
	{
		int iSize = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number of elements");
		iSize = sobj.nextInt();
	
		ArrayDemo aobj = new ArrayDemo(iSize);
		
		aobj.Accept();
		aobj.Display();

	}
}