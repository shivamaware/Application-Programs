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
	public boolean ChkVowel(String str)
	{
		int iCnt = 0;
		char Arr[] = str.toCharArray();
		
		for(iCnt = 0; iCnt<Arr.length; iCnt++)
		{
			if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt] == 'U') || (Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u'))
			{
				break;
			}
		}
		
		if(iCnt == Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class program4
{
	public static void main(String args[])
	{
		boolean bRet = false;
		StringDemo sobj = new StringDemo();
		sobj.Accept();
		bRet = sobj.ChkVowel(sobj.strI);
		
		if(bRet == true)
		{
			System.out.println("String does contain vowel");
		}
		else
		{
			System.out.println("String does not contain any vowel");
		}
	}
}