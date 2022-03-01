import java.util.Scanner;

class MyArray
{
	public void Percentage(float arr[])
	{
		for(int i = 0;i<arr.length;i++)
		{
			if(arr[i]<35)
			{
				System.out.println(arr[i]+"\t"+"Fail");
			}
			else if(arr[i]<50)
			{
				System.out.println(arr[i]+"\t"+"Pass class");
			}
			else if(arr[i]<60)
			{
				System.out.println(arr[i]+"\t"+"Second class");
			}
			else if(arr[i]<70)
			{
				System.out.println(arr[i]+"\t"+"First class");
			}
			else if(arr[i]>70)
			{
				System.out.println(arr[i]+"\t"+"First class with distinction");
			}
		}
	
	}
}

class program4
{
	public static void main(String args[])
	{
		int iRet = 0,size = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the size of array");
		size = sobj.nextInt();
		
		float Arr[] = new float[size];
		System.out.println("Enter the elements of array");
		for(int i=0;i<size;i++)
		{
			Arr[i] = sobj.nextFloat();
		}
		MyArray mobj = new MyArray();
		mobj.Percentage(Arr);
	}
}