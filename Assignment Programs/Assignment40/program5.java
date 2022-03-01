import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		int i = 0, j = 0;
		for(i = 1;i <= iRow ;i++)
		{
			for(j = 1;j <= iCol;j++)
			{
				if((i == 1) || (i == iRow) || (j == 1) || (j == iRow))
				{
					System.out.print(j+"\t");
				}
				else if(i == j)
				{
					System.out.print(i+"\t");
				}
				else
				{
					System.out.print(" \t");
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
		int iNo1 = 0, iNo2 = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first number");
		iNo1 = sobj.nextInt();
		
		System.out.println("Enter second number");
		iNo2 = sobj.nextInt();
		
		Pattern pobj = new Pattern();
		pobj.Pattern(iNo1, iNo2);
	}
}