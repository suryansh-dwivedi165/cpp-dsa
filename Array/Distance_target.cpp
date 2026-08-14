#include<bits/stdc++.h>
using namespace std;
int getMinDistance(vector<int>& nums, int target, int start) {
    int idx;
    for(int i = 1;i < nums.size();i++) {
        if(nums[i] == target) {
            idx = i;
            break;
        }
    }
    return abs(idx - start);
} 

int main() {
    vector<int>prices = {5, 7, 7, 5};

    int result = getMinDistance(prices, 5, 2);
    cout << "Result is: " << result << "\n";
    return 0; 
} 