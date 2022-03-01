import java.util.*;

class Marvellous
{
	public String WordReverse(String s)
	{
		String s2 = s.trim().replaceAll("[ ]{2,}"," ");
		
		String Arr[] = s2.split(" ");
		
		StringBuffer output = new StringBuffer(" ");
		
		for(String str : Arr)
		{
			StringBuffer sobj = new StringBuffer(str);
			output = output.append(sobj.reverse());
			output = output.append(" ");
		}
		String ret = new String(output);
		return ret.trim();
	}
}

class StringSplitReverseWord
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String s = sobj.nextLine();
		
		Marvellous mobj = new Marvellous();
		String ret = mobj.WordReverse(s);
		System.out.println("String is : "+ret);
	}
}