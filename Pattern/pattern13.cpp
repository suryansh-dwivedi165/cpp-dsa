#include<iostream>
using namespace std;
void pattern13() {
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j <= 4 - i;j++) {
            cout << "*";
        }
        
        for(int j = 0;j < 2*i;j++) {
            cout << " ";
        }

        for(int j = 0;j <= 4 - i;j++) {
            cout << "*";
        }
        cout << endl;
    } 
    
    for(int i = 0;i < 5;i++) {
        for(int j = 0;j <= i;j++) {
            cout << "*";
        }

        for(int j = 0;j < 2 * (4 - i);j++) {
            cout << " ";
        }

        for(int j = 0;j <= i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    pattern13();
    return 0;
} 