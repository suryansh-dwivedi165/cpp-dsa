#include<iostream>
using namespace std;
void pattern5(int n) {
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j < n - i;j++) {
            cout << "* ";
        } 
        cout << "\n";
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern5(n);
    return 0;
} 