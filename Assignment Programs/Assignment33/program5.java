import java.util.*;

class Digit
{
	public int CountDiff(int iNo)
	{
		int iDigit = 0, iEven = 0, iOdd = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			
			if((iDigit % 2) == 0)
			{
				iEven = iEven + iDigit;
			}
			else
			{
				iOdd = iOdd + iDigit;
			}
			
			iNo = iNo / 10;
		}
		return (iEven - iOdd);
	}
}

class program5
{
	public static void main(String args[])
	{
		int iValue = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number");
		iValue = sobj.nextInt();
	
		Digit dobj = new Digit();
		
		iRet = dobj.CountDiff(iValue);
	
		System.out.println("Multiplication of all digits is : "+iRet);
	}
}