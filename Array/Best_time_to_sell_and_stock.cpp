#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_value = INT_MIN;
        vector<int> result(prices.size());
        vector<int>sell(prices.size());

        sell[0] = INT_MAX;
        result[0] = 0;

        for(int i = 1;i < prices.size();i++) {
            int min_value = INT_MAX;
            for(int j = i - 1;j >= 0;j--) {
                min_value = min(min_value, prices[j]);
            }
            sell[i] = min_value;
        } 

        for(int i = 0;i < prices.size();i++) {
            result[i] = prices[i] - sell[i];
        }
        
        for(int i = 0;i < prices.size();i++) {
            max_value = max(max_value, result[i]);
        }

        if(max_value > 0)
            return max_value;
        else 
            return 0;
    }
};  
int main() {
    Solution p1;
    vector<int>prices = {7,1,5,3,6,4};
    int result = p1.maxProfit(prices);
    cout << "Result: " << result;
    return 0;
} 