#include<iostream>
using namespace std;
void pattern8(int n) {
    for(int i = 0;i < n;i++) {
        for(int j = 0;j <= i;j++) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "*****\n";
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n - i;j++) {
            cout << "*";
        }
        cout << "\n";
    }
} 
int main() { 
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern8(n);
    return 0;
} 
