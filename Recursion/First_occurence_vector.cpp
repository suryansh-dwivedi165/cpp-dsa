#include<iostream>
#include<vector>
using namespace std;
int first_occurence(vector<int>v1, int i, int target) {
    if(i == v1.size()) {
        return -1;
    }
    if(v1[i] == target) {
        return i;
    }

    return first_occurence(v1, i + 1, target);
} 
int main() {
    vector<int>arr = {1, 2, 3, 3, 3, 4};
    int idx = first_occurence(arr, 0, 3);
    cout << "First occurence is: " << idx;
    return 0;
}    