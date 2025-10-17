// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     float a, b, c, d;
//     cin >> a >> b >> c;
//     d = b*b - 4*a*c;

//     if (d > 0)
//         cout << "Real roots: " << (-b+sqrt(d))/(2*a) << " and " << (-b-sqrt(d))/(2*a);
//     else if (d == 0)
//         cout << "Equal roots: " << -b/(2*a);
//     else
//         cout << "Imaginary roots";

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    float d=b*b-4*a*c;
    cout<<"Enter values for a, b, c: ";
    cin>>a>>b>>c;
    if (d==0) {
        cout<<"Roots are : "<<-b/(2*a)<<" and "<<-b/(2*a)<<endl;
    }
    else if(d>0) {
        cout<<"Roots are : "<<(-b+(sqrt(d))/(2*a))<<" and " << (-b-(sqrt(d))/2*a)<<endl;
    }
    else {
        cout<<"Roors are imaginary"<<endl;
    }
    return 0;
}