#include<iostream>
using namespace std;
int main() {
    int digit = 6;
    int i = 1;

    int digit_value = 0 << i;

    cout << (digit & digit_value);
    return 0;
}
