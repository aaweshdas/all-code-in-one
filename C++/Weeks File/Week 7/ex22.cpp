#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> V; //vector should be lowercase
    V.push_back(1);
    V.push_back(12);
    V.push_back(34);

    //iterator and begin(), end() should be lowercase
     for (vector<int>::iterator i=V.begin();i!=V.end();i++){
        cout<<*i<<" "<<endl;

    }
    V.push_back(45);
    cout<<"\n --------\n"<<endl;
    for (vector<int>::iterator i=V.begin();i!=V.end();i++){
            cout<<*i<<" "<<endl;
        }
        return 0;
}