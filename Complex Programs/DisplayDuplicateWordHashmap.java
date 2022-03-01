import java.util.*;

class Marvellous
{
	public void WordFrequency(String s)
	{
		String s2 = s.trim().replaceAll("[ ]{2,}"," ");
		System.out.println("String after removing the whitespaces : "+s2);
	
		String Arr[] = s2.split(" ");
		
		HashMap <String,Integer> hobj = new HashMap<String,Integer>();
		for(String str : Arr)
		{
			if(hobj.containsKey(str))
			{
				hobj.put(str,(hobj.get(str))+1);
			}
			else
			{
				hobj.put(str,1);
			}
		}
		Set <String> sobj = hobj.keySet();
		
		System.out.println("Duplicate words from string are : "+sobj);
		for(String word : sobj)
		{
			if(hobj.get(word) > 1)
			{
				System.out.println(word);
			}
		}
	
	}
}

class DisplayDuplicateWordHashmap
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String s = sobj.nextLine();
		
		Marvellous mobj = new Marvellous();
		mobj.WordFrequency(s);
	}
}