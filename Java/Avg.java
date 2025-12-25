import java.io.*;
class Avg
{
	public static void main(String args[])
	{
		System.out.println(args[0]);
		int a =Integer.parseInt(args[1]);
		int b =Integer.parseInt(args[2]);
		int c =Integer.parseInt(args[3]);
		int d =Integer.parseInt(args[4]);
  		int e =Integer.parseInt(args[5]);
		System.out.print( "The Student " +args[0] + " got " + (a+b+c+d+e)/5 + " Avg Marks");
	}
}