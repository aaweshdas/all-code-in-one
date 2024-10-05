#include <iostream>
using namespace std;

int findSmallestPositiveInteger(int arr[], int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= res) {
            res += arr[i];
        } else {
            break;
        }   
    } 
    return res;
} 

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findSmallestPositiveInteger(arr, n);
    cout << "The smallest positive integer that cannot be represented as the sum of elements of any subset of the given array is: " << result << endl;

    return 0;
}