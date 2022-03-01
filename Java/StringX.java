import java.util.*;

class StringX
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;
		
		System.out.println("Enter your name : ");
		str = sobj.nextLine();
		
		System.out.println("Hello "+str);
	}
}