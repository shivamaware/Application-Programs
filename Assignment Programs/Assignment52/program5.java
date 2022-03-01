import java.util.Scanner;

class MyArray
{
	public boolean ChkPalindrome(int arr[])
	{
		int iDigit = 0, iRev = 0, iNo = 0, temp = 0;
		boolean iFlag = true;
		for(int i=0;i<arr.length;i++)
		{
			temp = arr[i];
			iNo = arr[i];
			iRev = 0;
			while(iNo != 0)
			{
				iDigit = iNo%10;
				iRev = iRev*10 + iDigit;
				iNo = iNo/10;
			}
			if(iRev != temp)
			{
				iFlag = false;
				break;
			}
		}
		if(iFlag == false)
			return false;
		else 
			return true;
	}
}

class program5
{
	public static void main(String args[])
	{
		boolean bRet = false;
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
		bRet = mobj.ChkPalindrome(Arr);
		if(bRet == false)
		{
			System.out.println("Elements from the array are not palindrome");
		}
		else
		{
			System.out.println("Elements from the array are Palindrome");
		}
	}
}