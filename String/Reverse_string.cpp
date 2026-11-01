#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char str1[] = "Suryansh";

    for(int i = 0;i < strlen(str1) / 2;i++) {
        char temp = str1[i];
        str1[i] = str1[strlen(str1) - i - 1];
        str1[strlen(str1) - i - 1] = temp;
    }
    
    cout << (str1) << endl;
    return 0;
}
