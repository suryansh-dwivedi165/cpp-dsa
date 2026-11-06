#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n) {
    for(int i = 0;i < n - 1;i++) {
        for(int j = i + 1;j < n - i + 1;j++) {
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }

    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
} 
int main() {
    int arr[] = {6, 5, 3, 2, 8};
    int n = 5;

    bubble_sort(arr, n);
    return 0;
}
