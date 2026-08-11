#include<iostream>
using namespace std;
int main() {
    int n = 46;

    if((n & 1) == 0) 
        cout << "Even\n";
    else    
        cout << "odd\n";
    return 0;
} 