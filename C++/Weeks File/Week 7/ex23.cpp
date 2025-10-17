#include<iostream>
#include<deque>
using namespace std;
int main(){

  deque<int> dq = {1,2,3,4,5};
   
    dq.push_front(0);
    for(int x : dq)
      {
        cout << x << " ";
      }
      dq.push_back(6);

        cout <<"\n------\n"<< endl;
    for(int x : dq)
        {
            cout << x << " ";
        }
    return 0;
 }
 