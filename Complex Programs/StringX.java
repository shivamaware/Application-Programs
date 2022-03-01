import java.util.*;

class StringX
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String s = sobj.nextLine();
		
		System.out.println("Entered string is : "+s);
		System.out.println("Length of string is : "+s.length());
	}
}