#include<iostream>
using namespace std;
void remove_Duplicates(string str, string ans, int i, bool map[]) {
    if(i == str.length()) {
        cout << "Ans is: " << ans;
    }

    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if(map[mapIdx] == true) {
        remove_Duplicates(str, ans, i + 1, map);
    }
    else {
        map[mapIdx] = true;
        remove_Duplicates(str, ans + str[i], i + 1, map);
    }
}
int main() {
    string str = "appnnacollege";
    string ans = "";
    bool map[26] = {false};

    remove_Duplicates(str, ans, 1, map);
    return 0;
} 