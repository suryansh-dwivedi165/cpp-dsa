#include<iostream>
using namespace std;
void pattern6(int n) {
    for(int i = 0;i <= 4;i++) {
        for(int j = 0;j < 4 - i;j++) {
            cout << " ";
        }

        for(int j = 0;j < 9;j++) {
            if(j < 2 * i + 1) {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number";
    cin >> n;

    pattern6(n);
    return 0;
} 
