#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
void remove_duplicates(string str, string ans, int i, bool map[]) {
    if(str.size() == 0) {
        cout << ans << " ";
        return;
    } 

    i = str.size();
    char ch = str[i - 1];
    int mapidx = int(ch - 'a'); 

    // str = str.substr(0, n - 1);

    if(map[mapidx] == true) {
        remove_duplicates(str, ans, i-= 1, map);
    }
    else {
        map[mapidx] = true;
        remove_duplicates(str, ch + ans, i-= 1, map);
    }
} 
int main() {
    string str = "appnnacollege";
    string ans = "";
    bool map[26] = {false};
    int i = 0;

    remove_duplicates(str, ans, i, map);
    return 0;
} 