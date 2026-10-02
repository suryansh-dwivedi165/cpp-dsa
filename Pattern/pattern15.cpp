#include<iostream>
using namespace std;
void pattern15(int n) {
    for(int i = 0;i < n;i++) {
        for(char ch = 'A';ch <= 'E' - i;ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    pattern15(n);
    return 0;
} 