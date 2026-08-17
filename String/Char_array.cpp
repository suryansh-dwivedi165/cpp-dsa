#include<iostream>
using namespace std;
int main() {
    char ch[50];
    cout << "Enter the name: "; 
    cin.getline(ch, 30);
    cout << ch;
    return 0;
} 