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
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0, i = 0;
		for(i = 0; i<Arr.length;i++)
		{
		if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class StringFindVowelsUsingFor
{
	public static void main(String arg[])
	{
		int iRet = 0;
		Marvellous mobj = new Marvellous();
		mobj.Accept();
		mobj.Display();
		iRet = mobj.CountVowels();
		System.out.println("Number of vowels are: "+iRet);
	}
}