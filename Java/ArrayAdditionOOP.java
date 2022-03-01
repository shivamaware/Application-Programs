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
		System.out.println("Enter elements");
		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Entered elements are");
		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}

class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}
	public int Add()
	{
		int iSum = 0;
		int iCnt = 0;
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt]; 
		}
		return iSum;
	}
}	
	

class ArrayAdditionOOP
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0, iRet = 0;
		System.out.println("Enter number of elements");
		iLength = sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength);
		mobj.Accept();
		mobj.Display();
		iRet = mobj.Add();

		
		System.out.println("Addition is "+ iRet);
	}
}
