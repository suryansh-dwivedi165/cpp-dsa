#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int last_occurence(vector<int>arr, int target) {
    if(arr[arr.size() - 1] == target) 
        return arr.size();
    last_occurence(arr, target);
    if(arr.size() == 0) 
        return -1;
}
int main() {
    vector<int>arr = {1, 2, 3, 4, 5};

    int ans = last_occurence(arr, 3);
    cout << "Last occurence idx: " << ans;
    return 0;
}  