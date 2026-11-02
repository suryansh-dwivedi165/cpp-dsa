#include<iostream>
using namespace std;
int main() {
    int digit = 5;

    if((digit & 1) == 0) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
    return 0;
}
