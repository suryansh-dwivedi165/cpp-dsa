#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int maxsum = INT_MIN;
    
    for(int i = 0;i < 6;i++) {
        int sum = 0;
        for(int j = i;j < 6;j++) {
            sum += arr[j];
            maxsum = max(maxsum, sum);
        }
    }

    cout << maxsum;
    return 0;
} 
