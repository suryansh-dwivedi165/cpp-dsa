#include<iostream>
using namespace std;
void partition(int arr[], int si, int ei) {
    int i = si - 1;
    int pivot = arr[ei];

    for(int j = si;j < ei;j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
}
void quick_sort(int arr[], int si, int ei ) {
    if(si >= ei) {
        return;
    }

    int pivotIdx = partition(arr, si, ei);

    quick_sort(arr, si, pivotIdx - 1);
    quick_sort(arr, pivotIdx + 1, ei);
}
int main() {
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    quick_sort(arr, 0, n - 1);
    return 0;
} 
