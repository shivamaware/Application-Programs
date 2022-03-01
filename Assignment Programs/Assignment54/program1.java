import java.util.Scanner;

class MyArray
{
	public void ArrayReplace(char arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >= 'A') && (arr[i]<='Z'))
			{
				arr[i] = (char)(arr[i]+32);
			}
		}
		System.out.println("Modified array is :");
		for(int i = 0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
	}
}

class program1
{
	public static void main(String args[])
	{
		int size = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		size = sobj.nextInt();
		
		char Arr[] = new char[size];
		System.out.println("Enter the elements of array");
		for(int i=0;i<size;i++)
		{
			Arr[i] = sobj.next().charAt(0);
		}
		MyArray mobj = new MyArray();
		mobj.ArrayReplace(Arr);
	}
}