import java.util.Scanner;

class MyArray
{
	public void SumArray(int arr1[],int arr2[])
	{
		int iSum1 = 0,iSum2 = 0;
		for(int i = 0;i<arr1.length;i++)
		{
			iSum1 = iSum1 + arr1[i];
		}
		System.out.println("Sum of elements of array1 "+iSum1);
		for(int i = 0;i<arr2.length;i++)
		{
			iSum2 = iSum2 + arr2[i];
		}
		System.out.println("Sum of elements of array1 "+iSum2);
	}
	
}

class program5
{
	public static void main(String args[])
	{
		int size1 = 0, size2 = 0;
		
		System.out.println("Enter the size of first array");
		Scanner sobj = new Scanner(System.in);
		size1 = sobj.nextInt();
		System.out.println("Enter the size of second array");
		size2 = sobj.nextInt();
		int Arr1[] = new int[size1];
		int Arr2[] = new int[size2];
		System.out.println("Enter the elements of first array");
		for(int i=0;i<size1;i++)
		{
			Arr1[i] = sobj.nextInt();
		}
		System.out.println("Enter the elements of second array");
		for(int i = 0;i<size2;i++)
		{
			Arr2[i] = sobj.nextInt();
		}
		MyArray mobj = new MyArray();
		mobj.SumArray(Arr1,Arr2);
	}
}