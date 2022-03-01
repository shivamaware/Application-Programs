import java.util.Scanner;

class MyArray
{
	public int ArrayCapital(char arr[])
	{
		int iCnt = 0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >= 'A') && (arr[i]<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class program3
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
		iRet = mobj.ArrayCapital(Arr);
		System.out.println("Number of capital letters in an array are : "+iRet);
	}
}