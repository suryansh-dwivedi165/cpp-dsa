#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char arr[] = "suryansh";
    char copy_str[10] = {'p'};

    for(int i = 0;i < strlen(arr);i++) {
        copy_str[i] = toupper(arr[i]); 
    }

    cout << copy_str; 
    return 0;
} 