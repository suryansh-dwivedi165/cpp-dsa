#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    for(int i = 0;i < n;i++) {
        int sub_min = INT_MAX;
        int idx = 0;

        for(int j = i;j < n;j++) {
            sub_min = min(sub_min, arr[j]);
        }

        for(int i = 0;i < n;i++) {
            if(arr[i] == sub_min) 
                idx = i;
        }
        swap(arr[i], arr[idx]);
    }

    for(int i = 0;i < n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}   