#include<iostream>
using namespace std;

// Bubble sort
void bubble_sort(int arr[], int n) {
    for(int i = 0;i < n - 1;i++) {
        for(int j = 0;j < n - i - 1;j++) {
            if(arr[j] < arr[j + 1]) {
                swap(arr[j + 1], arr[j]);
            }
        }
    }
}   
int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = 5;

    bubble_sort(arr, n);
    for(int i = 0;i < 5;i++) {
        cout << arr[i] << " ";
    }
    return 0;
} 