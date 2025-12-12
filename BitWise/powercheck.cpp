#include<iostream>
using namespace std;

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "The number is a power of 2." << endl;
    } else {
        cout << "The number is not a power of 2." << endl;
    }

    return 0;
}
