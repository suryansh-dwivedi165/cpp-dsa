#include<iostream>
using namespace std;
int main() {
    int n1 = 0, n2 = 1;
    int sum = 0, num;

    cout << "Enter the Nth number to find series: ";
    cin >> num;

    cout << 0 << " ";
    for(int i = 0;i < num;i++) {
        cout << n2 << " ";
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return 0;
} 