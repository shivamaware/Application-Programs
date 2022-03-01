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
	public String Reverse()
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
		return Arr.toString();
	}
}

class StringReverse3
{
	public static void main(String arg[])
	{
		int iRet = 0;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		String s = mobj.Reverse();
		System.out.println("Reversed : "+s);
	}
}