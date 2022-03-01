import java.util.Scanner;

class MyArray
{
	public int[] CopyArrayRev(int arr[])
	{
		int revArr[] = new int[arr.length];
		for(int i = revArr.length-1,j=0;i>=0;i--,j++)
		{
			revArr[j] = arr[i];
		}
		return revArr;
	}
}

class program3
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
		int RevArr[] = mobj.CopyArrayRev(Arr);
		System.out.println("Elements of reversed array are : ");
		for(int i = 0;i<RevArr.length;i++)
		{
			System.out.println(RevArr[i]);
		}
	}
}