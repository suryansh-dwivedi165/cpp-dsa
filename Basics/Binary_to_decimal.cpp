#include<iostream>
using namespace std;

void binary_decimal(int num) {
    int num1 = 0, pow=1;
    while(num != 0) {
        int digit = num % 10;
        num1 += digit * pow;
        pow *= 2;
        num /= 10;
    }
    cout << num1;
} 
int main() {
    binary_decimal(101); 
    return 0;
} 

// 10001 