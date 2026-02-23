import java.io.*;
import java.util.*;
class multiheri
	{
		public static void main(String arg[])
		{
			child2 obj = new child2();
			obj.add();
			obj.show();		
			obj.display();
		}
	}

	class parent
	{
		int a= 10;
		void display()
		{
			System.out.println("This is parenet class variable" +a);
		}
	}
	class child1 extends parent
	{
		int b= 20;
		void show()
		{
			System.out.println("This is Child1 class variable" +b);
		}
	}

	class child2 extends child1
	{
		int c = a+b;
		void add()
		{
		System.out.println(c);
		}
	}