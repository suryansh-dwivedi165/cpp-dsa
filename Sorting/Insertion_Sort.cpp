#include<iostream>
using namespace std;
int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 1;i < n;i++) {
        for(int j = i - 1;j >= 0;j--) {
            if(arr[j] > arr[j + 1]) 
                swap(arr[j + 1], arr[j]);
        }
    }

    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}   