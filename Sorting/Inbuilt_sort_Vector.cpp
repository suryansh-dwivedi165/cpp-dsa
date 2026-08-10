#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v1 = {5, 4, 1, 3, 2};

    sort(v1.begin(), v1.end());
    for(int i = 0;i < v1.size();i++) {
        cout << v1[i] << " ";
    }
    return 0;
}  