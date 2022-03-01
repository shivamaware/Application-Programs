import java.util.*;

class Number
{
	public boolean Check(int Arr[], int iNo)
	{
		int iCnt = 0, iRet = 0;
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				break;
			}
		}
		
		if(iCnt != Arr.length)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program1
{
	public static void main(String args[])
	{
		int iValue = 0, iLength = 0, iCnt = 0;
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
		
		System.out.println("Enter the number to be searched in an array");
		iValue = sobj.nextInt();
		
		Number nobj = new Number();
		
		bRet = nobj.Check(Brr,iValue);
	
		if(bRet == true)
		{
			System.out.println("Number is present in given array");
		}
		else
		{	
			System.out.println("Number is not present in given array");
		}
	}
}