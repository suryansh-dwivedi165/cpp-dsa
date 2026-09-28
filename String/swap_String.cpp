#include<iostream>
using namespace std;

int swap_check(string s1, string s2) {
    if(s1 == s2 && s1.length() == s2.length()) {
        return 1;
    }
} 
int main() {
    string s1 = "bank";
    string s2 = "bank";

    int res = swap_check(s1, s2); 
    cout << res;
    return 0;
}   