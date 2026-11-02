#include<iostream>
using namespace std;
int main() {
    int digit = 6;
    int bit = 3;

    int i = 1 << bit;

    cout << (digit | i);
    return 0;
}
