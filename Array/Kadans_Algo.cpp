#include<iostream>
using namespace std;
int main() {
    int arr[] = {1, -2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int sum = 0;

    for(int i = 0;i < 5;i++) {
        sum += arr[i];

        if(sum < 0)
            sum = 0;
    }
    cout << "Sum is: " << sum;
    return 0;
}  