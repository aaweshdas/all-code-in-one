#include <iostream>
using namespace std;
namespace Math // Namespace declaration
{
    int value = 10;
}
int main()
{
    cout << Math :: value // Access using scope resolution operator
         << endl; // This will print 10
}