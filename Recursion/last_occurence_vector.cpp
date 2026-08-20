#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int last_occurence(vector<int>v1, int i, int target) {
    if(i == v1.size())  
        return -1;
    int idx = last_occurence(v1, i + 1, target);

    if(idx == -1 && v1[i] == target) {
        return i;
    }
    return idx;
}
int main() {
    vector<int>v1 = {1, 2, 3, 3, 3, 4};
    int ans = last_occurence(v1, 0, 3);
    cout << "Last idx is: " << ans;
    return 0;
} 