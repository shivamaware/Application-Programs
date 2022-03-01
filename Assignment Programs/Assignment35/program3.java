import java.util.*;

class StringDemo
{
	public boolean StrNCmpX(String src, String dest, int iCnt)
	{
		int i = 0, iFlag = 0;
		char Arr[] = src.toCharArray();
		char Brr[] = dest.toCharArray();
		src = src + " ";
		if(iCnt > dest.length())
		{
			src = src + dest;
			System.out.println(src);
			return false;
		}
		else
		{
			for(i = 0;i<iCnt;i++)
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

class program3
{
	public static void main(String args[])
	{
		int iValue = 0;
		boolean bRet = false;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter Second string");
		String str2 = sobj.nextLine();
		
		System.out.println("Enter the value of N");
		iValue = sobj.nextInt();
		
		StringDemo dobj = new StringDemo();
		bRet = dobj.StrNCmpX(str1, str2, iValue);
		if(bRet == true)
		{
			System.out.println("FIrst N characters from both the strings are equal");
		}
		else
		{
			System.out.println("FIrst N characters from both the strings are not equal");
		}
	}
}