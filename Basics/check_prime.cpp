#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;
    
    cout << "Enter the num: ";
    cin >> num;

    bool flag = true;
    for(int i = 2;i < sqrt(num);i++) {
        if(num % i == 0) {
            cout << "Number is not prime ";
            flag = false;
            break;
        }
    }

    if(flag) {
        cout << "Number is prime";
    }
    return 0;
} 