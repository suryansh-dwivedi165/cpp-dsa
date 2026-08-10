#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, -2, 6, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0;i < n;i++) {
        for(int j = i + 1;j < n;j++) {
            if(arr[j - 1] > arr[j]) 
                swap(arr[j - 1], arr[j]);
        }
    }

    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
} 