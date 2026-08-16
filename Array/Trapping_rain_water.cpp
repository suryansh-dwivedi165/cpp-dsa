#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int max_value = INT_MIN;
    int first_el = 0;
    int idx = 0;

    for(int i = 0;i < 7;i++) {
        first_el = arr[0];
        if(first_el < arr[i]){
            max_value = max(max_value, arr[i]);
            idx = i;
            break;
        }
    }

    int min_value = min(first_el, max_value);
    int sum = 0;
    for(int i = 1;i < idx;i++) {
        sum += min_value - arr[i];
    }

    cout << "Sum is: " << sum;
    return 0;
}    