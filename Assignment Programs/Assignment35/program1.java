import java.util.*;

class StringDemo
{
	public String StrNCatX(String src, String dest, int iCnt)
	{
		try
		{
			int i = 0, iRet = 0;
			char Arr[] = dest.toCharArray();
			src = src + " ";
			for(i = 0;i<iCnt;i++)
			{
				src = src + Arr[i];
			}
		
		}
		catch(ArrayIndexOutOfBoundsException E)
		{
			System.out.println("Array index out of bound wxception");
		}
	
		return src;
			
	}
	
}

class program1
{
	public static void main(String args[])
	{
		int iValue = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter Second string");
		String str2 = sobj.nextLine();
		
		System.out.println("Enter the value of N");
		iValue = sobj.nextInt();
		
		StringDemo dobj = new StringDemo();
		String str3 = dobj.StrNCatX(str1, str2, iValue);
		System.out.println(str3);
	}
}