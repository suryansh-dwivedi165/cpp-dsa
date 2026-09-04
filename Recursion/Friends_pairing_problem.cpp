#include<iostream>
using namespace std;
int friend_pairing(int n) {
    if(n == 1 || n == 2) {
        return n;
    }
    return friend_pairing(n - 1) + (n - 1) * friend_pairing(n - 2);
}
int main() {
    int n = 4;

    cout << friend_pairing(n);
    return 0;
} 