#include<iostream>
using namespace std;
int main() {
    string str = "aeiou";
    int count = 0;

    for(int i = 0;i < str.length();i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    cout << "Total number of vowel is: " << count;
    return 0;
} 