#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>> v1 = {{}, {}};

    cout << "Enter the number: "; 

    for(int i = 0;i < 2;i++) {
        for(int j = 0;j < 2;j++) {
            cin >> v1[i][j];
        }
    }

    for(int i = 0;i < 2;i++) {
        for(int j = 0;j < 2;j++) {
            cout << v1[i][j] << " ";
        }
    }
    return 0;
} 
