import java.util.Scanner;

class MyArray
{
	public void MinArray(int arr1[],int arr2[])
	{
		int iMin1 = arr1[0],iMin2 = arr2[1];
		for(int i=0;i<arr1.length;i++)
		{
			if(arr1[i] < iMin1)
			{
				iMin1 = arr1[i];
			}
		}
		System.out.println("Smalllest element from array1 is : "+iMin1);
		for(int i=0;i<arr2.length;i++)
		{
			if(arr2[i] < iMin2)
			{
				iMin2 = arr2[i];
			}
		}
		System.out.println("Smalllest element from array2 is : "+iMin2);
	}
}

class program2
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
		mobj.MinArray(Arr1,Arr2);
	}
}