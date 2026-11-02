#include<iostream>
using namespace std;
int main() {
    int arr[] = {2, 7, 11, 15};

    int start = 0;
    int end = 3;
    int target = 9;

    while(start <= end) {
        int currSum = arr[start] + arr[end];
        if(currSum == target) {
            cout << start << ", " << end;
            break;
        }
        else if(currSum < target) {
            start++;
        }
        else {
            end--;
        }
    }
    return 0;
}
