#include <iostream>
using namespace std;

void divide(int a, int b) {
    if (b == 0)
        throw "Division by zero error!";
    cout << "Result: " << a / b << endl;
}

int main() {
    try {
        divide(10, 0);
    } 
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}