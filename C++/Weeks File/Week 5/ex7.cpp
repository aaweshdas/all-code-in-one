#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i < n; i++)
        if (n % i == 0) sum += i;
    cout << (sum == n ? "Perfect Number" : "Not a Perfect Number");
    return 0;
}