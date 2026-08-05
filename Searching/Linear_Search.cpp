#include<iostream>
using namespace std;
int Linear_Search(int *arr, int n, int target) {
    for(int i = 0;i < n;i++) {
        if(arr[i] == target) 
            return i + 1;
    }
    return -1;
} 
int main() {
    int arr[] = {5, 6, 3, 2, 6};
    int target = 2;
    int n = sizeof(arr) / sizeof(int);

    int res = Linear_Search(arr, n, target);
    cout << "Element found at idx: " << res;
    return 0;
}  