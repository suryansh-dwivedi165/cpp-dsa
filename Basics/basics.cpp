#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
void kadaneAlgo(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0;i < n;i++) {
        currSum += arr[i];
        maxSum = (maxSum, currSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    
    cout << currSum << " ";
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};

    kadaneAlgo(arr, 5);
    return 0;
}
