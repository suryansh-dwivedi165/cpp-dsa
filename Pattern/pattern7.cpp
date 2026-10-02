#include<iostream>
using namespace std;
void pattern7(int n) {
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < i;j++) {
            cout << " ";
        }

        for(int j = 0;j < 9;j++) {
            if(j < 2 * (n - i) - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern7(n);
    return 0;
} 
