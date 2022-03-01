import java.util.*;

class Marvellous
{
	public int Add(int brr[])
	{
		int iSum = 0;
		int iCnt = 0;
		for(iCnt = 0;iCnt<brr.length;iCnt++)
		{
			iSum = iSum + brr[iCnt]; 
		}
		return iSum;
	}
}

class ArrayAddition
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, iCnt = 0, iRet = 0;
		
		System.out.println("Enter no of elements");
		iSize = sobj.nextInt();
	
		int Arr[] = new int[iSize];
		
		System.out.println("Enter umbers");
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		Marvellous mobj = new Marvellous();
		iRet = mobj.Add(Arr);
		
		System.out.println("Addition is "+ iRet);
	}
}
