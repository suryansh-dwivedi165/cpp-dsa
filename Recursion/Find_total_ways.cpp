#include<iostream>
using namespace std;
int fact(int n) {
    int fact = 1;
    for(int i = 1;i <= n;i++) {
        fact *= i;
    }   
    return fact;
}
int main() {
    int n = 3;

    int ans = fact(n + 1) / fact(n);
    cout << "Total ways of: " << ans;
    return 0;
} 