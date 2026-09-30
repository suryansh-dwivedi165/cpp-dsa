#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {5, 4, 3, 2, 1};

    sort(arr, arr+3, greater<int>());

    for(int i = 0;i < 5;i++) {
        cout << arr[i] << " ";
    }
    return 0;
} 