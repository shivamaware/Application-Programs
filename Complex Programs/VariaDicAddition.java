import java.util.*;

class Marvellous
{
	public int Addition(int ... a)
	{
		int iSum = 0;
		for(int no : a)
		{
			iSum += no;
		}
		return iSum;
	}
}

class VariaDicAddition
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		int ret = mobj.Addition(11,21,51,101,111);
		System.out.println("Addition is : "+ret);
	}
}