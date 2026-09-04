#include<iostream>
#include<string>
using namespace std; 
void remove_duplicates(string str, string ans, int i, bool map[]) {
    if(i == str.length()) {
        cout << ans;
        return;
    }

    char ch = str[i];
    int mapidx = int(ch - 'a');

    if(map[mapidx] == true) {
        remove_duplicates(str, ans, i + 1, map);
    }
    else {
        map[mapidx] = true;
        remove_duplicates(str, ans + str[i], i + 1, map);
    }
} 
int main() {
    string str = "appnnacollege";
    string ans = "";
    bool map[26] = {false}; 
    int i = 0;

    for(int i = 0;i < str.length();i++) {
        str[i] = char(tolower(str[i]));
    }
    remove_duplicates(str, ans, i, map);
    
    return 0; 
}    