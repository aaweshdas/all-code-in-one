// #include <iostream>
// using namespace std;

// void divide(int a, int b) {
//     if (b == 0)
//         throw "Division by zero error!";
//     cout << "Result: " << a / b << endl;
// }

// int main() {
//     try {
//         divide(10, 0);
//     } 
//     catch (const char* msg) {
//         cout << "Exception: " << msg << endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void divide(int a, int b) {
//     if (b == 0)
//         throw "Division by zero error!";
//     cout << "Result: " << (a / b) << endl;
// }

// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     try {
//         divide(x, y);
//     } 
//     catch (const char* msg) {
//         cout << "Exception caught: " << msg << endl;
//     }

//     cout << "Program ended normally." << endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void test(int n){
// 	try{
// 		if(n==0)throw"Zero";
// 		if(n==1)throw 10;
// 		if(n==2)throw 20.25;
// 		if(n==3)throw'x';
// 	}
// 	catch(char *){cout<<"caught zero"<<endl;}
// 	catch(int){cout<<"catch integer exception"<<endl;}
// 	catch(double){cout<<"caught double exception"<<endl;}
// 	catch(char){cout<<"caught character exception"<<endl;}
// 	catch(...){cout<<"all exceptionss are caught"<<endl;}
// }
// int main()
// {
//     /* int n;
//     cout<< "Enter a value: " << endl;
//     cin>> n; */
//     test(1):
//     test(0):
//     test(2):
//     test(3):
    
//     return 0;
// }




#include <iostream>
using namespace std;
int main()
{
    int a=1;
    try
    {
        try 
        {
            throw a;
        }
        catch(int x)
        {
            cout<<"Exception caught in inner block" << endl;
        }
    }
}