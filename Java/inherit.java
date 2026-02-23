import java.io.*;
import java.util.*;
class inherit
{
	public static void main(String[] arr)
	{
		child obj=new child();
		obj.show();
		obj.display();
	}
}
class parent{
	int a=15;
	void display()
	{
		System.out.println("This is parent class.");
	}
}
class child extends parent{
	int a=25;
	void show()
	{
		System.out.println(a);
		System.out.println(super.a);      //super used for parent class varaiable if both have same objname.
	}
	void display()
	{
		super.display();
		System.out.println("This is child class");
	}
}