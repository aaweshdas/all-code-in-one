class Parent {
	
	 void show()
	{
		final int a = 20;
		System.out.println(a);
	}
}

class child extends Parent {
	void display()
	{	
		int a=10;
		System.out.println(super.a);
		
	}
}

class fime
{
	public static void main(String a[])
	{
		child obj = new child();
		obj.show();
		obj.display();
		
	}
}