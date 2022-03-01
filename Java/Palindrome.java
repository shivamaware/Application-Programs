import java.util.*;

class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		str = sobj.nextLine();
	}
	
	public void Display()
	{
		System.out.println("String is : "+str);
	}
}

class Marvellous extends StringX
{
	public boolean CheckPalindrome()
	{
		char Arr[] = str.toCharArray();
		int iStart = 0, iEnd = Arr.length-1;
		char temp;
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			iStart++;
			iEnd--;
		}
		String newStr = new String(Arr);
		boolean bRet = newStr.equals(str);
		return bRet;
		
	}
}

class Palindrome
{
	public static void main(String arg[])
	{
		int iRet = 0;
		boolean bRet = false;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		bRet = mobj.CheckPalindrome();
		if(bRet == true)
		{
			System.out.println("String is palindrome");
		}
		else
		{
			System.out.println("String is not palindrome");
		}
	}
}