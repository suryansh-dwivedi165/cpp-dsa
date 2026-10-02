#include<iostream>
using namespace std;
void pattern11(int n) {
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n - i - 1;j++) {
            cout << " ";
        }

        char ch = 'A';
        for(int j = 0;j <= i;j++) {
            cout << char(ch + j);
        }

        if(i > 0) {
            for(char ch = 'A' + i - 1;ch >= 'A';ch--) {
                cout << ch;
            }
        }
        cout << endl;
    }
} 
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern11(n);
    return 0;
}  
