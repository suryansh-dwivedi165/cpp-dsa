#include<iostream>
using namespace std;
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int sum = 0;

    for(int i = 0;i < 6;i++) {
        sum += arr[i]; 

        if(sum < 0) {
            sum = 0; 
        }
    }
    cout << sum << " "; 
    return 0;
} 
