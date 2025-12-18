import java.io.*;
import java.util.*;
class Io
{
	static public void main(String abcd[])
	{
		System.out.println("Enter the Value of a, b");
		Scanner s = new Scanner(System.in);
		int a=s.nextInt();
		int b=s.nextInt();
		System.out.println(a>b);
	}
}