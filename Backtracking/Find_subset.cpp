#include<iostream>
using namespace std;
void printsubsets(string str, string ans) {
    if(str.size() == 0) {
        cout << ans << "\n";
        return;
    }
    
    char ch = str[0];
    printsubsets(str.substr(1, str.length() - 1), ans + ch);

    printsubsets(str.substr(1, str.length() - 1), ans); 
}
int main() {
    string str = "abc";
    string ans = "";

    printsubsets(str , ans);
    return 0;
} 