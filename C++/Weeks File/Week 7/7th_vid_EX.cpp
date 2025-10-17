#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // /********** Built in data types ************/
    // int a, b, c;
    // cin>>a;
    // cin>>b;
    // c = a + b;
    // cout<< " The Sum is: " <<c<<endl;
    // cout<<"the global c is "<<::c;

    // /********** Float,double and long double Literals ************/
    // float d = 36.4;
    // long double e = 34.66;
    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4L)<<endl;
    // cout<<"the value of d is: "<<d<<endl<<"the value of e is: "<<e;

    // /********** Reference Variable ************/
    // float x = 455;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // /********** Typecasting ************/
    int a = 45;
    float b = 45.46;
    cout<<"the value of a is "<<(float)a<<endl;   //both the way we can write either (int)a or int(a) ...... those are the method to write for type conversion from any data types 
    cout<<"the value of a is "<<float(b)<<endl;

    cout<<"the value of a is "<<(int)a<<endl;
    cout<<"the value of a is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    return 0;
}