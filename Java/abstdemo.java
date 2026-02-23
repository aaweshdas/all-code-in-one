abstract class ex
{
    void show()
    {
        System.out.println("This is show method from abstract class");
    }

    abstract void display();
}

class child extends ex
{
    void display()
    {
        System.out.println("This is display method from child class");
    }
}

class abstdemo
{
    public static void main(String[] args)
    {
        child obj = new child();
        obj.show();
        obj.display();
    }
}