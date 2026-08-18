#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string str;

    cout << "Enter the name: ";
    getline(cin, str);

    // cout << str << " ";
    cout << str.substr(0, 5);
    return 0;
} 