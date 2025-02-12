#include <iostream>
using namespace std;
int main()
{
    // This program was a sequence structure of  program 
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;

    // it was if else ladder

    // if((age<18) && (age>5))
    // {
    //     cout<<"You cant join me"<<endl;
    // }   
    // else if (age<4)
    // {
    //     cout<<"you are not not yet born "<<endl;
    // }
    // else if (age==18)
    // {
    //     cout<<"You can join me BUT YOU ARE EXACT 18"<<endl;
    // }
    
    // else
    // {
    //     cout<<"you can obiously join me "<<endl;
    // }

    // This is switch case program

    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;

        case 2:
        cout<<"i am 2yrs old"<<endl;
        break;

    
    default:
    cout<<"no specific cases"<<endl;
        break;
    }

    return 0;
}