#include <iostream>
using namespace std;
int main()
{
        int a=4, b=5;
        cout<<"Operators in C++:"<<endl;
        cout<<"Following are the types of operators in C++"<<endl;
        // Arithmetic operators
        cout<<"The value of a + b is "<<a+b <<endl;
        cout<<"The value of a b is "<<a-b <<endl;
        cout<<"The value of a b is "<<a*b <<endl;
        cout<<"The value of a/b is "<<a/b <<endl;
        cout<<"The value of a% bis "<<a%b <<endl;
        cout<<"The value of a ++ is "<<a++ <<endl;
        cout<<"The value of a is "<<a-- <<endl;
        cout<<"The value of ++a is "<<++a <<endl;
        cout<<"The value of a is "<<--a <<endl;
        cout<<endl;

        // Assignment Operator
        // int a = 3, b = 9;
        // char d = 'd';

        // Comparison Operators 
        cout<< "Following are the comparison operator in C++"<<endl;
        cout<< "The value of a == b is "<<(a==b)<<endl;
        cout<< "The value of a != b is "<<(a!=b)<<endl;
        cout<< "The value of a >= b is "<<(a>=b)<<endl;
        cout<< "The value of a <= b is "<<(a<=b)<<endl;
        cout<< "The value of a > b is "<<(a>b)<<endl;
        cout<< "The value of a < b is "<<(a<b)<<endl;
        cout<<endl;

     // Logical Operators 
     cout<< "Following are the Logical operator in C++"<<endl;
     // && is called logical and operator in this operatop both the condition should be true the only the and operator will give as the answer true
     cout<<"The value of this logical AND operators ((a==b) && (a<b)): "<<((a==b) && (a<b))<<endl;
     // || is clled OR operator which need any of one condition is true then it will display the value as true 
     cout<<"The value of this logical OR operators ((a==b) || (a<b)): "<<((a==b) || (a<b))<<endl;
     // ! it will display the opposite value ... if the ans is 0 then it will display 1 that is the main work of it
     cout<<"The value of this logical NOT operators (!(a==b)): "<<(!(a==b))<<endl;
        return 0;
}