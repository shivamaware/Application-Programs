import java.util.Scanner;

class MyArray
{
	public void Pattern(int arr[])
	{
		int iCap = 0, iSmall = 0;
		for(int i=0;i<arr.length;i++)
		{
			for(int j = 0;j<arr[i];j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}
	}
}

class program5
{
	public static void main(String args[])
	{
		int size = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		size = sobj.nextInt();
		
		int Arr[] = new int[size];
		System.out.println("Enter the elements of array");
		for(int i=0;i<size;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		MyArray mobj = new MyArray();
		mobj.Pattern(Arr);
	}
}