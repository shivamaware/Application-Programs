import java.util.*;

class ArrayDemo
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, iCnt = 0;
		
		System.out.println("Enter no of elements");
		iSize = sobj.nextInt();
	
		int Arr[] = new int[iSize];
		
		System.out.println("Enter umbers");
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
		
		System.out.println("Entered elements are");
		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	
	}
}