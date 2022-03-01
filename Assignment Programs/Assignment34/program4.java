import java.util.*;

class Number
{
	public void Display(int Arr[], int iStart, int iEnd)
	{
		int iCnt = 0, iIndex = -1;
		System.out.println("Elements from the given range are");
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
			{
				System.out.println(Arr[iCnt]);
			}
		}
	}
}

class program4
{
	public static void main(String args[])
	{
		int iLength = 0, iCnt = 0, iStart = 0, iEnd = 0;
		boolean bRet = false;
		int Brr[];
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of elements");
		iLength = sobj.nextInt();
		
		Brr = new int[iLength];
		
		System.out.println("Enter the elements");
		
		for(iCnt = 0;iCnt<Brr.length;iCnt++)
		{
			Brr[iCnt] = sobj.nextInt(); 
		}	
		
		System.out.println("Enter the first number");
		iStart = sobj.nextInt();

		System.out.println("Enter the second number");
		iEnd = sobj.nextInt();
		
		Number nobj = new Number();
		
		nobj.Display(Brr,iStart, iEnd);
		
	}
}