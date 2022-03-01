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
				if((i + j) == (iRow + 1))
				{
					System.out.print("#\t");
				}
				else if((i+j) <= iRow)
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print("@\t");
				}
			}
			System.out.println();
		}
	}
	
}

class program2
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