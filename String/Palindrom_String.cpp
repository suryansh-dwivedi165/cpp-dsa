#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    char ch[] = "racecar";
    int start = 0;
    int end = strlen(ch) - 1;
    bool flag = false;

    while(start <= end) {
        if(ch[start] != ch[end]) 
            flag = true;
        start++;
        end--;
    }

    if(flag) 
        cout << "Not palindrom";
    else 
        cout << "Palindrom";
    return 0;
} 