import java.util.Scanner;

class MyArray
{
	public void ReverseArray(int arr[])
	{
		int iDigit = 0, iSum = 0, iNo = 0, temp = 0;
		for(int i=0;i<arr.length;i++)
		{
			temp = arr[i];
			iNo = arr[i];
			iSum = 0;
			while(iNo != 0)
			{
				iDigit = iNo%10;
				iSum = iSum + iDigit;
				iNo = iNo/10;
			}
			arr[i] = iSum;
		}
		System.out.println("Modified array with summation of digits");
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
	}
}

class program2
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
		mobj.ReverseArray(Arr);
	}
}