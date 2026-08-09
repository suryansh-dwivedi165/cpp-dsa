#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int max_sum = INT_MIN;
    
    for(int i = 0;i < n;i++) {
        for(int j = i;j < n;j++) {
            int sum = 0;
            for(int k = i;k <= j;k++) {
                sum += arr[k];
            }
            max_sum = max(max_sum, sum);
        }
    }
    cout << "Max sum is: " << max_sum;
    return 0;
}   