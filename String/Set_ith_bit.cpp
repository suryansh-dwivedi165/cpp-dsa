#include<iostream>
using namespace std;
int set_ith_bit(int num, int i) {
    int result = 1 << i;

    return num | result; 
}
int main() {
    int num = 6;
    int i = 3;

    cout << set_ith_bit(num, i);
    return 0;
} 