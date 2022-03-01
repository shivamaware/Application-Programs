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
	public int CountDiff(String str)
	{
		int iSmall = 0, iCapital = 0, iCnt = 0;
		char Arr[] = str.toCharArray();
		
		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
			{
				iSmall++;
			}
			else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
			{
				iCapital++;
			}
		}
		return (iSmall - iCapital);
	}
}

class program3
{
	public static void main(String args[])
	{
		int iRet = 0;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		iRet = sobj.CountDiff(sobj.strI);
		System.out.println("Difference between Number of Small characters and Capital characters is : "+iRet);
	}
}