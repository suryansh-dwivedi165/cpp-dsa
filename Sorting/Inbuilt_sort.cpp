#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr+n); 
    for(int i = 0;i < n;i++)    
        cout << arr[i] << " ";
    return 0;
} 