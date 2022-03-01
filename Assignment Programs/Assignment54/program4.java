import java.util.Scanner;

class MyArray
{
	public int Difference(char arr[])
	{
		int iCap = 0, iSmall = 0;
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i] >= 'a') && (arr[i]<='z'))
			{
				iSmall++;
			}
			else if((arr[i] >= 'A') && (arr[i] <= 'Z'))
			{
				iCap++;
			}
		}
		return iCap - iSmall;
	}
}

class program4
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
		iRet = mobj.Difference(Arr);
		System.out.println("Difference between Capital and small letters from array is : "+iRet);
	}
}