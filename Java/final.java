import java.io.*;
import java.util.*;
final class Parent
{
	void show()
	{
		System.out.println("df");
	}
}

class child extends Parent
{
	 void display()
	{
		System.out.println("asdf");
	}
}

class Ex
{
	public static void main(String a[])
	{	
		child obj=new child();
		obj.show();
		obj.display();
	}
}
