import java.util.*;

class StringDemo
{
	public boolean StrPallindrome(String str)
	{
		int iStart = 0, iEnd = str.length() - 1;
		char temp;
		boolean bRet = false;
		char Arr[] = str.toCharArray();
		char Brr[] = str.toCharArray();
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd]  = temp;
			iStart++;
			iEnd--;
		}
		
		String newStr = new String(Arr);
		bRet = newStr.equalsIgnoreCase(str);
		return bRet;
	}
}

class program5
{
	public static void main(String args[])
	{
		boolean bRet = false;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String str1 = sobj.nextLine();
		
		StringDemo dobj = new StringDemo();
		
		bRet = dobj.StrPallindrome(str1);
		
		if(bRet == true)
		{
			System.out.println("String is Palindrome");
		}
		else
		{
			System.out.println("String is not Palindrome");
		}
	}
}