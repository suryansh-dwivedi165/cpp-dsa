#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int maxsum = INT_MIN, max_sum;
    
    for(int start = 0;start < 6;start++) {
       for(int end = start;end < 6;end++) {
            int sum = 0;
            for(int i = start;i <= end;i++) {
                sum += arr[i];
                maxsum = max(maxsum, sum);
            }
        }
    }
    cout << maxsum << " ";
    return 0;
} 