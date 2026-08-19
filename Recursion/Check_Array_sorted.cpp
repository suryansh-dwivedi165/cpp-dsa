#include<iostream>
using namespace std;
int array_Sorted(int arr[], int n) {
    if(n == 0) 
        return 1;

    if(arr[n] > arr[n - 1]) 
        return array_Sorted(arr, n - 1);
    else 
        return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int res = array_Sorted(arr, 5);
    if(res > 0) 
        cout << "Array is sorted ";
    else 
        cout << "Array is not sorted ";
    return 0;
} 