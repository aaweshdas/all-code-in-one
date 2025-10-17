#include <iostream>
using namespace std;
int main()
{
    int a , b , c;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    if (a >= b && a >= c)
    {
        cout << "The biggest number is: " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "The biggest number is: " << b << endl;
    }
    else
    {
        cout << "The biggest number is: " << c << endl;
    }
    return 0;
}