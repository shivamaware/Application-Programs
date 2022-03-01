import java.util.Scanner;

class MyArray
{
	public int DiffArray(int arr1[],int arr2[])
	{
		int iSum1 = 0,iSum2 = 0;
		for(int i=0;i<arr1.length;i++)
		{
			iSum1 = iSum1 + arr1[i];
		}
		for(int i=0;i<arr2.length;i++)
		{
			iSum2 = iSum2 + arr2[i];
		}
		return iSum1 - iSum2;
	}
}

class program1
{
	public static void main(String args[])
	{
		int iRet = 0,size1 = 0,size2 = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array1");
		size1 = sobj.nextInt();
		System.out.println("Enter the size of array2");
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
		iRet = mobj.DiffArray(Arr1,Arr2);
		System.out.println("Difference between summation of arrays is : "+iRet);
	}
}