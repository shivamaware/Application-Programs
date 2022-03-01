import java.util.*;

class StringreplaceAllX
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String s = sobj.nextLine();
		
		System.out.println("Entered string is : "+s);
		System.out.println("Length of string is : "+s.length());
		
		String s1 = s.replaceAll(" ","");
		System.out.println("New string is : "+s1);
		System.out.println("Length of new string is : "+s1.length());
	}
}