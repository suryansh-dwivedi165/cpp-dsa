#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        for(int j = i;j < n;j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
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