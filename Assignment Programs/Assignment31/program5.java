import java.util.*;

class StringX
{
	public String strI;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string :");
		strI = sobj.nextLine();
	}
}

class StringDemo extends StringX
{
	public String Reverse(String str)
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, iStart = 0, iEnd = Arr.length - 1;
		char iTemp;
		while(iStart < iEnd)
		{
			iTemp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = iTemp;
			iStart++;
			iEnd--;
		}
		return new String(Arr);
	}
}

class program5
{
	public static void main(String args[])
	{
		boolean bRet = false;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		String s = sobj.Reverse(sobj.strI);
		System.out.println(s);
	}
}