#include<iostream>
using namespace std;
int tp(int n) {
    if(n == 0 || n == 1) 
        return 1;
    
    int ans = tp(n - 1);

    int ans2 = tp(n - 2);

    return ans + ans2;
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = tp(n);
    cout << "Ans is: " << ans;
    return 0;
} 