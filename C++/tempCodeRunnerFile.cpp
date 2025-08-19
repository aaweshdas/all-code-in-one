#include <iostream>
using namespace std;

class A {
public:
    class B {
    public:
        int b = 30;
    };
};

int main() {
    A::B obj;        // Access inner class using scope
    cout << obj.b;   // Print value
    return 0;
}
