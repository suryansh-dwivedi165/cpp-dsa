#include<iostream>
#include<climits>
using namespace std;
int main() {
    vector<int>v1 = {1, 2, 3, 4, 5};
    int max = INT_MIN;

    for(int i = 0;i < 5;i++) {
        if(max < v1[i])
            max = v1[i];
    }

    cout << "Maximum element is: " << max;
    return 0;
}  