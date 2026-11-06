#include<iostream>
using namespace std;
int *backtracking_array(int *arr, int n, int i = 0) {
    if(i == n) {
        return arr;
    }

    arr[i] = i + 1;
    return backtracking_array(arr, n, i + 1);
}
int main() {
    int arr[5] = {0};

    int *brr = backtracking_array(arr, 5);

    for(int i = 0;i < 5;i++) {
        cout << brr[i] << " ";
    }
    return 0;
} 
