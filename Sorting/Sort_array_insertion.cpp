#include<iostream>
using namespace std;
int main() {
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    int n = sizeof(ch) / sizeof(char);

    for(int i = 1;i < n;i++) {
        for(int j = i - 1;j >= 0;j--) {
            if(ch[j] < ch[j + 1])
                swap(ch[j], ch[j + 1]);
        }
    }
 
    for(int i = 0;i < n;i++)
        cout << ch[i] << " ";
    return 0;
} 