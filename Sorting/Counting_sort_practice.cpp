#include<iostream>
using namespace std;
void counting_sort(int arr[], int freq_arr[7], int size) {
    for(int i = 0;i < size;i++) {
        freq_arr[arr[i]]++;
    }

    int crr[8] = {0};
    int k = 0;
    for(int i = 0;i < size;i++) {
        if(freq_arr[i] > 0) {
            for(int j = freq_arr[i];j > 0;j--) {
                crr[k++] = i;
            }
        }
    }

    for(int i = 0;i < sizeof(crr)/sizeof(int);i++) {
        cout << crr[i] << " ";
    }
}  
int main() {
    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int freq_arr[7] = {0};

    counting_sort(arr, freq_arr, 8);
    return 0;
} 
