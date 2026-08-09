#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    int max_sum = INT_MIN;

    for(int start = 0;start < n;start++) {
        int curr_sum = 0;
        for(int end = start;end < n;end++) {
            curr_sum += arr[end];
            max_sum = max(max_sum, curr_sum);
        }
    } 
    cout << "Max sum is: " << max_sum << "\n"; 
    return 0;
} 
