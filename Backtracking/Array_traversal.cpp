#include<iostream>
using namespace std;

int *changeArr(int arr[], int n, int i) {
    if(i == n) {
        return arr;
    }
    arr[i] = i + 1;
    changeArr(arr, n, i + 1);
    arr[i] = arr[i] - 2;
} 

int main() {
    int arr[5] = {0};
    int *ptr = changeArr(arr, 5, 0);

    for(int i = 0;i <= sizeof(ptr);i++) {
        cout << ptr[i] << " ";
    }
    return 0;
} 