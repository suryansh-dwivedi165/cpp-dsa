#include<iostream>
using namespace std;
int *backtracking_array(int *arr, int n, int i) {
    if(i == n) {
        return arr;
    }
    
    arr[i] = i + 1;
    backtracking_array(arr, n, i + 1);
    arr[i] = i - 1;
}

int main() {
    int arr[5] = {0};
    int *result = backtracking_array(arr, 5, 0);

    for(int i = 0;i < 5;i++) {
        cout << result[i] << " "; 
    }
    return 0;
} 
