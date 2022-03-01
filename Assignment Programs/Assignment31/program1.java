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
	public int CountCapital(String str)
	{
		int iCnt = 0, i = 0;
		char Arr[] = str.toCharArray();
		
		for(i = 0; i<Arr.length; i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class program1
{
	public static void main(String args[])
	{
		int iRet = 0;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		iRet = sobj.CountCapital(sobj.strI);
		System.out.println("Number of capital characters in given string are : "+iRet);
	}
}