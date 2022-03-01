import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		int i = 0, j = 0;
		char Arr[] = str.toCharArray();
		for(i = 0;i < Arr.length;i++)
		{
			for(j = 0;j < Arr.length;j++)
			{
				if(i > j)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}
			System.out.println();
		}
		
		for(i = 0;i < Arr.length;i++)
		{
			for(j = 0;j < Arr.length;j++)
			{
				if((i+j) < Arr.length)
				{
					System.out.print(Arr[j]+"\t");
				}
				else
				{
					System.out.print("#\t");
				}
			}
			System.out.println();
		}
	}
	
}

class program5
{
	public static void main(String args[])
	{
		String newStr;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string");
		newStr = sobj.nextLine();
		
		Pattern pobj = new Pattern();
		pobj.Pattern(newStr);
	}
}