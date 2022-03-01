import java.util.Scanner;

class MyArray
{
	public int[] ArrayConcate(int arr1[],int iSize1,int arr2[],int iSize2)
	{
		int arr3[] = new int[iSize1+iSize2];
		for(int i = 0;i<iSize1;i++)
		{
			arr3[i] = arr1[i];
		}
		for(int i = iSize1,j=0;i<iSize1+iSize2;i++,j++)
		{
			arr3[i] = arr2[j];
		}
		return arr3;
	}
	
}

class program4
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
		int Arr3[] = mobj.ArrayConcate(Arr1,size1,Arr2,size2);
		System.out.println("Concatenated array : ");
		for(int i = 0;i<size1+size2;i++)
		{
			System.out.println(Arr3[i]);
		}
	}
}