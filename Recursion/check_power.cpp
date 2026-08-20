#include<iostream>
using namespace std;
int cal_power(int base, int power) {
    if(power <= 0) 
        return base;
    return cal_power(base * base, power - 1);
}
int main() {
    int base = 2;
    int power = 3;

    cout << cal_power(base, power);
    return 0;
} 