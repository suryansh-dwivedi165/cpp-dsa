#include<iostream>
using namespace std;
class Solution {
public:
    void pattern18(int n) {
         for(int i = 0;i < n;i++) {
            int res = n + 'A' - i - 1;
            cout << res << " ";
            for(int j = 0;j <= i;j++) {
                cout << char(res++);
            }
            cout << "\n";
        }
    }
}; 
int main() {
    Solution p1;
    p1.pattern18(4);
    return 0;
} 