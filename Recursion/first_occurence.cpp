#include<iostream>
using namespace std;
int first_occurence(int arr[], int n, int target, int i = 0) {
    if(arr[i] == target) 
        return i + 1;
    if(i == n) 
        return -1;
    else
        i += 1;
    first_occurence(arr, n - 1, target, i);
}
int main() {
    int arr[] = {1, 2, 3, 4, 3};
    int target = 3;

    int ans = first_occurence(arr, 4, 3);
    cout << "Target idx is: " << ans;
    return 0;
} 