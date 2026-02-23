class parent
{
	final void show()
	{
		System.out.println("1st class.");
	}
}
class child extends parent
{	
	void show()
	{
		System.out.println("This is a child class");
	}
}
class finalmethod
{
	public static void main(String[] args)
	{
		child obj=new child();
		obj.show();
		//obj.display();
	}
}