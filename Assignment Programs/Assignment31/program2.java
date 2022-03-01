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
	public int CountSmall(String str)
	{
		int iCnt = 0, i = 0;
		char Arr[] = str.toCharArray();
		
		for(i = 0; i<Arr.length; i++)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class program2
{
	public static void main(String args[])
	{
		int iRet = 0;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		iRet = sobj.CountSmall(sobj.strI);
		System.out.println("Number of small characters in given string are : "+iRet);
	}
}