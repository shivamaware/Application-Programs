import java.util.*;

class Marvellous
{
	public void Display(int ... a)
	{
		System.out.println("Number of arguments are : "+a.length);
		
		System.out.println("Input parameters are : ");
		for(int no : a)
		{
			System.out.println(no);
		}
	}
}

class VariaDic2
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.Display(11,21,51,101,111);
	}
}