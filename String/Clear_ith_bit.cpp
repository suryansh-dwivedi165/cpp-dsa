#include<iostream>
using namespace std;
int clear_ith_bit(int num, int i) {
    int digit = ~(1 << i);
    return digit & num;
}
int main() {
    int num = 6;
    int i = 2;

    cout << clear_ith_bit(num, i);
    return 0;
} 