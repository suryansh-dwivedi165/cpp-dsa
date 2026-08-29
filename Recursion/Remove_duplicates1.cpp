#include<iostream>
using namespace std;
int main() {
    string str = "appnnacollege";
    bool copy_str[26] = {0};

    for(int i = 0;i < str.length();i++) {
        copy_str[str[i] - 'a'] = 1;
    }

    for(int i = 0;i < 26;i++) {
        if(copy_str[i] == 1) {
            cout << char('a' + i) << " ";
        }
    }
    return 0;
} 