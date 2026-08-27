#include<iostream>
using namespace std;
int main() {
    int base = 3;
    int power = 3;
    int base2 = 1;

    for(int i = 0;i < power;i++) {
        base2 *= base;
    }
    cout << base << " to the Power of " << power << " is equal to: "<< base2 << " ";
    return 0;
}