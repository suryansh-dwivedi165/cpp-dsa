#include<iostream>
using namespace std;
int last_occurence(int arr[], int n, int target) {
    if(arr[n - 1] == target) 
        return n;
    last_occurence(arr, n - 1, target);
    if(n == 0) 
        return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int ans = last_occurence(arr, 5, 3);
    cout << "Last occurence idx: " << ans;
    return 0;
} 