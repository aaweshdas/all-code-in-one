import java.io.*;
import java.util.*;
class Pi
{
	static public void main(String x[])
	{
		System.out.println("Enter the Value of r");
		Scanner s = new Scanner(System.in);
		int r=s.nextInt();
		System.out.println(3.14*r*r);
	}
}