import java.util.*;
import MarvellousNumbers.ArrayX;

class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}
	public float Average()
	{
		int iSum = 0;
		int iCnt = 0;
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			iSum = iSum + Arr[iCnt]; 
		}
		return ((float)iSum/Arr.length);
	}
}	
	

class ArrayAverageOOPPackage
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0;
		float fRet = 0.0f;
		System.out.println("Enter number of elements");
		iLength = sobj.nextInt();
		
		Marvellous mobj = new Marvellous(iLength);
		mobj.Accept();
		mobj.Display();
		fRet = mobj.Average();
		
		System.out.println("Average is "+ fRet);
	}
}
