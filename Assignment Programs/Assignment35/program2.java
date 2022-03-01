import java.util.*;

class StringDemo
{
	public boolean StrCmpX(String src, String dest)
	{
		int iFlag = 0;
		int i = 0;
		boolean bRet = false;
		char Arr[] = src.toCharArray();
		char Brr[] = dest.toCharArray();
		if(Arr.length != Brr.length)
		{
			return false;
		}
		else
		{
			for(i = 0;i<Arr.length;i++)
			{
				if(Arr[i] != Brr[i])
				{
					iFlag = 1;
					break;
				}
			}
		}
		if(iFlag == 1)
		{
			return false;
		}
		else
		{
			return true;
		}	
	}
	
}

class program2
{
	public static void main(String args[])
	{
		boolean bRet = false;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter Second string");
		String str2 = sobj.nextLine();

		StringDemo dobj = new StringDemo();
		
		bRet = dobj.StrCmpX(str1, str2);
		
		if(bRet == true)
		{
			System.out.println("Both the strings are equal");
		}
		else
		{
			System.out.println("Strings are not equal");
		}
	}
}