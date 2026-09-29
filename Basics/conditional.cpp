#include<iostream>
using namespace std;
int main() {
    int a, b;
    
    cout << "Enter the number: ";
    cin >> a >> b;

    if(a > b) 
        cout << "A is largest";
    else 
        cout << "b is largest";
    return 0;
} 