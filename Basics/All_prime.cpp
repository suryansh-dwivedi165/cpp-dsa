#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    
    cout << "Enter the number: ";
    cin >> n; 

    for(int i = 2;i <= n;i++) {
        bool flag = false;
        int num = i;

        for(int j = 2;j <= sqrt(num);j++) {
            if(num % j == 0) {
                flag = true;
                break;
            }
        }

        if(flag == false) {
            cout << num << " ";
        }
    }
    return 0;
} 