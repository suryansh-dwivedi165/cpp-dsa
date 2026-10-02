#include<iostream>
using namespace std;
void pattern5(int n) {
    for(int i = 0;i < n;i++) {
        int c = 1;
        for(int j = 0;j < n - i;j++) {
            cout << c++ << " ";
        }
        cout << endl;
    }
}
int main() {
    pattern5(5);
    return 0;
} 