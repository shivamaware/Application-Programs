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
	
	public int Difference()
	{
		int iCnt = 0, iEven = 0, iOdd = 0;
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 2) == 0)
			{
				iEven = iEven + Arr[iCnt];
			}
			
			else
			{
				iOdd = iOdd + Arr[iCnt];
			}
		}
		return (iEven - iOdd);
	}
}

class program1
{
	public static void main(String args[])
	{
		int iSize = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number of elements");
		iSize = sobj.nextInt();
	
		ArrayDemo aobj = new ArrayDemo(iSize);
		
		aobj.Accept();
		iRet = aobj.Difference();
	
		System.out.println("Difference is : "+iRet);
	}
}