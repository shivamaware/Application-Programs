import java.util.*;

class StringSplitMaxChar
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String s = sobj.nextLine();
		
		String s2 = s.trim().replaceAll("[ ]{2,}"," ");
		
		String Arr[] = s2.split(" ");
		
		String output = null;
		int iMax = Arr[0].length();
		for(String str : Arr)
		{
			if(str.length() > iMax)
			{
				iMax = str.length();
				output = str;
			}
		}
		System.out.println("Largest word is : "+output+" with length : "+iMax);
	}
}