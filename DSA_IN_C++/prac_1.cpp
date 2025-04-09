#include <iostream>
#include <string>
using namespace std;
struct student 
{
    char name[20];
    int age;
    float marks;
};
    int main()
    {
       cout<<"Enter the Name: ";
        cin>>"%s",s1.name;
        cout<<"Enter your age: ";
        cin>>"%d",&s1.age;
        cout<<"Enter the Marks: ";
        cin>>"%f",&s1.marks>>endl;
        cout<<"\n Student details:\nName:%s \nAge:%d \nMarks:%f", s1.name,s1.age,s1.marks;
    
    }