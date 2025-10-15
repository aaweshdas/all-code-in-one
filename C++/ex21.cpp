// Demonstraction of exception classes and throwing reference and pointers to the catch block
#include <iostream>
using namespace std;
class DemoException{
    private: string person;
    public: string Getrason();
    DemoException();
    DemoException(string &r);
    ~DemoException();
    DemoException(DemoException &de);
};
DemoException::string Getreason() { return Reason; }
DemoException:: DemoException() { cout<<"Default constructor .. Object Created"<<endl; }
DemoException::DemoException(string &r){
    
}