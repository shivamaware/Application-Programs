import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i = 0, j = 0;
		char ch = '\0';
		for(i = 1, ch = 'A';i <= iRow;i++,ch++)
		{
			for(j = 1;j <= iCol;j++)
			{
				System.out.print(ch);
				System.out.print("\t");					
			}
			System.out.println();
		}
	}
	
}

class program3
{
	public static void main(String args[])
	{
		int iNo1 = 0, iNo2 = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter number of columns");
		iNo2 = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		pobj.Pattern(iNo1, iNo2);
	}
}