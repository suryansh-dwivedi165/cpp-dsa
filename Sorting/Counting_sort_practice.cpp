#include<iostream>
using namespace std;
void counting_sort(int arr[], int freq_arr[7], int size) {
    for(int i = 0;i < size;i++) {
        freq_arr[arr[i]]++;
    }

    for(int i = 0;i < size;i++) {
        cout << freq_arr[i] << " ";
    }
} 
int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int freq_arr[7] = {0};

    counting_sort(arr, freq_arr, 8);
    return 0;
} 
