#include<iostream>
using namespace std;

void decimal_binary(int num) {
    int n = num;
    int pow = 1;
    int binNum = 0;

    while(num != 0) {
        int rem = num % 2;
        binNum += rem * pow;
        num /= 2;
        pow *= 10;
    }
    cout << pow;
} 
int main() {
    decimal_binary(4);
    return 0;
} 