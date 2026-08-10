#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    int brr[8] = {0};
    int crr[8] = {0};

    for(int i = 0;i < n;i++) {
        brr[arr[i]]++; 
    }

    int idx = 0;
    for(int i = 0;i < n;i++) {
        if(brr[i] > 0) {
            for(int j = brr[i];j > 0;j--) {
                crr[idx++] = i;
            }
        }
    } 
    
    for(int i = 0;i < n;i++) {
        cout << crr[i] << " ";
    }
    return 0;
} 