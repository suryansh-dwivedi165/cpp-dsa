#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str = "appnnacollege";
    bool ch[26] = {false};

    for(int i = 0;i < 15;i++) {
        if(str[i] - 'a' > 0)
            ch[i] = true;
    }
    for(int i = 0;i < 15;i++) {
       cout << ch[i] << " ";
    }

    return 0;
}   