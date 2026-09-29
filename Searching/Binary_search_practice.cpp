#include<iostream>
using namespace std;
void binary_search(int arr[], int target, int ei) {
    int si = 0;
    int mid = (si + ei) / 2;

    while(si <= ei) {
        mid = (si + ei) / 2;
        if(arr[mid] == target) {
            cout << "Element found at idx: " << mid + 1;
            break;
        }
        else if(arr[mid] < target) {
            si = mid + 1;
        }
        else {
            ei = mid - 1;
        }
    }
    cout << "Element not found";
} 
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 50;

    binary_search(arr, target, 5);
    return 0;
}  