#include <iostream>
using namespace std;
    class student {
        public:
        string name;
        int age, roll_no;
};
    int main() {
        student s1;
        s1.name = "Aawesh";
        s1.age = 21;
        s1.roll_no = 2411001;

        cout << "Name: " << s1.name << endl;
        cout << "Age: " << s1.age << endl;
        cout << "Roll No: " << s1.roll_no << endl;
}