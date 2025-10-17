#include <iostream>
using namespace std;
class student
{
     private:
     string first;
     string last;
     public:
     void get()
    {
        cout<<"Enter First name: "<<endl;
        getline(cin, first);
        cout<<"Enter Last name:"<<endl;
        getline(cin, last);
    }
     void show()
    {
        cout<<"First name:"<<first<<endl;
        cout<<"Last name:"<<last<<endl;
        cout<<"Full Name: " <<first<<last;
    }
};
int main()
{
    student s;
    s.get();
    s.show();
    return 0;
}