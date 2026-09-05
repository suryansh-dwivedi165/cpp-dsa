#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {6, 3, 7, 5, 2, 4};

    sort(arr, arr + 6);
    
    for(int i = 0;i < 6;i++) {
        cout << arr[i] << " ";
    }
    return 0;
} 