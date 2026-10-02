#include<iostream>
using namespace std;
void pattern3(int n) {
    for(int i = 0;i < n;i++) {
        int c = 1;
        for(int j = 0;j <= i;j++) {
            cout << c++ << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern3(n);
    return 0;
} 
