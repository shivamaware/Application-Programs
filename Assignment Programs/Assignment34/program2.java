import java.util.*;

class Number
{
	public int FirstOcc(int Arr[], int iNo)
	{
		int iCnt = 0, iIndex = -1;
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				iIndex = iCnt;
				break;
			}
		}

		return iIndex;
	}
}

class program2
{
	public static void main(String args[])
	{
		int iValue = 0, iLength = 0, iCnt = 0, iRet = 0;
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
		
		System.out.println("Enter the number to be searched");
		iValue = sobj.nextInt();
		
		Number nobj = new Number();
		
		iRet = nobj.FirstOcc(Brr,iValue);
		
		System.out.println("Index of first occurence of number is "+iRet);

	}
}