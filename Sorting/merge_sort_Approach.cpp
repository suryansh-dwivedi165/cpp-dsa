#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei) {
    vector<int>temp;
    int i = si;
    int j = mid + 1;

    while(i <= mid && j <= ei) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i++]);
    }

    while(j <= ei) {
        temp.push_back(arr[j++]);
    }

    for(int idx = si, x = 0;idx <= ei;idx++) {
        arr[idx] = temp[x++];
    }
} 
void merge_Sort(int arr[], int si, int ei) {
    if(si >= ei) {
        return; 
    }

    int mid = si + (ei - si) / 2;

    merge_Sort(arr, si, mid); // left half
    merge_Sort(arr, mid + 1, ei); // right half 

    merge(arr, si, mid, ei);
}

void printArr(int arr[], int n) {
    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
} 
int main() {
    int arr[] = {6, 3, 5, 5, 2, 3};
    merge_Sort(arr, 0, 5);

    printArr(arr, 6);
    return 0;
} 
