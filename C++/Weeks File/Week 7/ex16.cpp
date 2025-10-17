// i think it is wrong recheck it 

// #include <iostream>
// using namespace std;
// class one
// {
//     private: int a;
//         double sal;
//     public:
//         void getdata()
//         {
//             cout<<"Enter a: " <<endl;
//             cin >> a;
//             cout<<"Enter Salary: "<<endl;
//             cin >> sal;
//         }
//         void printdata(int);
//         void printdata(int,double);
//         void printdata();
//         void printdata(double,int);
// };


// this code is correct 

#include <iostream>
using namespace std;
class one {
private:
    int a;
    double sal;
public:
    void getdata() {
        cin >> a >> sal;
    }
    void printdata(int x) {
        cout << x << endl;
    }
    void printdata(int x, double y) {
        cout << x << " " << y << endl;
    }
    void printdata() {
        cout << a << " " << sal << endl;
    }
    void printdata(double y, int x) {
        cout << y << " " << x << endl;
    }
};
int main() {
    one obj;
    obj.getdata();
    obj.printdata();
    obj.printdata(5);
    obj.printdata(10, 5500.75);
    obj.printdata(999.99, 7);
    return 0;
}