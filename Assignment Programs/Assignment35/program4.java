import java.util.*;

class StringDemo
{
	public String StrRevTogX(String str)
	{
		int iCnt = 0, iStart = 0, iEnd = str.length() - 1;
		char temp;
		char Arr[] = str.toCharArray();
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd]  = temp;
			iStart++;
			iEnd--;
		}
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
			{
				Arr[iCnt] = (char)(Arr[iCnt] + 32);
			}
			
			else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
			{
				Arr[iCnt] = (char)(Arr[iCnt] - 32);
			}
		}
		return new String(Arr);
	}
}

class program4
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string");
		String str1 = sobj.nextLine();
		
		StringDemo dobj = new StringDemo();
		
		String s = dobj.StrRevTogX(str1);
		System.out.println(s);
	}
}