#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string remove_duplicates(string str, int i,string copy_str = "") {
    if(i == str.length()) {
        return copy_str;
    }
    if(str[i] != str[i - 1]) {
        copy_str.push_back(str[i]);
    }

    return remove_duplicates(str, i + 1, copy_str);
} 
int main() {
    string str = "appnnacollege";
    sort(str.begin(), str.end());

    cout << remove_duplicates(str, 0);
    return 0;
} 