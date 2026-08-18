#include<iostream>
using namespace std;
int get_ith_bit(int num, int i) {
    int digit = 1 << i;
    int result = num & digit;

    if(result != 0) 
        return 1;
    else 
        return 0;
}
int main() {
    int num = 7;
    int i = 1;

    cout << get_ith_bit(num, i);
    return 0;
} 