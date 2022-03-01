import java.util.*;

class Number
{
	public int Product(int Arr[])
	{
		int iCnt = 0, iMult = 1, iFlag = 0;
		
		for(iCnt = Arr.length-1;iCnt>=0;iCnt--)
		{
			if((Arr[iCnt] % 2) != 0)
			{
				iMult = iMult * Arr[iCnt];
				iFlag = 1;
			}
		}
		if(iFlag == 0)
		{
			return 0;
		}
		else
		{
			return iMult;
		}
	}
}

class program5
{
	public static void main(String args[])
	{
		int iLength = 0, iCnt = 0, iRet = 0;
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
		
		Number nobj = new Number();
		
		iRet = nobj.Product(Brr);
		
		System.out.println("Product of odd elements from array is "+iRet);

	}
}