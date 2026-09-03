#include<iostream>
#include<string>
using namespace std;
void remove_duplicates(string str) {
    
}
int main() {
    string str = "appnnacollege";

    for(int i = 0;i < str.length();i++) {
        str[i] = char(tolower(str[i]));
    }
    remove_duplicates(str);
    return 0; 
} 