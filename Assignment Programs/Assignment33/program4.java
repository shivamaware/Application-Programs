import java.util.*;

class Digit
{
	public int Multiply(int iNo)
	{
		int iDigit = 0, iMult = 1;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iMult = iDigit * iMult;
			iNo = iNo / 10;
		}
		return iMult;
	}
}

class program4
{
	public static void main(String args[])
	{
		int iValue = 0, iRet = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the number");
		iValue = sobj.nextInt();
	
		Digit dobj = new Digit();
		
		iRet = dobj.Multiply(iValue);
	
		System.out.println("Multiplication of all digits is : "+iRet);
	}
}