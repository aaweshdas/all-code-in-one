#include <iostream>
using namespace std;
class B;

class A
{
    private:
    int a;
    public:
    void geta()
    {
        cout<<"Enter the A value: " << endl;
        cin>>a;
    }
    friend void accept(A,B);
};
class B
{
    private:
    int b;
    public:
   void getb()
    {
    cout<<"Enter the B value: " << endl;
    cin>>b;
    }
    friend void accept(A,B);
};

void accept(A obj1, B obj2)
{
    cout<<"sum of 2 number: "<<obj1.a+obj2.b<<endl;
}
int main()
{
    A a1;
    a1.geta();
    B b1;
    b1.getb();
    accept(a1,b1);
    return 0;
}