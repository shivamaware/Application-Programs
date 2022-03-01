import java.util.*;

class Digit
{
	public int CountOdd(int iNo)
	{
		int iCnt = 0, iDigit = 0;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit % 2 != 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		return iCnt;
	}
}

class program2
{
	public static void main(String args[])
	{
		int iValue = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number");
		iValue = sobj.nextInt();
	
		Digit dobj = new Digit();
		
		iRet = dobj.CountOdd(iValue);
	
		System.out.println("Count of odd digits from number is : "+iRet);
	}
}