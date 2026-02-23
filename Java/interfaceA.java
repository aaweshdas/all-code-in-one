interface A {
    void show();
}

interface B extends A {
    void display();
}

class Ex implements B 
{
    public void show()	 
    {
        System.out.println("This is show() method from Interface A");
    }

    
    public void display() {
        System.out.println("This is display() method from Interface B");
    }
}

public class InterfaceEx {
    public static void main(String[] args) {
        Ex obj = new Ex();
        obj.show();
        obj.display();
    }
}
