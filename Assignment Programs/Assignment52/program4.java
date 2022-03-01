import java.util.Scanner;

class MyArray
{
	public int[] CopyArray(int arr[])
	{
		int newArr[] = new int[arr.length];
		for(int i = 0;i<newArr.length;i++)
		{
			newArr[i] = arr[i];
		}
		return newArr;
	}
}

class program4
{
	public static void main(String args[])
	{
		int iRet = 0,size = 0;
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
		int NewArr[] = mobj.CopyArray(Arr);
		System.out.println("Elements of new array are : ");
		for(int i = 0;i<NewArr.length;i++)
		{
			System.out.println(NewArr[i]);
		}
	}
}