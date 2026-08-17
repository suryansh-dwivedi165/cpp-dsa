#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>arr = {4, 2, 0, 6, 3, 2, 5};
    vector<int>left_Max(arr.size());
    vector<int>right_Max(arr.size());
    int min_value; 
    int idx = right_Max.size();

    left_Max[0] = arr[0];
    right_Max[right_Max.size() - 1] = arr[arr.size() - 1];

    for(int i = 1;i < arr.size();i++) {
        right_Max[idx - i - 1] = max(right_Max[idx - i], arr[idx - i]);
        left_Max[i] = max(left_Max[i - 1], arr[i - 1]);
    }
    
    int sum = 0, diff;
    for(int i = 0;i < arr.size();i++) {
        min_value = min(left_Max[i], right_Max[i]);
        diff = min_value - arr[i];
        if(diff > 0)
            sum += diff;
        
    }
    cout << "sum is: " << sum;
    return 0;
} 