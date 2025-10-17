// Create a function that returns class object accepting the values 
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

Person createPerson(string n, int a) {
    Person p;
    p.name = n;
    p.age = a;
    return p;
}

int main() {
    Person p1 = createPerson("Alice", 25);
    p1.display();
    return 0;
}