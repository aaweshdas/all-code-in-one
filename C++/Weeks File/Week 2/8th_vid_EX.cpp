#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // *********to make the variable as unchanged we can apply constant 
    // const int a = 6;
    // cout<<"the value of a was "<<a<<endl;
    //  a = 45; // you will get an error because a is a constant
    // cout<<"the value of a is "<<a;



    // Manipulator in c++
    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    //  Operator Precedence
    int a = 3, b=4;
    int c = (((a * 5) + b)-45)+87;
    cout<<c;
    return 0; 
}