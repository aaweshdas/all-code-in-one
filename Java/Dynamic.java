class rambaho
{
		void show()
		{
			System.out.println("This is a Parent class");
		}
}

class child extends rambaho
{
	void show()
	{
		System.out.println("This is a child class");
	}
}

class Dynamic
{
    public static void main (String g[])
	{
		rambaho obj;
		obj = new child();
		obj.show();
	}
}