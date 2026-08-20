#include<iostream>
using namespace std;
int power_N(int base, int power) {
    if(power == 0) {
        return 1;
    }

    int halfpow = power_N(base, power / 2);
    int halfpowsquare = halfpow * halfpow;

    if(power % 2 != 0) {
        return base * halfpowsquare;
    }
    return halfpowsquare;
} 
int main() {
    int base = 2;
    int power = 3;

    int res = power_N(base, power);
    cout << "Power of N: " << res;
    return 0;
} 