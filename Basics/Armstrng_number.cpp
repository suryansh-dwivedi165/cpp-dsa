#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;
    cout << "Enter the Armstrong number: ";
    cin >> num;
    int n = num, cube = 0;

    while(num != 0) {
        int digit = num % 10;
        cube += digit * digit * digit;
        num /= 10;
    }

    if(n == cube) {
        cout << "Number is armstrong";
    }
    else {
        cout << "Number is not armstrong";
    }
    return 0;
} 