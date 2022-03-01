import java.util.*;

class Marvellous
{
	public void Display(int ... a)
	{
		System.out.println("Number of arguments are : "+a.length);
	}
}

class VariaDic
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.Display(11,21,51,101,111);
	}
}