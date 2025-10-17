#include <iostream>
using namespace std;
int main()
{
 int a , b;
    cout << "Enter the value of a: ";
    cin >> a;  
    cout << "Enter the value of b: ";
    cin >> b;
    if (a > b)
    {
        cout << "The biggest number is: " << a << endl;
    }
    else if (b > a)
    {
        cout << "The biggest number is: " << b << endl;
    }
    else
    {
        cout << "Both numbers are equal." << endl;
    }
}