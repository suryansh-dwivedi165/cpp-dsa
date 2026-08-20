#include<iostream>
using namespace std;
int update_ith_bit(int num, int i) {
    int digit = ~(1 << i);

    return num & digit;
}
int main() {
    int num = 7;
    int i = 2;

    cout << update_ith_bit(num, i);
    return 0;
} 