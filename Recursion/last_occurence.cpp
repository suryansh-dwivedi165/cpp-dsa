#include<iostream>
using namespace std;
int first_occurence(int arr[], int n, int target) {
    if(arr[n - 1] == target) 
        return n;
    first_occurence(arr, n - 1, target);
    if(n == 0) 
        return -1;
}
int main() {
    int arr[] = {1, 2, 31, 4, 5};

    cout << first_occurence(arr, 5, 3);
    return 0;
} 