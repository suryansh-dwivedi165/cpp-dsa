#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {7, 1, 5, 3, 6, 4};
    int buy_price[5];
    buy_price[0] = INT_MAX;
    int min_value = INT_MAX;

    for(int i = 1;i < 5;i++) {
        for(int j = i - 1;j >= 0;j--) {
            min_value = min(min_value, arr[j]);
        }
        buy_price[i] = min_value;
    }

    int result[5];  
    for(int i = 0;i < 5;i++) 
        result[i] = buy_price[i] - arr[i];

    for(int i = 0;i < 5;i++) 
        cout << result[i] << " "; 
    return 0;
} 