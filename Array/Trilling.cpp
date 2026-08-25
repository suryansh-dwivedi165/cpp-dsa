#include<iostream>
using namespace std;
int trilling(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return trilling(n - 1) + trilling(n - 2);
}
int main() {
    int n = 8;
    int ans = trilling(n);
    
    cout << "Ans is: " << ans;
    return 0;
} 