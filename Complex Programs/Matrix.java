import java.util.*;

class Matrix
{
	public static void main(String args[])
	{
		int i = 0,j = 0;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number of rows");
		int rows = sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int columns = sobj.nextInt();
		
		int Arr[][] = new int[rows][columns];
		
		System.out.println("Please enter the elements");
		
		for(i = 0;i<Arr.length;i++)
		{
			for(j = 0;j<Arr[i].length;j++)
			{
				Arr[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Entered elements are : ");
		
		for(i = 0;i<Arr.length;i++)
		{
			for(j = 0;j<Arr[i].length;j++)
			{
				System.out.print(Arr[i][j]+"\t");
			}
			System.out.println();
		}
	}
}