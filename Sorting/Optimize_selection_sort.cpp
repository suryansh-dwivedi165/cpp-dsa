#include<iostream>
using namespace std;
int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0;i < n;i++) {
        int minidx = i;
        for(int j = i + 1;j < n;j++) {
            if(arr[minidx] > arr[j])
                minidx = j;
        }
        swap(arr[minidx], arr[i]);
    }

    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
} 