#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char ch[] = "Ansh"; 
    int start = 0;
    int end = strlen(ch) - 1;

    while(start <= end) {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }

    cout << ch;
    return 0;
} 