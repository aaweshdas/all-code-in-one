#include <iostream>
using namespace std;
class A {
    int a = 20;
   private: class B {
        public: int b;
       void setb (int x);
       void getb();
    };
    class C {
       Public: int c = 40;
       void setvalue(int x); 
       void getvalue();
    };
    void seta (int x);
    void geta();
};
int main()
{
    A::B obj;
    cout<< obj.b;
    getb();

}

// #include <iostream>
// using namespace std;

// class A {
// public:
//     class B {
//     public:
//         int b = 30;
//     };
// };

// int main() {
//     A::B obj;        // Access inner class using scope
//     cout << obj.b;   // Print value
//     return 0;
// }
