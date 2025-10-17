#include <iostream>
using namespace std;

int sum(int x, int y) 
{
    return x + y;
}

float sum(float x, float y) 
{
    return x + y;
}

double sum(double x, double y) 
{
    return x + y;
}

int main() 
{
    cout << "Sum of integers: " << sum(10, 20) << endl;
    cout << "Sum of floats: " << sum(72.65f, 65.19f) << endl;
    cout << "Sum of doubles: " << sum(1500.65, 213.79) << endl;
    return 0;
}
