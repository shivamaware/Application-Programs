import java.util.*;

class Marvellous
{
	public void Display(int a,int b,int c)
	{
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
	}
}

class Display
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		mobj.Display(11,21,51);
	}
}