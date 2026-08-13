#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = 5;
    int mid = (start + end) / 2;
    int target = 4;

    while(start <= end) {
        mid = (start + end) / 2;
        if(arr[mid] == target) {
            cout << "Element found at idx: " << mid + 1;
            break;
        }
        else if(arr[mid] < target) 
            start = mid + 1;
        else 
            end = mid - 1;
    }
    return 0;
} 