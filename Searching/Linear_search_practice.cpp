#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 4;

    for(int i = 0;i < 5;i++) {
        if(arr[i] == target) {
            cout << "idx is: " << i + 1 << "\n";
            break;
        }
    }
    return 0;
} 