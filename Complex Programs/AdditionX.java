import java.util.*;

class Marvellous
{
	public int Addition(int a,int b,int c)
	{
		int iSum = 0;
		iSum = a + b + c;
		return iSum;
	}
}

class AdditionX
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		int ret = mobj.Addition(11,21,51);
		System.out.println("Addition is : "+ret);
	}
}