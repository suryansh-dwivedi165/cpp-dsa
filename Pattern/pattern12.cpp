#include<iostream>
using namespace std;
void pattern12() {
    for(int i = 0;i < 5;i++){
        char ch = 'E' - i;
        for(int j = 0;j <= i;j++) {
            cout << ch++ << " ";
        }
        cout << "\n";
    }
}
int main() {
    pattern12();
    return 0;
} 