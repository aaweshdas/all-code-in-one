// write a prime number 
#include <iostream>
using namespace std; 
int main()
{
    int n;
    cout << "Enter the number "; 
    cin >> n;
   for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number";
            return 0;
        }
    }
    cout << "It is a prime number";
    return 0; 

}