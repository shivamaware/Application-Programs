import java.util.Scanner;

class MyArray
{
	public int Search(char arr[], char ch)
	{
		int iCnt = 0;
		for(int i=0;i<arr.length;i++)
		{
			if((ch >= 'A') && (ch <= 'Z'))
			{
				if((arr[i] == ch) || (arr[i] == ch+32))
				{
					iCnt++;
				}
			}
			else if((ch >= 'a') && (ch <= 'z'))
			{
				if((arr[i] == ch) || (arr[i] == ch-32))
				{
					iCnt++;
				}
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
		System.out.println("Enter the character to search");
		char ch = sobj.next().charAt(0);
		MyArray mobj = new MyArray();
		iRet = mobj.Search(Arr,ch);
		System.out.println("Occurence of the character in array is "+iRet);
	}
}