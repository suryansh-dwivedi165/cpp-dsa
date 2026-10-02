#include<iostream>
using namespace std;
void pattern10(int n) {
    int d = 1;
    for(int i = 0;i < n;i++) {
        int c = 1;
        for(int j = 0;j <= i;j++) {
            cout << c++ << " ";
        }
        for(int j = 0;j < n - 2 * (i - 1);j++) {
            cout << "  ";
        }
        d = i + 1;
        for(int j = 0;j <= i;j++) {
            cout << d-- << " ";
        }
        cout << "\n";
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern10(n);
    return 0;
} 
