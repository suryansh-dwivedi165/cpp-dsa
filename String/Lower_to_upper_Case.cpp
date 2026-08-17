#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char ch[] = "suryansh Dwivedi";

    for(int i = 0;i < strlen(ch);i++) {
        ch[i] = 'A' + ch[i] - 'a';
    }

    cout << ch;
    return 0;
} 